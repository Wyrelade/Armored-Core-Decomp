#ifndef FDAT018_H
#define FDAT018_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C52D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C52D0;

typedef struct Sub801C563C {
    u8 _pad0[0x38];
} Sub801C563C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C52D0 unk8;
    Sub801C52D0 unk10;
    u8 _pad18[0x1E];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C563C unk64;
    u8 _pad9C[0x30];
    Sub801C52D0 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C53D4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C53D4;

typedef struct Sub801C76D0 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C76D0;

typedef struct Obj801C53D4 {
    u8 _pad0[0x2C];
    Sub801C53D4 *unk2C;
    u8 _pad30[0x8];
    Sub801C76D0 *unk38;
} Obj801C53D4;

/* @externs */
void func_801C5258(Obj801C52C0 *arg0);
void func_801C612C(Obj801C52C0 *arg0);
extern u8 D_801C8200[];
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80078598(Obj801C52C0 *arg0);
void func_80078E1C(Obj801C52C0 *arg0);
Sub801C53D4 *func_80072120(s32 arg0);
void func_801C71C4();
void func_801C756C();
s32 func_8006D45C(void);
void func_8006D39C(Obj801C53D4 *arg0);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C76D0(Obj801C53D4 *arg0);
void func_801C776C();
void func_801C7804();

#endif /* FDAT018_H */
