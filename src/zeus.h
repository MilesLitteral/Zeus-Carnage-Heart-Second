// Common header file for ZEUS Carnage Heart Second
// Contains type definitions and extern declarations

#include <windows.h>

// Basic type definitions from decompiled code
// Note: undefined1-8 are decompiler placeholders for unknown types
typedef unsigned char   undefined;
typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;  // 1-byte unknown type
typedef unsigned short    undefined2;  // 2-byte unknown type
typedef unsigned int    undefined4;    // 4-byte unknown type
typedef unsigned long long    undefined5;  // 5-byte unknown type (unusual)
typedef unsigned long long    undefined8;  // 8-byte unknown type
typedef unsigned short    ushort;
typedef unsigned short    word;

// Windows API type aliases
typedef struct _cpinfo _cpinfo, *P_cpinfo;
typedef uint UINT;
typedef uchar BYTE;
typedef struct _cpinfo *LPCPINFO;

// Global variable extern declarations
// Input system
extern undefined4 DAT_004bc460;
extern undefined4 DAT_004deaf8;
extern undefined4 DAT_004deaf0;
extern undefined4 DAT_004deaf4;
extern undefined4 DAT_004bc45c;

// Game state
extern undefined2 menu_selection;  // Current menu selection (0, 1, or 2)
extern undefined2 game_start_flag;  // Flag to start the game
extern undefined2 menu_state;  // Current menu screen/state
extern undefined2 screen_scroll_y;  // Screen scroll position

// Graphics
extern undefined4 DAT_004baa34;
extern undefined4 DAT_004baa38;
extern undefined4 DAT_00549dcc;
extern undefined4 DAT_0052f3e0;
extern undefined4 DAT_0052f440;
extern undefined4 DAT_004fda94;
extern undefined4 DAT_0051f5e2;
extern undefined4 DAT_0051f570;
extern undefined4 DAT_00508c18;
extern undefined4 DAT_004feeb0;
extern undefined4 DAT_004ddb28;
extern undefined4 DAT_004ddb38;
extern undefined4 DAT_004b450c;
extern undefined4 DAT_004ddb5c;
extern undefined4 PTR_DAT_004baa20;

// Sound system
extern undefined4 DAT_004bf320;
extern undefined4 DAT_004def0c;
extern undefined4 DAT_004def08;
extern undefined4 DAT_004bf324;
extern undefined4 DAT_004def10;
extern undefined4 DAT_004def14;
extern undefined4 DAT_004def18;
extern undefined4 DAT_004def20;

// Game data
extern undefined4 DAT_004dda98;
extern undefined4 DAT_00508c50;

// String constants
extern char s_GRA_SNAP_MGSNAP01_TIM_004b44f4[];
extern char s_KNJ_BIN_004b453c[];

// Function declarations
// Input functions
void FUN_00420b20(void);
void FUN_00420b80(void);
undefined4 __cdecl check_key_press(uint param_1);
uint __cdecl FUN_00420bc0(uint param_1);
void FUN_00420be0(void);
bool FUN_00420c00(void);
void FUN_00420c20(void);
void process_input(void);

// Graphics functions
void __cdecl set_palette_color(undefined1 param_1);
void fade_to_black(void);
void thunk_FUN_0041fb90(void);
void draw_title_screen(void);

// Sound functions
void __cdecl play_sound_effect(int param_1,int param_2,int param_3,int param_4);
void __cdecl update_sound_system(void);
undefined4 __cdecl is_sound_playing(int param_1);
undefined4 * find_free_sound_channel(void);
undefined4 * find_oldest_sound_channel(void);

// Game logic functions
undefined4 main_game_loop(void);
undefined4 __cdecl start_game_mode(short param_1);

// Utility functions (to be declared as needed)
undefined4 __cdecl FUN_00437b40(uint param_1,short param_2);
undefined4 __cdecl FUN_00437b60(uint param_1,ushort param_2,uint param_3,uint param_4);
void __cdecl FUN_00420c60(uint param_1,int param_2,short param_3,short param_4,short param_5,short param_6);
void __cdecl FUN_00420ca0(LPCSTR param_1);
int __cdecl FUN_00420ce0(int param_1);
int __cdecl FUN_00420d20(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5);
int __cdecl FUN_00420db0(int param_1,undefined2 param_2,undefined2 param_3);