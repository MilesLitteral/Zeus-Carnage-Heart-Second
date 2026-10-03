// input.c
#include <stdint.h>
#include <stdbool.h>

uint32_t gInputCurrent;
uint32_t gInputPressed;
uint32_t gInputPrevious;
uint32_t gInputUpdated;
uint32_t gInputOverride;

#ifndef USE_SDL
#include "zeus.h"

int InputSystemActive(void)
{
    return 0;
}

void ResetInputHardware(int port)
{
    (void)port;
}

uint32_t ReadController(uint32_t* state)
{
    if (state) *state = 0;
    return 0;
}

void StopController(void)
{
}

uint32_t __cdecl check_key_press(uint32_t mask)
{
    static const struct {
        uint32_t mask;
        int key;
    } keys[] = {
        { 0x1000, VK_UP }, { 0x2000, VK_RIGHT },
        { 0x4000, VK_DOWN }, { 0x8000, VK_LEFT },
        { 0x0020, VK_RETURN }, { 0x0020, VK_SPACE }, { 0x0020, 'Z' },
        { 0x0040, VK_ESCAPE }, { 0x0040, 'X' }
    };
    for (size_t index = 0; index < sizeof(keys) / sizeof(keys[0]); ++index) {
        if ((mask & keys[index].mask) != 0 && (GetAsyncKeyState(keys[index].key) & 0x8000) != 0) {
            return 1;
        }
    }
    return 0;
}
#endif

/* globals */

/* external engine functions */
extern int InputSystemActive(void);
extern void ResetInputHardware(int);
extern uint32_t ReadController(uint32_t* state);
extern void StopController(void);

/* initialize input system */

void Input_Init(void)
{
    if (InputSystemActive())
        ResetInputHardware(0);

    if (!gInputUpdated)
    {
        gInputPrevious = 0;

        gInputPressed = ReadController(&gInputCurrent);

        if (gInputOverride)
            gInputPressed = gInputCurrent;

        gInputOverride = 0;
        gInputUpdated = 1;
    }
}

/* check if button pressed this frame */

bool Input_Pressed(uint32_t mask)
{
    gInputUpdated = 0;

    if ((mask & gInputPressed) && !(mask & gInputPrevious))
        return true;

    return false;
}

/* check if button held */

uint32_t Input_Held(uint32_t mask)
{
    gInputUpdated = 0;
    return mask & gInputCurrent;
}

/* reset input state */

void Input_Reset(void)
{
    gInputUpdated = 0;
    gInputPrevious = 0;
    gInputPressed = 0;

    StopController();
}

/* check if no buttons pressed */

bool Input_None(void)
{
    gInputUpdated = 0;
    return gInputPressed == 0;
}

/* per-frame input update */

void Input_Update(void)
{
    /* currently empty in binary */
    return;
}
