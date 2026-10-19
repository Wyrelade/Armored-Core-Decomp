#ifndef FDAT056_H
#define FDAT056_H

#include "common.h"

/* @types */
typedef struct Obj801C5590 {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0xB8];
    s16 unkCC;
} Obj801C5590;

typedef struct Sub801C6508 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C6508;

typedef struct Obj801C64C0 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0xD0];
    Sub801C6508 *unk108;
} Obj801C64C0;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C667C {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C667C;

typedef struct Sub801C66B8 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C66B8;

typedef struct Sub801C69F8 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C69F8;

typedef struct Elem801C6814 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6814;

typedef struct Obj801C4F4C {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    u8 _pad18[0x14];
    Sub801C667C *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C66B8 *unk38;
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
    Sub801C69F8 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C6814 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
} Obj801C4F4C;

typedef struct Sub801C7358 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C7358;

typedef struct Obj801C7358 {
    u8 _pad0[0x14];
    Sub801C7358 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801C7358;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

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
} Sub801C5550;

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
    Sub801C5550 *unk2C;
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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub801C6AE0 {
    u8 _pad0[0x4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
} Sub801C6AE0;

typedef struct Elem801C5F64 {
    u8 _pad0[0x34];
} Elem801C5F64;

typedef struct Elem801C5F00 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x16];
    s16 unk1E;
    u8 _pad20[0xC];
    s32 unk2C;
    u8 _pad30[0x10];
} Elem801C5F00;

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

/* @externs */
void func_801C5518(Obj801C4EB8 *arg0);
void func_801C63EC(Obj801C64C0 *arg0);
extern Sub801C6508 D_801CD20C;
void func_801CD0DC(Obj801C4F4C *arg0);
Sub801C667C *func_80072120(s32 arg0);
void func_801C6538();
void func_8006D39C(Obj801C4F4C *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C67CC(Obj801C4F4C *arg0);
s32 func_801C6868(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C7358 *func_80073674(s32 arg0);
void func_801C703C();
s32 func_801C739C(s32 arg0);
s32 func_801C73F0(s32 arg0);
extern s32 D_801CD7E8;
extern s32 D_801CD7EC;
extern s32 D_801CD7F0;
extern s32 D_801CD7F4;
extern s32 D_801CD7F8;
extern s32 D_801CD7FC;
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C69F8 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C4F4C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C8248();
void func_801CBAA8(Obj801C52C0 *arg0);
void func_801C9B4C();
void func_801CB24C();
void func_801CB75C();
void func_801CBDAC();
u16 func_80073904(void);
void func_8004ECA8(Sub801C4EB8 *arg0);
extern s16 D_801A26C0;
extern s16 D_801A26C2;
extern s16 D_801A26C4;
s32 rand();
extern Elem801C5F64 D_80198B08[];
void func_801C6A24();
void func_801C6A38();
void func_801C6C64();
void func_801C6D70();
extern s32 D_801CD760;
extern s32 D_801CD764;
extern Elem801C5F00 D_801D0B68[];
extern Sub801C55B4 D_80039C78;
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C5F64 *arg2);
s32 func_80014D78(s32 arg0);

#endif /* FDAT056_H */
