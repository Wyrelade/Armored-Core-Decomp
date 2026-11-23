#ifndef FDAT066_H
#define FDAT066_H

#include "common.h"

/* @types */
typedef struct Sub801C5548 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C5548;

typedef struct Sub801C52C0 {
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
} Sub801C52C0;

typedef struct Sub801C6510 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6510;

typedef struct Sub801C66F4 {
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
} Sub801C66F4;

typedef struct Obj801C52C0 {
    u8 _pad0[0x8];
    Sub801C6510 unk8;
    u8 _pad10[0x1C];
    Sub801C5548 *unk2C;
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
    Sub801C66F4 unk64;
    Sub801C6510 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x27];
    u8 unk133;
    u8 _pad134[0x1];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C52C0;

typedef struct Sub801C5808 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C5808;

typedef struct Obj801C5808 {
    u8 _pad0[0x2C];
    Sub801C5548 *unk2C;
    u8 _pad30[0x8];
    Sub801C5808 *unk38;
} Obj801C5808;

typedef struct Sub801C6394 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6394;

typedef struct Obj801C6394 {
    u8 _pad0[0x14];
    Sub801C6394 *unk14;
    u8 _pad18[0xB];
    u8 unk23;
    u8 _pad24[0x4];
    u16 unk28;
    u8 _pad2A[0x2];
} Obj801C6394;

typedef struct Obj801C6510 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C6510;

typedef struct Elem801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 _pad3C[0x508];
} Elem801C52C0;

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x67];
} Sub801C5798;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C6510 unk8;
    u8 _pad10[0x1C];
    Sub801C5548 *unk2C;
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
    Sub801C6510 unkCC;
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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Elem801C5F64 {
    u8 _pad0[0x34];
} Elem801C5F64;

typedef struct Obj801CA514 {
    u8 _pad0[0x8];
    Sub801C6510 unk8;
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
    Sub801C66F4 unk64;
    Sub801C6510 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801CA514;

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
    Sub801C6510 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C6510 unk0;
    Sub801C6510 unk8;
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
extern Sub801C52C0 D_801CBAF4;
void func_801CBAA8(Obj801C52C0 *arg0);
Sub801C5548 *func_80072120(s32 arg0);
void func_801C52F0();
void func_801C5584();
void func_801C56A4();
void func_8006D39C(Obj801C5808 *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C5808(Obj801C5808 *arg0);
s32 func_801C58A4(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C6394 *func_80073674(s32 arg0);
void func_801C6078();
extern Obj801C6510 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C6510 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C6510 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C66F4 *arg0, Sub801C6510 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6510 *arg4, void (*arg5)());
void func_801C6C14();
void func_801CA474(Obj801C52C0_fdat000 *arg0);
void func_801C8518();
void func_801C9C18();
void func_801CA128();
void func_801CA778(Obj801CA514 *arg0, s32 arg1);
void func_8008A80C();
u16 func_80073904(void);
s32 rand(void);
extern Elem801C5F64 D_80198B08[];
void func_801C5A60();
void func_801C5A74();
void func_801C5CA0();
void func_801C5DAC();
extern Sub801C6510 D_80039C78;
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C6510 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801C5F64 *arg2);
void func_80075FC0(Obj801CA514 *arg0);
s32 func_8004F024(Sub801C66F4 *arg0, Sub801C6510 *arg1);
void func_8007847C(Obj801CA514 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078250(Obj801CA514 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CC048;
extern s32 D_801CC04C;
extern s32 D_801CC050;
extern s32 D_801CC054;
extern s32 D_801CC058;
extern s32 D_801CC05C;
s32 SquareRoot0(s32 arg0);
s32 func_801C8A78(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C66F4 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C6510 *arg0, Sub801C6510 *arg1);
void func_801C6790(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6510 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub801C6510 *arg1, Sub801C6510 *arg2, Sub801C6510 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C6510 *arg1, Sub801C6510 *arg2, Sub801C6510 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C6510 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C6510 *arg1, Sub801C6510 *arg2, Sub801C6510 *arg3, Sub801C6510 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C6510 *arg1, Sub801C6510 *arg2, Sub801C6510 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C6510 *arg1, Sub801C6510 *arg2, Sub801C6510 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C6510 *arg7);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C6F00();
void func_801C74F4();
void func_801C76A8();
void func_801C7984();
void func_801CA514(Obj801CA514 *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C66F4 *arg0);
void func_8004EA3C(Sub801C66F4 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801CA514 *arg0, Sub801C6510 *arg1);
void func_80076578(Obj801CA514 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801CA514 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801CA514 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801CA514 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801CA514 *arg0, s32 arg1, s32 arg2, Sub801C6510 *arg3, void (*arg4)());
void func_8007732C(Obj801CA514 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6510 *arg4, void (*arg5)());
void func_800778B8(Obj801CA514 *arg0, s32 arg1, s32 arg2, Sub801C6510 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801CA514 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C6510 *arg4, s32 arg5, void (*arg6)());
void func_801C6590(struct Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1);
void func_801C66F4(Obj801C52C0 *arg0, s32 arg1);
s32 func_801CA650(Obj801CA514 *arg0);

#endif /* FDAT066_H */
