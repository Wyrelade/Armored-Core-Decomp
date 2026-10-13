#ifndef FDAT048_H
#define FDAT048_H

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

typedef struct Sub801C5B54 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5B54;

typedef struct Obj801C572C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5B54 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C572C;

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

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

/* @externs */
void func_8004E98C(Sub801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CB4D8(Obj801C5454 *arg0);
extern Elem801C52C0 D_801CB524;
void func_801C9648();
void func_801C9B58();
Sub801C5578 *func_80072120(s32 arg0);
void func_801C53E0();
void func_801C54BC();
void func_801C5444();
void func_801C5758();
Sub801C5B54 *func_80073674(s32 arg0);
s32 func_801C59B8(u8 arg0, u16 arg1);
void func_801C5878();
void func_801C5A74();
void func_801C5B90();
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

#endif /* FDAT048_H */
