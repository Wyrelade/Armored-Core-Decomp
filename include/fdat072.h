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

typedef struct Obj801C5560 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x1C];
    s16 unk7C;
    u8 _pad7E[0x8A];
    s16 unk108;
    u8 _pad10A[0x5A];
    u16 unk164;
} Obj801C5560;

/* @externs */
Sub801C5EC0 *func_80072120(s32 arg0);
void func_801C5D98();
Sub801C6954 *func_80073674(s32 arg0);
void func_801C6638();
void func_801C4EE8();
void func_801C539C();
void func_801C5158();
void func_801C550C();

#endif /* FDAT072_H */
