#ifndef MAIN_H
#define MAIN_H

#include "common.h"

/* @types */
typedef struct Obj800138F0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
} Obj800138F0;

typedef struct Obj80013A88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 _pad12[0xE];
} Obj80013A88;

typedef struct Elem80015580 {
    u8 unk0;
    u8 unk1;
    u8 unk2[4];
    u8 _pad6[0x22];
} Elem80015580;

typedef struct Obj800158C8 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
} Obj800158C8;

typedef struct Obj80015E48 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 _pad4[4];
    s32 *unk8;
    u8 _padC[4];
} Obj80015E48;

/* @externs */
void free2(u32 *arg0);
extern s32 D_80049F98;
s32 rsin(s32 arg0);
s32 rcos(s32 arg0);
void func_80013A88(s16 arg0, Obj80013A88 *arg1);
void func_80013AFC(s16 arg0, Obj80013A88 *arg1);
void func_80013B74(s16 arg0, Obj80013A88 *arg1);
Obj80013A88 *MulMatrix(Obj80013A88 *arg0, Obj80013A88 *arg1);
Obj80013A88 *MulMatrix2(Obj80013A88 *arg0, Obj80013A88 *arg1);
s32 SquareRoot0(s32 arg0);
s32 func_80014950(s32 arg0, s32 arg1);
s32 ratan2(s32 arg0, s32 arg1);
s32 rand(void);
s32 func_80014F78(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5, s32 *arg6);
s32 CdControl(s32 arg0, u8 *arg1, s32 arg2);
extern Elem80015580 *D_8004A260;
extern Elem80015580 *D_8004A264;
s32 func_8001586C(u8 arg0);
void EnterCriticalSection(void);
void ExitCriticalSection(void);
void func_800161F8(void);
void func_80015B78(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_80015C9C(u16 arg0, u16 arg1, u8 *arg2);
void func_80015E48(Obj80015E48 *arg0);

#endif /* MAIN_H */
