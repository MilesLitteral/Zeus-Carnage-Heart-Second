#include "crt_compat.h"
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <wchar.h>

int zeus_crt_carry_u32(uint32_t left, uint32_t right)
{
    return left > UINT32_MAX - right;
}

int zeus_crt_signed_add_overflow_i16(int16_t left, int16_t right)
{
    int32_t sum = (int32_t)left + (int32_t)right;
    return sum < INT16_MIN || sum > INT16_MAX;
}

int zeus_crt_signed_sub_overflow_i32(int32_t left, int32_t right)
{
    int64_t difference = (int64_t)left - (int64_t)right;
    return difference < INT32_MIN || difference > INT32_MAX;
}

int64_t zeus_crt_atan2_units(int32_t y, int32_t x)
{
    const long double units_per_radian = 4096.0L / 6.283185307179586476925286766559L;
    return (int64_t)truncl(atan2l((long double)y, (long double)x) * units_per_radian);
}

static uint64_t zeus_crt_join_u64(uint32_t low, uint32_t high)
{
    return ((uint64_t)high << 32) | low;
}

uint32_t zeus_crt_aullrem(uint32_t low, uint32_t high, uint32_t divisor_low, uint32_t divisor_high)
{
    uint64_t divisor = zeus_crt_join_u64(divisor_low, divisor_high);
    if (divisor == 0) {
        errno = EDOM;
        return 0;
    }
    return (uint32_t)(zeus_crt_join_u64(low, high) % divisor);
}

uint64_t zeus_crt_aulldiv(uint32_t low, uint32_t high, uint32_t divisor_low, uint32_t divisor_high)
{
    uint64_t divisor = zeus_crt_join_u64(divisor_low, divisor_high);
    if (divisor == 0) {
        errno = EDOM;
        return 0;
    }
    return zeus_crt_join_u64(low, high) / divisor;
}

void zeus_crt_shift(char *text, uint32_t count)
{
    size_t length = strlen(text);
    memmove(text + count, text, length + 1);
}

int zeus_crt_new_handler(size_t size)
{
    (void)size;
    return 0;
}

int zeus_crt_pentium_fdiv_test(void)
{
    return 0;
}

void zeus_crt_initterm(uint32_t *begin, uint32_t *end)
{
    typedef void (*initializer_fn)(void);
    for (uint32_t *entry = begin; entry < end; ++entry) {
        if (*entry != 0) {
            ((initializer_fn)(uintptr_t)*entry)();
        }
    }
}

void zeus_crt_amsg_exit(int error_code)
{
    (void)error_code;
    abort();
}

int zeus_crt_isctype(unsigned int character, int mask)
{
    unsigned char value = (unsigned char)character;
    if ((mask & 0x04) != 0 && isdigit(value)) return 1;
    if ((mask & 0x01) != 0 && isupper(value)) return 1;
    if ((mask & 0x02) != 0 && islower(value)) return 1;
    if ((mask & 0x08) != 0 && isspace(value)) return 1;
    if ((mask & 0x10) != 0 && ispunct(value)) return 1;
    if ((mask & 0x20) != 0 && iscntrl(value)) return 1;
    if ((mask & 0x40) != 0 && (value == ' ' || value == '\t')) return 1;
    if ((mask & 0x80) != 0 && isxdigit(value)) return 1;
    return 0;
}

int zeus_crt_wctomb(char *destination, uint16_t character)
{
    return wctomb(destination, (wchar_t)character);
}

void zeus_crt_write_char(int character, FILE *stream, int *written)
{
    if (*written < 0) return;
    if (fputc(character, stream) == EOF) {
        *written = -1;
    } else {
        ++*written;
    }
}

void zeus_crt_write_multi_char(int character, uint32_t count, FILE *stream, int *written)
{
    while (count-- != 0 && *written >= 0) {
        zeus_crt_write_char(character, stream, written);
    }
}

void zeus_crt_write_string(const char *text, int count, FILE *stream, int *written)
{
    if (count < 0) {
        while (*text != '\0' && *written >= 0) {
            zeus_crt_write_char((unsigned char)*text++, stream, written);
        }
        return;
    }
    while (count-- > 0 && *written >= 0) {
        zeus_crt_write_char((unsigned char)*text++, stream, written);
    }
}
