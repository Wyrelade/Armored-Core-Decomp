#ifndef FDAT084_H
#define FDAT084_H

#include "common.h"

/* @types */
typedef struct Elem801C4E64 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Elem801C4E64;

typedef struct Sub801C50B0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C50B0;

typedef struct Sub801C4E64 {
    u8 _pad0[0x2];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
    u8 _padC[0x5C];
} Sub801C4E64;

typedef struct Elem801C6B68 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6B68;

typedef struct Obj801C4E64 {
    Elem801C4E64 *unk0;
    u8 _pad4[0x4];
    Sub801C50B0 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x22];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4E64 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4E64 unk64;
    Sub801C50B0 unkCC;
    u8 _padD4[0x34];
    Elem801C6B68 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C4E64;

/* @externs */
extern u8 D_801C786C[];
void func_8004CE44(s32 arg0, Sub801C50B0 *arg1, s32 arg2, s32 arg3);
void func_8004ECA8(Sub801C4E64 *arg0);
void func_80075FC0();
void func_80077B78(Obj801C4E64 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_801C4D14(Obj801C4E64 *arg0);
s32 rand(void);

#endif /* FDAT084_H */
