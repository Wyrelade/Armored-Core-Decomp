#ifndef FDAT050_H
#define FDAT050_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

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
    Sub8004DE88 unk8;
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
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C5454 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C5454;

typedef struct Sub801C5B54 {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Sub801C5B54;

typedef struct Obj801C5B54 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C5B54 *unk14;
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
} Obj801C5B54;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj8007A19C;

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
    struct Mdl801C9F3C *unk60;
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

typedef struct Obj801C63CC {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    s16 unk26;
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    s16 unkBE;
} Obj801C63CC;

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

typedef struct Elem801C93F8 {
    u8 _pad0[0x34];
} Elem801C93F8;

typedef struct Obj801CB74C {
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
} Obj801CB74C;

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

typedef struct Sub801C9F3C {
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
} Sub801C9F3C;

typedef struct Tbl801C9F3C {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C9F3C;

typedef struct Seg801C9F3C {
    Sub8004DE88 unk0;
    Sub8004DE88 unk8;
} Seg801C9F3C;

typedef struct Elem801C9F3C {
    u8 _pad0[0x26];
    u16 unk26;
    u8 _pad28[0x54];
} Elem801C9F3C;

typedef struct Mdl801C9F3C {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x10];
    Elem801C9F3C *unk20;
} Mdl801C9F3C;

typedef struct Hdr801C9F3C {
    u8 _pad0[0x14];
    s32 unk14;
} Hdr801C9F3C;

typedef struct Slot801C9F3C {
    u16 unk0;
    u8 _pad2[0x12];
} Slot801C9F3C;

typedef struct Part801C9F3C {
    u8 _pad0[0x14];
    Slot801C9F3C unk14[1];
} Part801C9F3C;

/* @externs */
extern Elem801C5454 D_801CCD2C;
void func_801CCCE0(Obj801C5454 *arg0);
void func_801C5564(Obj801C4EB8 *arg0);
void func_801C6438(Obj801C5454 *arg0);
Sub801C67AC *func_80072120(s32 arg0);
void func_801C6554();
void func_801C67E8();
void func_8006D39C(Obj801C5454 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C694C(Obj801C5454 *arg0);
s32 func_801C69E8(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C5B54 *func_80073674(s32 arg0);
void func_801C6A80(Obj801C7360 *arg0);
s32 func_801C6C30(u8 arg0, u16 arg1);
void func_801C6AF0();
s32 func_80014D78(s32 arg0);
void func_801C6DB8();
void func_801C70C0(Obj801C6A40 *arg0);
void func_801C7604();
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C6124 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C5454 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C7E4C();
void func_801CB6AC(Obj801C52C0 *arg0);
void func_801C9750();
void func_801CAE50();
void func_801CB360();
void func_801CB9B0();
void func_8008A80C();
u16 func_80073904(void);
void func_8004ECA8(Sub801C4EB8 *arg0);
extern Sub8004DE88 D_80039C78;
extern Elem801C93F8 D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub8004DE88 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C93F8 *arg2);
void func_80075FC0(Obj801CB74C *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub8004DE88 *arg1);
void func_80078250(Obj801CB74C *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CB74C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern u8 D_801CD290[][0x20];
extern u8 D_801CD310[];
extern u8 D_801CD334[];
s32 rand(void);
s32 func_800754D0(Obj801C5D08 *arg0, u8 *arg1);
void func_80078E1C(Obj801C5D08 *arg0);
s32 func_800745D0(Obj801C5D08 *arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3, s32 arg4, ...);
s32 func_80073C2C(s32 arg0, Sub8004DE88 *arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, Buf801C5D08 *arg11);
s32 func_800781E8(Obj801C5D08 *arg0);
void func_80077B78(Obj801C5D08 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7, ...);
s32 func_801C5C2C(Obj801C5D08 *arg0, u8 *arg1);
extern s32 D_801AC860[];
extern u8 D_801CD378[];
extern u8 D_801CD37C[];
extern u8 D_801CD380[];
extern u8 D_801CD384[];
extern u8 D_801CD388[];
extern u8 D_801CD38C[];
void func_80014774(Sub8004DE88 *arg0, Sub8004DE88 *arg1);
void func_80086598(s32 arg0, Sub801C6568 *arg1, u8 *arg2, u8 *arg3, Obj801C6A40 *arg4, Sub8004DE88 *arg5, Sub8004DE88 *arg6, s32 arg7, s32 arg8);
void func_800889B4(s32 arg0, Obj801C6A40 *arg1, Sub8004DE88 *arg2, Sub801C6568 *arg3, s32 arg4, s32 arg5);
void func_80089628(Obj801C6A40 *arg0, Sub8004DE88 *arg1, s32 arg2, u8 arg3);
void func_800898A4(Sub801C6568 *arg0, u8 *arg1, u8 *arg2, Obj801C6A40 *arg3, Sub8004DE88 *arg4, Sub8004DE88 *arg5, s32 arg6);
void func_80089A80(Obj801C6A40 *arg0, Sub8004DE88 *arg1);
void func_80089C30(Sub8004DE88 *arg0, Sub8004DE88 *arg1, s32 arg2);
extern Tbl801C9F3C D_8008E658[];
extern Hdr801C9F3C *D_801A6134[];
extern s32 D_801CD390;
extern s32 D_801CD394;
extern s32 D_801CD398;
extern s32 D_801CD39C;
extern s32 D_801CD3A0;
extern s32 D_801CD3A4;
s32 SquareRoot0(s32 arg0);
s32 func_801C9CB0(Obj801C52C0 *arg0, Sub801C9F3C *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
void VectorNormalSS(Sub8004DE88 *arg0, Sub8004DE88 *arg1);
void func_801C79C8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, Sub8004DE88 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub8004DE88 *arg7);

#endif /* FDAT050_H */
