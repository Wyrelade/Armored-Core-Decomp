#ifndef FDAT088_H
#define FDAT088_H

#include "common.h"

/* @types */
typedef struct Obj801C68EC {
    u8 _pad0[0x160];
    u16 unk160;
} Obj801C68EC;

typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

typedef struct Elem801C52DC {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C52DC;

typedef struct Sub801C6B1C {
    u8 _pad0[0x68];
} Sub801C6B1C;

typedef struct Sub801C5594 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5594;

typedef struct Sub801C5878 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5878;

typedef struct Obj801C52DC {
    u8 _pad0[0x8];
    Sub8004DE88 unk8;
    u8 _pad10[0x1C];
    Sub801C5594 *unk2C;
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
    Sub801C6B1C unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C52DC *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
} Obj801C52DC;

typedef struct Obj801C5878 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5878 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 _pad29;
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C5878;

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
    u8 _pad2[0x4];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x8];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C5798;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub801C5F14 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C5F14;

typedef struct Obj801C5F14 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5F14 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 unk23;
    u16 unk24;
    u8 _pad26[0x2];
    u16 unk28;
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C5F14;

typedef struct Elem801C7308 {
    u8 _pad0[0x34];
} Elem801C7308;

typedef struct Obj801CA93C {
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
} Obj801CA93C;

typedef struct Sub801C6A40 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6A40;

typedef struct Obj801C6A40 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x2];
    Sub8004DE88 unk8;
    u8 _pad10[0x4];
    Sub801C6A40 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u16 unk26;
    u8 unk28;
    u8 unk29;
    u16 unk2A;
} Obj801C6A40;

typedef struct Sub801C6568 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 _pad5[0x3];
} Sub801C6568;

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
extern s32 D_801CC9D0;
extern Elem801C52DC D_801CBF1C;
void func_801CBED0(Obj801C52DC *arg0);
extern Elem801C52DC D_801CC460;
Sub801C5594 *func_80072120(s32 arg0);
void func_801C533C();
void func_801C55D0();
Sub801C5878 *func_80073674(s32 arg0);
s32 func_801C5830(u8 arg0, u16 arg1);
void func_801C56F0();
s32 func_80014D78(s32 arg0);
void func_801C6028(Obj801C6A40 *arg0);
void func_801C656C();
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C6B1C *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C52DC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C703C();
void func_801CA89C(Obj801C52C0 *arg0);
void func_801C8940();
void func_801CA040();
void func_801CA550();
void func_801CABA0();
void func_8008A80C();
u16 func_80073904(void);
s32 rand(void);
extern Elem801C7308 D_80198B08[];
void func_801C5A10();
void func_801C5A24();
void func_801C5C50();
void func_801C5D5C();
extern Sub8004DE88 D_80039C78;
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub8004DE88 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C7308 *arg2);
void func_80075FC0(Obj801CA93C *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub8004DE88 *arg1);
void func_80078250(Obj801CA93C *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CA93C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern s32 D_801AC860[];
extern u8 D_801CC9B8[];
extern u8 D_801CC9BC[];
extern u8 D_801CC9C0[];
extern u8 D_801CC9C4[];
extern u8 D_801CC9C8[];
extern u8 D_801CC9CC[];
void func_80014774(Sub8004DE88 *arg0, Sub8004DE88 *arg1);
void func_80086598(s32 arg0, Sub801C6568 *arg1, u8 *arg2, u8 *arg3, Obj801C6A40 *arg4, Sub8004DE88 *arg5, Sub8004DE88 *arg6, s32 arg7, s32 arg8);
void func_800889B4(s32 arg0, Obj801C6A40 *arg1, Sub8004DE88 *arg2, Sub801C6568 *arg3, s32 arg4, s32 arg5);
void func_80089628(Obj801C6A40 *arg0, Sub8004DE88 *arg1, s32 arg2, u8 arg3);
void func_800898A4(Sub801C6568 *arg0, u8 *arg1, u8 *arg2, Obj801C6A40 *arg3, Sub8004DE88 *arg4, Sub8004DE88 *arg5, s32 arg6);
void func_80089A80(Obj801C6A40 *arg0, Sub8004DE88 *arg1);
void func_80089C30(Sub8004DE88 *arg0, Sub8004DE88 *arg1, s32 arg2);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CC9D4;
extern s32 D_801CC9D8;
extern s32 D_801CC9DC;
extern s32 D_801CC9E0;
extern s32 D_801CC9E4;
extern s32 D_801CC9E8;
s32 SquareRoot0(s32 arg0);
s32 func_801C8EA0(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub8004DE88 *arg0, Sub8004DE88 *arg1);
void func_801C6BB8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, Sub8004DE88 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub8004DE88 *arg7);

#endif /* FDAT088_H */
