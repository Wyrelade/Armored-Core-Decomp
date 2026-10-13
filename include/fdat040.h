#ifndef FDAT040_H
#define FDAT040_H

#include "common.h"

/* @types */
typedef struct Elem801C52F0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52F0;

typedef struct Sub801C6A24 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6A24;

typedef struct Sub801C6AA0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6AA0;

typedef struct Sub801C6020 {
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
} Sub801C6020;

typedef struct Obj801C6020 {
    u16 unk0;
    u8 _pad2[0x5];
    u8 unk7;
} Obj801C6020;

typedef struct Sub801C6C84 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C6C84;

typedef struct Obj801C52F0 {
    Sub801C6A24 *unk0;
    u8 _pad4[0x4];
    Sub801C6AA0 unk8;
    u8 _pad10[0x1C];
    Sub801C6020 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Obj801C6020 *unk38;
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
    Sub801C6C84 unk64;
    Sub801C6AA0 unkCC;
    u8 _padD4[0x34];
    Elem801C52F0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
} Obj801C52F0;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Task801C6254 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6254;

typedef struct Sub801C6254 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6254;

typedef struct Sub801C5458 {
    u8 _pad0[0x18];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C5458;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52C0;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x6];
    s16 unk16;
    u8 _pad18[0x14];
    Task801C6254 *unk2C;
    u8 _pad30[0x6];
    u16 unk36;
    Sub801C6254 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5458 unk64;
    u8 _pad9C[0x30];
    Sub8004DE88 unkCC;
    u8 _padD4[0x28];
    u16 unkFC;
    u16 unkFE;
    u8 _pad100[0x8];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A[4];
    u8 _pad14E[0xE];
    s32 unk15C;
    u16 unk160;
} Obj801C52C0;

/* @externs */
void func_801CC038(Obj801C52F0 *arg0);
extern Elem801C52C0 D_801CC084;
extern Elem801C52F0 D_801CC5C8;
Sub801C6020 *func_80072120(s32 arg0);
void func_801C5D80();
void func_801C5E5C();
void func_801C5DE4();
void func_801C60F8();
void func_801C64A0();

#endif /* FDAT040_H */
