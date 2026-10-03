#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int zeus_crt_carry_u32(uint32_t left, uint32_t right);
int zeus_crt_signed_add_overflow_i16(int16_t left, int16_t right);
int zeus_crt_signed_sub_overflow_i32(int32_t left, int32_t right);
int64_t zeus_crt_atan2_units(int32_t y, int32_t x);
uint32_t zeus_crt_aullrem(uint32_t low, uint32_t high, uint32_t divisor_low, uint32_t divisor_high);
uint64_t zeus_crt_aulldiv(uint32_t low, uint32_t high, uint32_t divisor_low, uint32_t divisor_high);
void zeus_crt_shift(char *text, uint32_t count);
int zeus_crt_new_handler(size_t size);
int zeus_crt_pentium_fdiv_test(void);
void zeus_crt_initterm(uint32_t *begin, uint32_t *end);
void zeus_crt_amsg_exit(int error_code);
int zeus_crt_isctype(unsigned int character, int mask);
int zeus_crt_wctomb(char *destination, uint16_t character);
void zeus_crt_lock_enter(int lock_id);
void zeus_crt_write_char(int character, FILE *stream, int *written);
void zeus_crt_write_multi_char(int character, uint32_t count, FILE *stream, int *written);
void zeus_crt_write_string(const char *text, int count, FILE *stream, int *written);

#ifdef __cplusplus
}
#endif

#define CARRY4(left, right) zeus_crt_carry_u32((uint32_t)(left), (uint32_t)(right))
#define SCARRY2(left, right) zeus_crt_signed_add_overflow_i16((int16_t)(left), (int16_t)(right))
#define SBORROW4(left, right) zeus_crt_signed_sub_overflow_i32((int32_t)(left), (int32_t)(right))
#define builtin_strncpy strncpy
#define FID_conflict__wprintf printf
#define FID_conflict__tolower tolower
#define __aullrem zeus_crt_aullrem
#define __aulldiv zeus_crt_aulldiv
#define __shift zeus_crt_shift
#define __callnewh zeus_crt_new_handler
#define __ms_p5_test_fdiv zeus_crt_pentium_fdiv_test
#define __initterm zeus_crt_initterm
#define __amsg_exit zeus_crt_amsg_exit
#define __isctype zeus_crt_isctype
#define __wctomb_lk zeus_crt_wctomb
#define __lock zeus_crt_lock_enter
#define write_char zeus_crt_write_char
#define write_multi_char zeus_crt_write_multi_char
#define write_string zeus_crt_write_string
