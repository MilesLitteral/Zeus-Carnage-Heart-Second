#pragma once

#include <stdint.h>
#include <stddef.h>

// Ghidra-style placeholder types
typedef uint8_t  undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined3;
typedef uint32_t undefined4;
typedef uint64_t undefined5;
typedef uint64_t undefined8;

// Ghidra-style 3-byte integer placeholders (use 32-bit container)
typedef int32_t  int3;
typedef uint32_t uint3;

// Ghidra uses "code" as a function pointer target type (no prototype)
typedef void (*code)();

// Generic pointer-sized integer placeholder
typedef uintptr_t pointer;

// Concatenation helpers (Ghidra-style)
#define CONCAT11(a,b) ((uint16_t)(((uint16_t)(uint8_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT12(a,b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT13(a,b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(b) & 0xFFFFFFu)))

#define CONCAT21(a,b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT22(a,b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 16) | (uint16_t)(b)))
#define CONCAT23(a,b) ((uint64_t)(((uint64_t)(uint16_t)(a) << 24) | ((uint64_t)(b) & 0xFFFFFFu)))

#define CONCAT31(a,b) ((uint32_t)(((uint32_t)(a) << 8) | (uint8_t)(b)))
#define CONCAT32(a,b) ((uint64_t)(((uint64_t)(a) << 16) | (uint16_t)(b)))

#define CONCAT44(a,b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint32_t)(b)))

// 2+8 byte concat (80-bit in Ghidra). MSVC has no uint128, so keep low 64.
#define CONCAT28(a,b) ((uint64_t)(b))

// Ghidra sometimes emits leading-underscore aliases for globals.
#define _DAT_004fda40 DAT_004fda40
#define _DAT_004fda46 DAT_004fda46
#define _DAT_004fda48 DAT_004fda48
#define _DAT_004ddbe0 DAT_004ddbe0
#define _DAT_004ddbe4 DAT_004ddbe4
#define _DAT_004ddbe6 DAT_004ddbe6
#define _DAT_004ddbe8 DAT_004ddbe8
#define _DAT_004ddbea DAT_004ddbea
#define _DAT_0051f570 DAT_0051f570
#define _DAT_0051f572 DAT_0051f572
#define _DAT_0051f574 DAT_0051f574
#define _DAT_0051f576 DAT_0051f576
#define _DAT_0051f5e2 DAT_0051f5e2
#define _DAT_0051f5e4 DAT_0051f5e4
#define _DAT_0051f5e6 DAT_0051f5e6
#define _DAT_0051f5e8 DAT_0051f5e8
#define _DAT_004bc4d0 DAT_004bc4d0
#define PTR_s_MODEL_TOP_BASE01_TIM_004b4f68 PTR_s_MODEL
#define PTR_s_MOVIE_LOGO_AVI_004b9b28 PTR_s_MOVIE

// Byte helpers for decompiler-style field access
#define GET_U16_LO(x) ((uint8_t)((x) & 0xFFu))
#define GET_U16_HI(x) ((uint8_t)(((x) >> 8) & 0xFFu))
#define SET_U16_LO(x,v) ((x) = (uint16_t)(((x) & 0xFF00u) | ((uint8_t)(v))))
#define SET_U16_HI(x,v) ((x) = (uint16_t)((((uint8_t)(v)) << 8) | ((x) & 0x00FFu)))
#define GET_U32_HI3(x) ((uint32_t)(x) >> 8)
