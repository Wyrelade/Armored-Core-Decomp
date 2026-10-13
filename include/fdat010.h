#ifndef FDAT010_H
#define FDAT010_H

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

typedef struct Sub801C4EE0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Sub801C4EE0;

typedef struct Sub801C5B1C {
    void (*unk0)();
    void (*unk4)();
} Sub801C5B1C;

typedef struct Obj801C5B1C {
    u8 _pad0[0x2C];
    Sub801C5B1C *unk2C;
} Obj801C5B1C;

typedef struct Obj801C5F84 {
    u8 _pad0[0x8];
    u16 unk8;
} Obj801C5F84;

typedef struct Sub801C5F98 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5F98;

typedef struct Obj801C5F98 {
    u8 _pad0[0x14];
    Sub801C5F98 *unk14;
    u8 _pad18[0x10];
    u8 unk28;
} Obj801C5F98;

/* @externs */
extern Sub801C4EE0 *D_801A5DC0;
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C4C94 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_8004F024(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
void func_80075FC0();
Sub801C5B1C *func_80072120(s32 arg0);
void func_801C58C4();
void func_801C5C6C();
void func_801C5D40();
void func_801C5EA4();
Sub801C5F98 *func_80073674(s32 arg0);
void func_801C5F84(Obj801C5F84 *arg0);
s32 func_80014D78(u8 arg0);
void func_801C5FD4();

#endif /* FDAT010_H */
