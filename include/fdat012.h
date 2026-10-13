#ifndef FDAT012_H
#define FDAT012_H

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
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4C94 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4D98 unk64;
    u8 _pad70[0x5C];
    Sub801C4C94 unkCC;
    u8 _padD4[0x88];
    s32 unk15C;
} Obj801C4C94;

typedef struct Sub801C5B1C {
    void (*unk0)();
    void (*unk4)();
} Sub801C5B1C;

typedef struct Obj801C5B1C {
    u8 _pad0[0x2C];
    Sub801C5B1C *unk2C;
} Obj801C5B1C;

typedef struct Sub801C5F98 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5F98;

typedef struct Obj801C7120 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5F98 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C7120;

/* @externs */
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
Sub801C5B1C *func_80072120(s32 arg0);
void func_801C6C1C();
void func_801C6EB0();
Sub801C5F98 *func_80073674(s32 arg0);
void func_801C6F84();

#endif /* FDAT012_H */
