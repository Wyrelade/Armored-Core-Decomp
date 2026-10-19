#include "common.h"
#include "fdat068.h"

INCLUDE_RODATA("asm/USA/fdat068/nonmatchings/fdat068", D_801C4B40);

void func_801C52E0(Obj801C58D4 *arg0) {
    Sub801C63FC v;
    s16 angle;
    s32 flip;

    flip = 0;
    angle = func_80075EB4();
    switch (arg0->unk3C) {
    case 1:
    turn:
        arg0->unk12 = func_800132CC(arg0->unk12, angle, arg0->unk4->unk8);
        if (flip) {
            func_80014728((arg0->unk12 + 0x800) % 0x1000, &v);
        } else {
            func_80014728(arg0->unk12, &v);
        }
        func_80014338(&v, (flip + 1) * 0x12C, &arg0->unkCC);
        break;
    case 2:
        angle += 0x200;
        goto turn;
    case 3:
        angle -= 0x200;
        goto turn;
    case 7:
        angle += 0x200;
    case 6:
    back:
        flip = 1;
        goto turn;
    case 8:
        angle -= 0x200;
        goto back;
    case 4:
        angle += 0x400;
        goto turn;
    case 5:
        angle -= 0x400;
        goto turn;
    default:
        func_800143B8(&arg0->unkCC, 0x96, 0x12C, &arg0->unkCC);
        break;
    }
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C5440(Obj801C58D4 *arg0, u8 arg1) {
    arg0->unk3C = arg1;
    func_80078598(arg0);
    func_8007732C(arg0, 0, 0, 0, &arg0->unkCC, func_801C52E0);
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5494);

void func_801C55A0(Obj801C58D4 *arg0) {
    arg0->unk148 = 0xF0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CB9E0) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        if (func_801C5494(arg0) != 0 && arg0->unk3F == 0) {
            func_80077B78(arg0, 0x27, arg0->unk0->unk1C, arg0->unk0->unk20, D_801CBA04, 1, 0, 1);
            arg0->unk148 = 0xF;
            arg0->unk14A = 0xB4;
            arg0->unk14B = 0xA0;
            arg0->unk14C = 0x8C;
            arg0->unk15C = 1;
            arg0->unk3F = (rand() & 0xF) + 0xD;
        }
        if (arg0->unk3F != 0) {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C56B0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C57E4);

void func_801C5838(Obj801C58D4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C5440;
    arg0->unk54 = func_801C56B0;
    arg0->unk58 = func_801C55A0;
    arg0->unk5C = func_801C57E4;
    arg0->unk64.unk18 = 0;
    arg0->unk41 = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C58D4(Obj801C58D4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBA34;
    func_801CB994((Obj801CB994 *)arg0);
    arg0->unk164 *= 4;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5920);

void func_801C5B78(Obj801C58D4 *arg0) {
    Sub801C5B78 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5920;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5BB4);

void func_801C5CDC(Obj801C58D4 *arg0) {
    Sub801C5B78 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5BB4;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5D18);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5E58);

void func_801C5EA0(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    if (func_801C5E58(arg0->unk22, arg0->unk24) != 0 && func_801C5E58(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C5D18;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5F14);

void func_801C5FF4(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5F14;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6030);

void func_801C634C(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6030;
}

void func_801C6388(void) {
}

void func_801C6390(void) {
    func_80056C6C(1, 0x1FB, 1, 1, 2, 0xD, 1);
}

void func_801C63D4(void) {
    func_8008A80C();
}

void func_801C63F4(void) {
}

void func_801C63FC(Obj801C58D4 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C647C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C64A4);

void func_801C6510(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C652C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C654C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6568(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6584(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C65A4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C65C0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C65E0(Obj801C58D4 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C6B00);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C667C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6834);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6B00);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6DEC);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C70F0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C73E0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7594);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7870);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7978);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7A48);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7B58);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7D20);

void func_801C80AC(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C810C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8168);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C81C4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8404);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8964);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8BF0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C93C4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9734);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9AB0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9B04);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA014);

void func_801CA360(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA400);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA53C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA664);

void func_801CB994(Obj801CB994 *arg0) {
    arg0->unk50 = func_801CA664;
    arg0->unk54 = func_801C8404;
    arg0->unk58 = func_801C9B04;
    arg0->unk5C = func_801CA014;
    func_801CA360(arg0);
}
