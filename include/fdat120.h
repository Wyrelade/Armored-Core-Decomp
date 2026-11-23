#ifndef FDAT120_H
#define FDAT120_H

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

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0x8];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C5798;

typedef struct Sub801C7788 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C7788;

typedef struct Obj801C52C0 {
    Sub801C7788 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 _pad40[0x1];
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj801C52C0 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    struct Mdl801C7DA8 *unk60;
    Sub801C5798 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x27];
    u8 unk133;
    u8 _pad134[0x1];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
} Obj801C52C0;

typedef struct Obj801C53D0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C53D0;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
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
    Sub801C5798 unk64;
    Sub8004DE88 unkCC;
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
    u8 _pad135[0x1];
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
} Obj801C52C0_fdat000;

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

typedef struct Elem8019FB68 {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
    u8 _padC[0x20];
} Elem8019FB68;

typedef struct Elem801C7080 {
    u8 _pad0[0x34];
} Elem801C7080;

typedef struct Obj801C93D4 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x1A];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
    u8 _pad30[0x11];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C5798 unk64;
    u8 _padCC[0x3C];
    Elem801C52C0 *unk108;
} Obj801C93D4;

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
    Sub8004DE88 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub8004DE88 unk0;
    Sub8004DE88 unk8;
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
extern Elem801C52C0 D_801CA9B4;
void func_801CA968(Obj801C52C0 *arg0);
extern Obj801C53D0 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5798 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C5AD4();
void func_801C9334(Obj801C52C0_fdat000 *arg0);
void func_801C73D8();
void func_801C8AD8();
void func_801C8FE8();
void func_801C9638();
u16 func_80073904(void);
extern s32 D_801CAEF8;
extern u16 D_801CAEFC;
extern u8 D_801CAEFE;
extern Elem8019FB68 D_8019FB68[];
void func_8008C2FC(s32 arg0);
void func_8008A80C();
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
void func_8004C318(s32 arg0);
extern Sub8004DE88 D_80039C78;
extern Elem801C7080 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub8004DE88 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C7080 *arg2);
void func_80075FC0(Obj801C93D4 *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub8004DE88 *arg1);
void func_80078250(Obj801C93D4 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801C93D4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CAF00;
extern s32 D_801CAF04;
extern s32 D_801CAF08;
extern s32 D_801CAF0C;
extern s32 D_801CAF10;
extern s32 D_801CAF14;
s32 rand(void);
s32 SquareRoot0(s32 arg0);
s32 func_801C7938(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub8004DE88 *arg0, Sub8004DE88 *arg1);
void func_801C5650(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, Sub8004DE88 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub8004DE88 *arg7);

#endif /* FDAT120_H */
