// Input handling functions for ZEUS Carnage Heart Second
// Decompiled from original binary

#include "zeus.h"

// Initialize input system
void FUN_00420b20(void)

{
  int iVar1;

  iVar1 = FUN_004436b0();
  if (iVar1 != 0) {
    FUN_004436c0(0);
  }
  if (DAT_004bc460 == 0) {
    DAT_004deaf8 = 0;
    DAT_004deaf0 = FUN_00446e90(&DAT_004deaf4);
    if (DAT_004bc45c != 0) {
      DAT_004deaf0 = DAT_004deaf4;
    }
    DAT_004bc45c = 0;
    DAT_004bc460 = 1;
  }
  return;
}

// Stub function
void FUN_00420b80(void)
{
  return;
}

// Check if a key is pressed (returns 1 if pressed and not previously pressed)
undefined4 __cdecl check_key_press(uint param_1)
{
  DAT_004bc460 = 0;
  if (((param_1 & DAT_004deaf0) != 0) && ((param_1 & DAT_004deaf8) == 0)) {
    return 1;
  }
  return 0;
}

// Get current key state
uint __cdecl FUN_00420bc0(uint param_1)
{
  DAT_004bc460 = 0;
  return param_1 & DAT_004deaf4;
}

// Reset input state
void FUN_00420be0(void)
{
  DAT_004bc460 = 0;
  DAT_004deaf8 = 0;
  DAT_004deaf0 = 0;
  FUN_00446eb0();
  return;
}

// Check if no keys are pressed
bool FUN_00420c00(void)
{
  DAT_004bc460 = 0;
  return DAT_004deaf0 == 0;
}

// Stub function
void FUN_00420c20(void)
{
  return;
}

// Process input (main input processing function)
void process_input(void)
{
  FUN_00420c20();
  return;
}