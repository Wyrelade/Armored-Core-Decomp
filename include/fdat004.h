#ifndef FDAT004_H
#define FDAT004_H

#include "common.h"

/* @types */
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

typedef union Sub801C52A0 {
    s32 unk0;
    u8 unk0_b[4];
} Sub801C52A0;

typedef struct Obj801C59E8 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x32];
    s16 unk36;
    u8 _pad38[0x4];
    Sub801C52A0 unk3C;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4D98 unk64;
    u8 _pad70[0xC];
    s16 unk7C;
    u8 _pad7E[0xCA];
    s16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C59E8;

typedef struct Sub801C5CD0 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5CD0;

typedef struct Obj801C66D8 {
    u8 _pad0[0x2C];
    Sub801C5CD0 *unk2C;
} Obj801C66D8;

typedef struct Obj801C6720 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6720;

typedef struct Sub801C5FDC {
    void (*unk0)();
} Sub801C5FDC;

typedef struct Obj801C6734 {
    u8 _pad0[0x14];
    Sub801C5FDC *unk14;
} Obj801C6734;

typedef struct Sub801A2828 {
    u8 _pad0[0xE];
    s16 unkE;
} Sub801A2828;

typedef struct Obj8019FB68 {
    u8 _pad0[0x2CC0];
    Sub801A2828 unk2CC0;
} Obj8019FB68;

typedef struct Obj8019F51C {
    u8 _pad0[0x20];
    void (*unk20[1])(Sub801A2828 *);
} Obj8019F51C;

/* @externs */
u16 func_80073904(void);
void func_801C4FFC();
void func_801C5534();
void func_801C52A0(Obj801C59E8 *arg0);
void func_801C58AC();
Sub801C5CD0 *func_80072120(s32 arg0);
void func_801C6640();
Sub801C5FDC *func_80073674(s32 arg0);
void func_801C6720(Obj801C6720 *arg0);
void func_801C6770();
void func_801C6948();
void func_801C6A64();
extern s32 D_801AC80C;
extern Obj8019FB68 D_8019FB68;
extern Obj8019F51C *D_8019F51C;
void func_80078B14(Sub801A2828 *arg0, Obj8019FB68 *arg1);
void func_80056C6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

#endif /* FDAT004_H */
