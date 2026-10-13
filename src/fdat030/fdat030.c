#include "common.h"
#include "fdat030.h"

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C4C94);

void func_801C4D7C(Obj801C4C94 *arg0) {
    func_80075FC0((Obj8007618C *)arg0);
    func_8004EC4C(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4DE4(Obj8007618C *arg0) {
    if (arg0->unk64.unkA == 10) {
        if (!(rand() & 1)) {
            func_801C4C94(arg0);
            func_80077B78(arg0, 0x27, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C7AE8, 1, 0);
        } else {
            func_8004CE44(0x95, &arg0->unk8, 100, 0);
        }
    }
    func_80075FC0(arg0);
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4EC4(Obj801C4C94 *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x93, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0xBB8, 0xDAC, 0);
    }
    func_80075FC0((Obj8007618C *)arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4F60(Obj801C4C94 *arg0) {
    func_80075FC0((Obj8007618C *)arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_801C4FB8(Obj801C4EB8 *arg0) {
    func_8004ECA8((Sub8007618C *)&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5030(Obj8007618C *arg0) {
    func_801C4FB8(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C5084(Obj8007618C *arg0) {
    func_801C4FB8(arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C50D8);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C51DC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C52CC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5330);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C54AC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5504);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C565C);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5754);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C580C);

void func_801C58F4(Obj801C4C94 *arg0) {
    func_80075FC0((Obj8007618C *)arg0);
    func_8004EC4C(&arg0->unk64);
    arg0->unk64.unk2--;
    if (arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C595C);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C59F8);

void func_801C5A50(Obj801C4EB8 *arg0) {
    func_8004ECA8((Sub8007618C *)&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5AC8(Obj8007618C *arg0) {
    func_801C5A50(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C5B1C(Obj8007618C *arg0) {
    func_801C5A50(arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5B70);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5C4C);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5D3C);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5DA0);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5ED0);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C5FEC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C60F0);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C61E8);

s32 func_801C62A0(s32 arg0) {
    return ((rand() * arg0) >> 0xF) - (arg0 >> 1);
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C62DC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C63C0);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C64CC);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C6864);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C6AE4);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C6B34);

void func_801C6C50(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C6CA0);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C6F60);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C7034);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C7140);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C7200);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C7254);

void func_801C7378(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C738C);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C75B8);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C76C4);

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C787C);

void func_801C7990(void) {
}

INCLUDE_ASM("asm/USA/fdat030/nonmatchings/fdat030", func_801C7998);

void func_801C7A6C(Obj8007618C *arg0) {
    if (arg0->unk160 == 0 && D_8019F51C->unk20[arg0->unk0->unkA] == func_801C5754) {
        D_801C7B94 += 0x2BC;
    }
}

void func_801C7ACC(s32 *arg0) {
    *arg0 += D_801C7B94;
}
