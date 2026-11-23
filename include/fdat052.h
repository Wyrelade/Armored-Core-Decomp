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
    u8 unk1;
    u8 _pad2[0x8];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x4E];
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
    Sub801C7410 unk8;
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
    Sub801C7410 unkCC;
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

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C7410 unk8;
    u8 _pad10[0x1C];
    Sub801C6AEC *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
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
    Sub801C75F4 unk64;
    Sub801C7410 unkCC;
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

typedef struct Elem801C90C0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C90C0;

typedef struct Obj8019FB68 {
    u8 _pad0[0x2CC0];
    Obj801C5454 unk2CC0;
} Obj8019FB68;

typedef struct Obj8019F51C {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj801C5454 *);
} Obj8019F51C;

typedef struct Obj801CB414 {
    u8 _pad0[0x8];
    Sub801C7410 unk8;
    u8 _pad10[0x1A];
    u16 unk2A;
    u8 _pad2C[0x2];
    s16 unk2E;
    u8 _pad30[0x11];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C75F4 unk64;
    u8 _padCC[0x3C];
    Elem801C52C0 *unk108;
} Obj801CB414;

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
    Sub801C7410 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C7410 unk0;
    Sub801C7410 unk8;
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
extern Elem801C5454 D_801CD8E8;
void func_801CC9A8(Obj801C6864 *arg0);
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
void func_801C6C8C(Obj801C5F00 *arg0);
void func_801C6CF0(Obj801C5F00 *arg0);
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
void func_801CB374(Obj801C52C0 *arg0);
void func_801CCA78();
void func_801CD804();
u16 func_80073904(void);
extern Elem801C5F00 D_801D0B68[];
extern Sub801C7410 D_80039C78;
extern Elem801C90C0 D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C7410 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C90C0 *arg2);
extern s32 D_801AC80C;
extern Obj8019FB68 D_8019FB68;
extern Obj8019F51C *D_8019F51C;
void func_80075FC0(Obj801CB414 *arg0);
s32 func_8004F024(Sub801C75F4 *arg0, Sub801C7410 *arg1);
void func_80078250(Obj801CB414 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CB414 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_801C7690(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C7410 *arg4);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CE57C;
extern s32 D_801CE580;
extern s32 D_801CE584;
extern s32 D_801CE588;
extern s32 D_801CE58C;
extern s32 D_801CE590;
s32 rand(void);
s32 SquareRoot0(s32 arg0);
s32 func_801C9978(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C75F4 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C7410 *arg0, Sub801C7410 *arg1);
void func_80085E98(Obj801C52C0 *arg0, Sub801C7410 *arg1, Sub801C7410 *arg2, Sub801C7410 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C7410 *arg1, Sub801C7410 *arg2, Sub801C7410 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C7410 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C7410 *arg1, Sub801C7410 *arg2, Sub801C7410 *arg3, Sub801C7410 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C7410 *arg1, Sub801C7410 *arg2, Sub801C7410 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C7410 *arg1, Sub801C7410 *arg2, Sub801C7410 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C7410 *arg7);

#endif /* FDAT052_H */
