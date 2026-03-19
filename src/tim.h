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
    size_t position();
    uint8_t readByte;
    uint16_t readHalf;
    uint32_t readWord;
    inline uint32_t retrieveBits(uint32_t input, int index, int bits);
    TimId parseId(ByteReader& reader);
    TimClut parseClut(ByteReader& reader);
    TimPixelData parsePixelData(ByteReader& reader, PixelMode pmode);
    TimImage parseTim(const uint8_t* buffer, size_t size);
}
