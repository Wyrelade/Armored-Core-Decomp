#ifndef FDAT034_H
#define FDAT034_H

#include "common.h"

/* @types */
typedef struct Sub801C4DE4 {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[0x10];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C4DE4;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C60B4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C60B4;

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
    Sub801C4DE4 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    u8 _pad18[0x14];
    Sub801C60B4 *unk2C;
    u8 _pad30[0x6];
    u16 unk36;
    Sub801C6254 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
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
    u8 _pad162[0x2];
} Obj801C52C0;

typedef struct Sub801C6434 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6434;

typedef struct Obj801C60B4 {
    u8 _pad0[0x2C];
    Sub801C60B4 *unk2C;
    u8 _pad30[0x8];
    Sub801C6434 *unk38;
} Obj801C60B4;

typedef struct Sub801C61D0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C61D0;

typedef struct Obj801C61D0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C61D0 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C61D0;

typedef struct Sub801C6AE0 {
    u8 _pad0[0x4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
} Sub801C6AE0;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C52C0_fdat000 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0_fdat000;

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

typedef struct Obj801C52C0_fdat000 {
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
    Elem801C52C0_fdat000 *unk108;
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

/* @externs */
extern Elem801C52C0 D_801CC4EC;
void func_801CC4A0(Obj801C52C0 *arg0);
Sub801C60B4 *func_80072120(s32 arg0);
void func_801C5E5C();
void func_801C60F0();
void func_8006D39C(Obj801C52C0 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_801C6254(Obj801C52C0 *arg0);
void func_801C62F0();
void func_801C6388();
Sub801C61D0 *func_80073674(s32 arg0);
s32 func_801C65A8(u8 arg0, u16 arg1);
void func_801C6468();
void func_801C6664();
void func_801C6780();
extern s16 D_801A26C0;
extern s16 D_801A26C2;
extern s16 D_801A26C4;
void func_8004C318(s32 arg0);
s32 func_80052338(void);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
void func_8008A80C(void);
extern u16 D_8019F528;
extern s32 D_801CCA80;
extern s32 D_801CCA84;
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5458 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C760C();
void func_801CAE6C(Obj801C52C0_fdat000 *arg0);
void func_801C8F10();
void func_801CA610();
void func_801CAB20();
void func_801CB170();
u16 func_80073904(void);
s32 rand(void);
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80077B78(Obj801C52C0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078598(void);
void func_80078E1C(Obj801C52C0 *arg0);
s32 func_801C5738(Obj801C52C0 *arg0);
extern u8 D_801CCA30[];
extern u8 D_801CCA54[];

#endif /* FDAT034_H */
