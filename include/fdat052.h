#ifndef FDAT052_H
#define FDAT052_H

#include "common.h"

/* @types */
typedef struct Sub801C7410 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C7410;

typedef struct Sub801C6AEC {
    void (*unk0)();
    void (*unk4)();
} Sub801C6AEC;

typedef struct Sub801C75F4 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C75F4;

typedef struct Sub801C6864 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C6864;

typedef struct Obj801C6864 {
    u8 _pad0[0x8];
    Sub801C7410 unk8;
    u8 _pad10[0x1C];
    Sub801C6AEC *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
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
    Sub801C75F4 unk64;
    Sub801C7410 unkCC;
    u8 _padD4[0x34];
    Sub801C6864 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C6864;

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

typedef struct Obj801C67F4 {
    u8 _pad0[0x36];
    s16 unk36;
    u8 _pad38[0xA];
    s8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C6124 unk64;
    u8 _padCC[0x3E];
    s8 unk10A;
    s8 unk10B;
} Obj801C67F4;

typedef struct Sub801C6D68 {
    void (*unk0)();
} Sub801C6D68;

typedef struct Obj801C6D68 {
    u8 _pad0[0x14];
    Sub801C6D68 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
} Obj801C6D68;

typedef struct Obj801C7410 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C7410;

/* @externs */
extern Elem801C5454 D_801CD8E8;
void func_801CC9A8(Obj801C6864 *arg0);
extern u8 D_8019FB68[];
Obj801C5454 *func_80078A2C(void);
void func_80078B14(Obj801C5454 *arg0, u8 *arg1);
void func_8004E98C(Sub801C6124 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C614C();
void func_801C6760();
extern Sub801C6864 D_801CE024;
void func_801CD89C(Obj801C6864 *arg0);
Sub801C6AEC *func_80072120(s32 arg0);
void func_801C6894();
void func_801C6B28();
Sub801C6D68 *func_80073674(s32 arg0);
void func_801C6C8C();
void func_801C6CF0();
void func_801C6DD4();
void func_801C6EF0();
extern s16 D_801D17AE;
extern s16 D_801D17EE;
extern s16 D_801D182E;
extern s16 D_801D186E;
extern Obj801C7410 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C7410 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C7410 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C75F4 *arg0, Sub801C7410 *arg1);
void func_800775B8(Obj801C6864 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C7410 *arg4, void (*arg5)());
void func_801C7B14();
void func_801C9418();
void func_801CAB18();
void func_801CB028();
void func_801CB678();
void func_801CB374(Obj801C6864 *arg0);

#endif /* FDAT052_H */
