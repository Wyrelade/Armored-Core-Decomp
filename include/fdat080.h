#ifndef FDAT080_H
#define FDAT080_H

#include "common.h"

/* @types */
typedef struct Elem801C4E64 {
    u8 _pad0[0x1C];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Elem801C4E64;

typedef struct Sub801C50B0 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C50B0;

typedef struct Sub801C4E64 {
    u8 _pad0[0x2];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
    u8 _padC[0xC];
    s16 unk18;
    u8 _pad1A[0x4E];
} Sub801C4E64;

typedef struct Elem801C6B68 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Elem801C6B68;

typedef struct Obj801C4E64 {
    Elem801C4E64 *unk0;
    u8 _pad4[0x4];
    Sub801C50B0 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x1E];
    s16 unk32;
    u8 _pad34[0x2];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C4E64 *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C4E64 unk64;
    Sub801C50B0 unkCC;
    u8 _padD4[0x2A];
    u8 unkFE;
    u8 _padFF[0x9];
    Elem801C6B68 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u8 _pad160[0x4];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C4E64;

typedef struct Sub801C6128 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6128;

typedef struct Sub801C639C {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C639C;

typedef struct Sub801C5E2C {
    u8 unk0;
} Sub801C5E2C;

typedef struct Obj801C5E2C {
    u8 _pad0[0x2C];
    Sub801C6128 *unk2C;
    u8 _pad30[0x6];
    s16 unk36;
    Sub801C639C *unk38;
    u8 _pad3C[0xCC];
    Sub801C5E2C *unk108;
} Obj801C5E2C;

typedef struct Sub801C6B04 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6B04;

typedef struct Obj801C6658 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C6B04 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C6658;

typedef struct Obj801C6B04 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub801C6B04 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23;
    u16 unk24;
    u8 _pad26[0x4];
    u8 unk2A;
    u8 _pad2B;
    u16 unk2C;
} Obj801C6B04;

typedef struct Obj801C6B68 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Obj801C6B68;

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
    Sub801C50B0 unk8;
    u8 _pad10[0x1C];
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
    struct Mdl801C935C *unk60;
    Sub801C5798 unk64;
    Sub801C50B0 unkCC;
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

typedef struct Sub801C73EC {
    u8 _pad0[0xA];
    s16 unkA;
} Sub801C73EC;

typedef struct Sub801C6060 {
    void (*unk0)();
    void (*unk4)();
    u8 _pad8[0x8];
    s32 unk10;
} Sub801C6060;

typedef struct Sub801C6A5C {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u16 unk6;
    u8 unk8;
    u8 unk9;
} Sub801C6A5C;

typedef struct Sub801C53A0 {
    u8 _pad0[0x18];
    s16 unk18;
    u8 _pad1A[0x1E];
} Sub801C53A0;

typedef struct Obj801C53A0 {
    Sub801C73EC *unk0;
    u8 _pad4[0xC];
    Sub801C50B0 unk10;
    u8 _pad18[0x14];
    Sub801C6060 *unk2C;
    s32 unk30;
    u8 _pad34[0x2];
    s16 unk36;
    Sub801C6A5C *unk38;
    u8 _pad3C[0x5];
    u8 unk41;
    s8 unk42;
    u8 _pad43;
    s16 unk44;
    u8 _pad46[0xA];
    void (*unk50)(struct Obj801C53A0 *, u8);
    void (*unk54)(struct Obj801C53A0 *, s32);
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C53A0 unk64;
    u8 _pad9C[0x60];
    u16 unkFC;
    u8 _padFE[0xC];
    s8 unk10A;
    s8 unk10B;
    u8 _pad10C[0x54];
    u16 unk160;
} Obj801C53A0;

typedef struct Elem801C5FD0 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5FD0;

typedef struct Elem801C8818 {
    u8 _pad0[0x34];
} Elem801C8818;

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

typedef struct Sub801C6164 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
} Sub801C6164;

typedef struct Elem801C6164 {
    u8 _pad0[0xC];
    s32 unkC;
} Elem801C6164;

typedef struct Obj801C6164 {
    u8 _pad0[0x2C];
    Sub801C6128 *unk2C;
    u8 _pad30[0x8];
    Sub801C6164 *unk38;
} Obj801C6164;

typedef struct Obj801CAB6C {
    u8 _pad0[0x8];
    Sub801C50B0 unk8;
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
} Obj801CAB6C;

typedef struct Sub801C935C {
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
    Sub801C50B0 unk22;
} Sub801C935C;

typedef struct Tbl801C935C {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
} Tbl801C935C;

typedef struct Seg801C935C {
    Sub801C50B0 unk0;
    Sub801C50B0 unk8;
} Seg801C935C;

typedef struct Elem801C935C {
    u8 _pad0[0x26];
    u16 unk26;
    u8 _pad28[0x54];
} Elem801C935C;

typedef struct Mdl801C935C {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x10];
    Elem801C935C *unk20;
} Mdl801C935C;

typedef struct Hdr801C935C {
    u8 _pad0[0x14];
    s32 unk14;
} Hdr801C935C;

typedef struct Slot801C935C {
    u16 unk0;
    u8 _pad2[0x12];
} Slot801C935C;

typedef struct Part801C935C {
    u8 _pad0[0x14];
    Slot801C935C unk14[1];
} Part801C935C;

/* @externs */
extern Sub801C5E2C D_801CC190;
void func_801CC100(Obj801C4E64 *arg0);
Sub801C6128 *func_80072120(s32 arg0);
void func_801C5ED0();
void func_801C6238();
void func_8006D39C(Obj801C5E2C *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, s32 arg4);
void func_801C639C(Obj801C5E2C *arg0);
s32 func_801C6438(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C6B04 *func_80073674(s32 arg0);
s32 func_801C6610(u8 arg0, u16 arg1);
void func_801C64D0();
void func_801C66CC();
void func_801C67E8();
extern Obj801C6B68 *D_801A5DC0;
void func_8004CE44(s32 arg0, Sub801C50B0 *arg1, s32 arg2, s32 arg3);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C50B0 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004DE88(Sub801C4E64 *arg0, Sub801C50B0 *arg1);
void func_800775B8(Obj801C4E64 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C50B0 *arg4, void (*arg5)());
void func_801C726C();
void func_801C8B70();
void func_801CA270();
void func_801CA780();
void func_801CAACC(Obj801C52C0 *arg0);
void func_801CADD0();
void func_8008A80C();
u16 func_80073904(void);
extern Elem801C5FD0 D_801D0B94[];
void func_80078E1C(Obj801C4E64 *arg0);
s32 func_800754D0(Obj801C4E64 *arg0, s32 *arg1);
void func_80077B78(Obj801C4E64 *arg0, s32 arg1, u16 arg2, u8 arg3, s32 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_80078598();
s32 func_801C5708(Obj801C4E64 *arg0);
s32 rand(void);
extern s32 D_801CC14C;
extern s32 D_801CC170;
void func_801C55C8(Obj801C4E64 *arg0, u8 arg1);
s32 func_801C5AB0(Obj801C52C0 *arg0, s32 arg1, ...);
void func_801C582C(Obj801C4E64 *arg0);
void func_801C5C5C();
void func_801C5E5C();
extern Sub801C50B0 D_80039C78;
extern Elem801C8818 D_80198B08[];
void func_800759A4(Obj801C52C0 *arg0, s32 arg1, Sub801C50B0 *arg2);
void func_80075B08(Obj801C52C0 *arg0, s32 arg1, Elem801C8818 *arg2);
void func_80075FC0(Obj801CAB6C *arg0);
s32 func_8004F024(Sub801C5798 *arg0, Sub801C50B0 *arg1);
void func_80078250(Obj801CAB6C *arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007847C(Obj801CAB6C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 func_80073714(Obj801C52C0 *arg0, s32 arg1);
void func_801C5970(s32 arg0, s32 arg1);
void func_801C59E0(s32 arg0, s32 arg1);
void func_801C5A48(s32 arg0, s32 arg1);
extern Tbl801C935C D_8008E658[];
extern Hdr801C935C *D_801A6134[];
extern s32 D_801CC6E0;
extern s32 D_801CC6E4;
extern s32 D_801CC6E8;
extern s32 D_801CC6EC;
extern s32 D_801CC6F0;
extern s32 D_801CC6F4;
s32 SquareRoot0(s32 arg0);
s32 func_801C90D0(Obj801C52C0 *arg0, Sub801C935C *arg1, s32 arg2, s32 arg3);
s32 func_8004EBF8(Sub801C5798 *arg0);
s32 func_800745D0(Obj801C52C0 *arg0, Seg801C935C *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void VectorNormalSS(Sub801C50B0 *arg0, Sub801C50B0 *arg1);
void func_801C6DE8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub801C50B0 *arg4);
void func_80085E98(Obj801C52C0 *arg0, Sub801C50B0 *arg1, Sub801C50B0 *arg2, Sub801C50B0 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 *arg7, s32 arg8, s32 arg9, s32 arg10, s32 *arg11, s32 *arg12, s32 arg13, s32 arg14);
void func_800889B4(Obj801C52C0 *arg0, Sub801C50B0 *arg1, Sub801C50B0 *arg2, Sub801C50B0 *arg3, s32 arg4, s32 arg5);
s32 func_800781E8(Obj801C52C0 *arg0);
void func_80014AE4(s32 arg0, s32 arg1, s32 arg2, Sub801C50B0 *arg3);
void func_80086448(Obj801C52C0 *arg0, Sub801C50B0 *arg1, Sub801C50B0 *arg2, Sub801C50B0 *arg3, Sub801C50B0 *arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8008840C(Obj801C52C0 *arg0, Sub801C50B0 *arg1, Sub801C50B0 *arg2, Sub801C50B0 *arg3, s32 arg4, s32 arg5);
void func_8008915C(Obj801C52C0 *arg0, Sub801C50B0 *arg1, Sub801C50B0 *arg2, Sub801C50B0 *arg3, s32 arg4, s32 arg5, s32 arg6, Sub801C50B0 *arg7);

#endif /* FDAT080_H */
