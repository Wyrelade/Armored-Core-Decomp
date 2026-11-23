#ifndef FDAT204_H
#define FDAT204_H

#include "common.h"
#include "gte.h"

/* @types */
typedef struct Elem8004EDA8 {
    u8 _pad0[0x10];
    s16 unk10;
} Elem8004EDA8;

typedef struct Sub8004EDA8 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004EDA8;

typedef struct Sub8004F0B8 {
    s16 unk0;
    u8 _pad2[0x6];
} Sub8004F0B8;

typedef struct Obj8004EDA8 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 _pad4[0x2];
    u16 unk6;
    u16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    u8 _pad10[0xC];
    Sub8004EDA8 *unk1C;
    Sub8004F0B8 unk20;
    Sub8004F0B8 unk28;
    Sub8004F0B8 unk30;
    Sub8004F0B8 unk38;
    Sub8004F0B8 unk40;
    Sub8004F0B8 unk48;
} Obj8004EDA8;

typedef struct Obj8004F0B8 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Obj8004F0B8;

typedef struct Elem80053658 {
    u8 _pad0[0x7C];
} Elem80053658;

typedef struct Elem80056180 {
    u8 unk0;
    u8 _pad1[0x17];
} Elem80056180;

typedef struct Elem8006E698 {
    u8 _pad0[0xE];
    u16 unkE;
    u8 _pad10[0x4];
} Elem8006E698;

typedef struct Obj8006FBC0 {
    u16 unk0;
    u8 _pad2[0x2];
    s32 unk4[8];
    s32 unk24[8];
    s32 unk44[8];
    Elem8006E698 unk64[1];
} Obj8006FBC0;

typedef struct Obj80073138 {
    s32 unk0;
    u8 _pad4[0x4];
    Obj8004F0B8 unk8;
    Obj8004F0B8 unk10;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0xC];
    u16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    u8 _pad32[0x4];
    u16 unk36;
    u8 _pad38[0x4];
    u8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x3];
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj80073138 *unk48;
    u8 _pad4C[0x4];
    void (*unk50)(struct Obj80073138 *, u8);
    void (*unk54)(struct Obj80073138 *, s32, s32);
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    Obj8004EDA8 unk64;
    u8 _padB4[0x18];
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
    s16 unkD2;
    u8 _padD4[0x34];
    s16 unk108;
    s16 unk10A;
    s16 unk10C;
    s16 unk10E;
    u8 _pad110[0x38];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj80073138;

typedef struct Obj80074314 {
    u8 _pad0[0x164];
    u16 unk164;
} Obj80074314;

typedef struct Sub80077EAC {
    u8 _pad0[0x4];
} Sub80077EAC;

typedef struct Obj80077CD8 {
    s32 unk0;
    u8 _pad4[0x50];
    void (*unk54)(struct Obj80077CD8 *, s32);
} Obj80077CD8;

typedef struct Sub80078460 {
    u8 _pad0[0x8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x1];
    u8 unk11;
} Sub80078460;

typedef struct Elem8007A240 {
    s32 unk0;
    u8 _pad4[0x8];
    s16 unkC;
    s16 unkE;
    u8 _pad10[0x20];
} Elem8007A240;

typedef struct Obj8008166C {
    s32 unk0;
    u8 _pad4[0x12];
    u16 unk16;
    s16 unk18;
    s16 unk1A;
} Obj8008166C;

typedef struct Sub8008166C {
    u8 _pad0[0x2C];
    s16 unk2C;
    s16 unk2E;
} Sub8008166C;

typedef struct Obj80077EAC {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x10];
    u16 unk20;
    u8 _pad22[0x2];
    s32 unk24;
    u16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    u8 _pad30[0x1C];
    Sub80078460 *unk4C;
    u8 _pad50[0x30];
    Obj8008166C *unk80;
    Elem8007A240 unk84[8];
    u8 _pad204[0x10];
    u16 unk214;
    u16 unk216;
    u8 _pad218[0x8];
    u16 unk220;
    u8 _pad222[0x32];
    s32 unk254;
    u8 _pad258[0x9];
    u8 unk261;
    u8 _pad262[0xE];
    u16 unk270;
    u8 _pad272[0x8];
    u8 unk27A;
    u8 _pad27B[0xD];
    u16 unk288;
    u16 unk28A;
    u16 unk28C;
    u16 unk28E;
    u8 _pad290[0x4];
    u16 unk294;
    u16 unk296;
    u8 _pad298[0x13];
    u8 unk2AB;
    u8 unk2AC;
    u8 unk2AD;
    u8 _pad2AE[0x10];
    u16 unk2BE;
    Sub80077EAC unk2C0;
    u8 _pad2C4[0xD0];
    Obj80077CD8 *unk394;
    Sub8008166C *unk398;
} Obj80077EAC;

typedef struct Sub80082384 {
    u8 _pad0[0x6];
} Sub80082384;

typedef struct Obj80082384 {
    u8 _pad0[0x8];
    s32 unk8;
    u8 _padC[0xC];
    Sub80082384 unk18;
    u8 unk1E;
    u8 unk1F;
    u8 unk20;
    u8 unk21;
} Obj80082384;

typedef struct Sub8008800C {
    u16 unk0;
    u16 unk2;
    u16 unk4;
} Sub8008800C;

typedef struct Obj8008800C {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x2];
    s32 unk8;
    u8 _padC[0x2];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    u16 unk22;
    Sub8008800C unk24;
    s16 unk2A;
    u8 _pad2C[0x4];
    s32 unk30;
    u32 unk34;
    s32 unk38;
    u8 _pad3C[0x7C];
    union { u8 b[4]; s16 h; } unkB8;
    u16 unkBC;
    u16 unkBE;
} Obj8008800C;

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

typedef struct Elem8004ECA8 {
    u8 _pad0[0x10];
    s16 unk10;
} Elem8004ECA8;

typedef struct Sub8004ECA8 {
    u8 _pad0[0xC];
    u16 unkC[1];
} Sub8004ECA8;

typedef struct Obj8004DE88 {
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
} Obj8004DE88;

typedef struct Obj800558A8 {
    s16 unk0;
    u8 _pad2[0x2];
    s16 unk4;
    u8 _pad6[0x8];
    s16 unkE;
    s16 unk10;
    u8 _pad12[0xE];
    void *unk20;
    s32 *unk24;
} Obj800558A8;

typedef struct Elem8005460C {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0x68];
} Elem8005460C;

typedef struct Obj80055E20 {
    u8 _pad0[0x20];
    Elem8005460C *unk20;
} Obj80055E20;

typedef struct Obj800718B4 {
    s32 unk0;
    u8 _pad4[0x4];
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x4];
    s32 unk14;
} Obj800718B4;

typedef struct Sub8007618C {
    u8 _pad0[0x2];
    u8 unk2;
} Sub8007618C;

typedef struct Obj8007618C {
    u8 _pad0[0x8];
    u8 unk8[0x39];
    u8 unk41;
    u8 _pad42[0xE];
    void (*unk50)(struct Obj8007618C *, u8);
    u8 _pad54[0x10];
    Sub8007618C unk64;
    u8 _pad67[0xE1];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
} Obj8007618C;

typedef struct Obj8007A108 {
    u8 _pad0[0x3];
    u8 unk3;
    u8 _pad4[0x2];
    u8 unk6;
} Obj8007A108;

typedef struct Obj80085394 {
    u8 _pad0[0x10];
    s8 unk10;
    u8 _pad11[0x1];
    s16 unk12;
    void (*unk14)(struct Obj80085394 *);
    u16 unk18;
    u16 unk1A;
    s16 unk1C;
    u16 unk1E;
    s16 unk20;
    u8 _pad22[0x96];
    s16 unkB8;
    u16 unkBA;
    u16 unkBC;
    u8 _padBE[0x2];
} Obj80085394;

typedef struct Obj80085510 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u8 _pad1E[0x2];
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 _pad26[0xA0];
    u16 unkC6;
    u16 unkC8;
    u16 unkCA;
} Obj80085510;

typedef struct Obj80087A24 {
    u8 _pad0[0x1E];
    u16 unk1E;
    u8 _pad20[0x8];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj80087A24;

typedef struct Elem8004C840 {
    s16 unk0;
    u8 _pad2[0x2];
    u32 *unk4;
} Elem8004C840;

typedef struct Obj8006C810 {
    u8 _pad0[0x6];
    s16 unk6;
} Obj8006C810;

typedef struct Obj8006CF18 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x2];
    u16 unk8;
    u16 unkA;
    u16 unkC;
} Obj8006CF18;

typedef struct Obj8006E3F4 {
    u8 _pad0[0x50];
    u16 unk50;
    u16 unk52;
    u16 unk54;
    u8 _pad56[0x2];
    u16 unk58;
    u16 unk5A;
    u16 unk5C;
    u8 _pad5E[0x2];
    s32 unk60;
    u8 _pad64[0x3A];
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    s32 unkA4;
    u8 _padA8[0x28];
    s32 unkD0;
    u8 _padD4[0x10];
    s32 unkE4;
} Obj8006E3F4;

typedef struct Sub800776B4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
} Sub800776B4;

typedef struct Elem800776B4 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x22];
    Sub8004EDA8 *unk28;
} Elem800776B4;

typedef struct Obj8007789C {
    u8 *unk0;
    Elem800776B4 *unk4;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    Obj8004F0B8 unk10;
    u8 _pad18[0x6];
    s16 unk1E;
    u8 _pad20[0x8];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s16 unk30;
    s16 unk32;
    u8 _pad34[0x4];
    s16 unk38;
    u8 unk3A;
    u8 _pad3B[0x1];
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj8007789C *unk48;
    s32 unk4C;
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    u8 unk64;
    u8 unk65;
    u8 _pad66[0x2];
    u8 unk68;
    u8 _pad69[0x1];
    u16 unk6A;
    u16 unk6C;
    s16 unk6E;
    u8 _pad70[0x2];
    s16 unk72;
    u8 _pad74[0x2];
    Obj8004F0B8 unk76;
    u8 _pad7E[0x2];
    Sub8004EDA8 *unk80;
    u8 _pad84[0x78];
    Sub800776B4 unkFC;
    u8 _pad106[0x42];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u16 unk162;
    u16 unk164;
    u8 _pad166[0xA];
} Obj8007789C;

typedef struct Sub8007789C {
    u8 _pad0[0x20];
    void (*unk20[1])(Obj8007789C *);
} Sub8007789C;

typedef struct Sub8007618C_fdat202 {
    u8 unk0;
    u8 _pad1[0x1];
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
    Sub8004EFB8 unk38;
    Sub8004EFB8 unk40;
    Sub8004EFB8 unk48;
} Sub8007618C_fdat202;

typedef struct Obj80072180 {
    Sub8004DE88 unk0;
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    Sub8004DE88 unk18;
    Sub8004DE88 unk20;
    u8 _pad28[0x4];
    struct Obj80072180 *unk2C;
} Obj80072180;

typedef struct Obj800851A8 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 _pad1B;
    u16 unk1C;
    u16 unk1E;
    u16 unk20;
    u8 _pad22[0x2];
    u16 unk24;
    u16 unk26;
    u16 unk28;
    u8 _pad2A[0x8E];
    u16 unkB8;
    u16 unkBA;
    u16 unkBC;
    u8 _padBE[0x2];
    u8 unkC0;
    u8 unkC1;
    u8 unkC2;
} Obj800851A8;

typedef struct Obj80087A24_fdat202 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 _pad6[0x12];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    u8 _pad26[0x2];
    u8 unk28;
    u8 unk29;
    u8 unk2A;
    u8 _pad2B[0x8D];
    u8 unkB8;
    u8 unkB9;
    u8 unkBA;
    u8 _padBB[0x3];
    u16 unkBE;
} Obj80087A24_fdat202;

typedef struct Obj80077854 {
    u8 _pad0[0xE];
    s16 unkE;
} Obj80077854;

typedef struct Sub800507B8 {
    s16 unk0;
    s16 unk2;
} Sub800507B8;

typedef struct Elem80073290 {
    s32 unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    u8 _pad10[0x22];
    u16 unk32;
    u8 _pad34[0x36];
    u16 unk6A;
    u16 unk6C;
    u8 _pad6E[0x102];
} Elem80073290;

typedef struct Sub80076D7C {
    u8 _pad0[0x6];
    s16 unk6;
} Sub80076D7C;

typedef struct Obj80076D7C {
    u8 _pad0[0x4];
    Sub80076D7C *unk4;
} Obj80076D7C;

typedef struct Elem80081FD0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xD8];
} Elem80081FD0;

typedef struct Sub80083FDC {
    u8 unk0;
    u8 _pad1[0x7];
} Sub80083FDC;

typedef struct Obj80083FDC {
    u8 _pad0[0xE];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    Sub80083FDC unk18;
    s32 unk20;
    u16 unk24;
    s16 unk26;
    u16 unk28;
    u16 unk2A;
    u8 unk2C;
    u8 unk2D;
    u8 _pad2E[0x96];
    u16 unkC4;
    u16 unkC6;
    u16 unkC8;
    u8 _padCA[0x2];
    u8 unkCC;
    u8 unkCD;
    u8 unkCE;
} Obj80083FDC;

typedef struct Elem80083FDC {
    u8 _pad0[0x6];
    u16 unk6;
    u16 unk8;
    u8 _padA[0x2];
    s32 unkC;
    s32 unk10;
    u8 _pad14[0x4];
    u16 unk18;
    u8 unk1A[4];
    u8 unk1E[4];
    u8 _pad22[0x4];
    u8 unk26;
    u8 unk27;
    u8 unk28;
    u8 _pad29[0x3];
    s32 unk2C;
} Elem80083FDC;

typedef struct Obj800842F8 {
    u8 _pad0[0x12];
    s16 unk12;
} Obj800842F8;

typedef struct Sub8007229C {
    void (*unk0)();
    void (*unk4)();
} Sub8007229C;

typedef struct Elem8007229C {
    u8 _pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    u16 *unk28;
    Sub8007229C *unk2C;
    u32 unk30_0 : 8;
    u32 unk30_8 : 1;
    u32 unk30_9 : 3;
    u32 unk30_12 : 1;
    u32 unk30_13 : 1;
    u32 unk30_14 : 14;
    u32 unk30_28 : 4;
    u32 unk34_0 : 12;
    u32 unk34_12 : 12;
    u32 unk34_24 : 1;
    u32 unk34_25 : 7;
    u8 _pad38[0x8];
} Elem8007229C;

typedef struct Obj80088DA0 {
    u8 _pad0[0x2C];
    Sub8007229C *unk2C;
    u8 _pad30[0x24];
    void (*unk54)();
} Obj80088DA0;

typedef struct Elem80016D64 {
    s16 unk0;
    s8 unk2;
    u8 _pad3[7];
} Elem80016D64;

typedef struct Elem80051FF8 {
    u8 _pad0[0x2];
    s16 unk2;
    u16 unk4;
    u16 unk6;
    s16 unk8;
} Elem80051FF8;

typedef struct Obj80052658 {
    u8 _pad0[0x8];
    s32 unk8;
} Obj80052658;

typedef struct Sub80055AA0 {
    u8 _pad0[0x14];
} Sub80055AA0;

typedef struct Elem80055AA0 {
    u8 _pad0[0x14];
    Sub80055AA0 unk14;
    Sub80055AA0 unk28;
    Sub80055AA0 unk3C;
    u8 _pad50[0x18];
} Elem80055AA0;

typedef struct Elem80056434 {
    u8 _pad0[0x5C];
} Elem80056434;

typedef struct Sub80056434 {
    u8 _pad0[0x14];
} Sub80056434;

typedef struct Obj80056434 {
    Elem80056434 unk0[3];
    Sub80056434 unk114;
    u8 _pad128[0x14];
} Obj80056434;

typedef struct Sub8007286C {
    void (*unk0)();
} Sub8007286C;

typedef struct Elem8007286C {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0xC];
    Sub8007286C *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
    u8 _pad1E[0x16];
} Elem8007286C;

typedef struct Sub80071188 {
    u32 unk0;
    u8 _pad4[0x8];
    u16 unkC[4];
} Sub80071188;

typedef struct Sub80071188_unk4 {
    u8 _pad0[0x12];
    u16 unk12;
} Sub80071188_unk4;

typedef struct Elem80071188 {
    u8 _pad0[0x2];
    u16 unk2;
} Elem80071188;

typedef struct Obj80071188 {
    Sub80071188 *unk0;
    Sub80071188_unk4 *unk4;
    s32 *unk8;
} Obj80071188;

typedef struct Elem8004CF0C {
    u16 unk0;
    s8 unk2;
    u8 _pad3[0x3];
    u8 unk6;
    u8 _pad7[0x3];
} Elem8004CF0C;

typedef struct Sub8004CF0C {
    s16 unk0;
    u8 _pad2[0x8];
} Sub8004CF0C;

typedef struct Sub800707D0 {
    u16 unk0_0 : 3;
    u16 unk0_3 : 12;
    u16 unk0_15 : 1;
} Sub800707D0;

typedef struct Elem8006CCB8 {
    s32 unk0;
    s32 unk4;
} Elem8006CCB8;

typedef struct Obj800707D0 {
    s32 unk0[0x12];
    s32 *unk48;
    s32 unk4C;
    u8 _pad50[0xC];
    s32 unk5C[3];
    s32 unk68[3];
    s16 unk74;
    s16 unk76;
    s16 unk78;
    u8 _pad7A[0x2];
    s16 unk7C;
    s16 unk7E;
    s16 unk80;
    u8 _pad82[0x2];
    Elem8006CCB8 *unk84;
    s32 unk88;
    s32 unk8C;
    Elem8007229C *unk90;
    s32 *unk94;
    Obj8006FBC0 *unk98;
    u32 unk9C;
    u8 _padA0[0x8];
    Sub800707D0 unkA8[4];
    Elem8006E698 *unkB0;
    Elem8006E698 *unkB4;
    u8 _padB8[0x4];
    s32 unkBC;
    Sub8004DE88 *unkC0[4];
} Obj800707D0;

typedef struct Obj8006FB14 {
    s16 unk0;
    u8 _pad2[0x2];
    s16 unk4;
    u8 _pad6[0x2];
    s16 unk8;
    u8 _padA[0x2];
    s16 unkC;
} Obj8006FB14;

typedef struct Sub80076548 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Sub80076548;

typedef struct Sub80075350 {
    u8 _pad0[0x14];
    u16 unk14;
} Sub80075350;

typedef struct Obj8007618C_fdat202 {
    Sub80075350 *unk0;
    u8 _pad4[0x4];
    Sub8004DE88 unk8;
    Sub8004DE88 unk10;
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    u8 _pad1E[0xC];
    u16 unk2A;
    u8 _pad2C[0xA];
    u16 unk36;
    u8 _pad38[0x4];
    s8 unk3C;
    u8 unk3D;
    u8 _pad3E[0x2];
    u8 unk40;
    u8 unk41;
    u8 _pad42[0x6];
    struct Obj8007618C_fdat202 *unk48;
    s32 unk4C;
    void (*unk50)(struct Obj8007618C_fdat202 *, u8);
    void (*unk54)(struct Obj8007618C_fdat202 *, s32, s32);
    void (*unk58)();
    void (*unk5C)();
    s32 unk60;
    Sub8007618C_fdat202 unk64;
    u8 _padB4[0x18];
    Sub8004DE88 unkCC;
    u8 _padD4[0x8];
    Sub80076548 unkDC;
    Sub80076548 unkEC;
    u8 _padFC[0xC];
    s16 unk108;
    s16 unk10A;
    s16 unk10C;
    s16 unk10E;
    u8 _pad110[0x38];
    u16 unk148;
    u8 _pad14A[0x12];
    s32 unk15C;
    u16 unk160;
    u16 unk162;
} Obj8007618C_fdat202;

typedef struct Obj800852B0 {
    u8 _pad0[0x6];
    s16 unk6;
    u8 _pad8[0x8];
    u8 unk10;
    u8 _pad11[0x1];
    s16 unk12;
    void (*unk14)();
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
    u8 _pad1D[0x9B];
    s16 unkB8;
    s16 unkBA;
    s16 unkBC;
} Obj800852B0;

typedef struct Elem800852B0 {
    u16 unk0;
    u8 _pad2[0x2];
    s16 unk4;
    s16 unk6;
} Elem800852B0;

typedef struct Sub800852B0 {
    u8 unk0;
    u8 _pad1[0x7];
} Sub800852B0;

typedef struct Obj80072330 {
    Elem8007286C unk0[0x200];
    Elem8007286C *unk6800[0x80];
    u16 unk6A00;
} Obj80072330;

typedef struct Sub80054F04 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sub80054F04;

typedef struct Obj80054F04 {
    u8 _pad0[0x5C];
    u8 *unk5C;
    Sub80054F04 unk60[4];
} Obj80054F04;

typedef struct Elem8004DB1C {
    u16 unk0[16];
    u8 unk20[4];
} Elem8004DB1C;

typedef struct Snd8004DC18 {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    volatile u8 unk4;
} Snd8004DC18;

typedef struct Buf8005C910 {
    u8 _pad0[0x4];
    u8 *unk4;
    u8 *unk8;
} Buf8005C910;

typedef struct Rgbc8005C910 {
    u8 r;
    u8 g;
    u8 b;
    u8 code;
} Rgbc8005C910;

typedef union Col8005C910 {
    s32 w;
    Rgbc8005C910 c;
} Col8005C910;

typedef struct Cv8005C910 {
    u8 r;
    u8 g;
    u8 b;
    u8 cd;
} Cv8005C910;

typedef union CvWord8005C910 {
    s32 w;
    Cv8005C910 c;
} CvWord8005C910;

typedef struct Sv80060B08 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sv80060B08;

typedef struct Elem80060C54 {
    Sv80060B08 unk0;
    s16 unk8;
    u8 unkA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 _padE[0x2];
} Elem80060C54;

typedef struct Rot8005BAA8 {
    s16 m[3][3];
    s16 pad;
} Rot8005BAA8;

typedef struct Light8005BAA8 {
    Rot8005BAA8 unk0[4];
    s16 unk50[3][3];
    u8 unk62;
    u8 unk63;
    u8 unk64;
    u8 _pad65;
    u16 unk66;
} Light8005BAA8;

typedef struct Mat8005BAA8 {
    s16 m[3][3];
    s16 pad;
    s32 t[3];
} Mat8005BAA8;

typedef struct Vtx8005C910 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    s32 unkC;
} Vtx8005C910;

typedef struct Draw8005C910 {
    u32 *unk0;
    u8 _pad4[0x4];
    u8 *unk8;
    u8 _padC[0x610];
    s32 unk61C;
    u8 _pad620[0x50];
    Vtx8005C910 unk670[0x5DD];
    u8 _pad6440[0x8];
    u32 unk6448[16];
    u32 unk6488[16];
    u8 _pad64C8[0xC4];
    Light8005BAA8 unk658C[32];
    s32 unk728C;
    u8 _pad7290[0x28];
    Elem8007229C *unk72B8;
    u8 _pad72BC[0x10];
    Rot8005BAA8 unk72CC;
    s32 unk72E0[3];
    s32 unk72EC[3];
    u8 _pad72F8[0x24];
    Mat8005BAA8 unk731C[4];
    Mat8005BAA8 unk739C[4];
    Rot8005BAA8 unk741C;
    u8 _pad7430[0x4C];
    Elem80060C54 unk747C[256];
} Draw8005C910;

typedef struct Tag8005C910 {
    u32 addr : 24;
    u32 len : 8;
} Tag8005C910;

typedef struct Ft38005C910 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u16 unk1C;
    u16 unk1E;
} Ft38005C910;

typedef struct Ft48005C910 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u16 unk1C;
    u16 unk1E;
    s32 unk20;
    u16 unk24;
    u16 unk26;
} Ft48005C910;

typedef struct Xy8005DEE4 {
    s16 x;
    s16 y;
} Xy8005DEE4;

typedef union Sxy8005DEE4 {
    s32 w;
    Xy8005DEE4 h;
} Sxy8005DEE4;

typedef struct Gt48005E588 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    Sxy8005DEE4 unk8;
    u8 unkC;
    u8 unkD;
    u16 unkE;
    Sxy8005DEE4 unk10;
    u8 unk14;
    u8 unk15;
    u16 unk16;
    Sxy8005DEE4 unk18;
    u8 unk1C;
    u8 unk1D;
    u16 unk1E;
    Sxy8005DEE4 unk20;
    u8 unk24;
    u8 unk25;
    u16 unk26;
} Gt48005E588;

typedef struct Line8005DEE4 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    s32 unk8;
    s32 unkC;
} Line8005DEE4;

typedef struct Mode8005DEE4 {
    Tag8005C910 tag;
    u8 _pad4[0x8];
} Mode8005DEE4;

typedef struct Sv8005DEE4 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sv8005DEE4;

typedef struct Node8005DEE4 {
    Sv8005DEE4 unk0;
    Sv8005DEE4 unk8;
    u8 unk10;
    u8 unk11;
    u8 _pad12[0x2];
    s32 unk14;
    s32 unk18;
} Node8005DEE4;

typedef struct Obj8006E698 {
    s32 unk0[0x12];
    s32 *unk48;
    s32 unk4C;
    u8 _pad50[0x8];
    s32 unk58;
    u8 _pad5C[0x4];
    s32 *unk60;
    s16 unk64;
    s16 unk66;
    s16 unk68;
    u8 _pad6A[0x2];
    s16 unk6C;
    s16 unk6E;
    s16 unk70;
    u8 _pad72[0x2];
    s16 unk74;
    s16 unk76;
    s16 unk78;
    u8 _pad7A[0x2];
    s16 unk7C;
    s16 unk7E;
    s16 unk80;
    u8 _pad82[0x2];
    Elem8006CCB8 *unk84;
    s32 unk88;
    s32 unk8C;
    Elem8007229C *unk90;
    Elem8006CCB8 *unk94;
    Obj8006FBC0 *unk98;
    u8 _pad9C[0x14];
    Elem8006E698 *unkB0;
    Elem8006E698 *unkB4;
    u8 _padB8[0x4];
    s32 unkBC;
} Obj8006E698;

typedef struct Sub80073508_unk0 {
    u8 _pad0[0xC];
    s32 unkC;
} Sub80073508_unk0;

typedef struct Obj80073508 {
    Sub80073508_unk0 *unk0;
} Obj80073508;

typedef struct Part8005C910 {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    u8 *unk8;
    u8 _padC[0x2];
    u16 unkE;
    u32 *unk10;
    u16 unk14;
    u8 _pad16[0x6];
} Part8005C910;

typedef struct Pk8005C910 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
    u16 unk1C;
    u16 unk1E;
} Pk8005C910;

typedef struct PkHdr8005C910 {
    u8 unk0;
    u8 len;
    u8 unk2;
    u8 mode;
} PkHdr8005C910;

typedef union PkWord8005C910 {
    u32 w;
    PkHdr8005C910 b;
} PkWord8005C910;

typedef struct Spad8005C910 {
    u8 _pad0[0x4];
    u8 *unk4;
    u8 *unk8;
    PkWord8005C910 unkC;
    Part8005C910 *unk10;
    u8 _pad14[0x4];
    s32 unk18;
    u32 *unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    CvWord8005C910 unk2C;
} Spad8005C910;

typedef struct Spad8005DEE4 {
    u32 *unk0;
    u16 unk4;
    s16 unk6;
    u16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u8 _padE[0x2];
    s32 unk10;
    Node8005DEE4 unk14[3];
    Sxy8005DEE4 unk68;
    Sxy8005DEE4 unk6C;
    s32 unk70;
    s32 unk74;
    Gt48005E588 *unk78;
    s32 unk7C;
} Spad8005DEE4;

typedef struct Sub80073508_unk14 {
    u8 _pad0[0x4];
    void (*unk4)();
} Sub80073508_unk14;

typedef struct Sub80073508 {
    u8 _pad0[0x14];
    Sub80073508_unk14 *unk14;
    u8 _pad18[0x4];
    u16 unk1C;
} Sub80073508;

typedef struct Tmd8005C910 {
    u8 _pad0[0xC];
    Part8005C910 unkC[1];
} Tmd8005C910;

typedef struct Rec8005BAA8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    Elem8007229C *unk10;
    Light8005BAA8 *unk14;
} Rec8005BAA8;

typedef struct Vec8005BFE0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Vec8005BFE0;

typedef struct Arg8005E278 {
    u8 _pad0[0x2];
    u16 unk2;
} Arg8005E278;

typedef struct Vec80060B08 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Vec80060B08;

typedef struct Gt380063960 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
} Gt380063960;

typedef struct Gt480063960 {
    Tag8005C910 tag;
    Col8005C910 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s32 unk2C;
    u16 unk30;
    u16 unk32;
} Gt480063960;

typedef struct Spad80063960 {
    s32 unk0;
    u8 *unk4;
    u8 *unk8;
    PkWord8005C910 unkC;
    Part8005C910 *unk10;
    u8 *unk14;
    s32 unk18;
    s32 unk1C;
    u32 *unk20;
    s32 unk24;
    s32 unk28;
    u8 unk2C;
    u8 unk2D;
    u8 unk2E;
} Spad80063960;

typedef struct Obj8006F798 {
    s32 unk0[0x11];
    s32 unk44[4];
    s32 unk54[3];
    s32 unk60[3];
    Sub8004DE88 unk6C;
    Sub8004DE88 unk74;
    Elem8006CCB8 *unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    Elem8007229C *unk8C;
    Elem8007229C *unk90;
    Elem8006CCB8 *unk94;
    Elem8006CCB8 *unk98;
    Obj8006FBC0 *unk9C;
    Elem8006E698 *unkA0;
    Elem8006E698 *unkA4;
    Elem8006E698 *unkA8;
    Elem8006E698 *unkAC;
    u32 unkB0;
} Obj8006F798;

typedef struct Fr80060C54 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u16 unkC;
    u16 unkE;
    Sv80060B08 unk10;
    Sv80060B08 unk18;
    Sv80060B08 unk20;
    Sv80060B08 unk28;
} Fr80060C54;

typedef struct Spad80060C54 {
    u8 *unk0;
    u8 *unk4;
    u32 *unk8;
    Sv80060B08 unkC;
    Sv80060B08 unk14;
    Mat8005BAA8 unk1C;
    Mat8005BAA8 unk3C;
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s16 unk68;
    s16 unk6A;
    s16 unk6C;
} Spad80060C54;

typedef struct Sv8006678C {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
} Sv8006678C;

typedef struct Box8006678C {
    Sv8006678C unk0;
    Sv8006678C unk8;
} Box8006678C;

typedef struct Obj8006678C {
    u8 _pad0[0x10];
    Sv8006678C unk10;
    Box8006678C unk18;
    u8 _pad28[0x8];
    u32 unk30;
} Obj8006678C;

typedef struct Elem80064B94 {
    Obj8006678C *unk0;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 _pad12[0x2];
    s16 unk14;
    s16 unk16;
    s16 unk18;
    u8 _pad1A[0x2];
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    u8 _pad22[0x2];
    s32 unk24;
    u8 _pad28[0x2];
    u16 unk2A;
    s16 unk2C;
    u8 _pad2E[0x2];
} Elem80064B94;

typedef struct Tbl80064B94 {
    Elem80064B94 unk0[16];
    s32 unk300;
    s32 unk304;
} Tbl80064B94;

typedef struct Mat80064B94 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    u8 _pad6[0x2];
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 _padE[0x2];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 _pad16[0x2];
    s32 unk18;
    s16 unk1C;
    u8 _pad1E[0x2];
} Mat80064B94;

typedef struct Spad80064B94 {
    u8 _pad0[0x5C];
    Mat80064B94 unk5C[4];
    s32 unkDC;
    u8 _padE0[0xC];
    Mat8005BAA8 unkEC;
    Mat8005BAA8 unk10C;
    s32 unk12C[3];
} Spad80064B94;

typedef struct Elem80064CC8 {
    u8 _pad0[0xC];
    s32 unkC;
    u8 _pad10[0xC];
} Elem80064CC8;

typedef struct Joint80064CC8 {
    u8 _pad0[0x12];
    s16 unk12;
    u8 _pad14[0x14];
    Mat8005BAA8 unk28;
    u8 _pad48[0x34];
} Joint80064CC8;

typedef struct Obj80064CC8 {
    u8 _pad0[0x20];
    Joint80064CC8 *unk20;
} Obj80064CC8;

typedef struct Mdl80064CC8 {
    u8 _pad0[0x5];
    u8 unk5;
} Mdl80064CC8;

typedef struct Elem8007712C {
    u8 _pad0[0x4];
    Elem8007229C *unk4;
    u8 _pad8[0x6];
    u16 unkE;
    u8 _pad10[0xC];
} Elem8007712C;

typedef struct Desc800776B4 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    s16 unkA;
    Obj8004F0B8 unkC;
    u16 unk14;
    u8 _pad16[0x4];
    u16 unk1A;
    u8 _pad1C[0x6];
    Sub800776B4 unk22;
} Desc800776B4;

typedef struct Tbl800776B4 {
    Elem800776B4 unk0[4];
    Obj8007789C unkB0[2];
} Tbl800776B4;

typedef struct Elem80086624 {
    u8 _pad0[0xE];
    u16 unkE;
} Elem80086624;

typedef struct Seg80086624 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Seg80086624;

typedef struct Obj80086624 {
    Sub8004DE88 unk0;
    s32 unk8;
    u8 _padC[0x2];
    s16 unkE;
    u8 _pad10[0x2];
    s16 unk12;
    u8 _pad14[0x4];
    s16 unk18;
    u8 _pad1A[0x4];
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    u8 _pad24[0x2];
    Sub8008800C unk26;
    s16 unk2C;
    u8 _pad2E[0x2];
    u32 unk30;
    u32 unk34;
} Obj80086624;

typedef struct PkF3800640A4 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    s32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
} PkF3800640A4;

typedef struct PkF4800640A4 {
    s32 unk0;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 unk10;
    u16 unk14;
    u16 unk16;
    u16 unk18;
    u16 unk1A;
} PkF4800640A4;

typedef union Prim800640A4 {
    Ft38005C910 *f3;
    Ft48005C910 *f4;
    Gt380063960 *g3;
    Gt480063960 *g4;
} Prim800640A4;

typedef struct Spad800640A4 {
    s32 unk0;
    u8 *unk4;
    u8 *unk8;
    PkWord8005C910 unkC;
    Part8005C910 *unk10;
    u8 *unk14;
    s32 unk18;
    u32 *unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    u8 _pad2C[0xB4];
    s32 unkE0;
    Sv8006678C unkE4;
} Spad800640A4;

typedef union Col8006678C {
    s32 w;
    u8 c[4];
} Col8006678C;

typedef struct Elem8006678C {
    u8 _pad0[0x8];
    Col8006678C unk8;
    u8 _padC[0x4];
} Elem8006678C;

typedef struct Spad8006678C {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    Elem80064B94 *unkC;
    Sv8006678C unk10;
    Box8006678C unk18;
    Sv8006678C unk28;
    s32 unk30[3];
    u8 _pad3C[0x4];
    Elem8006678C *unk40;
    s32 unk44[3];
    u8 _pad50[0x4];
    s32 unk54[3];
    u8 _pad60[0x4];
    Mat8005BAA8 unk64;
    u8 *unk84;
} Spad8006678C;

/* @externs */
extern s8 D_800893C4;
void func_800309A8(s32 arg0, s32 arg1, void (*arg2)(void));
s32 func_8004BDB8(void);
extern s32 D_801AB684;
extern u16 D_801AB688;
extern u8 D_80041BC0;
void func_8004DA48(s16 arg0);
void func_8004DA74(void);
s16 func_8004F074(Sub8004F0B8 *arg0, s16 arg1, u8 arg2);
void func_8004EEAC(void);
void func_8004ED4C(Obj8004EDA8 *arg0);
s32 func_8004F0B8(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_8004EDA8(Obj8004EDA8 *arg0);
void func_8005343C(Elem80053658 *arg0);
extern Elem80056180 D_801B419C[8];
extern s32 D_801B4114;
s32 rsin(s32 arg0);
void func_800613F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern u32 D_801EE0B0[3][0x400];
void func_80015538(void *arg0, s32 arg1, s32 arg2);
void func_8006CCFC(void);
extern u32 D_801AB748[0xB8];
extern u32 *D_801ADA28;
extern s32 D_801ADA34;
extern s32 D_801ADA38;
void func_8007295C(s32 arg0);
void func_8007296C(s32 arg0);
s32 func_80054A70(s32 arg0, s32 arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 *arg8);
s32 func_8004F1D4(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2);
void func_80074B84(void);
s32 func_8004F180(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_80074700(Obj80073138 *arg0);
s32 func_8007767C(void);
void func_80077918(s32 arg0, s32 arg1);
extern Obj80077EAC *D_80039D18;
void func_800815DC(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, Sub80077EAC *arg7);
void func_80078460(Obj80073138 *arg0);
void func_80078570(Obj80073138 *arg0);
void func_8004EE5C(Obj8004EDA8 *arg0);
void func_8007C83C(void);
void func_800861F4(s32 arg0, Obj80082384 *arg1, Sub80082384 *arg2, u8 arg3, s32 arg4);
s16 func_8006D990(s16 arg0, Obj8008800C *arg1);
void func_80087EE0(Obj8008800C *arg0, Sub8008800C *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
extern s16 D_801AB68C;
extern s8 D_801D4464;
extern s16 D_801D4466;
extern s8 D_801B4198;
extern s8 D_801B4199;
extern s8 D_801B419A;
extern s8 D_801B419B;
extern u16 D_801AB68A;
void func_80089154(void);
void func_800892F0(void);
extern s32 D_80041BA0;
extern u8 D_80041BB8;
extern u8 D_80041BBA;
extern u8 D_80041BBB;
extern u8 D_80041BBD;
extern volatile u8 D_80041BC2;
extern s8 D_80041BC8;
extern s8 D_80041BC9;
extern s8 D_80041BCA;
extern s8 D_80041BCB;
extern s8 D_80041BCC;
extern s8 D_80041BCD;
extern s8 D_80041BCE;
void SsSetMVol(s32 arg0, s32 arg1);
void func_80016DA8(void);
void SsEnd(void);
void func_80016114(void *arg0);
s32 func_8001628C(void);
s32 rand(void);
extern u8 D_80031A94[];
void MulRotMatrix(s32 *arg0);
void SsSetSerialVol(s32 arg0, s16 arg1, s16 arg2);
extern Elem8004C840 D_80041BD0[];
s16 SsVabOpenHead(u32 *arg0, s32 arg1);
s16 SsVabTransBodyPartly(u8 *arg0, s32 arg1, s16 arg2);
void SsVabTransCompleted(s32 arg0);
void func_80064B94(s32 arg0);
void func_800640A4(u16 arg0, s32 arg1, s32 arg2);
void func_800653F8(u16 arg0, s32 arg1, u16 arg2, s32 arg3);
s32 func_80072758(void);
Elem80073290 *func_80073290(Elem80073290 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3);
void func_8006CE6C(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006CEC0(u32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006E20C(s32 *arg0, s16 *arg1, s32 *arg2);
extern s32 D_801ADA3C;
extern s32 D_801ADA40;
s32 func_8004F124(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1);
void func_8004DFAC(Sub8007618C_fdat202 *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3);
s32 func_8004E32C(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3, Obj8004F0B8 *arg4);
void func_8004EA8C(Obj8004EDA8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8004EB3C(Obj8004EDA8 *arg0, s32 arg1, s32 arg2);
void func_8007510C(Obj8007618C_fdat202 *arg0, s32 arg1, s32 arg2);
void func_8004EB98(Obj8004EDA8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80073C70(Obj80073138 *arg0, Obj8004F0B8 *arg1);
s32 func_80073508(Obj80073138 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2, Obj8004F0B8 *arg3);
void func_800856F8(s32 arg0, Obj8004F0B8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11);
void func_80085838(s32 arg0, Obj8004F0B8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
s32 func_80014D78(s32 arg0);
void func_80076F8C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_801ADA30;
extern Sub8007789C *D_801AB67C;
extern u8 D_801AB7A0[];
Obj80077854 *func_80077674(void);
void func_800776B4(Obj8007789C *arg0, u8 *arg1);
void func_8004CDE8(s32 arg0, s32 arg1, Obj8004F0B8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8004CECC(s32 arg0, Obj8004F0B8 *arg1, s32 arg2, s32 arg3);
Obj80085394 *func_80088928(s32 arg0);
void func_800841C0(Obj80085394 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80083DF0(Obj80085394 *arg0);
extern Obj80085394 D_8008A7A4;
extern u8 D_80039C5D;
void func_8004DC18(s32 arg0);
void func_8004DF88(Obj8004DE88 *arg0, Sub8004DE88 *arg1);
void func_8007617C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 *arg4, void (*arg5)());
void func_80079D4C();
void func_800131D0(Sub8004EFB8 *arg0, s32 arg1, s16 arg2);
s32 func_80012E5C(s32 arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5);
Obj80076D7C *func_80076D00(Obj80073138 *arg0, Obj80073138 *arg1, Obj8004F0B8 *arg2);
void func_8007D818(Obj80073138 *arg0, u8 arg1);
void func_8007F0C0();
void func_8007C3F0();
void func_8007F5E4();
void func_8007FCC8(Obj80073138 *arg0, s32 arg1);
void func_80080C90();
void func_80081004();
extern u16 D_8008AA66;
extern u16 D_8008C1E8[];
extern u8 D_801AB678;
extern Elem80081FD0 D_801B645C[];
void LoadAverageCol(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void func_80055BA0(s32 arg0, Obj80083FDC *arg1, s32 arg2, s16 arg3, s32 arg4, u8 *arg5, s32 arg6);
s32 func_80082194(Obj80083FDC *arg0, s32 arg1, s32 arg2, s32 arg3, Sub80083FDC *arg4, s32 *arg5, s32 *arg6, s32 arg7);
Obj800842F8 *func_800842F8(s32 arg0, Obj80083FDC *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern Elem80083FDC D_8008BE80[];
s32 func_8006C810(s32 arg0, s32 arg1, s32 arg2, Obj8006C810 *arg3);
void func_80082018(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3, u16 *arg4);
void func_80085E54(s32 arg0, u16 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern Elem8007229C D_801D4488[];
extern s32 D_801EC48C;
void func_8004D278(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Elem80016D64 D_80041DE0[];
void func_8004CF10(void);
void func_8004CF94(Elem8004CF0C *arg0);
extern u16 D_80041BBE;
extern u8 D_80041BC1;
extern s32 D_80041BC4;
extern Elem80051FF8 D_800895B0[];
void func_800516F8(s32 arg0, s32 arg1, s32 arg2, Elem80051FF8 *arg3);
extern Obj80052658 *D_801ADCDC[];
s32 func_80015D80(u16 arg0, u16 arg1);
void func_800165E4(u16 arg0, u16 arg1, u32 *arg2);
void func_80056688(u8 *arg0);
extern s32 D_801ADCD8;
extern Obj800558A8 D_801AE2F0[];
void func_800548F4(Obj800558A8 *arg0);
extern Elem80055AA0 D_801B425C[];
void func_800135E8(Elem80055AA0 *arg0, Sub80055AA0 *arg1, s32 arg2);
extern Obj80056434 D_801ADA54[2];
extern s32 D_801ADA48;
extern u8 D_801ADA6D;
extern u8 D_801ADA6E;
extern u8 D_801ADA6F;
extern u8 D_801ADAC9;
extern u8 D_801ADACA;
extern u8 D_801ADACB;
extern u8 D_801ADB25;
extern u8 D_801ADB26;
extern u8 D_801ADB27;
extern u8 D_801ADBA9;
extern u8 D_801ADBAA;
extern u8 D_801ADBAB;
extern u8 D_801ADC05;
extern u8 D_801ADC06;
extern u8 D_801ADC07;
extern u8 D_801ADC61;
extern u8 D_801ADC62;
extern u8 D_801ADC63;
extern s32 D_801B4104;
extern s32 D_801B4108;
extern s32 D_801B4F60;
extern s32 D_801B4F74;
extern s32 D_801B4F88;
extern u8 D_8008970C[];
extern u8 D_8008CB48[];
void SetGeomOffset(s32 arg0, s32 arg1);
void SetGeomScreen(s32 arg0);
void SetFarColor(s32 arg0, s32 arg1, s32 arg2);
void SetDefDrawEnv(Elem80056434 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void SetDefDispEnv(Sub80056434 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_8005631C(void);
void func_80054888(void);
void func_80056180(void);
void func_800154D8(u8 *arg0, u8 *arg1, s32 arg2);
void func_800562FC(void);
extern s32 D_801ADCD4[];
void func_8006D9F4(s32 *arg0, Elem8007229C *arg1);
void func_8006F0F4(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
s32 func_80070C9C(Sub8004DE88 *arg0, s32 arg1);
s32 func_80070F0C(s32 arg0);
extern Elem8007286C D_801A4C68[];
void SsVabClose(s16 arg0);
extern Sub8004CF0C D_80042086[];
void SsUtKeyOffV(s16 arg0);
s16 SsUtKeyOnV(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6, s16 arg7);
extern s32 D_800894C0[];
void func_80060050(Sub800507B8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_80072598(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
Elem80073290 *func_80073188(Elem80073290 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_8006E1BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80070684(s32 arg0, Obj800707D0 *arg1);
extern Obj80077EAC D_80040FA0[];
extern s32 D_80040FA8;
extern s32 D_80040FAC;
extern s32 D_80041344;
extern s32 D_80041348;
extern u32 D_800411F4;
extern u32 D_80041590;
void func_80077C30(void);
void func_800771D0(void);
void func_80077AA0(void);
void func_800775B8(Obj80077CD8 *arg0, s32 arg1);
void func_80077F08(Obj80073138 *arg0, s32 arg1, s32 arg2);
void func_8007F978(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 *arg4);
s32 func_80016A84(s32 arg0);
extern Elem800852B0 D_8008BC44[];
extern Sub800852B0 D_8008BC80[];
void func_80083C98();
extern s32 D_800893C0;
s32 func_80016278(s32);
s32 func_80052658(Obj80052658 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800526D4(s32 arg0, s32 arg1);
extern s32 D_801EE8B0[3][64][16];
extern s32 D_801EC490;
extern u16 D_801AB668;
s32 func_80012794(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Sub8004DE88 *arg4, s32 arg5, s32 arg6);
void func_80054ED0(Sub80054F04 *arg0, Sub80054F04 *arg1);
extern Elem8004DB1C D_80031764[];
extern s32 D_800893D0;
s32 CdSyncCallback(s32 arg0);
s32 CdRead2(s32 arg0);
s32 CdControl(s32 arg0, u8 *arg1, s32 arg2);
void func_8004DB1C(u8 arg0);
extern Elem8006CCB8 D_8008D348[];
extern s32 D_801A4964;
extern Buf8005C910 *D_801ADCCC[];
extern Draw8005C910 D_801ADCD0;
extern s32 D_801EC494[];
void SetDrawMode(Mode8005DEE4 *p, s32 dfe, s32 dtd, s32 tpage, void *tw);
void func_8005DEE4(Node8005DEE4 *arg0);
s32 func_80060B08(s32 arg0, Sv80060B08 *arg1, s32 arg2, s32 arg3);
void func_8006D1D0(Sub8004DE88 *arg0, void *arg1);
void func_8006E24C(Obj8006E698 *arg0);
s32 func_8006E960(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8006E9FC(Obj8006E698 *arg0, Sub8004DE88 *arg1, s32 arg2);
s32 func_8006ED2C(s32 *arg0, ...);
extern s32 D_801A4960;
void Square0(Vec8005BFE0 *v0, Vec8005BFE0 *v1);
void func_8005BAA8(Elem8007229C *arg0, s32 arg1, Rec8005BAA8 **arg2, Rec8005BAA8 **arg3, Sv80060B08 *arg4);
void func_8005A134(Rec8005BAA8 *arg0);
void func_80062CB4(Rec8005BAA8 *arg0);
void func_80057118(s32 arg0);
void func_8005E588(Node8005DEE4 *arg0);
s32 SquareRoot0(s32 a);
s32 func_80060AC4(s32 arg0, s32 arg1);
extern s32 D_801AE2EC;
extern s32 D_801B4F5C;
void func_80063EC4(s32 arg0, u16 arg1);
void func_80062E70(s32 arg0, u16 arg1);
void func_80063904(Spad80063960 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800638C4(u8 *arg0, s32 *arg1, s32 arg2);
void func_800638E8(s32 *arg0, s32 arg1);
extern Elem8007229C *D_801EC498;
void func_8006D39C(Sub8004DE88 *arg0, void *arg1);
void func_8006EF2C(Obj8006F798 *arg0, Sub8004DE88 *arg1);
u32 func_8006FC18(Obj8006FBC0 *arg0, s32 *arg1, s32 *arg2);
s32 func_8006F328(s32 arg0, Elem8006E698 *arg1, s32 *arg2, Sub8004DE88 *arg3);
void func_8006EBF0(Sub8004DE88 *arg0, Sub8004DE88 *arg1, s32 arg2);
void func_80070AC4(Obj800707D0 *arg0, Sub8004DE88 *arg1);
void func_80070928(Obj800707D0 *arg0);
extern Obj8004F0B8 D_80039C78;
extern s16 D_8008A034;
extern u16 D_8008A036;
Obj80073508 *func_80073368(Obj80073138 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2, s32 arg3);
extern s16 D_8008A03C;
extern u16 D_8008A03E;
extern Fr80060C54 *D_800896FC[];
void SetBackColor(s32 arg0, s32 arg1, s32 arg2);
void SetFogNearFar(s32 arg0, s32 arg1, s32 arg2);
extern Tbl80064B94 D_801B614C;
extern Mat8005BAA8 D_800AD348;
Elem8007712C *func_80073B98(Obj80073138 *arg0, s32 arg1);
Elem8007712C *func_8006C798(s32 arg0);
extern Tbl800776B4 D_801AB698;
s32 func_8004EBD0(Sub8007618C_fdat202 *arg0);
s32 func_80073B0C(Obj80073138 *arg0, Obj8004F0B8 *arg1);
void func_8007A0F8(Obj80073138 *arg0, s32 arg1);
s32 func_8007FC08(Obj80073138 *arg0);
void func_8007521C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_8007853C(Obj80073138 *arg0);
void func_80078654(Obj80073138 *arg0);
void func_80075648(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_800780EC();
void func_800787BC(Obj80073138 *arg0);
s32 func_8004ECF8(Obj8004EDA8 *arg0);
void func_800751AC(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80078070();
void func_80077010(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_8007A240(void);
void func_800752A4(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_80078DF4();
void func_80079480();
void func_800764D0(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 *arg4, s32 arg5, void (*arg6)());
void func_8007647C(Obj80073138 *arg0, s32 arg1, s32 arg2, s16 *arg3, s32 arg4, void (*arg5)());
void func_8007A078(Obj80073138 *arg0);
s32 func_800132CC(s32 arg0, s32 arg1, s32 arg2);
s32 *func_8006F798(Sub8004DE88 *arg0, Sub8004DE88 *arg1, s32 arg2);
Obj800852B0 *func_800852B0(s32 arg0, Obj8008800C *arg1, u32 *arg2);
void func_800665A8(void);
void func_80063F94(s32 arg0);
void func_80064040(Spad800640A4 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80064FD4(Spad800640A4 *arg0, u16 arg1, s32 arg2);
void func_80065324(Spad800640A4 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_800653D8(Sv8006678C *arg0);
void func_80065348(Sv8006678C *arg0, s32 *arg1, s32 arg2);
void func_8006537C(u8 *arg0, s32 *arg1, s32 arg2);
void func_800653A0(u8 *arg0, u8 *arg1, u8 *arg2, s32 *arg3, s32 arg4);
extern Elem8006678C D_801AE340[];
extern u16 D_80031564[];
void func_80013AFC(s16 arg0, Mat8005BAA8 *arg1);
void SetRotMatrix(Mat8005BAA8 *m);
void SetTransMatrix(Mat8005BAA8 *m);

#endif /* FDAT204_H */
