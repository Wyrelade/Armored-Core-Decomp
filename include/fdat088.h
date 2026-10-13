#ifndef FDAT088_H
#define FDAT088_H

#include "common.h"

/* @types */
typedef struct Obj801C68EC {
    u8 _pad0[0x160];
    u16 unk160;
} Obj801C68EC;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C52DC {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52DC;

typedef struct Sub801C6B1C {
    u8 _pad0[0x68];
} Sub801C6B1C;

typedef struct Sub801C5594 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5594;

typedef struct Sub801C5878 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5878;

typedef struct Obj801C52DC {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C5594 *unk2C;
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
    Sub801C6B1C unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C52DC *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
} Obj801C52DC;

typedef struct Obj801C5878 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5878 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 _pad29;
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C5878;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
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
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x18];
    s16 unk124;
    s16 unk126;
    s16 unk128;
    s16 unk12A;
    s16 unk12C;
    s16 unk12E;
    u8 unk130;
    u8 unk131;
    u8 unk132;
    u8 unk133;
    u8 unk134;
    u8 _pad135;
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
} Obj801C52C0;

typedef struct Sub801C5634 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x2];
    u8 unk9;
    u8 _padA[0x23];
    u8 unk2D;
    u8 _pad2E[0xA];
    u16 unk38;
} Sub801C5634;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub801C5F14 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C5F14;

typedef struct Obj801C5F14 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5F14 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 unk23;
    u16 unk24;
    u8 _pad26[0x2];
    u16 unk28;
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C5F14;

typedef struct Elem801C7308 {
    u8 _pad0[0x34];
} Elem801C7308;

/* @externs */
extern s32 D_801CC9D0;
extern Elem801C52DC D_801CBF1C;
void func_801CBED0(Obj801C52DC *arg0);
extern Elem801C52DC D_801CC460;
Sub801C5594 *func_80072120(s32 arg0);
void func_801C533C();
void func_801C55D0();
Sub801C5878 *func_80073674(s32 arg0);
s32 func_801C5830(u8 arg0, u16 arg1);
void func_801C56F0();
s32 func_80014D78(u8 arg0);
void func_801C6028();
void func_801C656C();
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C6B1C *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C52DC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C703C();
void func_801CA89C(Obj801C52C0 *arg0);
void func_801C8940();
void func_801CA040();
void func_801CA550();
void func_801CABA0();
void func_8008A80C();
u16 func_80073904(void);
s32 rand(void);
extern Elem801C7308 D_80198B08[];
void func_801C5A10();
void func_801C5A24();
void func_801C5C50();
void func_801C5D5C();

#endif /* FDAT088_H */
