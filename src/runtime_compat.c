#include "zeus.h"
#include <stdint.h>
#include <windows.h>

int __cdecl getSystemCP(int code_page)
{
    if (code_page == -2) return (int)GetOEMCP();
    if (code_page == -3) return (int)GetACP();
    return code_page;
}

void __cdecl setSBCS(void)
{
}

uint32_t __cdecl _CPtoLCID(uint32_t code_page)
{
    switch (code_page) {
    case 932: return 0x411;
    case 936: return 0x804;
    case 949: return 0x412;
    case 950: return 0x404;
    default: return 0;
    }
}

int __cdecl ___crtMessageBoxA(LPCSTR text, LPCSTR caption, UINT type)
{
    return MessageBoxA(NULL, text, caption, type);
}

void __cdecl __local_unwind2(void *frame, void *target)
{
    (void)frame;
    (void)target;
}

int __cdecl __lock_fhandle(int file_handle)
{
    (void)file_handle;
    return 0;
}

void __cdecl __unlock_fhandle(int file_handle)
{
    (void)file_handle;
}

void __cdecl ___shl_12(uint32_t *value)
{
    uint32_t low = value[0];
    uint32_t middle = value[1];
    value[0] = low << 1;
    value[1] = (middle << 1) | (low >> 31);
    value[2] = (value[2] << 1) | (middle >> 31);
}

void __cdecl ___shr_12(uint32_t *value)
{
    uint32_t high = value[2];
    uint32_t middle = value[1];
    value[2] = high >> 1;
    value[1] = (middle >> 1) | (high << 31);
    value[0] = (value[0] >> 1) | (middle << 31);
}

void __cdecl ___add_12(uint32_t *left, const uint32_t *right)
{
    uint64_t sum = (uint64_t)left[0] + right[0];
    left[0] = (uint32_t)sum;
    sum = (uint64_t)left[1] + right[1] + (sum >> 32);
    left[1] = (uint32_t)sum;
    left[2] += right[2] + (uint32_t)(sum >> 32);
}

static long double __cdecl zeus_swi_fallback(void)
{
    return 0.0L;
}

code *__cdecl swi(int interrupt_number)
{
    static code fallback = zeus_swi_fallback;
    (void)interrupt_number;
    return &fallback;
}

uint32_t __cdecl __adj_fdiv_m64(uint32_t low, uint32_t high)
{
    (void)low;
    (void)high;
#if defined(_M_IX86)
    __asm { fdivp st(1), st(0) }
#endif
    return 0;
}

longlong __cdecl __ftol(void)
{
#if defined(_M_IX86)
    longlong result;
    __asm { fistp qword ptr [result] }
    return result;
#else
    return 0;
#endif
}
