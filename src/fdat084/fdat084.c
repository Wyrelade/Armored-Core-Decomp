#include "common.h"
#include "fdat084.h"

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C4D14);

void func_801C4DFC(Obj801C4C94 *arg0) {
    func_80075FC0(arg0);
    func_8004EC4C(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4E64(Obj801C4E64 *arg0) {
    if (arg0->unk64.unkA == 0xA) {
        if (!(rand() & 1)) {
            func_801C4D14(arg0);
            func_80077B78(arg0, 0x27, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C786C, 1, 0);
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

void func_801C4F44(Obj801C4C94 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C4FE0);

void func_801C5038(Obj801C4EB8 *arg0) {
    func_8004ECA8((Sub801C4E64 *)&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C50B0(Obj801C4E64 *arg0) {
    func_801C5038((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

void func_801C5104(Obj801C4E64 *arg0) {
    func_801C5038((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5158);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C525C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C534C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C53B0);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C552C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5584);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C56DC);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C57D4);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C588C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C59C4);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5AC8);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5BBC);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5D94);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5ECC);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5F30);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C5FCC);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C60A8);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C620C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C625C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C62B0);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6330);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6468);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C656C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C665C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6780);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C68B8);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C690C);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C69A8);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C69F8);

void func_801C6B14(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6B64);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6E24);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C6EF8);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7004);

void func_801C725C(Obj801C6D0C *arg0) {
    Sub801C6B04 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C7004;
}

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7298);

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7358);

void func_801C73AC(Obj801C6D0C *arg0) {
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

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7448);

void func_801C746C(Obj801C6D0C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C73AC;
    arg0->unk2C->unk4 = func_801C7448;
}

void func_801C74E0(Obj801C5F00 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7544);

void func_801C75BC(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C74E0;
        break;
    case 1:
        task->unk0 = func_801C7544;
        break;
    }
}

void func_801C7628(void) {
}

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C7630);

s32 func_801C775C(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            if (D_801C79FC == 0) {
                D_801C79FC = 1;
                func_800529F0(0, 0, 0x28);
            }
            break;
        case 1:
            func_800529F0(0, 0, 0x2B);
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
            break;
        }
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat084/nonmatchings/fdat084", func_801C77F0);
