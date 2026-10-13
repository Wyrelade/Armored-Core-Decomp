#ifndef FDAT098_H
#define FDAT098_H

#include "common.h"

/* @types */
typedef struct Sub801C6A5C {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6A5C;

typedef struct Obj801C6BAC {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Obj801C6BAC;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C605C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C605C;

typedef struct Sub801C7788 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C7788;

typedef struct Obj801C52C0 {
    Sub801C7788 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C6A5C *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Obj801C6BAC *unk38;
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
    Sub8004DE88 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
} Obj801C52C0;

typedef struct Sub801C75A4 {
    void (*unk0)();
    void (*unk4)();
} Sub801C75A4;

typedef struct Obj801C75A4 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C75A4 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C75A4;

/* @externs */
extern Elem801C52C0 D_801CCDF8[];
void func_801CCDAC(Obj801C52C0 *arg0);

#endif /* FDAT098_H */
