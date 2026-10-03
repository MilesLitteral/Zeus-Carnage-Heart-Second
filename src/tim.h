#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

enum class TimPixelMode : std::uint8_t {
    Indexed4 = 0,
    Indexed8 = 1,
    Direct15 = 2,
    Direct24 = 3
};

struct TimImage {
    TimPixelMode mode;
    bool has_clut;
    std::uint16_t clut_x;
    std::uint16_t clut_y;
    std::uint16_t clut_width;
    std::uint16_t clut_height;
    std::vector<std::uint16_t> clut;
    std::uint16_t image_x;
    std::uint16_t image_y;
    std::uint16_t image_word_width;
    std::uint16_t image_height;
    std::vector<std::uint8_t> image_data;
};

struct TimRgbaImage {
    std::uint16_t width;
    std::uint16_t height;
    std::vector<std::uint8_t> pixels;
};

TimImage parse_tim(const std::uint8_t* data, std::size_t size);
TimRgbaImage decode_tim_rgba(const TimImage& image, std::uint16_t clut_row = 0);
