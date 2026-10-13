#include "common.h"
#include "fdat014.h"

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C4CB0);

void func_801C4D98(Obj801C4C94 *arg0) {
    func_80075FC0(arg0);
    func_8004EC4C(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4E00(Obj801C4C94 *arg0) {
    if (arg0->unk64.unkA == 0xA) {
        if (!(rand() & 1)) {
            func_801C4CB0(arg0);
            func_80077B78(arg0, 0x27, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C8478, 1, 0);
        } else {
            func_8004CE44(0x95, &arg0->unk8, 0x64, 0);
        }
    }
    func_80075FC0(arg0);
    func_8004ECA8(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4EE0(Obj801C4C94 *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x93, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0xBB8, 0xDAC, 0);
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4F7C(Obj801C4C94 *arg0) {
    func_80075FC0(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C4FD4);

void func_801C504C(Obj801C504C *arg0) {
    func_801C4FD4(arg0);
    if (arg0->unkCC >= 0x19) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C50A0(Obj801C504C *arg0) {
    func_801C4FD4(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C50F4);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C51F8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C52E8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C534C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C54C8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5520);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5678);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5770);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5828);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5910);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5978);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5A14);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5A6C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5AE4);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5B38);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5B8C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5C68);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5D58);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5DBC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5EEC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6008);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C610C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6204);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C62BC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C62F8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C63DC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C64E8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6880);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6B00);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6D58);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6D94);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6E54);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6EA8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6F8C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6FC8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C70EC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7100);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C732C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7438);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C75F0);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7704);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7844);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C788C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7900);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7A24);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7A70);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7F48);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7FB4);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C82D0);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C830C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C8360);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C8380);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C83C0);

void func_801C8450(void) {
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C8458);
