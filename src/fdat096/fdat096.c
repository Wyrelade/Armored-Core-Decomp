#include "common.h"
#include "fdat096.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC098;
    func_801CC04C(arg0);
}

void func_801C52F0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC5DC[arg0->unk100];
    func_801CC04C(arg0);
}

void func_801C5344(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD5A8;
    func_801CC04C(arg0);
}

void func_801C5374(Elem801C5EA8 *arg0, s32 arg1) {
    s32 count;
    u16 *idx;

    count = arg0->unk26;
    idx = arg0->unk28 + 1;
    do {
        arg0->unk2C->unk10 = arg1;
        if (arg1 == 4) {
            arg0->unk38->unk6 = 0;
        }
        arg0 = &D_801D0B68[*idx++];
        count--;
    } while (count != 0);
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C53C4);

void func_801C54E0(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5530);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C57F0);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C58C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C59D0);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5A70);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5AD4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5B4C);

void func_801C5D10(Obj801C52C0 *arg0) {
    s32 unused[0x24];
    Sub801C5D10 *task;
    u16 val;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C5B4C;
    task->unk4 = func_801C5A70;
    task->unk10 = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk16 = arg0->unk38->unk0 << 5;
    val = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = val;
    task->unk18 = (s16)val * 0x11;
}

void func_801C5DAC(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5AD4;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C5DE8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C605C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C623C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C63AC);

void func_801C6604(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C63AC;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6640);

void func_801C6768(Obj801C52C0 *arg0) {
    Sub801C5D10 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6640;
}

void func_801C67A4(void) {
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C67AC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C68C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C698C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C69E4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6A58);

void func_801C6AB4(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6B34(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6B5C);

void func_801C6BC8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6BE4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6C04(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6C20(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6C3C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6C5C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6C78(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6C98(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C71B8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6D34);

INCLUDE_RODATA("asm/USA/fdat096/nonmatchings/fdat096", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C6EEC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C71B8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C74A4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C77A8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7A98);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7C4C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C7F28);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8030);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8100);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8210);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C83D8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8764);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C87C4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8820);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C887C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C8ABC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C901C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C92A8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C9A7C);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801C9DEC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA168);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA1BC);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CA6CC);

void func_801CAA18(Obj801C52C0_fdat000 *arg0) {
    s16 val;

    arg0->unk42 = 0;
    arg0->unk130 = 0;
    arg0->unk164 *= 4;
    val = func_80073904();
    arg0->unk12A = val;
    arg0->unk12C = val;
    arg0->unk44 = val;
    arg0->unk126 = -1;
    arg0->unk124 = -1;
    arg0->unk128 = 0;
    arg0->unk136 = 0;
    arg0->unk12E = 0;
    arg0->unk133 = 0;
    arg0->unk134 = 0;
    arg0->unk132 = 0;
    arg0->unk131 = 0;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CAAB8);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CABF4);

INCLUDE_ASM("asm/USA/fdat096/nonmatchings/fdat096", func_801CAD1C);

void func_801CC04C(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CAD1C;
    arg0->unk54 = func_801C8ABC;
    arg0->unk58 = func_801CA1BC;
    arg0->unk5C = func_801CA6CC;
    func_801CAA18(arg0);
}
