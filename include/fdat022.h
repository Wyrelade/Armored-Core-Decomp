#ifndef FDAT022_H
#define FDAT022_H

#include "common.h"

/* @types */
typedef struct Sub801C73EC {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[0x10];
    u16 unk1C;
    u16 unk1E;
    u8 unk20;
    u8 unk21;
} Sub801C73EC;

typedef struct Sub801C6C1C {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C6C1C;

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

typedef struct Sub801C5C00 {
    u8 _pad0[0x38];
    u16 unk38;
} Sub801C5C00;

typedef struct Obj801C53A0 {
    Sub801C73EC *unk0;
    u8 _pad4[0x4];
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 _padE[0x2];
    Sub801C6C1C unk10;
    u8 _pad18[0x14];
    Sub801C6060 *unk2C;
    s32 unk30;
    u8 _pad34[0x2];
    s16 unk36;
    Sub801C6A5C *unk38;
    u8 _pad3C[0x2];
    u8 unk3E;
    u8 _pad3F[0x1];
    u8 unk40;
    u8 unk41;
    s8 unk42;
    u8 _pad43[0x1];
    s16 unk44;
    u8 _pad46[0x2];
    Sub801C5C00 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)(struct Obj801C53A0 *, u8);
    void (*unk54)(struct Obj801C53A0 *, s32);
    void (*unk58)();
    void (*unk5C)();
    u8 _pad60[0x4];
    Sub801C53A0 unk64;
    u8 _pad9C[0x32];
    s16 unkCE;
    u8 _padD0[0x2C];
    u16 unkFC;
    u8 _padFE[0x2];
    u8 unk100;
    u8 _pad101[0x9];
    s8 unk10A;
    s8 unk10B;
    u8 _pad10C[0x3C];
    s16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
    u16 unk164;
    u8 _pad166[0x2];
} Obj801C53A0;

typedef struct Elem801C5FD0 {
    s32 unk0;
    u8 _pad4[0x3C];
} Elem801C5FD0;

typedef struct Sub801C6360 {
    void (*unk0)();
    u8 _pad4[0x4];
    s32 unk8;
} Sub801C6360;

typedef struct Obj801C6360 {
    u8 _pad0[0x14];
    Sub801C6360 *unk14;
    u8 _pad18[0xA];
    u8 unk22;
    u8 _pad23[0x5];
    u8 unk28;
} Obj801C6360;

typedef struct Obj801C73EC {
    u8 _pad0[0x20];
    void (*unk20[1])();
} Obj801C73EC;

typedef struct Obj801C6720 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6720;

typedef struct Obj801C5C4C {
    u8 _pad0[0x32];
    s16 unk32;
    u8 _pad34[0x2];
    s16 unk36;
    u8 _pad38[0x20];
    void (*unk58)();
    u8 _pad5C[0xA2];
    u8 unkFE;
} Obj801C5C4C;

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

typedef struct Obj801C60B0 {
    u8 _pad0[0x8];
    Sub801C6C1C unk8;
    Sub801C6C1C unk10;
    u8 _pad18[0x14];
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    u8 _pad32[0xE];
    u8 unk40;
    u8 _pad41;
    u8 unk42;
    u8 _pad43;
    u16 unk44;
    u8 _pad46[0x1E];
    Sub801C53A0 unk64;
    u8 _pad9C[0x60];
    u16 unkFC;
    u8 unkFE;
    u8 unkFF;
    u8 _pad100[0x8];
    s16 unk108;
    u8 unk10A;
    u8 unk10B;
} Obj801C60B0;

typedef struct Elem801C60B0 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0x2A];
} Elem801C60B0;

typedef struct Sub801C60B0 {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[0x2];
    s16 unkE;
    u8 _pad10[0x48];
    s32 unk58;
    u8 _pad5C[0x72];
    s16 unkCE;
    u8 _padD0[0x30];
    u8 unk100;
    u8 _pad101[0x6F];
} Sub801C60B0;

typedef struct Elem801C7538 {
    u8 _pad0[0x2];
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x2];
    u16 unk8;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
} Elem801C7538;

typedef struct Sub8006D4BC {
    u8 _pad0[0x4];
    Elem801C5FD0 *unk4;
    u8 _pad8[0x6];
    u16 unkE;
} Sub8006D4BC;

typedef struct Obj8007A19C {
    u8 _pad0[0x1000];
    u8 unk1000[0x100];
    u8 unk1100[1];
} Obj8007A19C;

/* @externs */
extern Elem801C5FD0 D_801D0B94[];
void func_80078E1C(Obj801C53A0 *arg0);
extern u8 D_8019FB68[];
Obj801C53A0 *func_80078A2C(void);
void func_80078B14(Obj801C53A0 *arg0, u8 *arg1);
void func_8004E98C(Sub801C53A0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C60B0(Obj801C60B0 *arg0);
void func_801C66C4();
Sub801C6060 *func_80072120(s32 arg0);
void func_801C67C8();
void func_8006D39C(Obj801C53A0 *arg0);
s32 func_8006D45C(void);
void func_8008A0B0(u8 arg0, u8 arg1, u16 arg2, u8 arg3, u8 arg4);
void func_801C6A5C(Obj801C53A0 *arg0);
s32 func_801C6AF8(Obj801C730C *arg0, s32 arg1, s32 arg2, ...);
Sub801C6360 *func_80073674(s32 arg0);
void func_801C6B90(Obj801C6720 *arg0);
void func_801C6BE0();
void func_801C6CFC();
extern s32 D_801C761C;
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);
extern u16 D_8019F528;
void func_801C705C(void);
extern Obj801C73EC *D_8019F51C;
extern s32 D_801C7624;
void func_801C6758(Obj801C53A0 *arg0);
void func_801C5A0C(Obj801C53A0 *arg0, u8 arg1);
void func_801C5E40(Obj801C53A0 *arg0, s32 arg1);
void func_801C5C00(Obj801C53A0 *arg0);
void func_801C5EF8();
void func_801C5FD0();
s32 func_80014D78(s32 arg0);
void func_800759A4(s32 arg0, s32 arg1, Sub801C6C1C *arg2);
extern u8 D_801C74CC[];
extern u8 D_801C74F0[];
extern u8 D_801C7510[];
s32 func_800754D0(Obj801C53A0 *arg0, u8 *arg1);
s32 func_80073714(Obj801C53A0 *arg0, s32 arg1);
s32 func_801C5B10(Obj801C53A0 *arg0);
s32 rand(void);
void func_80077B78(Obj801C53A0 *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, ...);
extern Elem801C60B0 D_8019FAB8[];
extern Sub801C60B0 D_801A26B8[];
extern Elem801C7538 D_801C7538[];
extern Elem801C5FD0 D_801D0B68[];
extern Obj8007A19C *D_801A5DC0;
extern s32 D_801A5DC8;
extern u8 D_801C75F0[];
Sub8006D4BC *func_8006D4BC(s32 arg0);
Sub8006D4BC *func_80075030(Obj801C60B0 *arg0, s32 arg1);
void func_80014728(s32 arg0, Sub801C6C1C *arg1);
s16 func_8006E6B4(s32 arg0, Sub801C6C1C *arg1);
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C6C1C *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004ECA8(Sub801C53A0 *arg0);
s32 func_8004EBF8(Sub801C53A0 *arg0);
Obj801C53A0 *func_801C6044(u8 *arg0);

#endif /* FDAT022_H */
