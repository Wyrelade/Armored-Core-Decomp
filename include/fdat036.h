#ifndef FDAT036_H
#define FDAT036_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Task801C6254 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Task801C6254;

typedef struct Sub801C6254 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6254;

typedef struct Sub801C5458 {
    u8 _pad0[0x18];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C5458;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52C0;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x6];
    s16 unk16;
    u8 _pad18[0x14];
    Task801C6254 *unk2C;
    u8 _pad30[0x6];
    u16 unk36;
    Sub801C6254 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5458 unk64;
    u8 _pad9C[0x30];
    Sub8004DE88 unkCC;
    u8 _padD4[0x28];
    u16 unkFC;
    u16 unkFE;
    u8 _pad100[0x8];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A[4];
    u8 _pad14E[0xE];
    s32 unk15C;
    u16 unk160;
} Obj801C52C0;

/* @externs */
s16 func_80073904(void);
void func_801C4DBC();
void func_801C5208();
void func_801C5094();
void func_801C5404();
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
extern s32 D_801A5DC8;
void func_801C5F98();
void func_80078598(void);

#endif /* FDAT036_H */
