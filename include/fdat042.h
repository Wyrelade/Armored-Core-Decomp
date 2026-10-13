#ifndef FDAT042_H
#define FDAT042_H

#include "common.h"

/* @types */
typedef struct Obj801C5624 {
    u8 _pad0[0x12];
    u16 unk12;
    u8 _pad14[0xB8];
    s16 unkCC;
} Obj801C5624;

typedef struct Elem801C659C {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C659C;

typedef struct Sub801C7910 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C7910;

typedef struct Sub801C70F0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C70F0;

typedef struct Sub801C6E3C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C6E3C;

typedef struct Obj801C6554 {
    u8 _pad0[0x8];
    Sub801C7910 unk8;
    u8 _pad10[0x1C];
    Sub801C70F0 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
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
    Sub801C6E3C unk64;
    Sub801C7910 unkCC;
    u8 _padD4[0x34];
    Elem801C659C *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C6554;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52C0;

typedef struct Sub801C5C04 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5C04;

typedef struct Sub801C52C0 {
    u8 _pad0[0x68];
} Sub801C52C0;

typedef struct Sub801C5578 {
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
} Sub801C5578;

typedef struct Sub801C5680 {
    u16 unk0;
    u8 _pad2[0x5];
    s8 unk7;
} Sub801C5680;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5C04 unk8;
    u8 _pad10[0x1C];
    Sub801C5578 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C5680 *unk38;
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
    Sub801C52C0 unk64;
    Sub801C5C04 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Obj801C7360 {
    u8 _pad0[0x8];
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u8 _padE[0x14];
    u16 unk22;
    u16 unk24;
    u16 unk26;
} Obj801C7360;

typedef struct Sub801C7394 {
    void (*unk0)();
} Sub801C7394;

typedef struct Obj801C7394 {
    u8 _pad0[0x14];
    Sub801C7394 *unk14;
} Obj801C7394;

/* @externs */
void func_801C55AC(Obj801C5624 *arg0);
void func_801C6480(Obj801C6554 *arg0);
extern Elem801C659C D_801CCFD8;
void func_801CCEA8(Obj801C52C0 *arg0);
void func_8004E98C(Sub801C6E3C *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C6D64();
Sub801C70F0 *func_80072120(s32 arg0);
void func_801C6E98();
void func_801C7240();
Sub801C7394 *func_80073674(s32 arg0);
void func_801C7360(Obj801C7360 *arg0);
void func_801C73D0();
void func_801C74EC();

#endif /* FDAT042_H */
