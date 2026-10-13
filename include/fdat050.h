#ifndef FDAT050_H
#define FDAT050_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C67AC {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C67AC;

typedef struct Sub801C694C {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C694C;

typedef struct Sub801C6124 {
    u8 _pad0[0x68];
} Sub801C6124;

typedef struct Elem801C5454 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C5454;

typedef struct Obj801C5454 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x18];
    Sub801C67AC *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C694C *unk38;
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
    Sub801C6124 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C5454 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C5454;

typedef struct Sub801C5B54 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5B54;

typedef struct Obj801C5B54 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5B54 *unk14;
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
} Obj801C5B54;

/* @externs */
extern Elem801C5454 D_801CCD2C;
void func_801CCCE0(Obj801C5454 *arg0);
void func_801C5564(Obj801C5454 *arg0);
void func_801C6438(Obj801C5454 *arg0);
Sub801C67AC *func_80072120(s32 arg0);
void func_801C6554();
void func_801C67E8();
void func_8006D39C(Obj801C5454 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C694C(Obj801C5454 *arg0);
void func_801C69E8();
Sub801C5B54 *func_80073674(s32 arg0);
void func_801C6A80();
s32 func_801C6C30(u8 arg0, u16 arg1);
void func_801C6AF0();

#endif /* FDAT050_H */
