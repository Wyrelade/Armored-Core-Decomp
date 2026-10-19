#include "common.h"
#include "fdat052.h"

void func_801C5918(Obj801C5454 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD8E8;
    func_801CC9A8(arg0);
}

INCLUDE_RODATA("asm/USA/fdat052/nonmatchings/fdat052", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5948);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5F4C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5FC8);

Obj801C5454 *func_801C60E0(u8 *arg0) {
    Obj801C5454 *obj;

    if (arg0 >= (u8 *)&D_8019FB68) {
        obj = func_80078A2C();
        if (obj != NULL) {
            func_80078B14(obj, arg0);
            obj->unk36 = 2;
            return obj;
        }
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C614C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6760);

void func_801C67F4(Obj801C67F4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk58 = func_801C614C;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = func_801C6760;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
    arg0->unk10B = 0;
    arg0->unk10A = 0;
}

void func_801C6864(Obj801C6864 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CE024;
    func_801CD89C(arg0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6894);

void func_801C6AEC(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6894;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6B28);

void func_801C6C50(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6B28;
}

void func_801C6C8C(Obj801C5F00 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6CF0);

void func_801C6D68(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6C8C;
        break;
    case 1:
        task->unk0 = func_801C6CF0;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6DD4);

void func_801C6EB4(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6DD4;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6EF0);

void func_801C720C(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6EF0;
}

void func_801C7248(void) {
}

void func_801C7250(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, (u8 *)&D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unk8.unk6](&D_8019FB68.unk2CC0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C72B4);

void func_801C73A8(s32 *arg0) {
    if (D_801D17AE == -1 && D_801D17EE == D_801D17AE && D_801D182E == D_801D17EE && D_801D186E == D_801D182E) {
        *arg0 += 500;
    }
}

void func_801C7410(Obj801C6864 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7490(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C74B8);

void func_801C7524(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7540(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7560(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C757C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7598(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C75B8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C75D4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C75F4(Obj801C6864 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7B14);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7690);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7848);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7B14);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7E00);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8104);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C83F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C85A8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8884);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C898C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8A5C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8B6C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8D34);

void func_801C90C0(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9120);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C917C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C91D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9418);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9978);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9C04);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA3D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA748);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAAC4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAB18);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB028);

void func_801CB374(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB414);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB550);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB678);

void func_801CC9A8(Obj801C6864 *arg0) {
    arg0->unk50 = func_801CB678;
    arg0->unk54 = func_801C9418;
    arg0->unk58 = func_801CAB18;
    arg0->unk5C = func_801CB028;
    func_801CB374(arg0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CC9F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CCA78);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CD804);

void func_801CD89C(Obj801C6864 *arg0) {
    arg0->unk50 = func_801CCA78;
    arg0->unk54 = func_801C9418;
    arg0->unk58 = func_801CD804;
    arg0->unk5C = func_801CB028;
    func_801CB374(arg0);
}
