#ifndef FDAT008_H
#define FDAT008_H

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

typedef struct Obj801C4C94 {
    Sub801C4E00 *unk0;
    u8 _pad4[0x4];
    Sub801C4C94 unk8;
    u8 _pad10[0x26];
    s16 unk36;
    u8 _pad38[0x4];
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

typedef struct Sub801C5418 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C5418;

typedef struct Obj801C5418 {
    u8 _pad0[0x8];
    Sub801C4C94 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x22];
    s16 unk36;
    u8 _pad38[0x94];
    s16 unkCC;
    u8 _padCE[0x3A];
    Sub801C5418 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
} Obj801C5418;

typedef struct Sub801C5CD0 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5CD0;

typedef struct Obj801C6710 {
    u8 _pad0[0x2C];
    Sub801C5CD0 *unk2C;
} Obj801C6710;

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C52C0 {
    u8 unk0;
    u8 _pad1[0x8];
    u8 unk9[0x4];
    u8 unkD[0x15];
    u16 unk22;
    u16 unk24;
    u8 _pad26[0x14];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5550;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0xC];
    s16 unkE;
    u8 _pad10[0x8];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C4C94 unk8;
    u8 _pad10[0x1A];
    u16 unk2A;
    s16 unk2C;
    s16 unk2E;
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
    struct Mdl801C97A8 *unk60;
    Sub801C5798 unk64;
    Sub801C4C94 unkCC;
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

typedef struct Sub801C6D74 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6D74;

typedef struct Obj801C6D74 {
    u8 _pad0[0x14];
    Sub801C6D74 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
} Obj801C6D74;

typedef struct Elem801C6D74 {
    u8 _pad0[0x34];
} Elem801C6D74;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C4C94 unk8;
    u8 _pad10[0x1C];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    struct Sub801C5314 *unk38;
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
    Sub801C4C94 unkCC;
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
    u8 _pad14A[0x12];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C52C0_fdat000;

typedef struct Sub801C5314 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C5314;

typedef struct Elem801C5314 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5314;

typedef struct Elem801C53D4 {
    u8 _pad0[0x2C];
    Sub801C5CD0 *unk2C;
    u8 _pad30[0x10];
} Elem801C53D4;

typedef struct Sub801C97A8 {
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
    Sub801C4C94 unk22;
} Sub801C97A8;

typedef struct Tbl801C97A8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C97A8;

typedef struct Seg801C97A8 {
    Sub801C4C94 unk0;
    Sub801C4C94 unk8;
} Seg801C97A8;

typedef struct Elem801C97A8 {
    u8 _pad0[0x26];
    u16 unk26;
    u8 _pad28[0x54];
} Elem801C97A8;

typedef struct Mdl801C97A8 {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x10];
    Elem801C97A8 *unk20;
} Mdl801C97A8;

typedef struct Hdr801C97A8 {
    u8 _pad0[0x14];
    s32 unk14;
} Hdr801C97A8;

typedef struct Slot801C97A8 {
    u16 unk0;
    u8 _pad2[0x12];
} Slot801C97A8;

typedef struct Part801C97A8 {
    u8 _pad0[0x14];
    Slot801C97A8 unk14[1];
} Part801C97A8;

/* @externs */
extern Sub801C5418 D_801CBEAC;
void func_801CBE60(Obj801C4C94 *arg0);
void func_801C5528(Obj801C4EB8 *arg0);
void func_801C63FC();
Sub801C5CD0 *func_80072120(s32 arg0);
void func_801C662C();
extern u16 D_8019F528;
extern u8 D_8019FB94;
void func_8008C2FC(s32 arg0);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
void func_8004C318(s32 arg0);
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C4C94 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C4C94 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
void func_800775B8(Obj801C4C94 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C4C94 *arg4, void (*arg5)());
void func_801C76B8();
void func_801C8FBC();
void func_801CABCC();
void func_801CAF18(Obj801C52C0 *arg0);
void func_801CB03C(Obj801C52C0 *arg0, s32 arg1);
void func_801CBDC8();
void func_8008A80C();
u16 func_80073904(void);
void func_8004ECA8(Sub801C4EB8 *arg0);
s32 rand(void);
Sub801C6D74 *func_80073674(s32 arg0);
extern Elem801C6D74 D_80198B08[];
void func_801C6870();
void func_801C6884();
void func_801C6AB0();
void func_801C6BBC();
extern Sub801C4C94 D_80039C78;
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C4C94 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C6D74 *arg2);
void func_801C7234(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C4C94 *arg4);
extern s16 D_801A26CE;
extern Elem801C5314 D_801D0B94[];
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
s32 func_80014D78(s32 arg0);
extern Elem801C53D4 D_801D0B68[];
void func_801C6518();
extern Tbl801C97A8 D_8008E658[];
extern Hdr801C97A8 *D_801A6134[];
extern s32 D_801CC4DC;
extern s32 D_801CC4E0;
extern s32 D_801CC4E4;
extern s32 D_801CC4E8;
extern s32 D_801CC4EC;
extern s32 D_801CC4F0;
s32 SquareRoot0(s32 arg0);
s32 func_801C951C(Obj801C52C0 *arg0, Sub801C97A8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C97A8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C4C94 *arg0, Sub801C4C94 *arg1);
void func_80085E98(Obj801C52C0 *arg0, Sub801C4C94 *arg1, Sub801C4C94 *arg2, Sub801C4C94 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C4C94 *arg1, Sub801C4C94 *arg2, Sub801C4C94 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C4C94 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C4C94 *arg1, Sub801C4C94 *arg2, Sub801C4C94 *arg3, Sub801C4C94 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C4C94 *arg1, Sub801C4C94 *arg2, Sub801C4C94 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C4C94 *arg1, Sub801C4C94 *arg2, Sub801C4C94 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C4C94 *arg7);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C7F98();
void func_801C814C();
s32 func_8004EAD0(Sub801C5798 *arg0);
void func_8004EA3C(Sub801C5798 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801C52C0 *arg0, Sub801C4C94 *arg1);
void func_80076578(Obj801C52C0 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_800778B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, Sub801C4C94 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C4C94 *arg4, s32 arg5, void (*arg6)());
void func_8007847C(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007A02C(Obj801C52C0 *arg0);
void func_801C7034(Obj801C52C0 *arg0, Sub801C5634 *arg1);
void func_801C7198(Obj801C4C94 *arg0, s32 arg1);
s32 func_801CAFB8(Obj801C52C0 *arg0);

#endif /* FDAT008_H */
