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

void func_801C5910(Obj801C4C94 *arg0) {
    func_80075FC0(arg0);
    func_8004EC4C(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C5978(Obj801C504C *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x90, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0x1388, 0x1770, 0);
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C5A14(Obj801C4C94 *arg0) {
    func_80075FC0(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5A6C);

void func_801C5AE4(Obj801C504C *arg0) {
    func_801C5A6C(arg0);
    if (arg0->unkCC >= 0x19) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C5B38(Obj801C504C *arg0) {
    func_801C5A6C(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5B8C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5C68);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5D58);

void func_801C5DBC(Obj801C504C *arg0, s32 arg1) {
    s32 var_s1;

    var_s1 = arg1;
    if (arg0->unk36 & 0x10) {
        var_s1 = arg0->unk3C;
    }
    func_80078598(arg0);
    switch (var_s1) {
    case 1:
        func_801C5C68(arg0, 2, 1);
        break;
    case 2:
        func_801C5C68(arg0, 5, 4);
        break;
    case 0:
        if (func_801C5B8C(arg0) != 0) {
            func_80076578(arg0, 0, 1, func_801C5910);
            arg0->unk72 = 0x100;
        }
        break;
    case 3:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = var_s1;
    }
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C5EEC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6008);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C610C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6204);

s32 func_801C62BC(s32 arg0) {
    return ((rand() * arg0) >> 0xF) - (arg0 >> 1);
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C62F8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C63DC);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C64E8);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6880);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6B00);

void func_801C6D58(Obj801C6D58 *arg0) {
    Task801C6D58 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6B00;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6D94);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6E54);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6EA8);

void func_801C6F8C(Obj801C6D58 *arg0) {
    Task801C6D58 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6EA8;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C6FC8);

void func_801C70EC(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7100);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C732C);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7438);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C75F0);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7704);

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7844);

void func_801C788C(Obj801C788C *arg0) {
    Task801C788C *task;

    if (func_801C7844(arg0->unk22, arg0->unk24) != 0 && func_801C7844(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C7704;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7900);

void func_801C7A24(Obj801C7A24 *arg0) {
    Task801C7A24 *task;

    task = func_80073674(1);
    arg0->unk14 = task;
    task->unk0 = func_801C7900;
    arg0->unk14->unk8 = rand() & 7;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7A70);

void func_801C7F48(Obj801C788C *arg0) {
    Task801C788C *task;
    u8 id;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C7A70;
    id = arg0->unk28;
    if (id == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(id);
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C7FB4);

void func_801C82D0(Obj801C788C *arg0) {
    Task801C788C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7FB4;
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C830C);

void func_801C8360(void) {
    D_801C8540 += 0x12C;
}

void func_801C8380(void) {
    s32 temp;

    temp = func_801C830C(0x15);
    D_801C8544 = temp + func_801C830C(0x16);
}

INCLUDE_ASM("asm/USA/fdat014/nonmatchings/fdat014", func_801C83C0);

void func_801C8450(void) {
}

void func_801C8458(void) {
    func_8008A80C();
}
