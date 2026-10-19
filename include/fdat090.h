#ifndef FDAT090_H
#define FDAT090_H

#include "common.h"

/* @types */
typedef struct Elem801C52C0 {
    u8 _pad0[0x30];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 _pad34[0x6];
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
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5550;

typedef struct Sub801C6440 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6440;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
    u8 _padC[0x5C];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C6440 *unk38;
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
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

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

typedef struct Elem801C5384 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C5384;

typedef struct Sub801C5384 {
    u8 _pad0[0x68];
} Sub801C5384;

typedef struct Sub801C6B84 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6B84;

typedef struct Obj801C5384 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C6B84 *unk38;
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
    Sub801C5384 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C5384 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C5384;

typedef struct Sub801C6730 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6730;

typedef struct Obj801C6730 {
    u8 _pad0[0x14];
    Sub801C6730 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23[0x5];
    u8 unk28;
} Obj801C6730;

typedef struct Obj801C7568 {
    u8 _pad0[0x160];
    u16 unk160;
} Obj801C7568;

typedef struct Obj801C75B4 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C75B4;

typedef struct Sub801C5550_fdat000 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550_fdat000;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550_fdat000 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
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
    u8 _pad135[0x1];
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C52C0_fdat000;

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

typedef struct Sub801C5550_fdat002 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550_fdat002;

typedef struct Sub801C4EB8 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
} Sub801C4EB8;

typedef struct Sub801C6C20 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6C20;

typedef struct Obj801C4EB8 {
    Sub801C6C20 *unk0;
    u8 _pad4[0xE];
    u16 unk12;
    u8 _pad14[0x2];
    u16 unk16;
    u16 unk18;
    u8 _pad1A[0x8];
    s16 unk22;
    u8 _pad24[0x8];
    Sub801C5550_fdat002 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C4EB8 unk64;
    u8 _pad67[0x65];
    s16 unkCC;
    s16 unkCE;
    u8 _padD0[0x90];
    u16 unk160;
} Obj801C4EB8;

typedef struct Sub801C5FDC {
    void (*unk0)();
} Sub801C5FDC;

typedef struct Obj801C5F00 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5FDC *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x4];
    u8 unk22;
    u8 unk23;
    u16 unk24;
} Obj801C5F00;

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5F00 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5F00;

typedef struct Obj801C5698 {
    u8 _pad0[0x2C];
    s16 unk2C;
    u8 _pad2E[0x8];
    s16 unk36;
    u8 _pad38[0x18];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5798 unk64;
} Obj801C5698;

typedef struct Elem801C9264 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C9264;

typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Task801C6D58 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6D58;

typedef struct Sub801C7624 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C7624;

typedef struct Obj801C730C {
    u8 _pad0[0x2C];
    Task801C6D58 *unk2C;
    u8 _pad30[0x8];
    Sub801C7624 *unk38;
} Obj801C730C;

typedef struct Task801C6A70 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C6A70;

typedef struct Sub801C6A70 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C6A70;

typedef struct Obj801C6A70 {
    u8 _pad0[0x2C];
    Task801C6A70 *unk2C;
    u8 _pad30[0x8];
    Sub801C6A70 *unk38;
} Obj801C6A70;

typedef struct Elem801C6A70 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C6A70;

/* @externs */
extern Elem801C5384 D_801CCB98;
void func_801CCB4C(Obj801C52C0 *arg0);
Sub801C5550 *func_80072120(s32 arg0);
void func_801C67DC();
void func_8006D39C(Obj801C5384 *arg0);
s32 func_8006D45C();
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C6B84(Obj801C5384 *arg0);
s32 func_801C6C20(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
void func_801C6CB8();
Sub801C6730 *func_80073674(s32 arg0);
void func_801C6D98(Obj801C5F00 *arg0);
void func_801C6DFC(Obj801C5F00 *arg0);
s32 func_80014D78(s32 arg0);
void func_801C6EE0();
void func_801C7424();
extern s32 D_801CD1AC;
extern Obj801C75B4 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C55B4 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C55B4 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5798 *arg0, Sub801C55B4 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55B4 *arg4, void (*arg5)());
void func_801C7CB8();
void func_801C95BC();
void func_801CACBC();
void func_801CB1CC();
void func_801CB518(Obj801C52C0_fdat000 *arg0);
void func_801CB81C();
void func_8008A80C();
u16 func_80073904(void);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern Elem801C5F00 D_801D0B68[];
void func_8004E98C(Sub801C5798 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C55F4();
void func_801C5490();
void func_801C5644();
extern u8 D_80039C78[];
extern Elem801C9264 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, u8 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C9264 *arg2);
extern s16 D_801A26CE;
extern Elem801C6A70 D_801D0B94[];

#endif /* FDAT090_H */
