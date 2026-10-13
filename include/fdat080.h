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

typedef struct Sub801C6B04 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6B04;

typedef struct Obj801C6658 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C6B04 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C6658;

typedef struct Obj801C6B04 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C6B04 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C6B04;

typedef struct Obj801C6B68 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C6B68;

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
void func_801C639C(Obj801C5E2C *arg0);
void func_801C6438();
Sub801C6B04 *func_80073674(s32 arg0);
s32 func_801C6610(u8 arg0, u16 arg1);
void func_801C64D0();
void func_801C66CC();
void func_801C67E8();
extern Obj801C6B68 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C50B0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C50B0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C4E64 *arg0, Sub801C50B0 *arg1);
void func_800775B8(Obj801C4E64 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C50B0 *arg4, void (*arg5)());
void func_801C726C();
void func_801C8B70();
void func_801CA270();
void func_801CA780();
void func_801CAACC(Obj801C52C0 *arg0);
void func_801CADD0();
void func_8008A80C();
u16 func_80073904(void);

#endif /* FDAT080_H */
