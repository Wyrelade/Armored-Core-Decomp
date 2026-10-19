#ifndef FDAT036_H
#define FDAT036_H

#include "common.h"

/* @types */
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

typedef struct Sub801C5550 {
    void (*unk0)();
    void (*unk4)();
} Sub801C5550;

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

typedef struct Sub801C5EA8 {
    u8 _pad0[0x10];
    u8 unk10;
} Sub801C5EA8;

typedef struct Sub801C6050 {
    u8 _pad0[0x6];
    u8 unk6;
} Sub801C6050;

typedef struct Elem801C5EA8 {
    u8 _pad0[0x26];
    s16 unk26;
    u16 *unk28;
    Sub801C5EA8 *unk2C;
    u8 _pad30[0x8];
    Sub801C6050 *unk38;
    u8 _pad3C[0x4];
} Elem801C5EA8;

typedef struct Sub801C71D8 {
    u8 _pad0[0x6];
    u8 unk6;
    u8 _pad7[0x9];
    u8 unk10;
} Sub801C71D8;

/* @externs */
s16 func_80073904(void);
void func_801C4DBC();
void func_801C5208();
void func_801C5094();
void func_801C5404();
void func_800775B8(Obj801C52C0 *arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, void (*arg5)());
extern s32 D_801A5DC8;
void func_801C5F98();
void func_80078598(void);
void LoadAverageCol(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void func_80056B54(Obj801C52C0 *arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6);
void func_801C6238(void);
s32 rsin(s32 arg0);
extern u8 D_801C7348[];
extern u8 D_801C734C[];
void func_801C6594(Obj801C4C94 *arg0);
s32 rand(void);
void func_801C6258(Obj801C52C0 *arg0);
Task801C6254 *func_80072120(s32 arg0);
void func_801C6D00();
void func_80056C6C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_8004E98C(Sub801C4D98 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801C61AC(Obj801C52C0 *arg0, u8 arg1);
void func_801C6460();
extern Elem801C5EA8 D_801D0B68[];
s32 func_80014D78(s32 arg0);
void func_800759A4(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
s32 func_80014DAC(s32 arg0);
void func_80075A18(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
void func_80075A54(s32 arg0, s32 arg1, Sub801C4C94 *arg2);
extern u16 D_8019F528;
extern s32 D_801C7364;
extern s32 D_801C7368;
extern Sub801C71D8 *D_801D3214;
extern Sub801C71D8 *D_801D3220;
extern Sub801C71D8 *D_801D3260;
void func_8004CFC8(s32 arg0, s32 arg1);
void func_800529F0(s32 arg0, s32 arg1, s32 arg2);

#endif /* FDAT036_H */
