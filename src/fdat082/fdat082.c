#include "common.h"
#include "fdat082.h"

void func_801C5438(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCA8C;
    func_801CCA40(arg0);
}

void func_801C5468(Obj801C4E64 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CCFD0;
    func_801CCA40(arg0);
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5498);

void func_801C5578(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C55F0(Obj801C4E64 *arg0) {
    func_801C5578((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

void func_801C5644(Obj801C4E64 *arg0) {
    func_801C5578((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5698);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C57E8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C595C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5C40);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5D68);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6038);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C609C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C62BC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C644C);

void func_801C6520(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    func_801C644C();
}

void func_801C6544(Obj801C4E64 *arg0) {
    arg0->unk36 = 1;
    func_801C644C();
}

void func_801C6568(Obj801C4E64 *arg0) {
    arg0->unk36 = 1;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C659C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C65EC);

void func_801C6708(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6758);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6A18);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6AEC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6BF8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6CB8);

void func_801C6D0C(Obj801C6D0C *arg0) {
    Sub801C6B04 *task;
    Sub801C6D0C *info;
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

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6DA8);

void func_801C6DCC(Obj801C6D0C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C6D0C;
    arg0->unk2C->unk4 = func_801C6DA8;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6E40);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6F80);

void func_801C6FC8(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    if (func_801C6F80(arg0->unk22, arg0->unk24) != 0 && func_801C6F80(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6E40;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C703C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7358);

void func_801C7394(void) {
}

void func_801C739C(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C73BC);

void func_801C74A8(Obj801C4E64 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7528(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7550);

void func_801C75BC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C75D8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C75F8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7614(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7630(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7650(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C766C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C768C(Obj801C4E64 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7BAC);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7728);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C78E0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7BAC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7E98);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C819C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C848C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8640);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C891C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8A24);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8AF4);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8C04);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8DCC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9158);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C91B8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9214);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9270);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C94B0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9A10);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9C9C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CA470);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CA7E0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CAB5C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CABB0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB0C0);

void func_801CB40C(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB4AC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB5E8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB710);

void func_801CCA40(Obj801C4E64 *arg0) {
    arg0->unk50 = func_801CB710;
    arg0->unk54 = func_801C94B0;
    arg0->unk58 = func_801CABB0;
    arg0->unk5C = func_801CB0C0;
    func_801CB40C((Obj801C52C0 *)arg0);
}
