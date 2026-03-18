#include "zeus.h"

// Library Function - Single Match
//  _rand
// 
// Library: Visual Studio 1998 Release

int __cdecl _rand(void)

{
  uint uVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  uVar1 = p_Var2->_holdrand * 0x343fd + 0x269ec3;
  p_Var2->_holdrand = uVar1;
  return (uVar1 & 0x7fff0000) >> 0x10;
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_004dc42c == 1) {
    __FF_MSGBANNER();
  }
  FUN_004ada90(param_1);
  (*(code *)PTR___exit_004dc428)(0xff);
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  _printf
//  _wprintf
// 
// Library: Visual Studio 1998 Release

int __cdecl FID_conflict__wprintf(char *_Format,...)

{
  int _Flag;
  int iVar1;
  
  FID_conflict___lock_file2(1,&DAT_004dcd18);
  _Flag = __stbuf((FILE *)&DAT_004dcd18);
  iVar1 = FUN_004adff0((FILE *)&DAT_004dcd18,(byte *)_Format,(undefined4 *)&stack0x00000008);
  __ftbuf(_Flag,(FILE *)&DAT_004dcd18);
  FID_conflict___lock_file2(1,&DAT_004dcd18);
  return iVar1;
}



// Library Function - Single Match
//  __ftol
// 
// Library: Visual Studio

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}




// Library Function - Single Match
//  __fdivp_sti_st
// 
// Library: Visual Studio

void __fdivp_sti_st(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffea;
  
  FUN_004abc20((int)in_ST0,(uint)((unkuint10)in_ST0 >> 0x20),(ushort)((unkuint10)in_ST0 >> 0x40),
               (int)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),
               CONCAT22(in_stack_ffffffea,(short)((unkuint10)in_ST1 >> 0x40)));
  return;
}



// Library Function - Single Match
//  __fdivrp_sti_st
// 
// Library: Visual Studio

void __fdivrp_sti_st(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffea;
  
  FUN_004abc20((int)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),(ushort)((unkuint10)in_ST1 >> 0x40),
               (int)in_ST0,(uint)((unkuint10)in_ST0 >> 0x20),
               CONCAT22(in_stack_ffffffea,(short)((unkuint10)in_ST0 >> 0x40)));
  return;
}



uint32_t FUN_004ac1fc(uint param_1)

{
  uint32_t in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}



// Library Function - Single Match
//  __adj_fdiv_m64
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

uint32_t __adj_fdiv_m64(uint32_t param_1,uint param_2)

{
  uint32_t in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}



// Library Function - Single Match
//  __adj_fdivr_m64
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

uint32_t __adj_fdivr_m64(uint32_t param_1, uint param_2)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


// Library Function - Single Match
//  __fpmath
// 
// Library: Visual Studio 1998 Release

void __cdecl __fpmath(int param_1)

{
  FUN_004ac9e0();
  DAT_004dc5ac = FUN_004aeb50();
  __setdefaultprecision();
  return;
}



// Library Function - Single Match
//  __mtinit
// 
// Library: Visual Studio 1998 Release

int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_004dc5bc = TlsAlloc();
  if (DAT_004dc5bc == 0xffffffff) {
    return 0;
  }
  _Ptd = FUN_004af1a0(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue(DAT_004dc5bc,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}



// Library Function - Single Match
//  __initptd
// 
// Library: Visual Studio 1998 Release

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined **)(_Ptd->_con_ch_buf + 4) = &DAT_004dc610;
  _Ptd->_holdrand = 1;
  return;
}



// Library Function - Single Match
//  __getptd
// 
// Library: Visual Studio 1998 Release

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue(DAT_004dc5bc);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_004af1a0(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_004dc5bc,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_004acb33;
      }
    }
    __amsg_exit(0x10);
  }
LAB_004acb33:
  SetLastError(dwErrCode);
  return _Ptd;
}



// Library Function - Single Match
//  __cinit
// 
// Library: Visual Studio 1998 Release

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (PTR___fpmath_004dc5b0 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_004dc5b0)();
  }
  __initterm((undefined4 *)&DAT_004b4008,(undefined4 *)&DAT_004b4010);
  iVar1 = __initterm((undefined4 *)&DAT_004b4000,(undefined4 *)&DAT_004b4004);
  return iVar1;
}


// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_004acbb0(_Code,1,0);
  return;
}




// Library Function - Single Match
//  __initterm
// 
// Library: Visual Studio 1998 Release

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// Library Function - Single Match
//  __global_unwind2
// 
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4acc98,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_004acca0;
  uStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_004acd56();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  *unaff_FS_OFFSET = uStack_1c;
  return;
}



// Library Function - Single Match
//  __XcptFilter
// 
// Library: Visual Studio 1998 Release

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  
  p_Var4 = __getptd();
  piVar5 = (int *)xcptlookup(_ExceptionNum,*(int **)(p_Var4->_con_ch_buf + 4));
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(_ExceptionPtr);
    return LVar6;
  }
  if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    return 1;
  }
  if (pcVar1 == (code *)0x1) {
    return -1;
  }
  pvVar2 = p_Var4->_initaddr;
  p_Var4->_initaddr = _ExceptionPtr;
  if (piVar5[1] == 8) {
    if (DAT_004dc688 < DAT_004dc68c + DAT_004dc688) {
      iVar7 = DAT_004dc688 * 0xc;
      iVar8 = DAT_004dc688;
      do {
        iVar7 = iVar7 + 0xc;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(*(int *)(p_Var4->_con_ch_buf + 4) + -4 + iVar7) = 0;
      } while (iVar8 < DAT_004dc68c + DAT_004dc688);
    }
    pvVar3 = p_Var4->_initarg;
    iVar8 = *piVar5;
    if (iVar8 == -0x3fffff72) {
      p_Var4->_initarg = (void *)0x83;
    }
    else if (iVar8 == -0x3fffff70) {
      p_Var4->_initarg = (void *)0x81;
    }
    else if (iVar8 == -0x3fffff6f) {
      p_Var4->_initarg = (void *)0x84;
    }
    else if (iVar8 == -0x3fffff6d) {
      p_Var4->_initarg = (void *)0x85;
    }
    else if (iVar8 == -0x3fffff73) {
      p_Var4->_initarg = (void *)0x82;
    }
    else if (iVar8 == -0x3fffff71) {
      p_Var4->_initarg = (void *)0x86;
    }
    else if (iVar8 == -0x3fffff6e) {
      p_Var4->_initarg = (void *)0x8a;
    }
    (*pcVar1)(8,p_Var4->_initarg);
    p_Var4->_initarg = pvVar3;
  }
  else {
    piVar5[2] = 0;
    (*pcVar1)(piVar5[1]);
  }
  p_Var4->_initaddr = pvVar2;
  return -1;
}



// Library Function - Single Match
//  _xcptlookup
// 
// Library: Visual Studio 1998 Release

uint __cdecl xcptlookup(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_2 + DAT_004dc694 * 3);
  return -(uint)(*piVar1 == param_1) & (uint)piVar1;
}



// Library Function - Single Match
//  __ismbblead
// 
// Library: Visual Studio 1998 Release

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype((byte)_C,0,4);
  return iVar1;
}



// Library Function - Single Match
//  _x_ismbbtype
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((param_3 & *(byte *)((int)&DAT_004dc6a0 + param_1 + 1)) == 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(ushort *)(&DAT_004dd03a + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __setargv
// 
// Library: Visual Studio 1998 Release

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_004fd710,0x104);
  _DAT_004dc5f0 = &DAT_004fd710;
  pbVar2 = &DAT_004fd710;
  if (*DAT_005785a8 != 0) {
    pbVar2 = DAT_005785a8;
  }
  parse_cmdline(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_004af220(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  parse_cmdline(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_004dc5d8 = puVar1;
  _DAT_004dc5d4 = local_8 + -1;
  return local_8 + -1;
}



// Library Function - Single Match
//  _parse_cmdline
// 
// Library: Visual Studio 1998 Release

void __cdecl
parse_cmdline(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar6 = param_1 + 1;
    bVar1 = *pbVar6;
    while ((bVar1 != 0x22 && (*pbVar6 != 0))) {
      if (((*(byte *)((int)&DAT_004dc6a0 + *pbVar6 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar6;
        param_3 = param_3 + 1;
      }
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar6 == 0x22) {
      pbVar6 = pbVar6 + 1;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar6 = param_1 + 1;
      if ((*(byte *)((int)&DAT_004dc6a0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar6;
          param_3 = param_3 + 1;
        }
        pbVar6 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_004ad140;
      param_1 = pbVar6;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_004ad140:
      pbVar6 = pbVar6 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar6 != 0) {
    for (; (*pbVar6 == 0x20 || (*pbVar6 == 9)); pbVar6 = pbVar6 + 1) {
    }
    if (*pbVar6 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar6;
      while (bVar1 == 0x5c) {
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar6;
      }
      if (*pbVar6 == 0x22) {
        pbVar4 = pbVar6;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar4 = pbVar6 + 1, *pbVar4 != 0x22)) {
            bVar2 = false;
            pbVar4 = pbVar6;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar6 = pbVar4;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar6;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_004dc6a0 + bVar1 + 1) & 4) != 0) {
            pbVar6 = pbVar6 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_004ad271;
        }
        pbVar4 = param_3;
        if ((*(byte *)((int)&DAT_004dc6a0 + bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          pbVar6 = pbVar6 + 1;
          pbVar4 = param_3 + 1;
          *param_5 = *param_5 + 1;
        }
        bVar1 = *pbVar6;
        param_3 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
        *pbVar4 = bVar1;
        *param_5 = *param_5 + 1;
      }
      else {
LAB_004ad271:
        pbVar6 = pbVar6 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


// Library Function - Single Match
//  _getSystemCP
// 
// Library: Visual Studio 1998 Release

int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004dc7bc = 1;
                    // WARNING: Could not recover jumptable at 0x004ad69d. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004dc7bc = 1;
                    // WARNING: Could not recover jumptable at 0x004ad6b2. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004dd258;
  }
  DAT_004dc7bc = (uint)bVar2;
  return param_1;
}



// Library Function - Single Match
//  _CPtoLCID
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl _CPtoLCID(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _setSBCS
// 
// Library: Visual Studio 1998 Release

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004dc6a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004dc7b0 = 0;
  DAT_004dc7a4 = 0;
  _DAT_004dc7a8 = 0;
  DAT_004dc7b4 = 0;
  DAT_004dc7b8 = 0;
  return;
}




// Library Function - Single Match
//  __FF_MSGBANNER
// 
// Library: Visual Studio 1998 Release

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_004dc42c == 1) || ((DAT_004dc42c == 0 && (DAT_004dc430 == 1)))) {
    FUN_004ada90(0xfc);
    if (DAT_004dcbd0 != (code *)0x0) {
      (*DAT_004dcbd0)();
    }
    FUN_004ada90(0xff);
  }
  return;
}



// Library Function - Single Match
//  __mtinitlocks
// 
// Library: Visual Studio 1998 Release

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004dcc7c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004dcc6c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004dcc5c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_004dcc3c);
  return extraout_EAX;
}



// Library Function - Single Match
//  __lock
// 
// Library: Visual Studio 1998 Release

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = (int *)(&DAT_004dcc38 + _File * 4);
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_004af220(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_004af200(lpCriticalSection);
    }
    FUN_004add20(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}




// Library Function - Multiple Matches With Different Base Names
//  __lock_file
//  __unlock_file
// 
// Library: Visual Studio 1998 Release

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x4dccf7 < _File) && (_File < (FILE *)0x4dcf59)) {
    __lock(((int)&_File[-0x26e68]._base >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  __lock_file2
//  __unlock_file2
// 
// Library: Visual Studio 1998 Release

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  __lock_file
//  __unlock_file
// 
// Library: Visual Studio 1998 Release

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x4dccf7 < _File) && (_File < (FILE *)0x4dcf59)) {
    FUN_004add20(((int)&_File[-0x26e68]._base >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  __lock_file2
//  __unlock_file2
// 
// Library: Visual Studio 1998 Release

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_004add20(_Index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __stbuf
// 
// Library: Visual Studio 1998 Release

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  undefined3 extraout_var;
  int iVar4;
  
  bVar3 = FUN_004af590(_File->_file);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  if (_File == (FILE *)&DAT_004dcd18) {
    iVar4 = 0;
  }
  else {
    if (_File != (FILE *)&DAT_004dcd38) {
      return 0;
    }
    iVar4 = 1;
  }
  _DAT_004dcf78 = _DAT_004dcf78 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_004dcf80 + iVar4;
  if (*piVar1 == 0) {
    iVar4 = FUN_004af220(0x1000);
    *piVar1 = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}



// Library Function - Single Match
//  __ftbuf
// 
// Library: Visual Studio 1998 Release

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



// Library Function - Single Match
//  _write_char
// 
// Library: Visual Studio 1998 Release

void __cdecl write_char(uint param_1,FILE *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2->_cnt + -1;
  param_2->_cnt = iVar1;
  if (iVar1 < 0) {
    uVar2 = FUN_004af780(param_1,param_2);
  }
  else {
    *param_2->_ptr = (char)param_1;
    uVar2 = (uint)(byte)*param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



// Library Function - Single Match
//  _write_multi_char
// 
// Library: Visual Studio 1998 Release

void __cdecl write_multi_char(uint param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Library Function - Single Match
//  _write_string
// 
// Library: Visual Studio 1998 Release

void __cdecl write_string(char *param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char((int)*param_1,param_3,param_4);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 1998 Release

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



// Library Function - Single Match
//  __ms_p5_test_fdiv
// 
// Library: Visual Studio 1998 Release

undefined1 __ms_p5_test_fdiv(void)

{
  return 0;
}



// Library Function - Single Match
//  __cftoe
// 
// Library: Visual Studio 1998 Release

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(local_28.sign == 0x2d),_SizeInBytes + 1,
            (int)&local_28,unaff_EDI);
  FUN_004aee30(_Buf,_SizeInBytes,_Dec,&local_28.sign,'\0');
  return (errno_t)_Buf;
}



undefined1 * __cdecl
FUN_004aee30(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar2 = param_1;
  if (*param_4 == 0x2d) {
    puVar2 = param_1 + 1;
    *param_1 = 0x2d;
  }
  puVar3 = puVar2;
  if (0 < param_2) {
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar3;
    *puVar3 = DAT_004dd2a8;
  }
  puVar1 = (undefined4 *)(puVar3 + (uint)(param_5 == '\0') + param_2);
  *puVar1 = DAT_004dd028;
  *(undefined2 *)(puVar1 + 1) = DAT_004dd02c;
  if (param_3 != 0) {
    *(undefined1 *)puVar1 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar1 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar1 + 2) = *(char *)((int)puVar1 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar1 + 3) = *(char *)((int)puVar1 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar1 + 1) = *(char *)(puVar1 + 1) + (char)iVar4;
  }
  return param_1;
}



// Library Function - Single Match
//  __cftof
// 
// Library: Visual Studio 1998 Release

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (local_28.sign == 0x2d),local_28.decpt + _SizeInBytes,(int)&local_28,unaff_EDI);
  FUN_004aef90(_Buf,_SizeInBytes,&local_28.sign,'\0');
  return (errno_t)_Buf;
}




// Library Function - Single Match
//  __cftog
// 
// Library: Visual Studio 1998 Release

void __cdecl __cftog(double *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  STRFLT unaff_EBP;
  char *pcVar3;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*param_1,&local_28,local_18,(size_t)unaff_EBP);
  iVar2 = local_28.decpt + -1;
  __fptostr(param_2 + (local_28.sign == 0x2d),param_3,(int)&local_28,unaff_EBP);
  local_28.decpt = local_28.decpt + -1;
  if ((-5 < local_28.decpt) && (local_28.decpt < (int)param_3)) {
    pcVar1 = param_2 + (local_28.sign == 0x2d);
    if (iVar2 < local_28.decpt) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_004aef90(param_2,param_3,&local_28.sign,'\x01');
    return;
  }
  FUN_004aee30(param_2,param_3,param_4,&local_28.sign,'\x01');
  return;
}



// Library Function - Single Match
//  __shift
// 
// Library: Visual Studio 1998 Release

void __cdecl __shift(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FID_conflict__memcpy(param_1 + param_2,param_1,~uVar2);
  }
  return;
}


// Library Function - Single Match
//  ___crtMessageBoxA
// 
// Library: Visual Studio 1998 Release

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004dd25c != (FARPROC)0x0) {
LAB_004af2ef:
    if (DAT_004dd260 != (FARPROC)0x0) {
      iVar1 = (*DAT_004dd260)();
    }
    if ((iVar1 != 0) && (DAT_004dd264 != (FARPROC)0x0)) {
      iVar1 = (*DAT_004dd264)(iVar1);
    }
    iVar1 = (*DAT_004dd25c)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA(s_user32_dll_004dd298);
  if (hModule != (HMODULE)0x0) {
    DAT_004dd25c = GetProcAddress(hModule,s_MessageBoxA_004dd28c);
    if (DAT_004dd25c != (FARPROC)0x0) {
      DAT_004dd260 = GetProcAddress(hModule,s_GetActiveWindow_004dd27c);
      DAT_004dd264 = GetProcAddress(hModule,s_GetLastActivePopup_004dd268);
      goto LAB_004af2ef;
    }
  }
  return 0;
}




// Library Function - Single Match
//  __fflush_lk
// 
// Library: Visual Studio 1998 Release

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = FUN_004b0590(param_1->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}



// Library Function - Single Match
//  __flush
// 
// Library: Visual Studio 1998 Release

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int iVar2;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((_File->_flag & 0x80U) != 0) {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iVar2;
}





// Library Function - Single Match
//  __wctomb_lk
// 
// Library: Visual Studio 1998 Release

int __cdecl __wctomb_lk(LPSTR param_1,WCHAR param_2)

{
  int *piVar1;
  int iVar2;
  BOOL local_4;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_004dd248 == 0) {
    if (0xff < (ushort)param_2) {
      piVar1 = FUN_004b0940();
      *piVar1 = 0x2a;
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_4 = 0;
  iVar2 = WideCharToMultiByte(DAT_004dd258,0x220,&param_2,1,param_1,DAT_004dd2a4,(LPCSTR)0x0,
                              &local_4);
  if ((iVar2 == 0) || (local_4 != 0)) {
    piVar1 = FUN_004b0940();
    *piVar1 = 0x2a;
    iVar2 = -1;
  }
  return iVar2;
}



// Library Function - Single Match
//  __aulldiv
// 
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  __aullrem
// 
// Library: Visual Studio

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}





// Library Function - Single Match
//  __control87
// 
// Library: Visual Studio 1998 Release

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  ushort in_FPUControlWord;
  
  uVar1 = __abstract_cw(in_FPUControlWord);
  __hw_cw();
  return ~_Mask & uVar1 | _Mask & _NewValue;
}



// Library Function - Single Match
//  __controlfp
// 
// Library: Visual Studio 1998 Release

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



// Library Function - Single Match
//  __abstract_cw
// 
// Library: Visual Studio 1998 Release

uint __cdecl __abstract_cw(ushort param_1)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 == 0x400) {
    uVar1 = uVar1 | 0x100;
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



// Library Function - Single Match
//  __hw_cw
// 
// Library: Visual Studio 1998 Release

void __hw_cw(void)

{
  return;
}



// Library Function - Single Match
//  __isctype
// 
// Library: Visual Studio 1998 Release

int __cdecl __isctype(int _C,int _Type)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  byte bVar2;
  BOOL unaff_EBX;
  undefined4 local_6;
  undefined1 local_2;
  
  if (_C + 1U < 0x101) {
    return (uint)*(ushort *)(PTR_DAT_004dd030 + _C * 2) & _Type;
  }
  bVar2 = (byte)((uint)_C >> 8);
  if ((PTR_DAT_004dd030[(uint)bVar2 * 2 + 1] & 0x80) == 0) {
    _LpSrcStr = (LPCSTR)0x1;
    local_6._0_3_ = CONCAT12((char)_C,(undefined2)local_6);
    local_6 = (uint)(uint3)local_6;
  }
  else {
    _LpSrcStr = (LPCSTR)0x2;
    local_6._0_3_ = CONCAT12(bVar2,(undefined2)local_6);
    local_2 = 0;
    local_6 = CONCAT13((char)_C,(uint3)local_6);
  }
  BVar1 = ___crtGetStringTypeA
                    ((_locale_t)0x1,(int)&local_6 + 2,_LpSrcStr,(int)&local_6,(LPWORD)0x0,0,
                     unaff_EBX);
  if (BVar1 == 0) {
    return 0;
  }
  return local_6 & 0xffff & _Type;
}



// Library Function - Multiple Matches With Different Base Names
//  __tolower_lk
//  _tolower
// 
// Library: Visual Studio 1998 Release

int __cdecl FID_conflict__tolower(int _C)

{
  uint uVar1;
  LPCSTR _LpSrcStr;
  int iVar2;
  int unaff_EBX;
  uint in_stack_fffffff8;
  byte local_4;
  byte local_3;
  undefined1 local_2;
  
  if (DAT_004dd248 == (_locale_t)0x0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      _C = _C + 0x20;
    }
    return _C;
  }
  if (_C < 0x100) {
    if (DAT_004dd2a4 < 2) {
      uVar1 = *(ushort *)(PTR_DAT_004dd030 + _C * 2) & 1;
    }
    else {
      uVar1 = __isctype(_C,1);
    }
    if (uVar1 == 0) {
      return _C;
    }
  }
  local_4 = (byte)((uint)_C >> 8);
  if ((PTR_DAT_004dd030[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    _LpSrcStr = (LPCSTR)0x1;
    local_3 = 0;
    local_4 = (byte)_C;
  }
  else {
    _LpSrcStr = (LPCSTR)0x2;
    local_2 = 0;
    local_3 = (byte)_C;
  }
  iVar2 = ___crtLCMapStringA(DAT_004dd248,(LPCWSTR)0x100,(DWORD)&local_4,_LpSrcStr,
                             (int)&stack0xfffffff8,(LPSTR)0x3,0,unaff_EBX,in_stack_fffffff8);
  if (iVar2 == 0) {
    return _C;
  }
  if (iVar2 == 1) {
    return in_stack_fffffff8 & 0xff;
  }
  return in_stack_fffffff8 & 0xffff;
}



// Library Function - Single Match
//  __ZeroTail
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl __ZeroTail(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(param_2 >> 0x1f);
  if ((*(uint *)(param_1 + iVar2 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    piVar3 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar3 != 0) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



// Library Function - Single Match
//  __IncMan
// 
// Library: Visual Studio 1998 Release

void __cdecl __IncMan(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(param_2 >> 0x1f);
  puVar4 = (uint *)(param_1 + iVar2 * 4);
  iVar3 = FUN_004b0e50(*puVar4,1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) -
                                            bVar1) & 0x1f),puVar4);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    puVar4 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_004b0e50(*puVar4,1,puVar4);
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// Library Function - Single Match
//  __RoundMan
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  local_4 = 0;
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  puVar1 = (uint *)(param_1 + iVar3 * 4);
  if ((*puVar1 & 1 << (bVar2 & 0x1f)) != 0) {
    iVar4 = __ZeroTail(param_1,param_2 + 1);
    if (iVar4 == 0) {
      local_4 = __IncMan(param_1,param_2 + -1);
    }
  }
  iVar3 = iVar3 + 1;
  *puVar1 = *puVar1 & -1 << (bVar2 & 0x1f);
  if (iVar3 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar4 = 3 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_4;
}



// Library Function - Single Match
//  __CopyMan
// 
// Library: Visual Studio 1998 Release

void __cdecl __CopyMan(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// Library Function - Single Match
//  __FillZeroMan
// 
// Library: Visual Studio 1998 Release

void __cdecl __FillZeroMan(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// Library Function - Single Match
//  __IsZeroMan
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl __IsZeroMan(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}




// Library Function - Single Match
//  __ld12cvt
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c [3];
  
  uVar1 = param_1[5];
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = __IsZeroMan((int *)&local_18);
    if (iVar2 == 0) {
      __FillZeroMan(&local_18);
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    __CopyMan(local_c,&local_18);
    iVar2 = __RoundMan((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      iVar5 = 0;
      __FillZeroMan(&local_18);
      uVar3 = 2;
    }
    else if (iVar2 < iVar5) {
      if (iVar5 < *param_3) {
        iVar5 = iVar5 + param_3[5];
        local_18 = local_18 & 0x7fffffff;
        FUN_004afe40(&local_18,param_3[3]);
        uVar3 = 0;
      }
      else {
        __FillZeroMan(&local_18);
        local_18 = local_18 | 0x80000000;
        FUN_004afe40(&local_18,param_3[3]);
        iVar5 = param_3[5] + *param_3;
        uVar3 = 1;
      }
    }
    else {
      __CopyMan(&local_18,local_c);
      FUN_004afe40(&local_18,iVar2 - iVar5);
      __RoundMan((int)&local_18,param_3[2]);
      iVar5 = 0;
      FUN_004afe40(&local_18,param_3[3] + 1);
      uVar3 = 2;
    }
  }
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) | ((uVar1 & 0x8000) == 0) - 1 & 0x80000000 |
             local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}



// Library Function - Multiple Matches With Different Base Names
//  __ld12tod
//  __ld12tof
// 
// Library: Visual Studio 1998 Release

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_004dd2b0);
  return IVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __ld12tod
//  __ld12tof
// 
// Library: Visual Studio 1998 Release

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_004dd2c8);
  return IVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __atodbl
//  __atoflt
// 
// Library: Visual Studio 1998 Release

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  int local_10;
  _LDBL12 local_c;
  
  FUN_004b1060((ushort *)&local_c,&local_10,(byte *)_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}



// Library Function - Multiple Matches With Different Base Names
//  __atodbl
//  __atoflt
// 
// Library: Visual Studio 1998 Release

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  int local_10;
  _LDBL12 local_c;
  
  FUN_004b1060((ushort *)&local_c,&local_10,(byte *)_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}



// Library Function - Single Match
//  __fptostr
// 
// Library: Visual Studio 1998 Release

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = _Buf + 1;
  pcVar5 = *(char **)(_Digits + 0xc);
  *_Buf = '0';
  sVar2 = _SizeInBytes;
  pcVar6 = pcVar7;
  if (0 < (int)_SizeInBytes) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        *pcVar6 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar1;
      }
      pcVar6 = pcVar6 + 1;
      _SizeInBytes = _SizeInBytes - 1;
      sVar2 = 0;
    } while (_SizeInBytes != 0);
  }
  *pcVar6 = '\0';
  if ((-1 < (int)sVar2) && ('4' < *pcVar5)) {
    pcVar6 = pcVar6 + -1;
    cVar1 = *pcVar6;
    while (cVar1 == '9') {
      *pcVar6 = '0';
      pcVar6 = pcVar6 + -1;
      cVar1 = *pcVar6;
    }
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (*_Buf == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
    return sVar2;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)_Buf = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    _Buf = _Buf + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *_Buf = *pcVar7;
    pcVar7 = pcVar7 + 1;
    _Buf = _Buf + 1;
  }
  return uVar3;
}



// Library Function - Single Match
//  __fltout2
// 
// Library: Visual Studio 1998 Release

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_28;
  uint local_24;
  ushort local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  FUN_004b02a0(&local_28,(uint *)&_Dbl);
  iVar2 = FUN_004b17b0(local_28,local_24,local_20,0x11,0,&local_1c);
  _Flt->flag = iVar2;
  _Flt->sign = (int)local_1a;
  _Flt->decpt = (int)local_1c;
  uVar3 = 0xffffffff;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = _ResultStr;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  _Flt->mantissa = _ResultStr;
  return _Flt;
}




// Library Function - Multiple Matches With Different Base Names
//  _memcpy
//  _memmove
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  int in_EDX;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if ((_Src < _Dst) && (_Dst < (void *)((int)_Src + _Size))) {
    puVar3 = (undefined4 *)((int)_Src + _Size);
    puVar5 = (undefined4 *)((int)_Dst + _Size);
    if (((uint)puVar5 & 3) == 0) {
      uVar1 = _Size >> 2;
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar3 = puVar3 + -1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *puVar5 = *puVar3;
      }
      switch(_Size & 3) {
      case 1:
switchD_004b0429_caseD_1:
        *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar3 + 3);
        return _Dst;
      case 2:
switchD_004b0429_caseD_2:
        *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
        return _Dst;
      case 3:
switchD_004b0429_caseD_3:
        *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
        *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar3 + 1);
        return _Dst;
      }
    }
    else {
      puVar4 = (undefined1 *)((int)puVar3 + -1);
      puVar6 = (undefined1 *)((int)puVar5 + -1);
      if (_Size < 0xd) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar6 = puVar6 + -1;
        }
        return _Dst;
      }
      uVar2 = -in_EDX & 3;
      uVar1 = _Size - uVar2;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar6 = puVar6 + -1;
      }
      puVar3 = (undefined4 *)(puVar4 + -3);
      puVar5 = (undefined4 *)(puVar6 + -3);
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(uVar1 & 3) {
      case 1:
        goto switchD_004b0429_caseD_1;
      case 2:
        goto switchD_004b0429_caseD_2;
      case 3:
        goto switchD_004b0429_caseD_3;
      }
    }
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    for (uVar1 = _Size >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *(undefined4 *)_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(_Size & 3) {
    case 1:
switchD_004b0390_caseD_1:
      *(undefined1 *)puVar3 = *(undefined1 *)_Src;
      return _Dst;
    case 2:
switchD_004b0390_caseD_2:
      *(undefined2 *)puVar3 = *(undefined2 *)_Src;
      return _Dst;
    case 3:
switchD_004b0390_caseD_3:
      *(undefined2 *)puVar3 = *(undefined2 *)_Src;
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
      return _Dst;
    }
  }
  else {
    puVar4 = _Dst;
    if (_Size < 0xd) {
      for (; _Size != 0; _Size = _Size - 1) {
        *puVar4 = *(undefined1 *)_Src;
        _Src = (undefined1 *)((int)_Src + 1);
        puVar4 = puVar4 + 1;
      }
      return _Dst;
    }
    uVar2 = -(int)_Dst & 3;
    uVar1 = _Size - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)_Src;
      _Src = (undefined4 *)((int)_Src + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *(undefined4 *)_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(uVar1 & 3) {
    case 1:
      goto switchD_004b0390_caseD_1;
    case 2:
      goto switchD_004b0390_caseD_2;
    case 3:
      goto switchD_004b0390_caseD_3;
    }
  }
  return _Dst;
}



// Library Function - Single Match
//  __callnewh
// 
// Library: Visual Studio 1998 Release

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_004fd878 != (code *)0x0) {
    iVar1 = (*DAT_004fd878)(_Size);
    if (iVar1 != 0) {
      FUN_004add20(9);
      return 1;
    }
  }
  FUN_004add20(9);
  return 0;
}



// Library Function - Single Match
//  _fclose
// 
// Library: Visual Studio 1998 Release

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FID_conflict___lock_file(_File);
  iVar1 = __fclose_lk(_File);
  FID_conflict___lock_file(_File);
  return iVar1;
}



// Library Function - Single Match
//  __fclose_lk
// 
// Library: Visual Studio 1998 Release

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_004af200(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}




// Library Function - Single Match
//  __write
// 
// Library: Visual Studio 1998 Release

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_00578494) &&
     ((*(byte *)(*(int *)((int)&DAT_005784a0 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __write_lk(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_004b0940();
  *piVar2 = 9;
  puVar3 = FUN_004b0950();
  *puVar3 = 0;
  return -1;
}



// Library Function - Single Match
//  __write_lk
// 
// Library: Visual Studio 1998 Release

int __cdecl __write_lk(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  ulong *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar7 = 0;
  local_408 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_005784a0 + ((int)(param_1 & 0xffffffe7) >> 3));
  local_40c = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    __lseek_lk(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),param_2,param_3,&local_414,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
LAB_004b07f4:
      local_418 = GetLastError();
    }
    else {
      local_418 = 0;
      local_408 = local_414;
    }
  }
  else {
    local_418 = 0;
    pcVar5 = param_2;
    do {
      if (param_3 <= (uint)((int)pcVar5 - (int)param_2)) break;
      pcVar6 = local_404;
      do {
        if (param_3 <= (uint)((int)pcVar5 - (int)param_2)) break;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        if (cVar1 == '\n') {
          *pcVar6 = '\r';
          iVar7 = iVar7 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while ((int)pcVar6 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar6 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_004b07f4;
      local_408 = local_408 + local_414;
    } while ((int)pcVar6 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar7;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    piVar3 = FUN_004b0940();
    *piVar3 = 0x1c;
    puVar4 = FUN_004b0950();
    *puVar4 = 0;
    return -1;
  }
  if (local_418 != 5) {
    __dosmaperr(local_418);
    return -1;
  }
  piVar3 = FUN_004b0940();
  *piVar3 = 9;
  puVar4 = FUN_004b0950();
  *puVar4 = 5;
  return -1;
}



// Library Function - Single Match
//  __dosmaperr
// 
// Library: Visual Studio 1998 Release

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = FUN_004b0950();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_004dd2e8;
  do {
    if (*puVar1 == param_1) {
      piVar2 = FUN_004b0940();
      *piVar2 = *(int *)(iVar3 * 8 + 0x4dd2ec);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_004dd450);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar2 = FUN_004b0940();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar2 = FUN_004b0940();
    *piVar2 = 8;
    return;
  }
  piVar2 = FUN_004b0940();
  *piVar2 = 0x16;
  return;
}



// Library Function - Single Match
//  __write
// 
// Library: Visual Studio 1998 Release

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_00578494) &&
     ((*(byte *)(*(int *)((int)&DAT_005784a0 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    DVar1 = __lseek_lk(_FileHandle,(LONG)_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return DVar1;
  }
  piVar2 = FUN_004b0940();
  *piVar2 = 9;
  puVar3 = FUN_004b0950();
  *puVar3 = 0;
  return -1;
}



// Library Function - Single Match
//  __lseek_lk
// 
// Library: Visual Studio 1998 Release

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_004b1d30(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_004b0940();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_005784a0 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __getbuf
// 
// Library: Visual Studio 1998 Release

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_004dcf78 = _DAT_004dcf78 + 1;
  pcVar1 = (char *)FUN_004af220(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return;
}



// Library Function - Single Match
//  ___crtGetStringTypeA
// 
// Library: Visual Studio 1998 Release

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  iVar3 = DAT_004dd468;
  if (DAT_004dd468 == 0) {
    BVar1 = GetStringTypeA(0,1,&DAT_004dd46c,1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,(LPCWSTR)&DAT_004dd470,1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  DAT_004dd468 = iVar3;
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      BVar1 = 0;
      lpWideCharStr = (LPCWSTR)0x0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_004dd258;
      }
      iVar2 = MultiByteToWideChar((UINT)_LpCharType,9,(LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0
                                  ,0);
      iVar3 = BVar1;
      if (((iVar2 != 0) && (lpWideCharStr = FUN_004af1a0(2,iVar2), lpWideCharStr != (LPCWSTR)0x0))
         && (iVar2 = MultiByteToWideChar((UINT)_LpCharType,1,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                         lpWideCharStr,iVar2), iVar2 != 0)) {
        iVar3 = GetStringTypeW((DWORD)_Plocinfo,lpWideCharStr,iVar2,(LPWORD)_CchSrc);
      }
      FUN_004af200(lpWideCharStr);
    }
    return iVar3;
  }
  if (_Code_page == 0) {
    _Code_page = DAT_004dd248;
  }
  BVar1 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                         (LPWORD)_CchSrc);
  return BVar1;
}



// Library Function - Single Match
//  ___crtLCMapStringA
// 
// Library: Visual Studio 1998 Release

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  LPCWSTR lpDestStr;
  
  if (DAT_004dd478 == 0) {
    iVar1 = LCMapStringA(0,0x100,&DAT_004dd46c,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,(LPCWSTR)&DAT_004dd470,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_004dd478 = 1;
    }
    else {
      DAT_004dd478 = 2;
    }
  }
  if (0 < (int)_LpSrcStr) {
    _LpSrcStr = (LPCSTR)FUN_004b0e20((char *)_DwMapFlag,(int)_LpSrcStr);
  }
  if (DAT_004dd478 == 2) {
    iVar1 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                         (LPSTR)_CchSrc,(int)_LpDestStr);
    return iVar1;
  }
  if (DAT_004dd478 != 1) {
    return DAT_004dd478;
  }
  lpDestStr = (LPCWSTR)0x0;
  if (_CchDest == 0) {
    _CchDest = DAT_004dd258;
  }
  iVar1 = MultiByteToWideChar(_CchDest,9,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_004af220(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(_CchDest,1,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,(LPWSTR)0x0,0),
     iVar2 != 0)) {
    if (((uint)_LocaleName & 0x400) == 0) {
      lpDestStr = (LPCWSTR)FUN_004af220(iVar2 * 2);
      if ((lpDestStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,lpDestStr,
                               iVar2), iVar1 == 0)) goto LAB_004b0d6b;
      if (_LpDestStr == (LPSTR)0x0) {
        iVar2 = WideCharToMultiByte(_CchDest,0x220,lpDestStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(_CchDest,0x220,lpDestStr,iVar2,(LPSTR)_CchSrc,(int)_LpDestStr,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (_LpDestStr == (LPSTR)0x0) goto LAB_004b0e02;
      if ((int)_LpDestStr < iVar2) goto LAB_004b0d6b;
      iVar1 = LCMapStringW((LCID)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar1,(LPWSTR)_CchSrc,
                           (int)_LpDestStr);
    }
    if (iVar1 != 0) {
LAB_004b0e02:
      FUN_004af200(lpWideCharStr);
      FUN_004af200(lpDestStr);
      return iVar2;
    }
  }
LAB_004b0d6b:
  FUN_004af200(lpWideCharStr);
  FUN_004af200(lpDestStr);
  return 0;
}



// Library Function - Single Match
//  ___shl_12
// 
// Library: Visual Studio 1998 Release

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return;
}



// Library Function - Single Match
//  ___shr_12
// 
// Library: Visual Studio 1998 Release

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = uVar1 >> 1;
  param_1[1] = uVar2 >> 1 | uVar1 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar2 << 0x1f;
  return;
}




// Library Function - Single Match
//  __close
// 
// Library: Visual Studio 1998 Release

int __cdecl __close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_00578494) &&
     ((*(byte *)(*(int *)((int)&DAT_005784a0 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_004b0940();
  *piVar2 = 9;
  puVar3 = FUN_004b0950();
  *puVar3 = 0;
  return -1;
}



// Library Function - Single Match
//  __close_lk
// 
// Library: Visual Studio 1998 Release

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_004b1d30(2);
    iVar2 = FUN_004b1d30(1);
    if (iVar1 != iVar2) goto LAB_004b1bea;
  }
  else {
LAB_004b1bea:
    hObject = (HANDLE)FUN_004b1d30(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004b1c0a;
    }
  }
  DVar4 = 0;
LAB_004b1c0a:
  __free_osfhnd(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_005784a0 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}



// Library Function - Single Match
//  __freebuf
// 
// Library: Visual Studio 1998 Release

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_004af200(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// Library Function - Single Match
//  __free_osfhnd
// 
// Library: Visual Studio 1998 Release

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_00578494) {
    piVar3 = (int *)((int)&DAT_005784a0 + ((int)(param_1 & 0xffffffe7U) >> 3));
    iVar1 = (param_1 & 0x1fU) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_004dc430 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004b1cf5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004b1cf5:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_004b0940();
  *piVar3 = 9;
  puVar4 = FUN_004b0950();
  *puVar4 = 0;
  return -1;
}





// Library Function - Single Match
//  __lock_fhandle
// 
// Library: Visual Studio 1998 Release

int __cdecl __lock_fhandle(int _Filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_005784a0 + ((int)(_Filehandle & 0xffffffe7U) >> 3));
  iVar2 = (_Filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    __lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    FUN_004add20(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}



// Library Function - Single Match
//  __unlock_fhandle
// 
// Library: Visual Studio 1998 Release

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_005784a0 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}



// Library Function - Single Match
//  ___add_12
// 
// Library: Visual Studio 1998 Release

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b0e50(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004b0e50(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_004b0e50(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_004b0e50(param_1[2],param_2[2],param_1 + 2);
  return;
}
