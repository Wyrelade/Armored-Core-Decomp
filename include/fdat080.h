#ifndef FDAT080_H
#define FDAT080_H

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

typedef struct Sub801C6128 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6128;

typedef struct Sub801C639C {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C639C;

typedef struct Sub801C5E2C {
    u8 unk0;
} Sub801C5E2C;

typedef struct Obj801C5E2C {
    u8 _pad0[0x2C];
    Sub801C6128 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C639C *unk38;
    u8 _pad3C[0xCC];
    Sub801C5E2C *unk108;
} Obj801C5E2C;

/* @externs */
extern Sub801C5E2C D_801CC190;
void func_801CC100(Obj801C4E64 *arg0);
Sub801C6128 *func_80072120(s32 arg0);
void func_801C5ED0();
void func_801C6164();
void func_801C6238();
void func_8006D39C(Obj801C5E2C *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);

#endif /* FDAT080_H */
