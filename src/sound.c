// Sound handling functions for ZEUS Carnage Heart Second
// Decompiled from original binary

#include "zeus.h"

// Play a sound effect
// param_1: sound ID
// param_2: volume (0-100)
// param_3: pan (-100 to 100, 0 = center)
// param_4: flags (0 = allow multiple instances, 1 = replace existing)
void __cdecl play_sound_effect(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  if (DAT_004bf320 != 0) {
    iVar1 = param_2 / 2;
    if (iVar1 < 0x41) {
      if (iVar1 < 0) {
        return;
      }
    }
    else {
      iVar1 = 0x40;
    }
    if (((param_1 < 0) || (DAT_004def0c <= param_1)) || (param_3 < 0)) {
      FUN_004436c0(99);
    }
    FUN_00437a40();
    if ((param_4 == 0) || (iVar2 = FUN_00437a80(param_1), iVar2 == 0)) {
      puVar3 = FUN_00437ac0();
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = FUN_00437ae0();
      }
      puVar3[1] = param_3;
      puVar3[2] = DAT_004def08;
      DAT_004def08 = DAT_004def08 + 1;
      puVar3[3] = param_1;
      FUN_00447880((int *)*puVar3,*(int *)(DAT_004bf324 + param_1 * 0xc + 8),
                   *(uint *)(DAT_004bf324 + 4 + param_1 * 0xc));
      FUN_00447960((int *)*puVar3,iVar1);
      FUN_004479b0((int *)*puVar3);
    }
  }
  return;
}

// Update sound system state
void FUN_00437a40(void)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;

  puVar3 = &DAT_004def10;
  iVar2 = 8;
  do {
    if (puVar3[1] != -1) {
      iVar1 = FUN_00447a50((int *)*puVar3);
      if (iVar1 == 0) {
        puVar3[1] = 0xffffffff;
      }
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// Check if sound is already playing
undefined4 __cdecl FUN_00437a80(int param_1)
{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = 0;
  puVar1 = &DAT_004def10;
  while ((puVar1[1] == -1 || (puVar1[3] != param_1))) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// Find free sound channel
undefined4 * FUN_00437ac0(void)
{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = 0;
  puVar1 = &DAT_004def10;
  do {
    if ((int)puVar1[1] < 0) {
      return puVar1;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 8);
  return (undefined4 *)0x0;
}

// Find oldest sound channel to replace
undefined4 * FUN_00437ae0(void)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;

  puVar5 = &DAT_004def10;
  puVar3 = &DAT_004def20;
  iVar2 = 7;
  iVar4 = DAT_004def18;
  iVar6 = DAT_004def14;
  do {
    iVar1 = puVar3[1];
    if ((iVar1 < iVar6) || ((iVar6 == iVar1 && ((int)puVar3[2] < iVar4)))) {
      iVar4 = puVar3[2];
      puVar5 = puVar3;
      iVar6 = iVar1;
    }
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00447a10((int *)*puVar5);
  puVar5[1] = 0xffffffff;
  return puVar5;
}