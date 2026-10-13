#include "common.h"
#include "fdat044.h"

void func_801C531C(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC4B0;
    func_801CC464(arg0);
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C534C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C561C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C575C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5850);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5970);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C59E0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5A48);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5AB0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5C54);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5D90);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C5E28);

void func_801C6080(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E28;
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C60BC);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C617C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C61D0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C6234);

void func_801C62AC(Obj801C572C *arg0) {
    Sub801C572C *task;

    task = arg0->unk14 = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C61D0;
        break;
    case 1:
        task->unk0 = func_801C6234;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C6318);

void func_801C6634(Obj801C572C *arg0) {
    Sub801C572C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6318;
}

void func_801C6670(void) {
}

s32 func_801C6678(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            if (D_801CCA40 < 2) {
                func_800529F0(0, 0, 0x31);
                D_8019F52C += D_8019F52C >> 1;
            }
            break;
        case 1:
            func_800529F0(0, 0, 0x68);
            D_8019F52C = 0;
            func_8004C318(0x80);
            break;
        }
    }
    return 1;
}

void func_801C6718(Obj801C6718 *arg0) {
    arg0->unk4 += arg0->unk26;
    arg0->unk26 += 4;
    arg0->unkBA += arg0->unk18;
    arg0->unk18 += arg0->unk1A;
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    if (arg0->unkBA <= arg0->unk1C) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C67A0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C6A00);

void func_801C6ECC(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6F4C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C6F74);

void func_801C6FE0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6FFC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C701C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7038);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7054);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7074);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7090);

void func_801C70B0(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C75D0);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C714C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7304);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C75D0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C78BC);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7BC0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C7EB0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8064);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8340);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8448);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8518);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8628);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C87F0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8B7C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8BDC);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8C38);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8C94);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C8ED4);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C9434);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C96C0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801C9E94);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CA204);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CA580);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CA5D4);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CAAE4);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CAE30);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CAED0);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CB00C);

INCLUDE_ASM("asm/USA/fdat044/nonmatchings/fdat044", func_801CB134);

void func_801CC464(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CB134;
    arg0->unk54 = func_801C8ED4;
    arg0->unk58 = func_801CA5D4;
    arg0->unk5C = func_801CAAE4;
    func_801CAE30(arg0);
}
