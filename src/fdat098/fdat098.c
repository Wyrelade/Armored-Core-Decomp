#include "common.h"
#include "fdat098.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCDF8[arg0->unk100];
    func_801CCDAC(arg0);
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5314);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C53F0);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5554);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C55A4);

void func_801C55F8(Obj801C55F8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5554;
    arg0->unk58 = func_801C53F0;
    arg0->unk5C = func_801C55A4;
    arg0->unk50 = 0;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != 0) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C5678(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CDE08;
    func_801CCDAC(arg0);
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C56A8);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5784);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C58E8);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5938);

void func_801C598C(Obj801C55F8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C58E8;
    arg0->unk58 = func_801C5784;
    arg0->unk5C = func_801C5938;
    arg0->unk50 = 0;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != 0) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C5A0C(Elem801C5F00 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5A5C);

void func_801C5B78(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5BC8);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5E88);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C5F5C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6068);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C62DC);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C64BC);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C662C);

void func_801C67C8(Obj801C6710 *arg0) {
    Sub801C5CD0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C662C;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6804);

void func_801C6A5C(Obj801C52C0 *arg0) {
    Sub801C6A5C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6804;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6A98);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6B58);

void func_801C6BAC(Obj801C52C0 *arg0) {
    Sub801C6A5C *task;
    Obj801C6BAC *info;
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

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6C48);

void func_801C6C6C(Obj801C52C0 *arg0) {
    s32 unused[0x24];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C6BAC;
    arg0->unk2C->unk4 = func_801C6C48;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6CE0);

void func_801C6E04(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C6E18);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C7044);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C7150);

void func_801C7308(Obj801C75A4 *arg0) {
    Sub801C75A4 *task;
    u16 n;

    task = func_80073674(8);
    arg0->unk14 = task;
    task->unk4 = func_801C7150;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6E04;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6E18;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C7044;
        n = arg0->unk28;
        arg0->unk14->unkC = (u32)(n * n) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C741C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C755C);

void func_801C75A4(Obj801C75A4 *arg0) {
    Sub801C75A4 *task;

    if (func_801C755C(arg0->unk22, arg0->unk24) != 0 && func_801C755C(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C741C;
        return;
    }
    arg0->unk6 = -1;
}

void func_801C7618(Obj801C5F00 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C767C);

void func_801C76F4(Obj801C75A4 *arg0) {
    Sub801C75A4 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C7618;
        break;
    case 1:
        task->unk0 = func_801C767C;
        break;
    }
}

void func_801C7760(void) {
}

void func_801C7768(void) {
    func_8008A80C();
}

void func_801C7788(Obj801C52C0 *arg0) {
    if (arg0->unk160 == 0 && D_8019F51C->unk20[arg0->unk0->unkA] == func_801C5678) {
        D_801CE3B4++;
        if (D_801CE3B4 == 2) {
            D_80049E74 = 0;
            func_800529F0(0, 0, 0x5C);
        }
    }
}

void func_801C7814(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7894(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C78BC);

void func_801C7928(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7944(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7964(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7980(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C799C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C79BC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C79D8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C79F8(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7F18);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C7A94);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C7C4C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C7F18);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8204);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8508);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C87F8);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C89AC);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8C88);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8D90);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8E60);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C8F70);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C9138);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C94C4);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C9524);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C9580);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C95DC);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C981C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801C9D7C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CA008);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CA7DC);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CAB4C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CAEC8);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CAF1C);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CB42C);

void func_801CB778(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CB818);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CB954);

INCLUDE_ASM("asm/USA/fdat098/nonmatchings/fdat098", func_801CBA7C);

void func_801CCDAC(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CBA7C;
    arg0->unk54 = func_801C981C;
    arg0->unk58 = func_801CAF1C;
    arg0->unk5C = func_801CB42C;
    func_801CB778((Obj801C52C0_fdat000 *)arg0);
}
