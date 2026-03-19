#include <cstdint>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <iostream>

struct TimId {
    uint8_t id;
    uint8_t version;
    uint16_t reservedSpace;
};

enum PixelMode {
    CLUT4 = 0,
    CLUT8 = 1,
    Direct15 = 2,
    Direct24 = 3,
    Mixed = 4
};

struct TimFlags {
    PixelMode pmode;
    uint8_t cf;
    uint32_t reservedSpace;
};

struct Colour {
    uint8_t r, g, b;
    uint8_t stp;
};

struct TimClut {
    uint32_t bnum;
    uint16_t dx, dy, w, h;
    std::vector<Colour> clut;
};

typedef Colour PixelEntry; // For simplicity, 15/24-bit pixels will be stored as Colour

struct TimPixelData {
    uint32_t bnum;
    uint16_t dx, dy, w, h;
    std::vector<PixelEntry> data;
};

struct TimImage {
    TimId id;
    TimFlags flags;
    TimClut clut;             // Only if cf == 1
    TimPixelData pixels;
};

// ----------------------
// ByteReader helper
// ----------------------
class ByteReader {
    const uint8_t* buffer;
    size_t size;
    size_t pos;

public:
    ByteReader(const uint8_t* data, size_t sz) : buffer(data), size(sz), pos(0) {}

    size_t position() const { return pos; }

    uint8_t readByte() {
        if(pos + 1 > size) throw std::runtime_error("Out of bounds");
        return buffer[pos++];
    }

    uint16_t readHalf() {
        if(pos + 2 > size) throw std::runtime_error("Out of bounds");
        uint16_t val = buffer[pos] | (buffer[pos+1] << 8);
        pos += 2;
        return val;
    }

    uint32_t readWord() {
        if(pos + 4 > size) throw std::runtime_error("Out of bounds");
        uint32_t val = buffer[pos] | (buffer[pos+1] << 8) | (buffer[pos+2] << 16) | (buffer[pos+3] << 24);
        pos += 4;
        return val;
    }
};

// ----------------------
// Bit extraction
// ----------------------
inline uint32_t retrieveBits(uint32_t input, int index, int bits) {
    uint32_t mask = ((1 << bits) - 1) << index;
    return (input & mask) >> index;
}

// ----------------------
// Parsing functions
// ----------------------
TimId parseId(ByteReader& reader) {
    uint8_t id = reader.readByte();
    if(id != 0x10) throw std::runtime_error("Invalid TIM ID");

    uint8_t version = reader.readByte();
    uint16_t reserved = reader.readHalf();

    return { id, version, reserved };
}

TimFlags parseFlags(ByteReader& reader) {
    uint32_t data = reader.readWord();

    PixelMode pmode = static_cast<PixelMode>(retrieveBits(data, 0, 3));
    uint8_t cf = retrieveBits(data, 3, 1);
    uint32_t reserved = retrieveBits(data, 4, 28);

    return { pmode, cf, reserved };
}

TimClut parseClut(ByteReader& reader) {
    TimClut clut;
    clut.bnum = reader.readWord();
    clut.dx = reader.readHalf();
    clut.dy = reader.readHalf();
    clut.w = reader.readHalf();
    clut.h = reader.readHalf();

    size_t endPos = reader.position() + (clut.bnum - 12);

    while(reader.position() < endPos) {
        uint16_t data = reader.readHalf();
        Colour c;
        c.r = retrieveBits(data, 0, 5);
        c.g = retrieveBits(data, 5, 5);
        c.b = retrieveBits(data, 10, 5);
        c.stp = retrieveBits(data, 15, 1);
        clut.clut.push_back(c);
    }

    return clut;
}

TimPixelData parsePixelData(ByteReader& reader, PixelMode pmode) {
    TimPixelData pixels;
    pixels.bnum = reader.readWord();
    pixels.dx = reader.readHalf();
    pixels.dy = reader.readHalf();
    pixels.w = reader.readHalf();
    pixels.h = reader.readHalf();

    size_t endPos = reader.position() + (pixels.bnum - 12);

    while(reader.position() < endPos) {
        switch(pmode) {
            case CLUT4: {
                uint8_t val = reader.readByte();
                pixels.data.push_back({ retrieveBits(val, 0, 4), 0, 0, 0 });
                pixels.data.push_back({ retrieveBits(val, 4, 4), 0, 0, 0 });
                break;
            }
            case CLUT8: {
                uint16_t val = reader.readHalf();
                pixels.data.push_back({ retrieveBits(val, 0, 8), 0, 0, 0 });
                pixels.data.push_back({ retrieveBits(val, 8, 8), 0, 0, 0 });
                break;
            }
            case Direct15: {
                uint16_t val = reader.readHalf();
                pixels.data.push_back({
                    retrieveBits(val, 0, 5),
                    retrieveBits(val, 5, 5),
                    retrieveBits(val, 10, 5),
                    retrieveBits(val, 15, 1)
                });
                break;
            }
            case Direct24: {
                uint16_t x = reader.readHalf();
                uint16_t y = reader.readHalf();
                uint16_t z = reader.readHalf();
                pixels.data.push_back({ retrieveBits(x, 0, 8), retrieveBits(x, 8, 8), retrieveBits(y, 0, 8), 0 });
                pixels.data.push_back({ retrieveBits(y, 8, 8), retrieveBits(z, 0, 8), retrieveBits(z, 8, 8), 0 });
                break;
            }
            case Mixed:
                throw std::runtime_error("Mixed pixel mode not supported");
        }
    }

    return pixels;
}

// ----------------------
// Parse TIM image
// ----------------------
TimImage parseTim(const uint8_t* buffer, size_t size) {
    ByteReader reader(buffer, size);

    TimId id = parseId(reader);
    TimFlags flags = parseFlags(reader);

    TimImage image;
    image.id = id;
    image.flags = flags;

    if(flags.cf) {
        image.clut = parseClut(reader);
    }

    image.pixels = parsePixelData(reader, flags.pmode);
    return image;
}

// ----------------------
// Example usage
// ----------------------
/*int main() {
    std::ifstream file("example.tim", std::ios::binary);
    std::vector<uint8_t> buffer((std::istreambuf_iterator<char>(file)), {});
    try {
        TimImage img = parseTim(buffer.data(), buffer.size());
        std::cout << "Parsed TIM successfully!\n";
        std::cout << "Width: " << img.pixels.w << " Height: " << img.pixels.h << "\n";
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}*/
