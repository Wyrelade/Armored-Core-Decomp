#ifndef FDAT040_H
#define FDAT040_H

#include "common.h"

/* @types */
typedef struct Elem801C52F0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52F0;

typedef struct Sub801C6A24 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6A24;

typedef struct Sub801C6AA0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6AA0;

typedef struct Sub801C6020 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11;
    s16 unk12;
    u16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
} Sub801C6020;

typedef struct Obj801C6020 {
    u16 unk0;
    u8 _pad2[0x5];
    u8 unk7;
    u8 _pad8[0x2];
    u8 unkA;
    u8 _padB[0x1];
} Obj801C6020;

typedef struct Sub801C6C84 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0x4];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x8];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C6C84;

typedef struct Obj801C52F0 {
    Sub801C6A24 *unk0;
    u8 _pad4[0x4];
    Sub801C6AA0 unk8;
    Sub801C6AA0 unk10;
    u8 _pad18[0x14];
    Sub801C6020 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Obj801C6020 *unk38;
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
    Sub801C6C84 unk64;
    Sub801C6AA0 unkCC;
    u8 _padD4[0x34];
    Elem801C52F0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
} Obj801C52F0;

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
    Sub801C6AA0 unk8;
    u8 _pad10[0x6];
    s16 unk16;
    u8 _pad18[0x14];
    Task801C6254 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
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
    Sub801C6AA0 unkCC;
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

typedef struct Sub801C665C {
    void (*unk0)();
} Sub801C665C;

typedef struct Obj801C665C {
    u8 _pad0[0x14];
    Sub801C665C *unk14;
    u8 _pad18[0xA];
    u8 unk22;
} Obj801C665C;

typedef struct Obj801C6A24 {
    u8 _pad0[0x20];
    void (*unk20[1])();
} Obj801C6A24;

typedef struct Obj801C6AA0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C6AA0;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C6AA0 unk8;
    u8 _pad10[0x1C];
    Sub801C6020 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
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
    Sub801C6C84 unk64;
    Sub801C6AA0 unkCC;
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
    u8 _pad135;
    u8 unk136;
    u8 _pad137[0x11];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
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

typedef struct Sub801C4EB8 {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
} Sub801C4EB8;

typedef struct Sub801C6C20 {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C6C20;

typedef struct Obj801C4EB8 {
    Sub801C6C20 *unk0;
    u8 _pad4[0xE];
    u16 unk12;
    u8 _pad14[0x2];
    u16 unk16;
    u16 unk18;
    u8 _pad1A[0x8];
    s16 unk22;
    u8 _pad24[0x8];
    Sub801C6020 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x9];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)();
    u8 _pad54[0x10];
    Sub801C4EB8 unk64;
    u8 _pad67[0x65];
    s16 unkCC;
    s16 unkCE;
    u8 _padD0[0x90];
    u16 unk160;
} Obj801C4EB8;

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

typedef struct Sub801C5EA8 {
    void (*unk0)();
    u8 _pad4[0x4];
    Sub801C6AA0 unk8;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 _pad14[0x6];
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    Sub801C6AA0 unk22;
    u8 _pad2A[0x2];
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
} Sub801C6050;

typedef struct Elem801C5F00 {
    u8 _pad0[0x16];
    s16 unk16;
    u8 _pad18[0xE];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5F00;

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

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C6AA0 unk8;
    u8 _pad10[0x1C];
    s16 unk2C;
    u8 _pad2E[0x8];
    s16 unk36;
    s16 unk38;
    u8 _pad3A[0x2];
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
    Sub801C6AA0 unkCC;
    u8 _padD4[0x88];
    s32 unk15C;
} Obj801C4C94;

typedef struct Sub801C6068 {
    s32 unk0;
} Sub801C6068;

typedef struct Elem801C6068 {
    Sub801C6068 *unk0;
    u8 _pad4[0x3C];
} Elem801C6068;

typedef struct Elem801C8750 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C8750;

typedef struct Task801C638C {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C638C;

typedef struct Sub801C638C {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C638C;

typedef struct Obj801C638C {
    u8 _pad0[0x2C];
    Task801C638C *unk2C;
    u8 _pad30[0x8];
    Sub801C638C *unk38;
} Obj801C638C;

typedef struct Sub801C5D80 {
    u8 _pad0[0xC];
    s32 unkC;
} Sub801C5D80;

typedef struct Obj801C95A8 {
    u8 _pad0[0x8];
    Sub801C6AA0 unk8;
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
    Sub801C6C84 unk64;
    Sub801C6AA0 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C95A8;

typedef struct Elem801C6064 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C6064;

typedef struct View801C9294 {
    u8 _pad0[0x8];
    Sub801C6AA0 unk8;
    u8 _pad10[0x26];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 _pad40[0x1];
    u8 unk41;
    u8 _pad42[0x6];
    struct View801C9294 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    u8 _pad54[0xC];
    struct Mdl801C7DA8 *unk60;
    Sub801C6C84 unk64;
    Sub801C6AA0 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x27];
    u8 unk133;
    u8 _pad134[0x1];
    u8 unk135;
} View801C9294;

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
    Sub801C6AA0 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C6AA0 unk0;
    Sub801C6AA0 unk8;
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
void func_801CC038(Obj801C52F0 *arg0);
extern Elem801C52C0 D_801CC084;
extern Elem801C52F0 D_801CC5C8;
Sub801C6020 *func_80072120(s32 arg0);
void func_801C5E5C();
void func_801C5DE4();
void func_801C60F8();
void func_801C64A0();
Sub801C665C *func_80073674(s32 arg0);
void func_801C6580(Obj801C5F00 *arg0);
void func_801C65E4(Obj801C5F00 *arg0);
extern Obj801C6A24 *D_8019F51C;
extern s32 D_801CCB90;
void func_801C52C0(Obj801C52C0 *arg0);
extern Obj801C6AA0 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C6AA0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C6AA0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C6C84 *arg0, Sub801C6AA0 *arg1);
void func_800775B8(Obj801C52F0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6AA0 *arg4, void (*arg5)());
void func_801C71A4();
void func_801C8AA8();
void func_801CA1A8();
void func_801CA6B8();
void func_801CAA04(Obj801C52C0_fdat000 *arg0);
void func_801CAD08(Obj801C95A8 *arg0, s32 arg1);
u16 func_80073904(void);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
s32 func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern Elem801C5F00 D_801D0B68[];
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C53FC();
void func_801C5560();
void func_801C55B0();
extern Elem801C6068 D_801D0B94[];
extern Sub801C6AA0 D_80039C78;
extern Elem801C8750 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C6AA0 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C8750 *arg2);
extern s16 D_801A26CE;
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C5CE0(Obj801C52F0 *arg0, Sub801C6AA0 *arg1, u8 arg2);
void func_80075FC0(Obj801C95A8 *arg0);
s32 func_8004F024(Sub801C6C84 *arg0, Sub801C6AA0 *arg1);
void func_80078250(Obj801C95A8 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801C95A8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 func_801C5840(Elem801C5F00 *arg0, s32 arg1);
void func_801C638C(Obj801C638C *arg0);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C7490();
void func_801C7A84();
void func_801C7C38();
void func_801C7F14();
void func_801CAAA4(Obj801C95A8 *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C6C84 *arg0);
s32 func_8004EBF8(Sub801C6C84 *arg0);
void func_8004EA3C(Sub801C6C84 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801C95A8 *arg0, Sub801C6AA0 *arg1);
void func_80076578(Obj801C95A8 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801C95A8 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801C95A8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801C95A8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801C95A8 *arg0, s32 arg1, s32 arg2, Sub801C6AA0 *arg3, void (*arg4)());
void func_8007732C(Obj801C95A8 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6AA0 *arg4, void (*arg5)());
void func_800778B8(Obj801C95A8 *arg0, s32 arg1, s32 arg2, Sub801C6AA0 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801C95A8 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6AA0 *arg4, s32 arg5, void (*arg6)());
void func_801C6B20(struct Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1);
void func_801C6C84(Obj801C52F0 *arg0, s32 arg1);
s32 func_801CABE0(Obj801C95A8 *arg0);
extern Elem801C6064 D_801D0B98[];
extern Sub801C6AA0 D_801CCB50;
extern s16 D_801CCB54;
void func_8001380C(Sub801C6AA0 *arg0, Sub801C6AA0 *arg1, s32 arg2);
void func_80072180(Elem801C5F00 *arg0);
s32 func_801C57F0(struct Obj801C4EB8 *arg0);
void func_801C5684(Elem801C5F00 *arg0, s32 arg1);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CCB94;
extern s32 D_801CCB98;
extern s32 D_801CCB9C;
extern s32 D_801CCBA0;
extern s32 D_801CCBA4;
extern s32 D_801CCBA8;
s32 rand(void);
s32 SquareRoot0(s32 arg0);
s32 func_801C9008(View801C9294 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_800745D0(View801C9294 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C6AA0 *arg0, Sub801C6AA0 *arg1);
void func_801C6D20(View801C9294 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6AA0 *arg4);
void func_80085E98(View801C9294 *arg0, Sub801C6AA0 *arg1, Sub801C6AA0 *arg2, Sub801C6AA0 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(View801C9294 *arg0, Sub801C6AA0 *arg1, Sub801C6AA0 *arg2, Sub801C6AA0 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(View801C9294 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C6AA0 *arg3);
void func_80086448(View801C9294 *arg0, Sub801C6AA0 *arg1, Sub801C6AA0 *arg2, Sub801C6AA0 *arg3, Sub801C6AA0 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(View801C9294 *arg0, Sub801C6AA0 *arg1, Sub801C6AA0 *arg2, Sub801C6AA0 *arg3, s32 arg4, s32 arg5);
void func_8008915C(View801C9294 *arg0, Sub801C6AA0 *arg1, Sub801C6AA0 *arg2, Sub801C6AA0 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C6AA0 *arg7);

#endif /* FDAT040_H */
