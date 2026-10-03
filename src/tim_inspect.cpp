#include "tim.h"

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cerr << "Usage: tim_inspect <file.tim> [file.tim ...]\n";
        return 2;
    }

    int failures = 0;
    for (int index = 1; index < argc; ++index) {
        const std::string path = argv[index];
        std::ifstream input(path, std::ios::binary);
        if (!input) {
            std::cerr << path << ": cannot open\n";
            ++failures;
            continue;
        }

        const std::vector<std::uint8_t> bytes((std::istreambuf_iterator<char>(input)), {});
        try {
            const TimImage image = parse_tim(bytes.data(), bytes.size());
            const TimRgbaImage decoded = decode_tim_rgba(image);
            std::cout << path << ": mode=" << static_cast<unsigned>(image.mode)
                      << " size=" << decoded.width << 'x' << decoded.height
                      << " clut=" << image.has_clut << '\n';
        } catch (const std::exception& error) {
            std::cerr << path << ": " << error.what() << '\n';
            ++failures;
        }
    }
    return failures == 0 ? 0 : 1;
}
