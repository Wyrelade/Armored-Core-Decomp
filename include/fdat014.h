#ifndef FDAT014_H
#define FDAT014_H

#include "common.h"

/* @types */
typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Sub801C4D98 {
    u8 unk0;
    u8 _pad1[0x1];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
    u8 _padC[0x2];
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

typedef struct Obj801C504C {
    u8 _pad0[0x8];
    Sub801C4C94 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x22];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 _pad3D[0x4];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C504C *, u8);
    u8 _pad54[0x10];
    Sub801C4D98 unk64;
    s16 unk72;
    u8 _pad74[0x58];
    s16 unkCC;
} Obj801C504C;

typedef struct Task801C6D58 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6D58;

typedef struct Obj801C6D58 {
    u8 _pad0[0x2C];
    Task801C6D58 *unk2C;
} Obj801C6D58;

typedef struct Task801C788C {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Task801C788C;

typedef struct Obj801C788C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Task801C788C *unk14;
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
} Obj801C788C;

typedef struct Task801C7A24 {
    void (*unk0)();
    void (*unk4)();
    s8 unk8;
} Task801C7A24;

typedef struct Obj801C7A24 {
    u8 _pad0[0x14];
    Task801C7A24 *unk14;
} Obj801C7A24;

/* @externs */
void func_8004EC4C(Sub801C4D98 *arg0);
void func_80075FC0();
extern u8 D_801C8478[];
void func_8004CE44(s32 arg0, Sub801C4C94 *arg1, s32 arg2, s32 arg3);
void func_8004ECA8(Sub801C4D98 *arg0);
void func_80077B78(Obj801C4C94 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_801C4CB0(Obj801C4C94 *arg0);
s32 rand(void);
extern Sub801C4EE0 *D_801A5DC0;
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C4C94 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_8004F024(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
s32 func_8004F080(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
void func_801C4FD4(Obj801C504C *arg0);
void func_801C5A6C(Obj801C504C *arg0);
extern u8 D_800764C4[];
void func_80076578(Obj801C504C *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_8007790C(Obj801C504C *arg0, u8 arg1, s32 arg2, s32 arg3, s16 *arg4, s32 arg5, u8 *arg6);
void func_80078598(Obj801C504C *arg0);
s32 func_801C5B8C(Obj801C504C *arg0);
void func_801C5C68(Obj801C504C *arg0, s32 arg1, s32 arg2);
void func_801C5910();
void *func_80072120(s32 arg0);
void func_801C6B00();
void func_801C6EA8();
void *func_80073674(s32 arg0);
s32 func_801C7844(u8 arg0, u16 arg1);
void func_801C7704();
void func_801C7900();
s32 func_80014D78(u8 arg0);
void func_801C7A70();
void func_801C7FB4();
extern s32 D_801C8540;
extern s32 D_801C8544;
s32 func_801C830C(s32 arg0);
void func_8008A80C();

#endif /* FDAT014_H */
