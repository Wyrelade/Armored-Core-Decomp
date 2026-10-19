#ifndef FDAT010_H
#define FDAT010_H

#include "common.h"

/* @types */
typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Sub801C4D98 {
    u8 _pad0[0x2];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
} Sub801C4D98;

typedef struct Sub801C4E00 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C4E00;

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C4C94 unk8;
    u8 _pad10[0x26];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4C94 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4D98 unk64;
    u8 _pad70[0x6];
    s16 unk76;
    s16 unk78;
    s16 unk7A;
    s16 unk7C;
    u8 _pad7E[0x4E];
    Sub801C4C94 unkCC;
    u8 _padD4[0x88];
    s32 unk15C;
} Obj801C4C94;

typedef struct Sub801C4EE0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Sub801C4EE0;

typedef struct Sub801C5B1C {
    void (*unk0)();
    void (*unk4)();
} Sub801C5B1C;

typedef struct Sub801C5C6C {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
} Sub801C5C6C;

typedef struct Obj801C5B1C {
    u8 _pad0[0x2C];
    Sub801C5B1C *unk2C;
    u8 _pad30[0x8];
    Sub801C5C6C *unk38;
} Obj801C5B1C;

typedef struct Obj801C5F84 {
    u8 _pad0[0x8];
    u16 unk8;
} Obj801C5F84;

typedef struct Sub801C5F98 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5F98;

typedef struct Obj801C5F98 {
    u8 _pad0[0x14];
    Sub801C5F98 *unk14;
    u8 _pad18[0x10];
    u8 unk28;
} Obj801C5F98;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

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

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5EA8 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5EA8;

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

typedef struct Sub801C5550_fdat000 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5550_fdat000;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550_fdat000 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    struct Sub801C5314 *unk38;
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
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C52C0;

typedef struct Sub801C5314 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C5314;

typedef struct Elem801C5314 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5314;

/* @externs */
extern Sub801C4EE0 *D_801A5DC0;
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C4C94 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_8004F024(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
void func_80075FC0();
Sub801C5B1C *func_80072120(s32 arg0);
void func_801C58C4();
void func_801C5C6C();
void func_801C5D40();
void func_801C5EA4();
Sub801C5F98 *func_80073674(s32 arg0);
void func_801C5F84(Obj801C5F84 *arg0);
s32 func_80014D78(s32 arg0);
void func_801C5FD4();
void func_8008A80C();
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
s32 func_800754D0(Obj801C4C94 *arg0, u8 *arg1);
void func_80078E1C(Obj801C4C94 *arg0);
s32 rand(void);
extern u8 D_801C65DC[];
extern Elem801C5EA8 D_801D0B68[];
extern s16 D_801A26CE;
extern Elem801C5314 D_801D0B94[];
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_800759A4(s32 arg0, s32 arg1, Sub801C4C94 *arg2);

#endif /* FDAT010_H */
