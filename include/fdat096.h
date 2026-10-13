#ifndef FDAT096_H
#define FDAT096_H

#include "common.h"

/* @types */
typedef struct Sub801C5D10 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11;
    s16 unk12;
    u16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
} Sub801C5D10;

typedef struct Obj801C5D10 {
    u16 unk0;
    u8 _pad2[0x5];
    u8 unk7;
} Obj801C5D10;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C5E78 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5E78;

typedef struct Sub801C605C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C605C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5E78 unk8;
    u8 _pad10[0x1C];
    Sub801C5D10 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Obj801C5D10 *unk38;
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
    Sub801C605C unk64;
    Sub801C5E78 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Obj801C5E78 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5E78;

/* @externs */
extern Elem801C52C0 D_801CC098;
void func_801CC04C(Obj801C52C0 *arg0);
extern Elem801C52C0 D_801CC5DC[];
extern Elem801C52C0 D_801CD5A8;
Sub801C5D10 *func_80072120(s32 arg0);
void func_801C5B4C();
void func_801C5A70();
void func_801C5AD4();
void func_801C63AC();
void func_801C6640();

#endif /* FDAT096_H */
