#ifndef FDAT094_H
#define FDAT094_H

#include "common.h"

/* @types */
typedef struct Elem801C52C0 {
    u8 unk0;
    u8 _pad1[0x23];
    u16 unk24;
    u8 _pad26[0xA];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 _pad34[0x6];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5550;

typedef struct Sub801C6440 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6440;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0x8];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C6440 *unk38;
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 _pad40[0x1];
    u8 unk41;
    u8 unk42;
    u8 _pad43[0x1];
    s16 unk44;
    u8 _pad46[0x2];
    struct Obj801C52C0 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    struct Mdl801C7DA8 *unk60;
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x18];
    s16 unk124;
    s16 unk126;
    s16 unk128;
    s16 unk12A;
    s16 unk12C;
    s16 unk12E;
    u8 unk130;
    u8 unk131;
    u8 unk132;
    u8 unk133;
    u8 unk134;
    u8 unk135;
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C52C0;

typedef struct Sub801C5870 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5870;

typedef struct Obj801C5870 {
    u8 _pad0[0x14];
    Sub801C5870 *unk14;
} Obj801C5870;

typedef struct Obj801C5E78 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5E78;

typedef struct Sub801C5634 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x2];
    u8 unk9;
    u8 _padA[0x23];
    u8 unk2D;
    u8 _pad2E[0xA];
    u16 unk38;
} Sub801C5634;

typedef struct Obj801C7360 {
    u8 _pad0[0x8];
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u8 _padE[0x14];
    u16 unk22;
    u16 unk24;
    u16 unk26;
} Obj801C7360;

typedef struct Elem801C7B28 {
    u8 _pad0[0x34];
} Elem801C7B28;

typedef struct Sub801C9E7C {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
} Sub801C9E7C;

typedef struct Obj801C9E7C {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
    u8 _pad10[0x1A];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
    u8 _pad30[0x11];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C9E7C unk64;
    u8 _pad70[0x98];
    Elem801C52C0 *unk108;
} Obj801C9E7C;

typedef struct Task801C5608 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C5608;

typedef struct Sub801C5608 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C5608;

typedef struct Obj801C5608 {
    u8 _pad0[0x2C];
    Task801C5608 *unk2C;
    u8 _pad30[0x8];
    Sub801C5608 *unk38;
} Obj801C5608;

typedef struct Elem801C5608 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5608;

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5F00 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5F00;

typedef struct Elem801C5D48 {
    u16 unk0;
    u8 _pad2[0x20];
    s16 unk22;
    u8 _pad24[0x8];
} Elem801C5D48;

typedef struct Obj801C5D48 {
    u8 _pad0[0x20];
    void (*unk20[1])();
} Obj801C5D48;

typedef struct Sub801C7DA8 {
    u8 _pad0[0x2];
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 _pad9[0x2];
    s8 unkB;
    u8 unkC;
    u8 _padD[0x2];
    u8 unkF;
    u8 unk10;
    u8 _pad11;
    s16 unk12;
    u8 _pad14[0xE];
    Sub801C55B4 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C55B4 unk0;
    Sub801C55B4 unk8;
} Seg801C7DA8;

typedef struct Elem801C7DA8 {
    u8 _pad0[0x26];
    u16 unk26;
    u8 _pad28[0x54];
} Elem801C7DA8;

typedef struct Mdl801C7DA8 {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x10];
    Elem801C7DA8 *unk20;
} Mdl801C7DA8;

typedef struct Hdr801C7DA8 {
    u8 _pad0[0x14];
    s32 unk14;
} Hdr801C7DA8;

typedef struct Slot801C7DA8 {
    u16 unk0;
    u8 _pad2[0x12];
} Slot801C7DA8;

typedef struct Part801C7DA8 {
    u8 _pad0[0x14];
    Slot801C7DA8 unk14[1];
} Part801C7DA8;

/* @externs */
extern Elem801C52C0 D_801CB45C[];
void func_801CB410(Obj801C52C0 *arg0);
extern Elem801C52C0 D_801CC428;
extern Elem801C52C0 D_801CC96C;
Sub801C5550 *func_80072120(s32 arg0);
void func_801C5374();
void func_801C571C();
Sub801C5870 *func_80073674(s32 arg0);
void func_801C583C(Obj801C7360 *arg0);
void func_801C58AC();
void func_801C59C8();
extern Obj801C5E78 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C55B4 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C55B4 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5798 *arg0, Sub801C55B4 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55B4 *arg4, void (*arg5)());
void func_801C657C();
void func_801CA0E0();
void func_801C7E80();
void func_801C9580();
void func_801C9A90();
void func_801C9DDC(Obj801C52C0 *arg0);
void func_8008A80C();
u16 func_80073904(void);
extern Sub801C55B4 D_80039C78;
extern Elem801C7B28 D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C7B28 *arg2);
void func_8007847C(Obj801C9E7C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078250(Obj801C9E7C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80075FC0(Obj801C9E7C *arg0);
s32 func_8004F024(Sub801C9E7C *arg0, Sub801C55B4 *arg1);
extern s16 D_801A26CE;
extern Elem801C5608 D_801D0B94[];
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
extern Elem801C5F00 D_801D0B68[];
void func_801C5608(Obj801C5608 *arg0);
extern u16 D_8019F528;
extern s32 D_801CCEB8;
extern Obj801C5D48 *D_8019F51C[];
extern Elem801C5D48 D_8019FB7C[];
extern u8 D_8019FB68[];
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
void func_80078CFC(u8 *arg0);
void func_801C52C0();
void func_801C5314();
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CCEBC;
extern s32 D_801CCEC0;
extern s32 D_801CCEC4;
extern s32 D_801CCEC8;
extern s32 D_801CCECC;
extern s32 D_801CCED0;
s32 rand(void);
s32 SquareRoot0(s32 arg0);
s32 func_801C83E0(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C55B4 *arg0, Sub801C55B4 *arg1);
void func_801C60F8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55B4 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C55B4 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, Sub801C55B4 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C55B4 *arg7);

#endif /* FDAT094_H */
