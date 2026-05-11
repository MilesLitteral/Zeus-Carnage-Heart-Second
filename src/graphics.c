// Graphics handling functions for ZEUS Carnage Heart Second
// Decompiled from original binary

#include "zeus.h"
#include <stdint.h>

uint __cdecl calculate_display_mode(uint param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = param_1 >> 4 & 0xffff003f;
  return CONCAT22((short)(uVar1 >> 0x10),(ushort)uVar1 | param_2 << 6);
}



uint __cdecl build_sprite_attributes(uint param_1,ushort param_2,uint param_3,uint param_4) //FUN_00437b60

{
  return CONCAT22((short)((param_1 & 0xffff0003) >> 0x10),
                  (((short)(param_1 & 0xffff0003) << 2 | param_2 & 3) << 3 | (ushort)param_4 & 0x200
                  ) << 2 | (ushort)(param_3 >> 6) & 0xf | (ushort)(param_4 >> 4) & 0x10);
}


// Set palette color intensity (0-255, where 255 is full brightness)
void __cdecl set_palette_color(uint8_t param_1)
{
  uint32_t local_10;
  short local_c;
  short local_a;
  uint16_t local_8;
  uint16_t local_6;
  uint8_t local_4;
  uint8_t local_3;
  uint8_t local_2;

  local_c = -(short)DAT_004baa34;
  local_10 = 0x60000000;
  local_2 = param_1;
  local_3 = param_1;
  local_4 = param_1;
  local_a = -(short)DAT_004baa38;
  local_8 = 0x200;
  local_6 = 0xf0;
  update_palette_register(&local_10,&DAT_0052f3e0 + DAT_00549dcc * 0x14,0); //FUN_00439e60
  return;
}

// Fade screen to black
void fade_to_black(void)
{
  initialize_graphics(); //thunk_FUN_0041fb90();
  clear_framebuffer();   // FUN_0041fb40();
  _rand();
  perform_fade_step(); //FUN_0041fce0();
  return;
}

// Graphics initialization thunk
void initialize_graphics(void) //thunk_FUN_0041fb90
{
  uint *puVar1;

  puVar1 = DAT_004fda94;
  DAT_004fda94 = &DAT_0051f5e2;
  if (puVar1 != &DAT_0051f570) {
    DAT_004fda94 = &DAT_0051f570;
  }
  init_graphics_system(); //FUN_00420b20();
  prepare_gpu_memory(); //FUN_00410440();
  init_vram_tables(); //FUN_00410400();
  init_sprite_engine();//FUN_00441cc0();
  init_default_frame(0,0,0,(int)(&DAT_0052f440 + DAT_00549dcc * 0x14)); //FUN_00439ed0(0,0,0,(int)(&DAT_0052f440 + DAT_00549dcc * 0x14));
  return;
}

// Draw the title screen
void draw_title_screen(void)
{
  lstrcpyA(&DAT_004ddb28,(LPCSTR)(DAT_004feeb0 + 2));
  lstrcpyA(&DAT_004ddb38,(LPCSTR)(DAT_004feeb0 + 0xf));
  init_text_layer(0x300,0,0xf,1); //FUN_00421db0(0x300,0,0xf,1);
  draw_text_to_layer(0,&DAT_004ddb28); //FUN_00421e20(0,&DAT_004ddb28);
  draw_text_to_layer(1,&DAT_004ddb38); //FUN_00421e20(1,&DAT_004ddb38);
  draw_text_to_layer(2,&DAT_004b450c);// FUN_00421e20(2,&DAT_004b450c);
  return;
}

int __cdecl
draw_sprite(short param_1,short param_2,uchar param_3,uchar param_4,ushort param_5,
            ushort param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = DAT_005006e0;
  pbVar3 = PTR_DAT_004baa20 + DAT_00549dcc * 0x14;
  (&DAT_005584cc)[DAT_005006e0 * 0x14] = param_3;
  iVar2 = iVar1 * 0x14;
  (&DAT_005584cd)[iVar2] = param_4;
  *(ushort *)(iVar2 + 0x5584d0) = param_5;
  *(ushort *)(iVar2 + 0x5584d2) = param_6;
  *(short *)(iVar2 + 0x5584c8) = param_1 - (short)DAT_004baa34;
  *(short *)(iVar2 + 0x5584ca) = param_2 - (short)DAT_004baa38;
  (&DAT_005584ce)[iVar1 * 10] = (&DAT_004fd900)[param_7];
  commit_graphics_object((int)(&DAT_005584c0 + iVar2),1); //FUN_0043a080((int)(&DAT_005584c0 + iVar2),1);
  push_to_render_queue(pbVar3,(uint *)(&DAT_005584c0 + iVar2),param_8);// FUN_00437ea0(pbVar3,(uint *)(&DAT_005584c0 + iVar2),param_8);
  iVar2 = DAT_005006e0 + 1;
  DAT_005006e0 = iVar2 % 0x6a4;
  return iVar2 / 0x6a4;
}


void __cdecl
render_graphics(short param_1,short param_2,ushort param_3,ushort param_4,uchar param_5,
            uchar param_6,uchar param_7,uchar param_8,uchar param_9,
            uchar param_10,uchar param_11,uchar param_12,uchar param_13,
            uchar param_14,uchar param_15,uchar param_16,int param_17,int param_18)

{
  uint *puVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  
  sVar3 = (short)DAT_004baa34;
  pbVar6 = PTR_DAT_004baa20 + DAT_00549dcc * 0x14;
  sVar4 = (short)DAT_004baa38;
  iVar2 = DAT_0052f49c * 0x19;
  puVar1 = (uint *)(&DAT_00557e70 + iVar2);
  init_sprite_object((int)puVar1); //FUN_0043a050((int)puVar1);
  *(short *)(iVar2 + 0x557e78) = param_1 - sVar3;
  *(short *)(iVar2 + 0x557e7a) = param_2 - sVar4;
  *(ushort *)(iVar2 + 0x557e7c) = param_3;
  *(ushort *)(iVar2 + 0x557e7e) = param_4;
  (&DAT_00557e76)[iVar2] = param_6;
  (&DAT_00557e75)[iVar2] = param_5;
  (&DAT_00557e77)[iVar2] = param_7;
  (&DAT_00557e81)[iVar2] = param_9;
  (&DAT_00557e80)[iVar2] = param_8;
  (&DAT_00557e82)[iVar2] = param_10;
  (&DAT_00557e84)[iVar2] = param_12;
  (&DAT_00557e83)[iVar2] = param_11;
  (&DAT_00557e85)[iVar2] = param_13;
  (&DAT_00557e87)[iVar2] = param_15;
  (&DAT_00557e86)[iVar2] = param_14;
  (&DAT_00557e88)[iVar2] = param_16;
  commit_graphics_object((int)puVar1,param_17); //FUN_0043a080((int)puVar1,param_17);
  push_to_render_queue(pbVar6,puVar1,param_18);// FUN_00437ea0(pbVar6,puVar1,param_18);
  uVar5 = (int)(DAT_0052f49c + 1U) >> 0x1f;
  DAT_0052f49c = ((DAT_0052f49c + 1U ^ uVar5) - uVar5 & 0x3f ^ uVar5) - uVar5;
  return;
}



int __cdecl
fill_rectangle(short param_1,short param_2,ushort param_3,ushort param_4,uchar param_5,
            uchar param_6,uchar param_7,int param_8,int param_9)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  
  sVar2 = (short)DAT_004baa34;
  pbVar5 = PTR_DAT_004baa20 + DAT_00549dcc * 0x14;
  sVar3 = (short)DAT_004baa38;
  iVar4 = DAT_0052f498 * 0x10;
  puVar1 = (uint *)(&DAT_00556c70 + iVar4);
  init_rectangle_object((int)puVar1); //FUN_0043a040((int)puVar1);
  *(short *)(&DAT_00556c78 + iVar4) = param_1 - sVar2;
  *(short *)(&DAT_00556c7a + iVar4) = param_2 - sVar3;
  *(ushort *)(&DAT_00556c7c + iVar4) = param_3;
  *(ushort *)(&DAT_00556c7e + iVar4) = param_4;
  (&DAT_00556c75)[iVar4] = param_5;
  (&DAT_00556c76)[iVar4] = param_6;
  (&DAT_00556c77)[iVar4] = param_7;
  commit_graphics_object((int)puVar1,param_8); //FUN_0043a080((int)puVar1,param_8);
  push_to_render_queue(pbVar5,puVar1,param_9); //FUN_00437ea0(pbVar5,puVar1,param_9);
  iVar4 = DAT_0052f498 + 1;
  DAT_0052f498 = iVar4 % 0x120;
  return iVar4 / 0x120;
}



int __cdecl
process_image_data(int param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5
            )

{
  uint local_24;
  ushort local_20;
  ushort local_1e;
  uint local_1c;
  ushort local_14;
  ushort local_12;
  short local_8 [4];
  
  prepare_gpu_memory(); //FUN_00410440();
  parse_image_header((uint *)(param_1 + 4),&local_24); //FUN_00437bb0((uint *)(param_1 + 4),&local_24);
  local_20 = param_2;
  local_1e = param_3;
  local_14 = param_4;
  local_12 = param_5;
  process_image_to_gpu(local_8,&local_24); // FUN_00420ec0(local_8,&local_24);
  return (-(uint)((*(byte *)(param_1 + 4) & 7) == 0) & 0xfffffe20) + 0x220 +
         (local_1c & 0xffff) * (local_1c >> 0x10) * 2;
}



void __cdecl set_palette_bank(int param_1,int param_2)

{
  select_palette_bank(param_1,param_2,(uint *)0x0);// FUN_00421950(param_1,param_2,(uint *)0x0);
  return;
}




// DUPLICATE REMOVED: set_palette_color (kept the earlier uint8_t version)
