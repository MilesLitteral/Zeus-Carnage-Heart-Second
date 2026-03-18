// Graphics handling functions for ZEUS Carnage Heart Second
// Decompiled from original binary

#include "zeus.h"
#include <cstdint>

// Set palette color intensity (0-255, where 255 is full brightness)
void __cdecl set_palette_color(undefined1 param_1)
{
  uint32_t local_10;
  short local_c;
  short local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;

  local_c = -(short)DAT_004baa34;
  local_10 = 0x60000000;
  local_2 = param_1;
  local_3 = param_1;
  local_4 = param_1;
  local_a = -(short)DAT_004baa38;
  local_8 = 0x200;
  local_6 = 0xf0;
  FUN_00439e60(&local_10,&DAT_0052f3e0 + DAT_00549dcc * 0x14,0);
  return;
}

// Fade screen to black
void fade_to_black(void)
{
  thunk_FUN_0041fb90();
  FUN_0041fb40();
  _rand();
  FUN_0041fce0();
  return;
}

// Graphics initialization thunk
void thunk_FUN_0041fb90(void)
{
  undefined *puVar1;

  puVar1 = DAT_004fda94;
  DAT_004fda94 = &DAT_0051f5e2;
  if (puVar1 != &DAT_0051f570) {
    DAT_004fda94 = &DAT_0051f570;
  }
  FUN_00420b20();
  FUN_00410440();
  FUN_00410400();
  FUN_00441cc0();
  FUN_00439ed0(0,0,0,(int)(&DAT_0052f440 + DAT_00549dcc * 0x14));
  return;
}

// Draw the title screen
void draw_title_screen(void)
{
  lstrcpyA(&DAT_004ddb28,(LPCSTR)(DAT_004feeb0 + 2));
  lstrcpyA(&DAT_004ddb38,(LPCSTR)(DAT_004feeb0 + 0xf));
  FUN_00421db0(0x300,0,0xf,1);
  FUN_00421e20(0,&DAT_004ddb28);
  FUN_00421e20(1,&DAT_004ddb38);
  FUN_00421e20(2,&DAT_004b450c);
  return;
}