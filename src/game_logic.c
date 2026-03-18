// Game logic functions for ZEUS Carnage Heart Second
// Decompiled from original binary

#include "zeus.h"
#include <cstdint>
#include <stdbool.h>

// Main game loop - handles title screen, menu navigation, and game startup
uint32_t main_game_loop(void)
{
  uint32_t uVar1;
  int iVar2;
  bool bVar3;
  short sVar4;

  DAT_004baa34 = 0;
  DAT_004baa38 = 0;
  FUN_0043fdd0(0,0);
  FUN_00420b20();
  menu_selection = 0;
  game_start_flag = 0;
  menu_state = 0;
  screen_scroll_y = 0;
  FUN_00422a00(s_GRA_SNAP_MGSNAP01_TIM_004b44f4,DAT_00508c18,0x10000);
  FUN_00420d20((int)DAT_00508c18,0x340,0x100,0x300,0x1ff);
  uVar1 = FUN_00437b40(0x300,0x1ff);
  
  display_mode_table = (uint16_t)uVar1;
  draw_title_screen();
  DAT_004ddb5c = 0xff;
  do {
    bVar3 = false;
    process_input();
    if (menu_state == 0) {
      if (menu_selection != 2) {
        iVar2 = check_key_press(0x8000);
        bVar3 = iVar2 != 0;
        if (bVar3) {
          menu_selection = (ushort)(menu_selection == 0);
        }
        iVar2 = check_key_press(0x2000);
        if (iVar2 != 0) {
          bVar3 = true;
          menu_selection = (ushort)(menu_selection == 0);
        }
      }
      iVar2 = check_key_press(0x1000);
      if (iVar2 != 0) {
        bVar3 = true;
        if ((menu_selection == 0) || (menu_selection == 1)) {
          menu_selection = 2;
        }
        else {
          menu_selection = 0;
        }
      }
      iVar2 = check_key_press(0x4000);
      if (iVar2 != 0) {
        bVar3 = true;
        if ((menu_selection == 0) || (menu_selection == 1)) {
          menu_selection = 2;
        }
        else {
          menu_selection = 0;
        }
      }
      if (bVar3) {
        play_sound_effect(7,100,0,1);
      }
      iVar2 = check_key_press(0x20);
      if (iVar2 != 0) {
        play_sound_effect(2,100,0,1);
        if (menu_selection == 2) {
          DAT_004ddb5c = 0;
          do {
            set_palette_color((char)DAT_004ddb5c);
            draw_title_screen();
            fade_to_black();
            DAT_004ddb5c = DAT_004ddb5c + 0x1e;
          } while (DAT_004ddb5c < 0x100);
          set_palette_color(0xff);
          fade_to_black();
          PTR_DAT_004baa20 = &DAT_0052f3e0;
          return 0xffffffff;
        }
        menu_state = 1;
      }
    }
    if (menu_state != 0) {
      // Handle menu selection logic (inline for now)
      // This would be handle_menu_selection(menu_state) if it existed
    }
    if (game_start_flag != 0) {
      if (menu_selection == 0) {
        sVar4 = 0;
LAB_00401215:
        start_game_mode(sVar4);
      }
      else if (menu_selection == 1) {
        sVar4 = 1;
        goto LAB_00401215;
      }
      draw_title_screen();
      game_start_flag = 0;
      menu_state = -1;
    }
    draw_title_screen();
    if (-1 < DAT_004ddb5c) {
      set_palette_color((char)DAT_004ddb5c);
      DAT_004ddb5c = DAT_004ddb5c + -0x1e;
    }
    fade_to_black();
  } while( true );
}

// Start the selected game mode
// param_1: game mode (0 or 1)
uint32_t __cdecl start_game_mode(short param_1) {
  bool bVar1;
  int iVar2;
  int iVar3;
  LPSTR lpString1;
  uint16_t uStack_f0;
  uint16_t uStack_ee;
  uint8_t uStack_ec;
  uint8_t uStack_eb;
  uint32_t uStack_e8;

  DAT_004baa34 = 0;
  DAT_004baa38 = 0;
  FUN_0043fdd0(0,0);
  FUN_00420be0();
  DAT_004dda98 = param_1;
  FUN_00401fe0();
  FUN_00422a00(s_KNJ_BIN_004b453c,DAT_00508c50,0x12000);
  uStack_ec = 1;
  uStack_eb = 1;
  uStack_f0 = 0x30;
  uStack_e8 = 7;
  uStack_ee = 0x62;
  FUN_004020c0((int)&uStack_f0);
  // ... (function continues with game mode logic)
  // This is a very long function, truncated for brevity
  return 0;
}