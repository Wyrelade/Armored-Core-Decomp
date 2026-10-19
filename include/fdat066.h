#ifndef FDAT066_H
#define FDAT066_H

#include "common.h"

/* @types */
typedef struct Sub801C5548 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5548;

typedef struct Sub801C52C0 {
    u8 _pad0[0x30];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 _pad34[0x6];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C6510 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6510;

typedef struct Sub801C66F4 {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
    u8 _padC[0x5C];
} Sub801C66F4;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C6510 unk8;
    u8 _pad10[0x1C];
    Sub801C5548 *unk2C;
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
    Sub801C66F4 unk64;
    Sub801C6510 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C5808 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C5808;

typedef struct Obj801C5808 {
    u8 _pad0[0x2C];
    Sub801C5548 *unk2C;
    u8 _pad30[0x8];
    Sub801C5808 *unk38;
} Obj801C5808;

typedef struct Sub801C6394 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6394;

typedef struct Obj801C6394 {
    u8 _pad0[0x14];
    Sub801C6394 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801C6394;

typedef struct Obj801C6510 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C6510;

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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Elem801C5F64 {
    u8 _pad0[0x34];
} Elem801C5F64;

/* @externs */
extern Sub801C52C0 D_801CBAF4;
void func_801CBAA8(Obj801C52C0 *arg0);
Sub801C5548 *func_80072120(s32 arg0);
void func_801C52F0();
void func_801C5584();
void func_801C56A4();
void func_8006D39C(Obj801C5808 *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C5808(Obj801C5808 *arg0);
void func_801C58A4();
Sub801C6394 *func_80073674(s32 arg0);
void func_801C6078();
extern Obj801C6510 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C6510 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C6510 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C66F4 *arg0, Sub801C6510 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6510 *arg4, void (*arg5)());
void func_801C6C14();
void func_801CA474(Obj801C52C0_fdat000 *arg0);
void func_801C8518();
void func_801C9C18();
void func_801CA128();
void func_801CA778();
void func_8008A80C();
u16 func_80073904(void);
s32 rand();
extern Elem801C5F64 D_80198B08[];
void func_801C5A60();
void func_801C5A74();
void func_801C5CA0();
void func_801C5DAC();
extern Sub801C55B4 D_80039C78;
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C5F64 *arg2);

#endif /* FDAT066_H */
