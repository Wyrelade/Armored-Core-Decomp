#ifndef FDAT054_H
#define FDAT054_H

#include "common.h"

/* @types */
typedef struct Sub801C55E0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55E0;

typedef struct Sub801C5428 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5428;

typedef struct Sub801C5464 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C5464;

typedef struct Sub801C57C4 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C57C4;

typedef struct Sub801C52A0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52A0;

typedef struct Obj801C52A0 {
    u8 _pad0[0x8];
    Sub801C55E0 unk8;
    u8 _pad10[0x1C];
    Sub801C5428 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C5464 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C57C4 unk64;
    Sub801C55E0 unkCC;
    u8 _padD4[0x34];
    Sub801C52A0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52A0;

typedef struct Obj801C55E0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C55E0;

/* @externs */
extern Sub801C52A0 D_801CA4D8;
void func_801CA48C(Obj801C52A0 *arg0);
extern Sub801C52A0 D_801CAA1C;
Sub801C5428 *func_80072120(s32 arg0);
void func_801C5300();
void func_8006D39C(Obj801C52A0 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C5464(Obj801C52A0 *arg0);
void func_801C5500();
extern s32 D_801CAF60;
void func_8008A80C(void);
void func_8008C2FC(s32 arg0);
extern Obj801C55E0 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C55E0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C55E0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C57C4 *arg0, Sub801C55E0 *arg1);
void func_800775B8(Obj801C52A0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55E0 *arg4, void (*arg5)());
void func_801C5CE4();

#endif /* FDAT054_H */
