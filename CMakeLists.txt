cmake_minimum_required(VERSION 3.20)
project(zeus_ch2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(USE_SDL "Use SDL2 + OpenGL backend" ON)
set(ZEUS_ASSETS_DIR "" CACHE PATH "Path to game assets directory (optional)")

# Sources
set(ZEUS_SOURCES
    src/zeus.c
    src/graphics.c
    src/input.c
    src/sound.c
    # src/stdlib.c   # decompiled CRT; disable for MSVC build
    # src/tim.c      # helper parser; not required for runtime
    src/asset_root.c
    src/launcher.cpp
)

if (USE_SDL)
    list(APPEND ZEUS_SOURCES src/sdl_backend.cpp)
endif()

add_executable(zeus_ch2 ${ZEUS_SOURCES})

target_include_directories(zeus_ch2 PRIVATE src)

if (USE_SDL)
    target_compile_definitions(zeus_ch2 PRIVATE USE_SDL=1)
    find_package(SDL2 REQUIRED)
    find_package(OpenGL REQUIRED)
    target_link_libraries(zeus_ch2 PRIVATE SDL2::SDL2 OpenGL::GL)
endif()

# Prefer system Windows types when building on Windows
if (WIN32)
    target_compile_definitions(zeus_ch2 PRIVATE ZEUS_USE_SYSTEM_TYPES=1)
endif()

if (ZEUS_ASSETS_DIR)
    file(TO_CMAKE_PATH "${ZEUS_ASSETS_DIR}" ZEUS_ASSETS_DIR_NORMALIZED)
    target_compile_definitions(zeus_ch2 PRIVATE ZEUS_ASSETS_DIR="${ZEUS_ASSETS_DIR_NORMALIZED}")
    message(STATUS "ZEUS assets dir: ${ZEUS_ASSETS_DIR_NORMALIZED}")
endif()

# Optional: DataCopy utility (cleaner source)
option(BUILD_DATACOPY "Build DataCopy utility" OFF)
if (BUILD_DATACOPY)
    add_executable(datacopy
        src/DataCopy/DataCopy.c
    )
    target_include_directories(datacopy PRIVATE src src/DataCopy)
    if (WIN32)
        target_compile_definitions(datacopy PRIVATE ZEUS_USE_SYSTEM_TYPES=1)
    endif()
endif()

