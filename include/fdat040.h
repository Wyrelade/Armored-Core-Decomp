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
    u8 _pad1[0x67];
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

typedef struct Elem801C52C0_fdat000 {
    u8 _pad0[0x30];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    u8 _pad34[0x6];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0_fdat000;

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x9];
    s16 unkA;
    u8 _padC[0x5C];
} Sub801C5798;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
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
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C5798 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x2C];
    u8 unk100;
    u8 _pad101[0x7];
    Elem801C52C0_fdat000 *unk108;
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
    Sub801C5550 *unk2C;
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

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C4C94 unk8;
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
    Sub801C4C94 unkCC;
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
void func_801CAD08();
u16 func_80073904(void);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern Elem801C5F00 D_801D0B68[];
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C53FC();
void func_801C5560();
void func_801C55B0();
extern Elem801C6068 D_801D0B94[];
extern Sub801C55B4 D_80039C78;
extern Elem801C8750 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C55B4 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C8750 *arg2);
extern s16 D_801A26CE;
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C5CE0(Obj801C52F0 *arg0, Sub801C6AA0 *arg1, u8 arg2);

#endif /* FDAT040_H */
