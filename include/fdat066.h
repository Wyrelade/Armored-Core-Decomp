#ifndef FDAT066_H
#define FDAT066_H

#include "common.h"

/* @types */
typedef struct Sub801C5548 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5548;

typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C6510 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6510;

typedef struct Sub801C66F4 {
    u8 _pad0[0x68];
} Sub801C66F4;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C6510 unk8;
    u8 _pad10[0x1C];
    Sub801C5548 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
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
    Sub801C66F4 unk64;
    Sub801C6510 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

/* @externs */
extern Sub801C52C0 D_801CBAF4;
void func_801CBAA8(Obj801C52C0 *arg0);

#endif /* FDAT066_H */
