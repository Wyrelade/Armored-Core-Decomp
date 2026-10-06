#include "common.h"
#include "fdat201.h"

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004DCC0);

void func_8004DEB0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8004F924) == &D_801BC4F8) {
        arg0->unk7C->unk74 = func_8004F294;
        arg0->unk74 = func_8004DF10;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004DF10);

void func_8004E044(Obj8004E044 *arg0) {
    if (arg0->unk80->unk7E != 0) {
        func_8004FB28(func_80050078(func_8004DCC0)->unkAE);
        arg0->unk98 = &D_801BC4F8;
        arg0->unk74 = func_8004E0B4;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004E0B4);

void func_8004E13C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_8004E2BC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004E18C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004E22C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004E2BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004E894);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004EC24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004ECAC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004EDC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004EE7C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004EEEC);

void func_8004EFE8(void) {
    Obj8004DEB0 *obj;

    obj = func_80050078(func_8004DCC0);
    obj->unk98->unk1 = 1;
    obj->unk74 = func_8004DF10;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F024);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F098);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F1C8);

void func_8004F294(Obj8004DEB0 *arg0) {
    arg0->unk58 -= 0x20;
    arg0->unk5C -= 0x20;
    if (arg0->unk58 <= 0x800) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F2CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F4A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F588);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F624);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F6DC);

void func_8004F7E8(Obj8004DEB0 *arg0) {
    arg0->unk40 += 0x40;
    arg0->unk42 += 0x20;
    arg0->unk44 += 0x10;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F810);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004F924);

void func_8004F9D8(Obj8004F9D8 *arg0) {
    arg0->unk7C++;
    if (arg0->unk7C > 0x200) {
        arg0->unk7C = 0x200;
    }
    if (func_800517C8() == 0) {
        arg0->unk74 = func_8004FA44;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FA44);

void func_8004FAC4(Obj8004F9D8 *arg0) {
    arg0->unk7C++;
    if (arg0->unk7C > 0x400) {
        arg0->unk7C = 0x400;
    }
    if (func_800517C8() == 0) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FB28);

void func_8004FC2C(void) {
}

void func_8004FC34(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FC3C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FD3C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FD4C);

void func_8004FDEC(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FDF4);

void func_8004FF14(Obj8004FF14 *arg0) {
    func_8005D8D4(D_8004AE88, arg0->unk7C, 4, 0);
    arg0->unk74 = func_8004FF5C;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FF5C);

void func_8004FFC4(Obj8004FF14 *arg0) {
    if (arg0->unk7C[1] != 0) {
        arg0->unk74 = func_8004FFF4;
    } else {
        arg0->unk74 = func_8004FF14;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004FFF4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050078);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800500EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005015C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800501BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050560);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800505F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800506EC);

void func_800507F4(void) {
}

void func_800507FC(void) {
}

void func_80050804(s16 arg0, s16 arg1) {
    u32 *data;

    data = func_80051248(arg0, arg1);
    func_80050944(data);
    func_8002BFE8(0);
    func_80051078(data);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050854);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050944);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050A54);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050AF4);

void func_80050B9C(s32 arg0) {
    func_800B597C(arg0 + 4);
}

void func_80050BBC(void) {
    D_801A2318 = func_800263F8(func_80051248(6, 0), -1);
    func_80026B2C(func_80051248(6, 1), D_801A2318);
    func_80026EC4(1);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050C18);

void func_80050CE0(void) {
    D_801A2550 = 0;
    D_801A2554 = 0;
    D_801A2556 = 0;
    D_801A2558 = 0;
    D_801A255C = 0;
    D_801A255E = 0;
    D_801A2560 = 0;
    D_801A2564 = 0;
    D_801A2568 = 0;
    D_801A256C = 0;
    D_801A2570 = 0;
    D_801A2574 = 0;
    D_801A2578 = 0;
    D_801A2579 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050D58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050E94);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80050FC4);

void func_80051078(u32 *arg0) {
    func_80029B40();
    func_8002A3C8(arg0);
    func_80029B50();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800510B0);

void func_800510FC(void) {
    func_80029B40();
    func_8002A150(D_800CF37C, 0xAF000);
    func_80029B50();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051138);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800511A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051248);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800512D4);

void func_800513F0(u16 arg0, u16 arg1, void (*arg2)()) {
    Obj800513F0 loc;
    s32 size;

    size = func_80015C9C(arg0, arg1, &loc);
    func_80015B78(0x10, &loc, size, func_80050FC4(size), arg2);
}

void func_80051450(u16 arg0, u16 arg1) {
    Obj800513F0 loc;
    s32 size;

    size = func_80015C9C(arg0, arg1, &loc);
    func_80015B78(0x10, &loc, size, func_80050FC4(size + 4), func_80051830);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800514AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800515F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051608);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051618);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051628);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800517C8);

void func_80051830(u32 *arg0) {
    func_80050944(arg0);
    func_8002BFE8(0);
    func_8002A3C8(arg0);
}

void func_80051868(void) {
    func_80029B40();
    func_800309A8(1, 3, 0x1FA400);
    func_80029B50();
}

void func_800518A4(u32 *arg0) {
    func_8002A3C8(arg0);
}

void func_800518C4(void) {
}

void func_800518CC(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800518D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800519A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051A74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051B8C);

void func_80051C20(Obj80051C20 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051C44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051D14);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051D38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051DCC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051DF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051F24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051FB0);

void func_800520E0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
        arg0->unk7C->unk74 = arg0->unk80;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80052134);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80052334);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005252C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80052BD0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80052F68);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053008);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800530A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800531A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800531B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800537E0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053878);

void func_80053924(Obj8004DEB0 *arg0) {
    func_800506EC(4);
    func_8005015C(3)->unk1 = 1;
    func_8005C2D0(0x60, 0x60, 0x80, 0x30, 3);
    arg0->unk74 = func_80053988;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053988);

void func_80053A20(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B0B0, 8, 8, 0xA);
        arg0->unk74 = func_80053A84;
    }
}

void func_80053A84(Obj8004DEB0 *arg0) {
    if (arg0->unkAA == 0x44) {
        arg0->unk74 = func_80053AB4;
    } else {
        arg0->unk74 = func_80055CE0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053AB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053C98);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053DB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80053E98);

void func_80054188(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_80054258, D_8004B0FC, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_800541F0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_80054258, D_8004B120, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054258);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800542F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005489C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800549D0);

void func_80054A68(Obj8004DEB0 *arg0) {
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    arg0->unk74 = func_800542F0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054AB0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054C34);

void func_80054CD0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B1BC, 8, 8, 0xA);
        arg0->unk74 = func_80054D34;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054D34);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054D44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054F1C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800550A0);

void func_8005513C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B22C, 8, 8, 0xA);
        arg0->unk74 = func_800551A0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800551A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800551B0);

void func_8005552C(Obj8005552C *arg0) {
    Sub8005552C *sub;

    sub = arg0->unk7C;
    if (sub->unk70 == func_800A2D0C) {
        sub->unk9C = 0x4C;
    } else if (sub->unk70 == func_8004FDF4) {
        sub->unk7D = 1;
    }
    arg0->unk7C->unk74 = arg0->unk80;
    arg0->unk1 = 1;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055580);

void func_800556A8(Obj8005552C *arg0) {
    Sub8005552C *sub;

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        sub = arg0->unk7C;
        arg0->unk1 = 1;
        if (sub->unk70 == func_800A2D0C) {
            sub->unk9C = 0x4E;
        }
        arg0->unk7C->unk74 = arg0->unk80;
    }
}

void func_8005571C(Obj8004DEB0 *arg0) {
    if (func_800685A8(arg0->unkA4) != 0) {
        arg0->unk74 = func_800531B8;
        return;
    }
    func_8005D8D4(D_8004B27C, &arg0->unkA3, 0xA, 1);
    arg0->unk74 = func_800557CC;
}

void func_80055784(Obj8004DEB0 *arg0) {
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    arg0->unk74 = func_800531B8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800557CC);

void func_800558DC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B298, 8, 8, 0xA);
        arg0->unk74 = func_80055940;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055940);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055950);

void func_80055B3C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_800531B8, D_8004B2D0, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055BA4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055C2C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055CE0);

void func_80055F08(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_80054258, D_8004B310, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055F70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056034);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005616C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800566AC);

void func_80056770(Obj8004DEB0 *arg0) {
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    arg0->unk74 = func_8005616C;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800567B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800568D8);

void func_80056974(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B1BC, 8, 8, 0xA);
        arg0->unk74 = func_800569D8;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800569D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800569E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056B60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056C48);

void func_80056CE4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B22C, 8, 8, 0xA);
        arg0->unk74 = func_80056D48;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056D48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056D58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056EF4);

void func_80056FC4(Obj80056FC4 *arg0) {
    arg0->unk48 = *arg0->unk7C * 0x44 + 6;
    arg0->unk4C = *arg0->unk80 * 0x44 + 6;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005700C);

void func_800570A8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800AEB30(arg0, func_80057108);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057108);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057190);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800572C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800574C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057664);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057860);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057A9C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057CD8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80057F08);

void func_800580E0(void) {
    func_8002A400(1);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80058100);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005836C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800585D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80058808);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80058A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80058C28);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80058EA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059118);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059374);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059634);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059890);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059B50);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059C84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80059E44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A004);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A1C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A1E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A3A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A5F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005A84C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005AAA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005ACF4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005AE8C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005B024);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005B12C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005B2CC);

void func_8005B46C(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_8005B46C;
    obj->unk74 = func_8005B4B8;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005B4B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005B648);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005BA2C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005BF0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005C2D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005C6CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CA60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CAE0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CB94);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CC48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CDEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D15C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D21C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D2DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D39C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D430);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D500);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D544);

void func_8005D71C(void) {
    func_8002C17C(D_800B7418, 0, 0, 0);
    func_8002BFE8(0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D754);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D80C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D8D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D9E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DAB0);

void func_8005DCDC(Obj8005DCDC *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        *arg0->unk90 = arg0->unk96;
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DD38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DE08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DED8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DFB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E040);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E1E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E23C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E318);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E3A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E4D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E528);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E684);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E710);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E8D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E92C);

void func_8005EAA0(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        arg0->unk74 = func_8005EAE0;
    }
}

void func_8005EAE0(Obj8004DEB0 *arg0) {
    D_801A2560 = 1;
    arg0->unk1 = 1;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005EAF8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005EB80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005EE90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F054);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F1DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F260);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F49C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F5E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80060168);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006035C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80060ABC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80060E10);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80061164);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800617A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80061B00);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80061E58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80062D58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800634C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006381C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80063F64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800646AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80064874);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80064C18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80064EB0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800653D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800656B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006599C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80065DBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800660C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066454);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066614);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066898);

void func_80066974(void) {
    func_800685E8();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066994);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066CB0);

s32 func_80066F68(u8 *arg0) {
    s32 sum;
    u32 i;

    sum = 0;
    for (i = 0; i < 0xBE4; i++) {
        sum += *arg0++;
    }
    return sum;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80066F90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80067CF0);

void func_80068458(void) {
    func_80016F7C();
    func_80016ED8();
}

void func_80068480(void) {
    func_80016FB4();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800684A0);

s32 func_800685A8(u8 arg0) {
    s32 flag;

    flag = (arg0 != 0) * 0x10;
    func_80068930();
    func_80016EE8(flag);
    return func_80068828();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800685E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068790);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068828);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800688AC);

void func_80068930(void) {
    func_80029AF0(D_8017E5B4);
    func_80029AF0(D_8017E5B8);
    func_80029AF0(D_8017E5BC);
    func_80029AF0(D_8017E5C0);
}

void func_80068988(void) {
    func_80029AF0(D_8017E5C4);
    func_80029AF0(D_8017E5C8);
    func_80029AF0(D_8017E5CC);
    func_80029AF0(D_8017E5D0);
}

void func_800689E0(void) {
    func_8002C17C(D_800B7FC4, 0, 0, 0);
    func_8006C1B4(&D_801BC4F8);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068A20);

void func_80068BC0(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_800517C8() == 0) {
        arg0->unk74 = func_80068C08;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068C08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068E14);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068FBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80069490);

void func_80069528(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_80068C08;
    }
}

void func_8006957C(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_800695E8;
        func_800700D8();
        func_800701D4(0xC, &arg0->unk91, 0, 0);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800695E8);

void func_80069C80(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_80068FBC;
    }
}

void func_80069CD4(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_80069D40;
        func_80070154();
        func_800701D4(0xC, &arg0->unk91, 8, 8);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80069D40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006A14C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006A2C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006A3EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006AAC4);

void func_8006AB34(Obj8006AB34 *arg0) {
    func_8006BA08();
    arg0->unkC8 += 0x10;
    if ((s16)arg0->unkC8 >= arg0->unkC5 * 0x44) {
        arg0->unkC8 = arg0->unkC5 * 0x44;
        arg0->unk74 = func_8006A3EC;
    }
    func_8006A2C4(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006ABA4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006ADE0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006AE34);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006AE88);

void func_8006AF58(Obj80051C20 *arg0) {
    arg0->unk48 = *arg0->unk7C * 0x44 + 6;
    arg0->unk4C = *arg0->unk80 * 0x44 + 4;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006AFA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006B080);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006B194);

void func_8006B1E8(Obj8006B1E8 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk7C->unk74 = arg0->unk80;
        func_80051078(arg0->unk88);
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006B250);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006BA08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006BF84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C1B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C324);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C408);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C4C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C554);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006C934);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006CC78);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006D1D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006D6E8);

void func_8006DCEC(Obj8006DCEC *arg0) {
    Sub8006DCEC *sub = arg0->unk98;

    if ((D_801A2568 & 0x40) && (u32)(sub->unk7E - 0xAC) < 0x80U && (u32)(sub->unk80 - 0x24) < 0x80U) {
        func_8006C324();
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006DD54);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006DF7C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006E0A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006E148);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006E490);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006E924);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006EC38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006EF54);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F220);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F2CC);

void func_8006F55C(void) {
    func_8002C374(D_800B8134, 0x39A, 0x40);
    func_8002BFE8(0);
}

void func_8006F590(Obj8006B1E8 *arg0) {
    func_8002C374(D_800B813C, 0x39A, 0);
    func_8002C310(D_800B813C, arg0->unk88);
    func_8002BFE8(0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F5E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F670);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F708);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F79C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F8C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F964);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F9EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FA74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FB20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FC04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FC84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FD24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FDA0);

void func_8006FE38(Obj8006FE38 *arg0) {
    arg0->unk48 = arg0->unk7C->unk86 * 8 + 0xA8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FE58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FF90);

void func_8007002C(Obj8006FE38 *arg0) {
    arg0->unkC = &D_800B7E5C[arg0->unk7C->unk8C];
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007005C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800700D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070154);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800701D4);

void func_800702A8(Obj800702A8 *arg0) {
    arg0->unk4C = arg0->unk80 + *arg0->unk7C * 0x10;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800702C8);

void func_800703A4(Obj800702A8 *arg0) {
    arg0->unk4C = arg0->unk80 + *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800703D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007046C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007053C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070834);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070890);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007092C);

void func_800709D4(Obj800709D4 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008651C();
        arg0->unk7C = func_80072788(arg0->unk88);
        arg0->unk84 = func_80072838();
        arg0->unk74 = func_80070A44;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070A44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80071328);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007145C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800714FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80071A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072134);

void func_80072298(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800709D4;
    func_8007092C();
    arg0->unk88 = 4;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800722D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072398);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072448);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007250C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072640);

void func_800726D8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8007C68C();
        arg0->unk74 = func_800507FC;
    }
}

void func_80072730(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
        D_801A2574 = 0;
        func_8004EFE8();
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072788);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007281C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800728A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800728D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800728F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072958);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072C80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800736F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073718);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073740);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073904);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073B7C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073D20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073DDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800740AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007437C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007440C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800744A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80074A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80074D40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80074E44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80074F5C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007509C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80075520);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80075898);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800788C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80078A38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80078AAC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80078D84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AA04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AAF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AC74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AD64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007B850);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BA10);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BB48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BBC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BC58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BCE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BE0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C15C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C22C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C240);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C2F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C68C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C6FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C7D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CBC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CC58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CCE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CD7C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CDD8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CE70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CECC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CF64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CFC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D07C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D254);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D640);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D690);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D6E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D738);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D840);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D934);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007DE1C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007DEB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007DF2C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007DFF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007E450);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F2A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F30C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F598);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F6C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F758);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F7B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F9C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FB44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FD48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FED0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FF64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FFEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080080);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800800A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080224);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800804DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800804F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080618);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800807CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080B80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080BE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080C58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080CA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080D60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080DF8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080EB0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080F40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081010);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800810C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800810F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081260);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081290);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008131C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800813A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081B50);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081BEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081C5C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008240C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800824D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082594);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082688);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082714);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800827B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082820);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800828BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800829F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082E90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083790);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008382C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083894);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083958);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083984);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083A28);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083A58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083C00);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083C58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083D48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083DF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083E98);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083F40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083FA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084038);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008405C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800841E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008423C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084290);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800842D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084314);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084364);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800843A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084474);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800845F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084670);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084758);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800847B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084884);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084A8C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084AE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800851FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085258);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008530C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085320);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800854A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008556C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800855CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085640);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008630C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800863F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008648C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008651C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086654);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800866A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800866FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086750);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800867C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086E04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086E34);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086E80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086EC8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086FD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086FFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008729C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80087950);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80087AEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80087C94);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80087EB8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80087F58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088040);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088334);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800885DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088664);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088730);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008878C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800887B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088940);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088AC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088DE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800891BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80089250);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800892AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008935C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800895D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800897D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A2F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A338);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A388);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A418);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A4BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008AEC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008AF0C);

void func_8008AF94(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008AF9C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008AFA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B048);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B094);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B568);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B574);

void func_8008B5FC(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B604);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B610);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B698);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B76C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B778);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B7C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B85C);

void func_8008B8C8(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B8D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B918);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B968);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B9FC);

void func_8008BA68(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BA70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BAB8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BB08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BB9C);

void func_8008BC08(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BC10);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BC58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BD48);

void func_8008BD94(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BD9C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BDA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BE98);

void func_8008BEE4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BEEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BEF8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BF90);

void func_8008BFA0(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BFA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BFB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C064);

void func_8008C074(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C07C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C088);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C120);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C1F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C348);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C394);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C3DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C3EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008CCA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008CD38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008CFD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D060);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D2E0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D560);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D8AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DCB0);

void func_8008DD48(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DD50);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DDA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DE30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DF6C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E260);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E6C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E70C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E7E0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E880);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008EC30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008EE88);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008EED4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F08C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F274);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F2D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F344);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F3B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F914);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F978);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008FA00);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008FA94);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800902A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800902EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009033C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800903A8);

void func_800903F8(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090400);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090448);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090668);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800908F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090B90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090BFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090C38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090C58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090C9C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090CEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090D60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090E88);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093A20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093AE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093B4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093B58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093BA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093C3C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093E3C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093EA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093EE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093F38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093FC8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009406C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800940A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80094DC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80094E08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80094E58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80094EC0);

void func_80095044(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009504C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095094);

void func_8009511C(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095124);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095130);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800951B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800953A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800953AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009544C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095778);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095784);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095824);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095F4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095F58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095FE0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800960B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800960C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096178);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096230);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800962E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800963A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096424);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009646C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096550);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096684);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800968C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800968EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096944);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096E60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096FFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800971AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009720C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800972A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009760C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800978A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097930);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009795C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097A08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097B4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097C40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097CD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097D24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097EE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097F30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097FDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800980E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800981BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098268);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098550);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098968);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800989FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098A58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800996E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009972C);

void func_800997B4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800997BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800997C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099868);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800998B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099E30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099E3C);

void func_80099EC4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099ECC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099ED8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099F28);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099FBC);

void func_8009A028(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A030);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A078);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A0C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A15C);

void func_8009A1C8(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A1D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A218);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A268);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A2FC);

void func_8009A368(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A370);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A3B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A4A8);

void func_8009A4F4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A4FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A508);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A5F8);

void func_8009A644(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A64C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A658);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A6F0);

void func_8009A700(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A708);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A714);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A7C4);

void func_8009A7D4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A7DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A7E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A83C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009B3D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009B414);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C5C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C6DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C928);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C964);

void func_800A2D04(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2D0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2DBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2EA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2EB0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2F14);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2FD0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2FE0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A304C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3088);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A310C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3334);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3554);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3564);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3814);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A38A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A38CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A39D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3D30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3D90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3E5C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3EBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3F90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3FFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A407C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A40FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4198);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4274);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4340);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4408);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A448C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A46AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A499C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4A04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4A74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4BE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4C70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4DA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4E38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4EAC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4EF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4F1C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4F44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4FFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A503C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A50C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5118);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5170);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A51B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5318);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5368);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5414);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A546C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A56A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A576C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A57F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5EA4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5F90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6034);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6084);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6174);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A621C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A62C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A636C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A63D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6494);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6520);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6580);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6664);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6948);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A69AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6A04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6A64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6AC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6B24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6B88);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6C68);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6D24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6DA4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6DFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6E54);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6EA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7028);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A70EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7160);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7244);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A730C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A737C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A74A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A74B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7550);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A75A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A771C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A779C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7808);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7818);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7880);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A78A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7908);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7928);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7990);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A79B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7A44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7A68);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8560);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A85F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8618);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A869C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A86D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A88F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8974);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A89C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8FFC);

void func_800A9068(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9070);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A90D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9118);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A94F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A953C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9614);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A96E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9740);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9A38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9AFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AA520);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AA61C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AA710);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AAB98);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AAC20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AAF20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AB584);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AB8D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AB938);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AB99C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ABB10);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC0B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC4A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC58C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC66C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC728);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC7E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC874);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC8F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AC9E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACA8C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACB34);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACBDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACC44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACCC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACDBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD0D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD138);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD198);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD2D8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD350);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD3B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD40C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD4F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD730);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD780);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD7FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD868);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD96C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADB40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADC20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADC4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADD70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADE38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE128);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE184);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE30C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE370);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE418);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE644);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE75C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE7A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE99C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEA40);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEA64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEB0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEB30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEBF4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEC84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEEDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEF2C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF374);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF410);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF470);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF4AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF548);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF5CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF658);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF740);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFA00);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFA50);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFAD8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFBFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFEB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFFD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0048);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B02D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B03A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0400);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B04A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B04BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0598);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0CF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B146C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1924);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1980);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1A44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1A80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1B08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1C18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1ED0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1F20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1F74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2018);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B203C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B20A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2398);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2584);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B26C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B27A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B29AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2AC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2EC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2F18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2F74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3010);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3168);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B32D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3414);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3748);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3E7C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3E98);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3FFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4054);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4370);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4398);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B498C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4BD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4E84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4EBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4F48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4FE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4FF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B506C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B508C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B50C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5104);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5128);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B514C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5248);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B52DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B536C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5404);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B549C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B54B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B55E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5618);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B597C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B59F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5D74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5E24);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5EEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B61D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6214);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B62DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B63DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B64E0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B65BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6698);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6770);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6850);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B68C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6BD8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6CC8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6D4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B6D84);
