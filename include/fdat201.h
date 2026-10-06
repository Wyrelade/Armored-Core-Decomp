#ifndef FDAT201_H
#define FDAT201_H

#include "common.h"

/* @types */
typedef struct Obj8004DEB0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 _pad6[0x4];
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x6];
    s16 unk16;
    u8 _pad18[0x28];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u8 _pad46[0x2];
    s32 unk48;
    s32 unk4C;
    u8 _pad50[0x8];
    s32 unk58;
    s32 unk5C;
    u8 _pad60[0xC];
    s32 unk6C;
    void (*unk70)();
    void (*unk74)();
    void (*unk78)();
    struct Obj8004DEB0 *unk7C;
    void (*unk80)();
    u8 _pad84[0x1];
    u8 unk85;
    u8 _pad86[0x2];
    u8 unk88;
    u8 _pad89[0x1];
    u8 unk8A;
    u8 _pad8B[0x6];
    u8 unk91;
    u8 _pad92[0x6];
    struct Obj8004DEB0 *unk98;
    struct Obj8004DEB0 *unk9C;
    u8 _padA0[0x3];
    u8 unkA3;
    u8 unkA4;
    u8 _padA5[0x1];
    u16 unkA6;
    u16 unkA8;
    u8 unkAA;
    u8 _padAB[0x3];
    s8 unkAE;
    u8 _padAF[0x11];
    s32 unkC0;
    s32 unkC4;
    u8 _padC8[0x8];
} Obj8004DEB0;

typedef struct Sub8004E044 {
    u8 _pad0[0x7E];
    u8 unk7E;
} Sub8004E044;

typedef struct Obj8004E044 {
    u8 _pad0[0x74];
    void (*unk74)();
    u8 _pad78[0x8];
    Sub8004E044 *unk80;
    u8 _pad84[0x14];
    Obj8004DEB0 *unk98;
} Obj8004E044;

typedef struct Obj8004F9D8 {
    u8 _pad0[0x1];
    u8 unk1;
    u8 _pad2[0x72];
    void (*unk74)();
    u8 _pad78[0x4];
    s16 unk7C;
} Obj8004F9D8;

typedef struct Obj8004FF14 {
    u8 _pad0[0x74];
    void (*unk74)();
    u8 _pad78[0x4];
    u8 unk7C[4];
} Obj8004FF14;

/* @externs */
extern Obj8004DEB0 D_801BC4F8;
Obj8004DEB0 *func_80050078(void (*arg0)());
void func_8004F924();
void func_8004DF10(Obj8004DEB0 *arg0);
void func_8004F294(Obj8004DEB0 *arg0);
void func_8004DCC0();
void func_8004FB28(s8 arg0);
void func_8004E0B4(Obj8004E044 *arg0);
void func_8005C2D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8004E2BC(Obj8004DEB0 *arg0);
s16 func_800517C8(void);
void func_8004FA44(Obj8004F9D8 *arg0);
extern u8 D_8004AE88[];
void func_8005D8D4(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
void func_8004FF5C(Obj8004FF14 *arg0);
void func_8004FF14(Obj8004FF14 *arg0);
void func_8004FFF4(Obj8004FF14 *arg0);
u32 *func_80051248(s16 arg0, s16 arg1);
void func_80050944(u32 *arg0);
void func_8002BFE8(s32 arg0);
void func_80051078(u32 *arg0);

#endif /* FDAT201_H */
