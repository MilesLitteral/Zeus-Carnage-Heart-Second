#include "tim.h"

#include <limits>
#include <stdexcept>

namespace {

class Reader {
public:
    Reader(const std::uint8_t* data, std::size_t size) : data_(data), size_(size) {}

    std::uint16_t read_u16()
    {
        require(2);
        const std::uint16_t value = static_cast<std::uint16_t>(data_[position_]) |
            static_cast<std::uint16_t>(data_[position_ + 1] << 8);
        position_ += 2;
        return value;
    }

    std::uint32_t read_u32()
    {
        require(4);
        const std::uint32_t value = static_cast<std::uint32_t>(data_[position_]) |
            (static_cast<std::uint32_t>(data_[position_ + 1]) << 8) |
            (static_cast<std::uint32_t>(data_[position_ + 2]) << 16) |
            (static_cast<std::uint32_t>(data_[position_ + 3]) << 24);
        position_ += 4;
        return value;
    }

    std::vector<std::uint8_t> read_block_payload(std::uint32_t block_size)
    {
        if (block_size < 12) throw std::runtime_error("TIM block shorter than header");
        const std::size_t payload_size = block_size - 12;
        require(payload_size);
        std::vector<std::uint8_t> result(data_ + position_, data_ + position_ + payload_size);
        position_ += payload_size;
        return result;
    }

private:
    void require(std::size_t count) const
    {
        if (position_ > size_ || count > size_ - position_) {
            throw std::runtime_error("Truncated TIM file");
        }
    }

    const std::uint8_t* data_;
    std::size_t size_;
    std::size_t position_ = 0;
};

std::uint8_t expand_5_to_8(std::uint16_t value)
{
    return static_cast<std::uint8_t>((value << 3) | (value >> 2));
}

std::uint16_t read_pixel_word(const std::vector<std::uint8_t>& data, std::size_t offset)
{
    return static_cast<std::uint16_t>(data[offset]) |
        static_cast<std::uint16_t>(data[offset + 1] << 8);
}

void write_psx_color(TimRgbaImage& output, std::size_t pixel_index, std::uint16_t color)
{
    const std::size_t offset = pixel_index * 4;
    output.pixels[offset] = expand_5_to_8(color & 0x1f);
    output.pixels[offset + 1] = expand_5_to_8((color >> 5) & 0x1f);
    output.pixels[offset + 2] = expand_5_to_8((color >> 10) & 0x1f);
    output.pixels[offset + 3] = color == 0 ? 0 : 255;
}

}

TimImage parse_tim(const std::uint8_t* data, std::size_t size)
{
    if (data == nullptr) throw std::invalid_argument("TIM data pointer is null");
    Reader reader(data, size);
    if (reader.read_u32() != 0x10) throw std::runtime_error("Invalid TIM magic");

    const std::uint32_t flags = reader.read_u32();
    const std::uint32_t mode = flags & 7;
    if (mode > static_cast<std::uint32_t>(TimPixelMode::Direct24)) {
        throw std::runtime_error("Unsupported TIM pixel mode");
    }

    TimImage image{};
    image.mode = static_cast<TimPixelMode>(mode);
    image.has_clut = (flags & 8) != 0;

    if (image.has_clut) {
        const std::uint32_t block_size = reader.read_u32();
        image.clut_x = reader.read_u16();
        image.clut_y = reader.read_u16();
        image.clut_width = reader.read_u16();
        image.clut_height = reader.read_u16();
        const auto bytes = reader.read_block_payload(block_size);
        if (bytes.size() % 2 != 0) throw std::runtime_error("Odd-sized TIM CLUT data");
        image.clut.reserve(bytes.size() / 2);
        for (std::size_t offset = 0; offset < bytes.size(); offset += 2) {
            image.clut.push_back(static_cast<std::uint16_t>(bytes[offset]) |
                static_cast<std::uint16_t>(bytes[offset + 1] << 8));
        }
    }

    const std::uint32_t image_block_size = reader.read_u32();
    image.image_x = reader.read_u16();
    image.image_y = reader.read_u16();
    image.image_word_width = reader.read_u16();
    image.image_height = reader.read_u16();
    image.image_data = reader.read_block_payload(image_block_size);

    const std::size_t expected_size = static_cast<std::size_t>(image.image_word_width) *
        image.image_height * 2;
    if (image.mode != TimPixelMode::Direct24 && image.image_data.size() != expected_size) {
        throw std::runtime_error("TIM image block size does not match its dimensions");
    }
    if (image.mode == TimPixelMode::Direct24 && image.image_data.size() != expected_size) {
        throw std::runtime_error("TIM 24-bit block size does not match its dimensions");
    }
    return image;
}

TimRgbaImage decode_tim_rgba(const TimImage& image, std::uint16_t clut_row)
{
    TimRgbaImage output{};
    const std::uint32_t words_per_row = image.image_word_width;
    switch (image.mode) {
    case TimPixelMode::Indexed4:
        output.width = static_cast<std::uint16_t>(words_per_row * 4);
        break;
    case TimPixelMode::Indexed8:
        output.width = static_cast<std::uint16_t>(words_per_row * 2);
        break;
    case TimPixelMode::Direct15:
        output.width = image.image_word_width;
        break;
    case TimPixelMode::Direct24:
        output.width = static_cast<std::uint16_t>((words_per_row * 2) / 3);
        break;
    }

    output.height = image.image_height;
    const std::size_t pixel_count = static_cast<std::size_t>(output.width) * output.height;
    if (pixel_count > std::numeric_limits<std::size_t>::max() / 4) {
        throw std::runtime_error("TIM dimensions overflow");
    }
    output.pixels.resize(pixel_count * 4);

    if (image.mode == TimPixelMode::Direct15) {
        for (std::size_t index = 0; index < pixel_count; ++index) {
            write_psx_color(output, index, read_pixel_word(image.image_data, index * 2));
        }
        return output;
    }

    if (image.mode == TimPixelMode::Direct24) {
        const std::size_t source_row_bytes = static_cast<std::size_t>(words_per_row) * 2;
        for (std::size_t y = 0; y < output.height; ++y) {
            const std::size_t row_offset = y * source_row_bytes;
            for (std::size_t x = 0; x < output.width; ++x) {
                const std::size_t source = row_offset + x * 3;
                const std::size_t destination = (y * output.width + x) * 4;
                output.pixels[destination] = image.image_data[source];
                output.pixels[destination + 1] = image.image_data[source + 1];
                output.pixels[destination + 2] = image.image_data[source + 2];
                output.pixels[destination + 3] = 255;
            }
        }
        return output;
    }

    const std::size_t colors_per_palette = image.mode == TimPixelMode::Indexed4 ? 16 : 256;
    const std::size_t palette_offset = static_cast<std::size_t>(clut_row) * image.clut_width;
    if (!image.has_clut || palette_offset + colors_per_palette > image.clut.size()) {
        throw std::runtime_error("TIM palette is missing or too small");
    }

    for (std::size_t index = 0; index < pixel_count; ++index) {
        const std::uint8_t packed = image.image_data[
            image.mode == TimPixelMode::Indexed4 ? index / 2 : index];
        const std::size_t color_index = image.mode == TimPixelMode::Indexed4
            ? ((index & 1) ? packed >> 4 : packed & 0x0f)
            : packed;
        write_psx_color(output, index, image.clut[palette_offset + color_index]);
    }
    return output;
}
