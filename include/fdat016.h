#ifndef FDAT016_H
#define FDAT016_H

#include "common.h"

/* @types */
typedef struct Half801C69BC {
    s16 unk0;
    u16 unk2;
} Half801C69BC;

typedef union Un801C6A60 {
    u8 *ptr;
    Half801C69BC h;
} Un801C6A60;

typedef struct Obj801C6A60 {
    u8 _pad0[0x32];
    u16 unk32;
    u8 _pad34[0x2];
    s16 unk36;
    u8 _pad38[0xA];
    u8 unk42;
    u8 _pad43[0xD];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0xA];
    s16 unk6A;
    s16 unk6C;
    u8 _pad6E[0x8E];
    u16 unkFC;
    u8 unkFE;
    u8 _padFF[0x1];
    u16 unk100;
    u8 _pad102[0x6];
    Un801C6A60 unk108;
    s16 unk10C;
    s16 unk10E;
    u8 _pad110[0x60];
} Obj801C6A60;

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

typedef struct Sub801C52D0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C52D0;

typedef struct Sub801C563C {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0x8];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C563C;

typedef struct Sub801C5B7C {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C5B7C;

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    u16 unk10;
    u8 _pad12[0x2];
} Sub801C5550;

typedef struct Obj801C52C0 {
    Sub801C5B7C *unk0;
    u8 _pad4[0x4];
    Sub801C52D0 unk8;
    Sub801C52D0 unk10;
    u8 _pad18[0x14];
    Sub801C5550 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj801C52C0 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    struct Mdl801C7DA8 *unk60;
    Sub801C563C unk64;
    u8 _pad9C[0x30];
    Sub801C52D0 unkCC;
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

typedef struct Task801C788C {
    void (*unk0)();
    void (*unk4)();
    s32 unk8;
} Task801C788C;

typedef struct Obj801C78F4 {
    u8 _pad0[0x14];
    Task801C788C *unk14;
} Obj801C78F4;

typedef struct Sub801C7AB8 {
    void (*unk0)();
    void (*unk4)();
} Sub801C7AB8;

typedef struct Obj801C7AB8 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C7AB8 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C7AB8;

typedef struct Obj801C5458 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C5458;

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

typedef struct Sub801C5798 {
    u8 unk0;
    u8 _pad1[0x5];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x58];
} Sub801C5798;

typedef struct Obj801C52C0_fdat000 {
    u8 _pad0[0x8];
    Sub801C52D0 unk8;
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
    Sub801C52D0 unkCC;
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

typedef struct Sub801C5BDC {
    u8 _pad0[0x12];
    s16 unk12;
} Sub801C5BDC;

typedef struct Elem801C85FC {
    u8 _pad0[0x2];
    u16 unk2;
    u8 _pad4[0x28];
} Elem801C85FC;

typedef struct Elem801CA2EC {
    u8 _pad0[0x34];
} Elem801CA2EC;

typedef struct Obj801CC640 {
    u8 _pad0[0x8];
    Sub801C52D0 unk8;
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
    Sub801C5798 unk64;
    Sub801C52D0 unkCC;
    u8 _padD4[0x34];
    Elem801C52C0 *unk108;
    u8 _pad10C[0x29];
    u8 unk135;
    u8 _pad136[0x12];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj801CC640;

typedef struct Sub801C69BC {
    u8 _pad0[0x10];
    s8 unk10;
} Sub801C69BC;

typedef struct Elem801C69BC {
    Sub801C69BC *unk0;
    u8 _pad4[0x3C];
} Elem801C69BC;

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
    Sub801C52D0 unk22;
} Sub801C7DA8;

typedef struct Tbl801C7DA8 {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C7DA8;

typedef struct Seg801C7DA8 {
    Sub801C52D0 unk0;
    Sub801C52D0 unk8;
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
void func_801C62CC();
void func_801C69BC(Obj801C6A60 *arg0);
void func_801C66DC();
void func_801C6904();
void func_801C68E4(void);
extern u8 D_801CDC7C[];
void func_801CDBD4(Obj801C52C0 *arg0);
void *func_80072120(s32 arg0);
void func_801C72A8();
void func_801C730C(Obj801C730C *arg0);
void func_801C7390();
void func_8006D39C(Obj801C730C *arg0);
s32 func_8006D45C();
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C7624(Obj801C730C *arg0);
s32 func_801C76C0(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
void *func_80073674(s32 arg0);
void func_801C7758();
s32 func_801C7A70(u8 arg0, u16 arg1);
void func_801C7930();
void func_801C7B2C();
void func_801C7C48();
extern Obj801C5458 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C52D0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C563C *arg0, Sub801C52D0 *arg1);
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4, void (*arg5)());
void func_801C8D40();
void func_801CC5A0(Obj801C52C0_fdat000 *arg0);
void func_801CC8A4(Obj801CC640 *arg0, s32 arg1);
void func_801CA644();
void func_801CBD44();
void func_801CC254();
u16 func_80073904(void);
void func_80078598(Obj801C52C0 *arg0);
s32 func_800754D0(Obj801C52C0 *arg0, u8 *arg1);
void func_80078E1C(Obj801C52C0 *arg0);
s32 rand(void);
extern s32 D_801A5DC4;
extern u8 D_801CDC20[];
extern Sub801C52D0 D_80039C78;
extern u8 D_8019F52E[];
extern u8 D_801CDC44[];
extern u8 D_801CDC48[];
extern u8 D_801CDC4C[];
Sub801C5BDC *func_80086F20(s32 arg0, Sub801C52D0 *arg1, s32 arg2, s32 arg3, s32 arg4, Sub801C52D0 *arg5, u8 *arg6, u8 *arg7, u8 *arg8);
s32 func_801C59F8(Obj801C52C0 *arg0);
void func_80077B78(Obj801C52C0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6, s32 arg7);
extern Elem801C85FC D_8019FB94[];
s16 func_80014DAC(s32 arg0);
s32 func_80014D30(s32 arg0);
void func_80075A18(s32 arg0, s32 arg1, Sub801C52D0 *arg2);
void func_80075A54(s32 arg0, s32 arg1, Sub801C52D0 *arg2);
extern Elem801CA2EC D_80198B08[];
void func_800759A4(Obj801C52C0_fdat000 *arg0, s32 arg1, Sub801C52D0 *arg2);
void func_80075B08(Obj801C52C0_fdat000 *arg0, s32 arg1, Elem801CA2EC *arg2);
s32 func_80014D78(s32 arg0);
void func_8007847C(Obj801CC640 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078250(Obj801CC640 *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80075FC0(Obj801CC640 *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub801C52D0 *arg1);
extern Elem801C69BC D_801D0B94[];
extern Obj801C6A60 D_801A26B8[];
extern Tbl801C7DA8 D_8008E658[];
extern Hdr801C7DA8 *D_801A6134[];
extern s32 D_801CE324;
extern s32 D_801CE328;
extern s32 D_801CE32C;
extern s32 D_801CE330;
extern s32 D_801CE334;
extern s32 D_801CE338;
s32 SquareRoot0(s32 arg0);
s32 func_801CABA4(Obj801C52C0 *arg0, Sub801C7DA8 *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C563C *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C7DA8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C52D0 *arg0, Sub801C52D0 *arg1);
void func_801C88BC(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub801C52D0 *arg1, Sub801C52D0 *arg2, Sub801C52D0 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C52D0 *arg1, Sub801C52D0 *arg2, Sub801C52D0 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C52D0 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C52D0 *arg1, Sub801C52D0 *arg2, Sub801C52D0 *arg3, Sub801C52D0 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C52D0 *arg1, Sub801C52D0 *arg2, Sub801C52D0 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C52D0 *arg1, Sub801C52D0 *arg2, Sub801C52D0 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C52D0 *arg7);
extern s32 D_801A5DC8;
void D_80076014();
void D_80076078();
void D_800760DC();
void D_800764C4();
void func_801C902C();
void func_801C9620();
void func_801C97D4();
void func_801C9AB0();
void func_801CC640(Obj801CC640 *arg0);
s32 ratan2(s32 arg0, s32 arg1);
s32 abs(s32 arg0);
s32 func_8004EAD0(Sub801C5798 *arg0);
void func_8004EA3C(Sub801C5798 *arg0, s32 arg1, u8 *arg2);
s32 func_80074FA4(Obj801CC640 *arg0, Sub801C52D0 *arg1);
void func_80076578(Obj801CC640 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800765E8(Obj801CC640 *arg0, s32 arg1, s32 arg2, void (*arg3)());
void func_800766E0(Obj801CC640 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, void (*arg6)());
void func_80076A84(Obj801CC640 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, void (*arg5)());
void func_80077170(Obj801CC640 *arg0, s32 arg1, s32 arg2, Sub801C52D0 *arg3, void (*arg4)());
void func_8007732C(Obj801CC640 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4, void (*arg5)());
void func_800778B8(Obj801CC640 *arg0, s32 arg1, s32 arg2, Sub801C52D0 *arg3, s32 arg4, void (*arg5)());
void func_8007790C(Obj801CC640 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C52D0 *arg4, s32 arg5, void (*arg6)());
void func_801C86BC(struct Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1);
void func_801C8820(Obj801C52C0 *arg0, s32 arg1);
s32 func_801CC77C(Obj801CC640 *arg0);

#endif /* FDAT016_H */
