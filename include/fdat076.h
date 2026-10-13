#ifndef FDAT076_H
#define FDAT076_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C5938 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5938;

typedef struct Sub801C5B1C {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5B1C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5938 unk8;
    u8 _pad10[0x26];
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
    Sub801C5B1C unk64;
    Sub801C5938 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C558C {
    void (*unk0)();
    void (*unk4)();
} Sub801C558C;

typedef struct Obj801C558C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C558C *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C558C;

typedef struct Obj801C5938 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5938;

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
extern Sub801C52C0 D_801CAF1C;
void func_801CAED0(Obj801C52C0 *arg0);
Sub801C558C *func_80073674(s32 arg0);
s32 func_801C5544(u8 arg0, u16 arg1);
void func_801C5404();
void func_801C5600();
void func_801C5664();
void func_801C5748();
extern Obj801C5938 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C5938 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C5938 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5B1C *arg0, Sub801C5938 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C5938 *arg4, void (*arg5)());
void func_801C603C();
void func_801C989C(Obj801C52C0_fdat000 *arg0);
void func_801C7940();
void func_801C9040();
void func_801C9550();
void func_801C9BA0();
void func_8008A80C();
u16 func_80073904(void);

#endif /* FDAT076_H */
