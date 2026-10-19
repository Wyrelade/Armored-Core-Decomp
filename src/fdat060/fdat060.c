#include "common.h"
#include "fdat060.h"

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C5458);

void func_801C5538(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C55B0(Obj801C4F4C *arg0) {
    func_801C5538(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C5604(Obj801C4F4C *arg0) {
    func_801C5538(arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

INCLUDE_RODATA("asm/USA/fdat060/nonmatchings/fdat060", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C5658);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C57A8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C591C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C5C00);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C5D28);

void func_801C5FF8(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0 *)arg0, arg1, (Sub801C55B4 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C605C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C627C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C640C);

void func_801C64E0(Obj801C4F4C *arg0) {
    arg0->unk36 = 2;
    func_801C640C(arg0);
}

void func_801C6504(Obj801C4F4C *arg0) {
    arg0->unk36 = 1;
    func_801C640C(arg0);
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C6528);

void func_801C6688(Obj801C4F4C *arg0, u8 arg1) {
    arg0->unk3C = arg1;
    func_80078598(arg0);
    func_8007732C(arg0, 0, 0, 0, &arg0->unkCC, func_801C6528);
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C66DC);

void func_801C67E8(Obj801C4F4C *arg0) {
    arg0->unk148 = 0xF0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CC3BC) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        if (func_801C66DC(arg0) != 0 && arg0->unk3F == 0) {
            func_80077B78(arg0, 0x27, arg0->unk0->unk1C, arg0->unk0->unk20, D_801CC3E0, 1, 0, 1);
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

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C68F8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C6A2C);

void func_801C6A80(Obj801C4F4C *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C6688;
    arg0->unk54 = func_801C68F8;
    arg0->unk58 = func_801C67E8;
    arg0->unk5C = func_801C6A2C;
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

void func_801C6B1C(Obj801C4F4C *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC410;
    func_801CC28C(arg0);
    arg0->unk164 *= 4;
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C6B68);

void func_801C6C90(Obj801C4F4C *arg0) {
    Sub801C667C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6B68;
}

void func_801C6CCC(void) {
}

void func_801C6CD4(void) {
    func_8008A80C();
}

void func_801C6CF4(Obj801C4F4C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6D74(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C6D9C);

void func_801C6E08(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6E24(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6E44(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6E60(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6E7C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6E9C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6EB8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6ED8(Obj801C4F4C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C73F8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C6F74);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C712C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C73F8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C76E4);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C79E8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C7CD8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C7E8C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8168);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8270);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8340);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8450);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8618);

void func_801C89A4(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8A04);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8A60);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8ABC);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C8CFC);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C925C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C94E8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801C9CBC);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CA02C);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CA3A8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CA3FC);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CA90C);

void func_801CAC58(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CACF8);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CAE34);

INCLUDE_ASM("asm/USA/fdat060/nonmatchings/fdat060", func_801CAF5C);

void func_801CC28C(Obj801C4F4C *arg0) {
    arg0->unk50 = func_801CAF5C;
    arg0->unk54 = func_801C8CFC;
    arg0->unk58 = func_801CA3FC;
    arg0->unk5C = func_801CA90C;
    func_801CAC58(arg0);
}
