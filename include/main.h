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

#endif /* MAIN_H */
