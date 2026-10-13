#include "common.h"
#include "fdat080.h"

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C52FC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C55C8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5708);

void func_801C582C(Obj801C4E64 *arg0) {
    func_80078598();
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, &D_801CC14C) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk64.unk18 == 0 && func_801C5708(arg0) != 0) {
        arg0->unk64.unk18 = 0;
        if ((*(s32 *)&arg0->unk3C & 0xFFFF00) == 0xC000) {
            if (rand() < 0x51F) {
                arg0->unk3E = 5;
            }
        } else if (arg0->unk3F == 0) {
            func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, &D_801CC170, 1, 0, 1);
            arg0->unk3F = 1;
            arg0->unk148 = 0xF;
            arg0->unk14A = 0xB4;
            arg0->unk14B = 0xA0;
            arg0->unk14C = 0x8C;
            arg0->unk15C = 1;
            arg0->unk3E--;
        } else {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5970);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C59E0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5A48);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5AB0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5C5C);

void func_801C5D98(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C55C8;
    arg0->unk54 = func_801C5AB0;
    arg0->unk58 = func_801C582C;
    arg0->unk5C = func_801C5C5C;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C5E2C(Obj801C5E2C *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC190;
    func_801CC100(arg0);
}

void func_801C5E5C(Obj801C53A0 *arg0) {
    if (D_801D0B94[arg0->unkFC].unk0 == 0) {
        func_80078E1C(arg0);
    }
}

void func_801C5EA0(Obj801C4E64 *arg0) {
    if (arg0->unkFE == 0) {
        arg0->unk36 = 2;
    } else {
        arg0->unk36 = 1;
    }
    arg0->unk32 = 5;
    arg0->unk58 = func_801C5E5C;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5ED0);

void func_801C6128(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5ED0;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6164);

void func_801C61FC(Obj801C5E2C *arg0) {
    s32 unused[36];
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6164;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6238);

void func_801C6360(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6238;
}

void func_801C639C(Obj801C5E2C *arg0) {
    Sub801C6128 *task;
    Sub801C639C *data;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        if (task->unk10 == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6438);

void func_801C645C(Obj801C5E2C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C639C;
    arg0->unk2C->unk4 = func_801C6438;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C64D0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6610);

void func_801C6658(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    if (func_801C6610(arg0->unk22, arg0->unk24) != 0 && func_801C6610(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C64D0;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C66CC);

void func_801C67AC(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C66CC;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C67E8);

void func_801C6B04(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67E8;
}

void func_801C6B40(void) {
}

void func_801C6B48(void) {
    func_8008A80C();
}

void func_801C6B68(Obj801C4E64 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6BE8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6C10);

void func_801C6C7C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6C98(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6CB8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6CD4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6CF0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6D10(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6D2C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6D4C(Obj801C4E64 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C726C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6DE8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6FA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C726C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7558);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C785C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7B4C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7D00);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7FDC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C80E4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C81B4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C82C4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C848C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8818);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8878);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C88D4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8930);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8B70);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C90D0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C935C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9B30);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9EA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA21C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA270);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA780);

void func_801CAACC(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CAB6C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CACA8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CADD0);

void func_801CC100(Obj801C4E64 *arg0) {
    arg0->unk50 = func_801CADD0;
    arg0->unk54 = func_801C8B70;
    arg0->unk58 = func_801CA270;
    arg0->unk5C = func_801CA780;
    func_801CAACC((Obj801C52C0 *)arg0);
}
