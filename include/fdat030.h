#ifndef FDAT030_H
#define FDAT030_H

#include "common.h"

/* @types */
typedef struct Sub8004DE88 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub8004DE88;

typedef struct Sub8004EFB8 {
    s16 unk0;
    u8 _pad2[0x6];
} Sub8004EFB8;

typedef struct Sub8004ECA8 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004ECA8;

typedef struct Sub8007618C {
    u8 unk0;
    u8 _pad1;
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x6];
    s16 unkA;
    s16 unkC;
    u8 _padE[0xE];
    Sub8004ECA8 *unk1C;
    Sub8004EFB8 unk20;
    Sub8004EFB8 unk28;
    Sub8004EFB8 unk30;
} Sub8007618C;

typedef struct Sub801C4DE4 {
    u8 _pad0[0xA];
    s16 unkA;
    u8 _padC[0x10];
    u16 unk1C;
    u8 _pad1E[0x2];
    u8 unk20;
} Sub801C4DE4;

typedef struct Sub801C52C0 {
    u8 _pad0[0x3A];
    u8 unk3A;
    u8 unk3B;
} Sub801C52C0;

typedef struct Obj8007618C {
    Sub801C4DE4 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    u8 _pad18[0x1E];
    s16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj8007618C *, u8);
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    Sub8007618C unk64;
    u8 _pad9C[0x30];
    Sub8004DE88 unkCC;
    u8 _padD4[0x34];
    Sub801C52C0 *unk108;
    u8 _pad10C[0x3C];
    u16 unk148;
    u8 unk14A;
    u8 unk14B;
    u8 unk14C;
    u8 _pad14D[0xF];
    s32 unk15C;
    u16 unk160;
    u8 _pad162[0x2];
} Obj8007618C;

typedef struct Obj80078CFC {
    u8 _pad0[0xE];
    s16 unkE;
} Obj80078CFC;

typedef struct Sub80078CFC {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj80078CFC *);
} Sub80078CFC;

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

typedef struct Obj801C6870 {
    u8 _pad0[0xA];
    u16 unkA;
} Obj801C6870;

typedef struct Sub801C4C94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub801C4C94;

typedef struct Sub801C4D98 {
    u8 unk0;
    u8 _pad1[0x1];
    u8 unk2;
    u8 _pad3[0x7];
    s16 unkA;
    u8 _padC[0x2];
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

typedef struct Sub801C4EE0 {
    u8 _pad0[0x1000];
    u8 unk1000[1];
} Sub801C4EE0;

typedef struct Obj801C504C {
    u8 _pad0[0x8];
    Sub801C4C94 unk8;
    u8 _pad10[0x2];
    u16 unk12;
    u8 _pad14[0x22];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 _pad3D[0x4];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj801C504C *, u8);
    u8 _pad54[0x10];
    Sub801C4D98 unk64;
    s16 unk72;
    u8 _pad74[0x58];
    s16 unkCC;
} Obj801C504C;

/* @externs */
s32 rand(void);
void func_801C4C94(Obj8007618C *arg0);
void func_80077B78(Obj8007618C *arg0, s32 arg1, u16 arg2, u8 arg3, u8 *arg4, s32 arg5, s32 arg6);
extern u8 D_801C7AE8[];
void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3);
void func_80075FC0(Obj8007618C *arg0);
void func_8004ECA8(Sub8007618C *arg0);
void func_801C4FB8(Obj801C4EB8 *arg0);
void func_801C5A50(Obj801C4EB8 *arg0);
extern Sub80078CFC *D_8019F51C;
extern s32 D_801C7B94;
void func_801C5754();
extern u8 D_801A26C0[];
extern u16 D_801A26E0;
extern u16 D_801A26E2;
void func_80012794(s16 *arg0, u16 arg1, u16 arg2, s32 arg3, u8 *arg4, s32 arg5, s32 arg6);
void func_8004EC4C(Sub801C4D98 *arg0);
extern Sub801C4EE0 *D_801A5DC0;
void func_8004CC30(s32 arg0, u8 *arg1, Sub801C4C94 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_8004F024(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
s32 func_8004F080(Sub801C4D98 *arg0, Sub801C4C94 *arg1);
extern u8 D_801C7B08[];
s32 func_800754D0(Obj8007618C *arg0, u8 *arg1);
void func_80078E1C(Obj8007618C *arg0);

#endif /* FDAT030_H */
