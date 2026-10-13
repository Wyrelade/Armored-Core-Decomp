#ifndef FDAT020_H
#define FDAT020_H

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

typedef struct Obj801C5458 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5458;

/* @externs */
extern Sub801C52C0 D_801CAA3C;
void func_801CA9F0(Obj801C52C0 *arg0);
Sub801C53D4 *func_80072120(s32 arg0);
void func_801C52F0();
extern s32 D_801CAF80;
void func_8008A80C(void);
void func_8008C2FC(s32 arg0);
extern Obj801C5458 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C52D0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

#endif /* FDAT020_H */
