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

/* @externs */
void func_801C5518(Obj801C5590 *arg0);
void func_801C63EC(Obj801C64C0 *arg0);
extern Sub801C6508 D_801CD20C;
void func_801CD0DC(Obj801C4F4C *arg0);
Sub801C667C *func_80072120(s32 arg0);
void func_801C6538();

#endif /* FDAT056_H */
