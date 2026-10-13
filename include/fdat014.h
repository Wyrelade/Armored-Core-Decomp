#ifndef FDAT014_H
#define FDAT014_H

#include "common.h"

/* @types */
typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Sub801C4D98 {
    u8 unk0;
    u8 _pad1[0x1];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
    u8 _padC[0x2];
} Sub801C4D98;

typedef struct Sub801C4E00 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C4E00;

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C4C94 unk8;
    u8 _pad10[0x26];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4C94 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4D98 unk64;
    u8 _pad70[0x5C];
    Sub801C4C94 unkCC;
    u8 _padD4[0x88];
    s32 unk15C;
} Obj801C4C94;

/* @externs */
void func_8004EC4C(Sub801C4D98 *arg0);
void func_80075FC0();
extern u8 D_801C8478[];
void func_8004CE44(s32 arg0, Sub801C4C94 *arg1, s32 arg2, s32 arg3);
void func_8004ECA8(Sub801C4D98 *arg0);
void func_80077B78(Obj801C4C94 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_801C4CB0(Obj801C4C94 *arg0);
s32 rand(void);

#endif /* FDAT014_H */
