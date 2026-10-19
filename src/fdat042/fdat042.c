#include "common.h"
#include "fdat042.h"

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C54CC);

void func_801C55AC(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5624(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC >= 0x19) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C5678(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat042/nonmatchings/fdat042", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C56CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C581C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5990);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5C74);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5D9C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C606C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C60D0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C62F0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6480);

void func_801C6554(Obj801C6554 *arg0) {
    arg0->unk36 = 2;
    func_801C6480(arg0);
}

void func_801C6578(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    func_801C6480(arg0);
}

void func_801C659C(Obj801C6554 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CCFD8;
    func_801CCEA8(arg0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C65CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6BD0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6C4C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6D64);

void func_801C6E3C(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    arg0->unk58 = func_801C6D64;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = 0;
    arg0->unk40 = 0xC8;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 1, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6E98);

void func_801C70F0(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6E98;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C712C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C71EC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7240);

void func_801C7324(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C7240;
}

void func_801C7360(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801C7394(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7360;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C73D0);

void func_801C74B0(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C73D0;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C74EC);

void func_801C7808(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C74EC;
}

void func_801C7844(void) {
}

void func_801C784C(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C78B0);

void func_801C7910(Obj801C6554 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7990(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C79B8);

void func_801C7A24(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7A40(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7A60(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7A7C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7A98(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7AB8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7AD4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7AF4(Obj801C6554 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C8014);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7B90);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7D48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8014);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8300);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8604);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C88F4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8AA8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8D84);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8E8C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8F5C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C906C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9234);

void func_801C95C0(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9620);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C967C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C96D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9918);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9E78);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA104);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA8D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAC48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAFC4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB018);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB528);

void func_801CB874(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB914);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CBA50);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CBB78);

void func_801CCEA8(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CBB78;
    arg0->unk54 = func_801C9918;
    arg0->unk58 = func_801CB018;
    arg0->unk5C = func_801CB528;
    func_801CB874(arg0);
}
