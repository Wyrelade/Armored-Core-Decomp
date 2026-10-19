#include "common.h"
#include "fdat020.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CAA3C;
    func_801CA9F0(arg0);
}

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C52F0);

void func_801C53D4(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C52F0;
}

void func_801C5410(void) {
}

void func_801C5418(void) {
    if (D_801CAF80 == 0) {
        func_8008C2FC(0x601);
        D_801CAF80 = 1;
    }
    func_8008A80C();
}

void func_801C5458(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C54D8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C5500(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    u16 mask;

    arg0->unk148 |= 0xF;
    mask = arg1->unk38;
    if (arg0->unk15C & mask) {
        arg0->unk15C &= ~mask;
        arg0->unk14A = 0x3C;
        arg0->unk14B = 0x28;
        arg0->unk14C = 0x14;
    } else {
        arg0->unk15C |= mask;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
    }
}

void func_801C556C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C5588(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C55A8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C55C4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C55E0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C5600(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C561C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C563C(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C5B5C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C56D8);

INCLUDE_RODATA("asm/USA/fdat020/nonmatchings/fdat020", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5890);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5B5C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C5E48);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C614C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C643C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C65F0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C68CC);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C69D4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6AA4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6BB4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C6D7C);

void func_801C7108(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7168);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C71C4);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7220);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7460);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C79C0);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C7C4C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8420);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8790);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8B0C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C8B60);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C9070);

void func_801C93BC(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C945C);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C9598);

INCLUDE_ASM("asm/USA/fdat020/nonmatchings/fdat020", func_801C96C0);

void func_801CA9F0(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C96C0;
    arg0->unk54 = func_801C7460;
    arg0->unk58 = func_801C8B60;
    arg0->unk5C = func_801C9070;
    func_801C93BC(arg0);
}
