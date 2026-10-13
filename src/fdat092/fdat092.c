#include "common.h"
#include "fdat092.h"

void func_801C5308(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC0C0;
    func_801CC074(arg0);
}

void func_801C5338(Obj801C52C0 *arg0) {
    if (arg0->unk100 == 1) {
        arg0->unk36 = 1;
        arg0->unk58 = func_801CA1E4;
        arg0->unk5C = func_801CA6F4;
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        return;
    }
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC604;
    func_801CC074(arg0);
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C53B8);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C54F0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C55F4);

void func_801C56E4(Obj801C52C0 *arg0) {
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CCB48) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (arg0->unk64.unk18 == 0 && func_801C55F4(arg0) != 0 && arg0->unk3F == 0 &&
        func_800781E8(arg0) != 0) {
        func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801CCB6C, 1, 0, 1);
        arg0->unk148 = 0xF;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
        arg0->unk15C = 1;
        arg0->unk3F = 0x1E;
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
    }
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5808);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5940);

void func_801C5994(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C54F0;
    arg0->unk54 = func_801C5808;
    arg0->unk58 = func_801C56E4;
    arg0->unk5C = func_801C5940;
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

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5A30);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5A80);

void func_801C5B9C(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5BEC);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5EAC);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C5F80);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C608C);

void func_801C62E4(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C608C;
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6320);

void func_801C6404(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6320;
}

void func_801C6440(Obj801C52C0 *arg0) {
    Sub801C5550 *task;
    Sub801C6440 *info;
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

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C64DC);

void func_801C6500(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6440;
    arg0->unk2C->unk4 = func_801C64DC;
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6574);

void func_801C660C(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6574;
    arg0->unk2C->unk4 = 0;
}

void func_801C6654(Obj801C5F00 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C66B8);

void func_801C6730(Obj801C6730 *arg0) {
    Sub801C6730 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6654;
        break;
    case 1:
        task->unk0 = func_801C66B8;
        break;
    }
}

void func_801C679C(void) {
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C67A4);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6800);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6880);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C69E4);

void func_801C6A20(void) {
    u8 state;

    func_8008A80C();
    if (D_8019F528 == 0 && D_801CCBD8 == 0) {
        state = D_801D3B94->unk10;
        if (state == 1) {
            D_801CCBD8 = state;
            func_80078CFC(D_8019FB68);
            func_801C67A4(4)->unk5C = func_801C69E4;
            func_80078CFC(&D_8019FB68[0x2C]);
            func_801C67A4(5);
            func_8008C2FC(0x100, func_801C6880);
            func_801C6800(5);
        }
    }
}

void func_801C6ADC(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6B5C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6B84);

void func_801C6BF0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6C0C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6C2C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6C48(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6C64(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6C84(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6CA0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6CC0(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C71E0);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6D5C);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C6F14);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C71E0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C74CC);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C77D0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C7AC0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C7C74);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C7F50);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8058);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8128);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8238);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8400);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C878C);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C87EC);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8848);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C88A4);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C8AE4);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C9044);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C92D0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C9AA4);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801C9E14);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CA190);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CA1E4);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CA6F4);

void func_801CAA40(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CAAE0);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CAC1C);

INCLUDE_ASM("asm/USA/fdat092/nonmatchings/fdat092", func_801CAD44);

void func_801CC074(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CAD44;
    arg0->unk54 = func_801C8AE4;
    arg0->unk58 = func_801CA1E4;
    arg0->unk5C = func_801CA6F4;
    func_801CAA40(arg0);
}
