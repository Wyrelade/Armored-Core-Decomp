#ifndef FDAT062_H
#define FDAT062_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub801C667C {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C667C;

typedef struct Sub801C66B8 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C66B8;

typedef struct Sub801C69F8 {
    u8 unk0;
    u8 _pad1[0x5];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x58];
} Sub801C69F8;

typedef struct Elem801C6814 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6814;

typedef struct Obj801C4F4C {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    u8 _pad18[0x14];
    Sub801C667C *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C66B8 *unk38;
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
    Sub801C69F8 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C6814 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
} Obj801C4F4C;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C52C0 {
    u8 unk0;
    u8 unk1[0x8];
    u8 unk9[0x4];
    u8 unkD[0x9];
    u16 unk16;
    u8 _pad18[0xA];
    u16 unk22;
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
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C667C *unk2C;
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
    Sub801C69F8 unk64;
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

typedef struct Elem801C84C4 {
    u8 _pad0[0x34];
} Elem801C84C4;

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

typedef struct Obj801CA818 {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x14];
    u16 unk28;
    u16 unk2A;
    s16 unk2C;
    s16 unk2E;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C69F8 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801CA818;

typedef struct Sub801C5D08 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u16 unk1E;
    u8 unk20;
    u8 unk21;
    u8 _pad22[0x2];
    u8 unk24;
} Sub801C5D08;

typedef struct Buf801C5D08 {
    u8 _pad0[0x16];
    u16 unk16;
    u8 _pad18[0x18];
} Buf801C5D08;

typedef struct Obj801C5D08 {
    Sub801C5D08 *unk0;
    u8 _pad4[0xE];
    s16 unk12;
    u8 _pad14[0x22];
    u16 unk36;
    u8 _pad38[0x6];
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 _pad41[0x7];
    s32 unk48;
    u8 _pad4C[0xB0];
    u8 unkFC;
    u8 _padFD[0xB];
    u8 unk108;
    u8 _pad109[0x3F];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
} Obj801C5D08;

/* @externs */
extern Elem801C6814 D_801CBEDC;
void func_801CBDAC(Obj801C4F4C *arg0);
Sub801C667C *func_80072120(s32 arg0);
void func_801C6554();
void func_8006D39C(Obj801C4F4C *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C66B8(Obj801C4F4C *arg0);
s32 func_801C6754(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C69F8 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C4F4C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C6F18();
void func_801CA778(Obj801C52C0 *arg0);
void func_801C881C();
void func_801C9F1C();
void func_801CA42C();
void func_801CAA7C(Obj801CA818 *arg0, s32 arg1);
void func_8008A80C();
u16 func_80073904(void);
extern Sub8004DE88 D_80039C78;
extern Elem801C84C4 D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub8004DE88 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C84C4 *arg2);
void func_80075FC0(Obj801CA818 *arg0);
s32 func_8004F024(Sub801C69F8 *arg0, Sub8004DE88 *arg1);
void func_80078250(Obj801CA818 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CA818 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern u8 D_801CBE18[][0x20];
extern u8 D_801CBE98[];
extern u8 D_801CBEBC[];
s32 rand(void);
s32 func_800754D0(Obj801C5D08 *arg0, u8 *arg1);
void func_80078E1C(Obj801C5D08 *arg0);
s32 func_800745D0(Obj801C5D08 *arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3, s32 arg4, ...);
s32 func_80073C2C(s32 arg0, Sub8004DE88 *arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, Buf801C5D08 *arg11);
s32 func_800781E8(Obj801C5D08 *arg0);
void func_80077B78(Obj801C5D08 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7, ...);
s32 func_801C5BE0(Obj801C5D08 *arg0, u8 *arg1);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C7204();
void func_801C77F8();
void func_801C79AC();
void func_801C7C88();
void func_801CA818(Obj801CA818 *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C69F8 *arg0);
s32 func_8004EBF8(Sub801C69F8 *arg0);
void func_8004EA3C(Sub801C69F8 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801CA818 *arg0, Sub8004DE88 *arg1);
void func_80076578(Obj801CA818 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801CA818 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801CA818 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801CA818 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801CA818 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3, void (*arg4)());
void func_8007732C(Obj801CA818 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_800778B8(Obj801CA818 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801CA818 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, s32 arg5, void (*arg6)());
void func_801C6894(struct Obj801C52C0 *arg0, Sub801C5634 *arg1);
void func_801C69F8(Obj801C4F4C *arg0, s32 arg1);
s32 func_801CA954(Obj801CA818 *arg0);

#endif /* FDAT062_H */
