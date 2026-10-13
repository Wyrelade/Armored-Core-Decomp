#ifndef FDAT016_H
#define FDAT016_H

#include "common.h"

/* @types */
typedef struct Obj801C6A60 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0x20];
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0xA8];
    u8 *unk108;
} Obj801C6A60;

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

typedef struct Task801C6D58 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6D58;

typedef struct Sub801C7624 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C7624;

typedef struct Obj801C730C {
    u8 _pad0[0x2C];
    Task801C6D58 *unk2C;
    u8 _pad30[0x8];
    Sub801C7624 *unk38;
} Obj801C730C;

typedef struct Task801C788C {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Task801C788C;

typedef struct Obj801C78F4 {
    u8 _pad0[0x14];
    Task801C788C *unk14;
} Obj801C78F4;

typedef struct Sub801C7AB8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C7AB8;

typedef struct Obj801C7AB8 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C7AB8 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C7AB8;

/* @externs */
void func_801C62CC();
void func_801C69BC(Obj801C6A60 *arg0);
void func_801C66DC();
void func_801C6904();
void func_801C68E4(void);
extern u8 D_801CDC7C[];
void func_801CDBD4(Obj801C52C0 *arg0);
void *func_80072120(s32 arg0);
void func_801C72A8();
void func_801C730C(Obj801C730C *arg0);
void func_801C7390();
void func_8006D39C(Obj801C730C *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C7624(Obj801C730C *arg0);
void func_801C76C0();
void *func_80073674(s32 arg0);
void func_801C7758();
s32 func_801C7A70(u8 arg0, u16 arg1);
void func_801C7930();
void func_801C7B2C();
void func_801C7C48();

#endif /* FDAT016_H */
