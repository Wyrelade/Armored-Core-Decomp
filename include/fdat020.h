#ifndef FDAT020_H
#define FDAT020_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Sub801C52D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C52D0;

typedef struct Sub801C563C {
    u8 _pad0[0x38];
} Sub801C563C;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C52D0 unk8;
    Sub801C52D0 unk10;
    u8 _pad18[0x1E];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C563C unk64;
    u8 _pad9C[0x30];
    Sub801C52D0 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C53D4 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C53D4;

typedef struct Sub801C76D0 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C76D0;

typedef struct Obj801C53D4 {
    u8 _pad0[0x2C];
    Sub801C53D4 *unk2C;
    u8 _pad30[0x8];
    Sub801C76D0 *unk38;
} Obj801C53D4;

typedef struct Obj801C5458 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5458;

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

typedef struct Elem801C7108 {
    u8 _pad0[0x34];
} Elem801C7108;

/* @externs */
extern Sub801C52C0 D_801CAA3C;
void func_801CA9F0(Obj801C52C0 *arg0);
Sub801C53D4 *func_80072120(s32 arg0);
void func_801C52F0();
extern s32 D_801CAF80;
void func_8008A80C(void);
void func_8008C2FC(s32 arg0);
extern Obj801C5458 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C52D0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C563C *arg0, Sub801C52D0 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4, void (*arg5)());
void func_801C5B5C();
void func_801C93BC(Obj801C52C0_fdat000 *arg0);
void func_801C96C0();
void func_801C7460();
void func_801C8B60();
void func_801C9070();
u16 func_80073904(void);
extern Sub801C55B4 D_80039C78;
extern Elem801C7108 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C7108 *arg2);

#endif /* FDAT020_H */
