#ifndef FDAT086_H
#define FDAT086_H

#include "common.h"

/* @types */
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

typedef struct Elem801C6508 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6508;

typedef struct Sub801C7A84 {
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
} Sub801C7A84;

typedef struct Sub801C6800 {
    void (*unk0)();
    void (*unk4)();
    u8 unk8;
    u8 unk9;
    u8 _padA[0x2];
    u32 unkC;
} Sub801C6800;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5550;

typedef struct Obj801C6508 {
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
    u8 _pad42[0xE];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C7A84 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C6508 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801C6508;

typedef struct Obj801C6800 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 _pad8[0x6];
    u16 unkE;
    u8 _pad10[0x4];
    Sub801C6800 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 unk23;
    u16 unk24;
    u8 _pad26[0x2];
    u16 unk28;
    u8 unk2A;
    u8 _pad2B[0x1];
    u16 unk2C;
    u8 _pad2E[0x2];
} Obj801C6800;

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
    Sub801C7A84 unk64;
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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

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

typedef struct Elem801C7308 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x2C];
} Elem801C7308;

typedef struct Sub801C683C {
    u8 _pad0[0x10];
    s8 unk10;
    u8 _pad11[0xA9];
    s16 unkBA;
    s16 unkBC;
    s16 unkBE;
} Sub801C683C;

typedef struct Obj801CB8A4 {
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
    Sub801C7A84 unk64;
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801CB8A4;

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

typedef struct Sub801C55B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C55B4;

typedef struct View801CA094 {
    u8 _pad0[0x8];
    Sub801C55B4 unk8;
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
    struct View801CA094 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    u8 _pad54[0xC];
    struct Mdl801C7DA8 *unk60;
    Sub801C7A84 unk64;
    Sub801C55B4 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x27];
    u8 unk133;
    u8 _pad134[0x1];
    u8 unk135;
} View801CA094;

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
    Sub801C55B4 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct View801CA094_1 {
    Sub801C55B4 unk0;
    Sub801C55B4 unk8;
} View801CA094_1;

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
extern Elem801C6508 D_801CCF68;
void func_801CCE38(Obj801C6508 *arg0);
Sub801C6800 *func_80073674(s32 arg0);
void func_801C67CC(Obj801C7360 *arg0);
s32 func_801C70B8(u8 arg0, u16 arg1);
void func_801C6F78();
void func_801C7174(Obj801C5F00 *arg0);
void func_801C71D8(Obj801C5F00 *arg0);
void func_801C72BC();
void func_801C73D8();
extern u16 D_8019F528;
extern s32 D_801CD538;
void func_8004C318(s32 arg0);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern Obj8007A19C *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub8004DE88 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C7A84 *arg0, Sub8004DE88 *arg1);
void func_800775B8(Obj801C6508 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_801C7FA4();
void func_801CB804(Obj801C52C0 *arg0);
void func_801C98A8();
void func_801CAFA8();
void func_801CB4B8();
void func_801CBB08(Obj801CB8A4 *arg0, s32 arg1);
u16 func_80073904(void);
extern Elem801C5F00 D_801D0B68[];
s32 rand(void);
extern Elem801C7308 D_80198B08[];
void func_801C6960();
void func_801C6974();
void func_801C6BA0();
void func_801C6CAC();
extern s16 D_801A26C0;
extern s16 D_801A26C2;
extern s16 D_801A26C4;
extern s32 D_801AC860[];
extern s32 D_801CD4B4;
s32 SquareRoot0(s32 arg0);
Sub801C683C *func_80086854(s32 arg0, Obj801C6800 *arg1, s32 *arg2);
extern Sub8004DE88 D_80039C78;
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub8004DE88 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C7308 *arg2);
void func_80075FC0(Obj801CB8A4 *arg0);
s32 func_8004F024(Sub801C7A84 *arg0, Sub8004DE88 *arg1);
void func_80078250(Obj801CB8A4 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern u8 D_801CCEA4[][0x20];
extern u8 D_801CCF24[];
extern u8 D_801CCF48[];
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
void func_801C8290();
void func_801C8884();
void func_801C8A38();
void func_801C8D14();
void func_801CB8A4(Obj801CB8A4 *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C7A84 *arg0);
s32 func_8004EBF8(Sub801C7A84 *arg0);
void func_8004EA3C(Sub801C7A84 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801CB8A4 *arg0, Sub8004DE88 *arg1);
void func_80076578(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3, void (*arg4)());
void func_8007732C(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
void func_800778B8(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801CB8A4 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, s32 arg5, void (*arg6)());
void func_801C7920(struct Obj801C52C0 *arg0, Sub801C5634 *arg1);
void func_801C7A84(Obj801C6508 *arg0, s32 arg1);
s32 func_801CB9E0(Obj801CB8A4 *arg0);
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CD4C4;
extern s32 D_801CD4C8;
extern s32 D_801CD4CC;
extern s32 D_801CD4D0;
extern s32 D_801CD4D4;
extern s32 D_801CD4D8;
s32 func_801C9E08(View801CA094 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
void VectorNormalSS(Sub801C55B4 *arg0, Sub801C55B4 *arg1);
void func_801C7B20(View801CA094 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C55B4 *arg4);
void func_80085E98(View801CA094 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(View801CA094 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C55B4 *arg3);
void func_80086448(View801CA094 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, Sub801C55B4 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(View801CA094 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5);
void func_8008915C(View801CA094 *arg0, Sub801C55B4 *arg1, Sub801C55B4 *arg2, Sub801C55B4 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C55B4 *arg7);

#endif /* FDAT086_H */
