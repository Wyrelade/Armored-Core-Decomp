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

typedef struct Obj801C52B8 {
    u8 _pad0[0x1F8];
    u16 unk1F8;
    u8 _pad1FA[0x1C];
    u16 unk216;
} Obj801C52B8;

typedef struct Sub801C52B8 {
    u8 _pad0[0x20];
    Obj801C52B8 *unk20;
} Sub801C52B8;

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C4C94 unk8;
    Sub801C4C94 unk10;
    u8 _pad18[0x1E];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4C94 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    Sub801C52B8 *unk60;
    Sub801C4D98 unk64;
    u8 _pad70[0x8];
    s16 unk78;
    u8 _pad7A[0x2];
    s16 unk7C;
    u8 _pad7E[0x4E];
    Sub801C4C94 unkCC;
    u8 _padD4[0x2A];
    u16 unkFE;
    u8 _pad100[0x48];
    s16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
} Obj801C4C94;

typedef struct Sub801C5B1C {
    void (*unk0)();
    void (*unk4)();
} Sub801C5B1C;

typedef struct Sub801C6EB0 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
} Sub801C6EB0;

typedef struct Obj801C5B1C {
    u8 _pad0[0x2C];
    Sub801C5B1C *unk2C;
    u8 _pad30[0x8];
    Sub801C6EB0 *unk38;
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

typedef struct Elem801C7B90 {
    u8 unk0;
    u8 _pad1[0x2B];
} Elem801C7B90;

typedef struct Sub801C5FDC {
    void (*unk0)();
} Sub801C5FDC;

typedef struct Obj801C5F00 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5FDC *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x4];
    u8 unk22;
    u8 unk23;
    u16 unk24;
} Obj801C5F00;

typedef struct Elem801C5F00 {
    u8 _pad0[0x2C];
    s32 unk2C;
    u8 _pad30[0x10];
} Elem801C5F00;

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

typedef struct Elem801C52B8 {
    Sub801C4C94 unk0;
    Sub801C4C94 unk8;
    u8 _pad10[0xC];
    u16 unk1C;
    u8 _pad1E[0x16];
} Elem801C52B8;

/* @externs */
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
Sub801C5B1C *func_80072120(s32 arg0);
void func_801C6C1C();
void func_801C6EB0();
Sub801C5F98 *func_80073674(s32 arg0);
void func_801C6F84();
s32 func_801C729C(u8 arg0, u16 arg1);
void func_801C715C();
void func_801C7358(Obj801C5F00 *arg0);
void func_801C73BC(Obj801C5F00 *arg0);
void func_801C74A0();
void func_801C75BC();
extern u16 D_8019F528;
extern s32 D_801C7DE4;
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern Elem801C7B90 D_8019FB94[];
extern Elem801C5F00 D_801D0B68[];
extern s32 D_801AC80C;
extern Obj8019FB68 D_8019FB68;
extern Obj8019F51C *D_8019F51C;
void func_80078B14(Sub801A2828 *arg0, Obj8019FB68 *arg1);
void func_8008A778(s32 arg0, s32 arg1, s32 arg2);
void func_801C509C();
void func_801C4E80();
void func_801C50EC();
void func_801C54E4();
void func_801C52B8(Obj801C4C94 *arg0);
void func_801C5534();
extern Elem801C52B8 D_80198B08[];
extern s32 D_801C7C18[];
extern s32 D_801C7C3C[];
s32 func_800754D0(Obj801C4C94 *arg0, s32 *arg1);
void func_80078E1C(Obj801C4C94 *arg0);
s32 func_801C51B8(Obj801C4C94 *arg0);
s16 func_800132CC(s16 arg0, s16 arg1, s32 arg2);
s32 func_800148E4(s16 arg0, s16 arg1, s32 arg2);
void func_80077B78(Obj801C4C94 *arg0, s32 arg1, u16 arg2, u8 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 argA);

#endif /* FDAT012_H */
