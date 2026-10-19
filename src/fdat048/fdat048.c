#include "common.h"
#include "fdat048.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    if (arg0->unk100 == 1) {
        arg0->unk36 = 1;
        arg0->unk58 = func_801C9648;
        arg0->unk5C = func_801C9B58;
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        return;
    }
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CB524;
    func_801CB4D8(arg0);
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5340);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C53E0);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5444);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C54BC);

void func_801C5680(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5578 *task;
    u16 temp;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C54BC;
    task->unk4 = func_801C53E0;
    temp = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk10 = temp;
    task->unk16 = arg0->unk38->unk0 << 5;
    temp = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = temp;
    task->unk18 = (s16)temp * 17;
}

void func_801C571C(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5444;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5758);

void func_801C583C(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5758;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5878);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C59B8);

void func_801C5A00(Obj801C572C *arg0) {
    Sub801C5B54 *task;

    if (func_801C59B8(arg0->unk22, arg0->unk24) != 0 && func_801C59B8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C5878;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5A74);

void func_801C5B54(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5A74;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5B90);

void func_801C5EAC(Obj801C5B54 *arg0) {
    Sub801C5B54 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5B90;
}

void func_801C5EE8(void) {
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C5EF0);

void func_801C5F40(Obj801C5454 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C5FC0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C5FE8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
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

void func_801C6054(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6070(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6090(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C60AC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C60C8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C60E8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6104(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6124(Obj801C5454 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C6644);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C61C0);

INCLUDE_RODATA("asm/USA/fdat048/nonmatchings/fdat048", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6378);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6644);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6930);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6C34);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C6F24);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C70D8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C73B4);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C74BC);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C758C);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C769C);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7864);

void func_801C7BF0(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7C50);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7CAC);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7D08);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C7F48);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C84A8);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C8734);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C8F08);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9278);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C95F4);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9648);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801C9B58);

void func_801C9EA4(Obj801C52C0_fdat000 *arg0) {
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

void func_801C9F44(Obj801C9F44 *arg0) {
    Elem801C52C0 *elem;

    if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
        if (arg0->unk64.unk0 == 0x16) {
            if (arg0->unk64.unkA == 6) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        } else {
            elem = arg0->unk108;
            if (arg0->unk64.unkA == 0xC) {
                func_80078250(arg0, elem->unk30, elem->unk31, 0, 0x50, 0xC8, 0x41, 0);
            } else if (arg0->unk64.unkA == 5) {
                func_80078250(arg0, elem->unk32, elem->unk33, 0, 0x50, 0xC8, 0x41, 0);
            }
        }
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801CA080);

INCLUDE_ASM("asm/USA/fdat048/nonmatchings/fdat048", func_801CA1A8);

void func_801CB4D8(Obj801C5454 *arg0) {
    arg0->unk50 = func_801CA1A8;
    arg0->unk54 = func_801C7F48;
    arg0->unk58 = func_801C9648;
    arg0->unk5C = func_801C9B58;
    func_801C9EA4(arg0);
}
