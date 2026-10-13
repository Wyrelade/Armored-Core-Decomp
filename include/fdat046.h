#ifndef FDAT046_H
#define FDAT046_H

#include "common.h"

/* @types */
typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52C0;

typedef struct Sub801C5C04 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5C04;

typedef struct Sub801C52C0 {
    u8 _pad0[0x68];
} Sub801C52C0;

typedef struct Sub801C5578 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11;
    s16 unk12;
    u16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
} Sub801C5578;

typedef struct Sub801C5680 {
    u16 unk0;
    u8 _pad2[0x5];
    s8 unk7;
} Sub801C5680;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5C04 unk8;
    u8 _pad10[0x1C];
    Sub801C5578 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C5680 *unk38;
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
    Sub801C52C0 unk64;
    Sub801C5C04 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C572C {
    void (*unk0)();
    void (*unk4)();
} Sub801C572C;

typedef struct Obj801C572C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C572C *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C572C;

/* @externs */
extern Elem801C52C0 D_801CB1E8;
void func_801CB19C(Obj801C52C0 *arg0);
extern Elem801C52C0 D_801CB72C;
Sub801C5578 *func_80072120(s32 arg0);
void func_801C5320();
void func_801C55B4();
Sub801C572C *func_80073674(s32 arg0);
void func_801C5718();

#endif /* FDAT046_H */
