#ifndef FDAT076_H
#define FDAT076_H

#include "common.h"

/* @types */
typedef struct Sub801C52C0 {
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
} Sub801C52C0;

typedef struct Sub801C5938 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C5938;

typedef struct Sub801C5B1C {
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
} Sub801C5B1C;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5550;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C5938 unk8;
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
    Sub801C5B1C unk64;
    Sub801C5938 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x27];
    u8 unk133;
    u8 _pad134[0x1];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C558C {
    void (*unk0)();
    void (*unk4)();
} Sub801C558C;

typedef struct Obj801C558C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C558C *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C558C;

typedef struct Obj801C5938 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5938;

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

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C5938 unk8;
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
    Sub801C5B1C unk64;
    Sub801C5938 unkCC;
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

typedef struct Elem801C586C {
    u32 unk0;
    u8 _pad4[0x3C];
} Elem801C586C;

typedef struct Elem801C75E8 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C75E8;

typedef struct Task801C52F0 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
} Task801C52F0;

typedef struct Sub801C52F0 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u16 unk8;
} Sub801C52F0;

typedef struct Obj801C52F0 {
    u8 _pad0[0x2C];
    Task801C52F0 *unk2C;
    u8 _pad30[0x8];
    Sub801C52F0 *unk38;
} Obj801C52F0;

typedef struct Elem801C52F0 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C52F0;

typedef struct Obj801C993C {
    u8 _pad0[0x8];
    Sub801C5938 unk8;
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
    Sub801C5B1C unk64;
    Sub801C5938 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C993C;

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
    Sub801C5938 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C5938 unk0;
    Sub801C5938 unk8;
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
extern Sub801C52C0 D_801CAF1C;
void func_801CAED0(Obj801C52C0 *arg0);
Sub801C558C *func_80073674(s32 arg0);
s32 func_801C5544(u8 arg0, u16 arg1);
void func_801C5404();
void func_801C5600(Obj801C5F00 *arg0);
void func_801C5664(Obj801C5F00 *arg0);
void func_801C5748();
extern Obj801C5938 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C5938 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C5938 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C5B1C *arg0, Sub801C5938 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C5938 *arg4, void (*arg5)());
void func_801C603C();
void func_801C989C(Obj801C52C0_fdat000 *arg0);
void func_801C7940();
void func_801C9040();
void func_801C9550();
void func_801C9BA0(Obj801C993C *arg0, s32 arg1);
void func_8008A80C();
u16 func_80073904(void);
extern Elem801C5F00 D_801D0B68[];
void func_8004C318(s32 arg0);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern u16 D_8019F528;
extern s16 D_8019F52C;
extern Elem801C586C D_801D0B98[];
extern Sub801C5938 D_80039C78;
extern Elem801C75E8 D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C5938 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C75E8 *arg2);
extern s16 D_801A26CE;
extern Elem801C52F0 D_801D0B94[];
s32 func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_80075FC0(Obj801C993C *arg0);
s32 func_8004F024(Sub801C5B1C *arg0, Sub801C5938 *arg1);
void func_80078250(Obj801C993C *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801C993C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
Task801C52F0 *func_80072120(s32 arg0);
void func_801C52F0(Obj801C52F0 *arg0);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CB464;
extern s32 D_801CB468;
extern s32 D_801CB46C;
extern s32 D_801CB470;
extern s32 D_801CB474;
extern s32 D_801CB478;
s32 rand(void);
s32 SquareRoot0(s32 arg0);
s32 func_801C7EA0(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5B1C *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C5938 *arg0, Sub801C5938 *arg1);
void func_801C5BB8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C5938 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub801C5938 *arg1, Sub801C5938 *arg2, Sub801C5938 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C5938 *arg1, Sub801C5938 *arg2, Sub801C5938 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C5938 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C5938 *arg1, Sub801C5938 *arg2, Sub801C5938 *arg3, Sub801C5938 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C5938 *arg1, Sub801C5938 *arg2, Sub801C5938 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C5938 *arg1, Sub801C5938 *arg2, Sub801C5938 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C5938 *arg7);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C6328();
void func_801C691C();
void func_801C6AD0();
void func_801C6DAC();
void func_801C993C(Obj801C993C *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C5B1C *arg0);
void func_8004EA3C(Sub801C5B1C *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801C993C *arg0, Sub801C5938 *arg1);
void func_80076578(Obj801C993C *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801C993C *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801C993C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801C993C *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801C993C *arg0, s32 arg1, s32 arg2, Sub801C5938 *arg3, void (*arg4)());
void func_8007732C(Obj801C993C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C5938 *arg4, void (*arg5)());
void func_800778B8(Obj801C993C *arg0, s32 arg1, s32 arg2, Sub801C5938 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801C993C *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C5938 *arg4, s32 arg5, void (*arg6)());
void func_801C59B8(struct Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1);
void func_801C5B1C(Obj801C52C0 *arg0, s32 arg1);
s32 func_801C9A78(Obj801C993C *arg0);

#endif /* FDAT076_H */
