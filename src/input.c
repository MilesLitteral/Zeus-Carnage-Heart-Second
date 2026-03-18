// input.c
#include <stdint.h>
#include <stdbool.h>

/* globals */
uint32_t gInputCurrent;
uint32_t gInputPressed;
uint32_t gInputPrevious;

uint32_t gInputUpdated;
uint32_t gInputOverride;

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