#ifndef FDAT076_H
#define FDAT076_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C5938 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5938;

typedef struct Sub801C5B1C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5B1C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5938 unk8;
    u8 _pad10[0x26];
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
    Sub801C5B1C unk64;
    Sub801C5938 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C558C {
    void (*unk0)();
    void (*unk4)();
} Sub801C558C;

typedef struct Obj801C558C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C558C *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C558C;

/* @externs */
extern Sub801C52C0 D_801CAF1C;
void func_801CAED0(Obj801C52C0 *arg0);
Sub801C558C *func_80073674(s32 arg0);
s32 func_801C5544(u8 arg0, u16 arg1);
void func_801C5404();
void func_801C5600();
void func_801C5664();

#endif /* FDAT076_H */
