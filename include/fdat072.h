#ifndef FDAT072_H
#define FDAT072_H

#include "common.h"

/* @types */
typedef struct Sub801C5EC0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5EC0;

typedef struct Obj801C5EC0 {
    u8 _pad0[0x2C];
    Sub801C5EC0 *unk2C;
} Obj801C5EC0;

typedef struct Sub801C6954 {
    void (*unk0)();
    void (*unk4)();
    s8 unk8;
    s8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6954;

typedef struct Obj801C6954 {
    u8 _pad0[0x14];
    Sub801C6954 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801C6954;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub8004F080 {
    u8 _pad0[0x18];
} Sub8004F080;

typedef struct Sub801C4D28 {
    u8 _pad0[0x8];
    s16 unk8;
} Sub801C4D28;

typedef struct Obj801C5560 {
    u8 _pad0[0x4];
    Sub801C4D28 *unk4;
    Sub8004DE88 unk8;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x22];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 _pad3D[0x4];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub8004F080 unk64;
    s16 unk7C;
    u8 _pad7E[0x4E];
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    s16 unk108;
    u8 _pad10A[0x5A];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C5560;

typedef struct Elem801C6524 {
    u8 _pad0[0x34];
} Elem801C6524;

/* @externs */
Sub801C5EC0 *func_80072120(s32 arg0);
void func_801C5D98();
Sub801C6954 *func_80073674(s32 arg0);
void func_801C6638();
void func_801C4EE8(Obj801C5560 *arg0, s32 arg1);
void func_801C539C();
void func_801C5158();
void func_801C550C();
s32 rand();
extern Elem801C6524 D_80198B08[];
void func_801C6020();
void func_801C6034();
void func_801C6260();
void func_801C636C();

#endif /* FDAT072_H */
