#include "common.h"
#include "fdat090.h"

void func_801C5384(Obj801C5384 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCB98;
    func_801CCB4C(arg0);
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C53B4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5490);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C55F4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5644);

void func_801C5698(Obj801C5698 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C55F4;
    arg0->unk58 = func_801C5490;
    arg0->unk5C = func_801C5644;
    arg0->unk50 = NULL;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_RODATA("asm/USA/fdat090/nonmatchings/fdat090", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5718);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5910);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5A08);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5AEC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5D50);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5DB4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C5FC0);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C60A8);

void func_801C6180(Elem801C5F00 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C61D0);

void func_801C62EC(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C633C);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C65FC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C66D0);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C67DC);

void func_801C6A34(Obj801C5384 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C67DC;
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6A70);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6B30);

void func_801C6B84(Obj801C5384 *arg0) {
    Sub801C5550 *task;
    Sub801C6B84 *info;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                info = arg0->unk38;
                func_8008A0B0(info->unk4, info->unk5, info->unk6, info->unk8, info->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6C20);

void func_801C6C44(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6B84;
    arg0->unk2C->unk4 = func_801C6C20;
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6CB8);

void func_801C6D50(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6CB8;
    arg0->unk2C->unk4 = 0;
}

void func_801C6D98(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C5F00 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_801D0B68[arg0->unk24];
        do {
            if (elem->unk2C != 0) {
                return;
            }
            count--;
            elem++;
        } while (count != 0);
        arg0->unk6 = -1;
        arg0->unk14 = NULL;
        arg0->unk1C |= 0x8000;
    }
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6DFC);

void func_801C6E74(Obj801C6730 *arg0) {
    Sub801C6730 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6D98;
        break;
    case 1:
        task->unk0 = func_801C6DFC;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C6EE0);

void func_801C73B8(Obj801C6730 *arg0) {
    Sub801C6730 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6EE0;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C7424);

void func_801C7504(Obj801C6730 *arg0) {
    Sub801C6730 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7424;
}

void func_801C7540(void) {
}

void func_801C7548(void) {
    func_8008A80C();
}

void func_801C7568(Obj801C7568 *arg0) {
    if (arg0->unk160 == 0) {
        D_801CD1AC += 0x1F4;
    }
}

void func_801C7598(s32 *arg0) {
    *arg0 += D_801CD1AC;
}

void func_801C75B4(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7634(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C765C);

void func_801C76C8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C76E4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7704(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7720(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C773C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C775C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7778(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7798(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7CB8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C7834);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C79EC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C7CB8);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C7FA4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C82A8);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8598);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C874C);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8A28);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8B30);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8C00);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8D10);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C8ED8);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C9264);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C92C4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C9320);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C937C);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C95BC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C9B1C);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801C9DA8);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CA57C);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CA8EC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CAC68);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CACBC);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CB1CC);

void func_801CB518(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CB5B8);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CB6F4);

INCLUDE_ASM("asm/USA/fdat090/nonmatchings/fdat090", func_801CB81C);

void func_801CCB4C(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CB81C;
    arg0->unk54 = func_801C95BC;
    arg0->unk58 = func_801CACBC;
    arg0->unk5C = func_801CB1CC;
    func_801CB518(arg0);
}
