#include "common.h"
#include "fdat201.h"

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8004DCC0);

void func_8004DEB0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8004F924) == &D_801BC4F8) {
        arg0->unk7C->unk74 = func_8004F294;
        arg0->unk74 = func_8004DF10;
    }
}

void func_8004DF10(Obj8004DF10 *arg0) {
    Obj8004DEB0 *obj;

    SsUtKeyOn(D_801A2318, 0, 8, 0x3C, 0, 0x7F, 0x7F);
    arg0->unk80 = func_8004F2CC(2, 1, arg0->unkAE);
    arg0->unk84 = func_8004F2CC(2, 2, arg0->unkAE);
    arg0->unk88 = func_8004F2CC(2, 3, arg0->unkAE);
    arg0->unk8C = func_8004F2CC(2, 4, arg0->unkAE);
    arg0->unk90 = func_8004F2CC(2, 5, arg0->unkAE);
    arg0->unk94 = func_8004F2CC(2, 6, arg0->unkAE);
    func_8005CC48();
    obj = func_8005CAE0(D_800B91D0, 0xD2, 0x84, 2);
    arg0->unkA0 = obj;
    obj->unk16 = 0xB;
    arg0->unkA0->unk2 = 0;
    obj = func_8005CAE0(D_800B91C4, 0x5F, 0x84, 2);
    arg0->unkA4 = obj;
    obj->unk16 = 0xB;
    arg0->unkA4->unk2 = 0;
    arg0->unk74 = func_8004E044;
}

void func_8004E044(Obj8004E044 *arg0) {
    if (arg0->unk80->unk7E != 0) {
        func_8004FB28(func_80050078(func_8004DCC0)->unkAE);
        arg0->unk98 = &D_801BC4F8;
        arg0->unk74 = func_8004E0B4;
    }
}

void func_8004E0B4(Obj8004E044 *arg0) {
    if (func_80096550() && D_80039CB0 == 0) {
        func_8005E23C(arg0, func_8004E2BC, D_8004ADC4, 6);
        D_80039CB0 = 1;
        arg0->unk74 = func_800507FC;
        return;
    }
    arg0->unk74 = func_8004E2BC;
}

void func_8004E13C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_8004E2BC;
    }
}

void func_8004E18C(Obj8004F9D8 *arg0) {
    if (++arg0->unk7C >= 0x3D || (D_801A2568 & 0x60)) {
        func_800506EC(6);
        func_8005015C(5)->unk1 = 1;
        func_8005C2D0(0x1C, 0x68, 0x108, 0x20, 5);
        arg0->unk74 = func_8004E13C;
    }
}

void func_8004E22C(Obj8004F9D8 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B6EA0, 0x10, 8, 6);
        SsUtKeyOn(D_801A2318, 0, 7, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk7C = 0;
        arg0->unk74 = func_8004E18C;
    }
}

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

void func_8004F098(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4, u16 arg5, s16 arg6) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(arg6);
    obj->unk70 = func_8004F098;
    obj->unk74 = func_8004F1C8;
    obj->unk78 = func_800507F4;
    obj->unk16 = 5;
    obj->unk4 = 1;
    obj->unkA = 0;
    obj->unkC = 0;
    obj->unkE = 0;
    obj->unk58 = 0x1000;
    obj->unk5C = 0x1000;
    obj->unk60 = 0x1000;
    obj->unk40 = arg3;
    obj->unk42 = arg4;
    obj->unk44 = arg5;
    obj->unk48 = arg0;
    obj->unk4C = arg1;
    obj->unk50 = arg2;
    D_800B8E64[0] = 0;
    D_800B8E66 = 0;
    D_800B8E68 = 0;
    D_800B8E6A = 0;
    D_800B8E6C = 0;
    D_800B8E6E = 0;
    D_800B8E70 = 0;
    D_800B8E72 = 0;
    D_800B8E74 = 0;
}

void func_8004F1C8(Obj8004DEB0 *arg0) {
    if (D_800B8E64[0] != D_800B8E64[-16]) {
        D_800B8E64[0] += 8;
        D_800B8E6A += 8;
        D_800B8E70 += 8;
    }
    if (D_800B8E64[1] != D_800B8E64[-15]) {
        D_800B8E64[1] += 8;
        D_800B8E6C += 8;
        D_800B8E72 += 8;
    }
    if (D_800B8E64[0] == D_800B8E64[-16] && D_800B8E64[1] != D_800B8E64[-15]) {
        arg0->unk74 = func_800507FC;
    }
}

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

void func_8004FA44(Obj8004F9D8 *arg0) {
    if (++arg0->unk7C > 0x400) {
        arg0->unk7C = 0x400;
    }
    if (func_800517C8() == 0) {
        func_80073740();
        func_80050AF4(0x10, 2);
        arg0->unk74 = func_8004FAC4;
    }
}

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

void func_8004FD3C(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_8004FD4C;
}

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

void func_80050560(void) {
    Obj8004DEB0 *obj;

    for (obj = D_801A25E8; obj < (Obj8004DEB0 *)&D_801BC448; obj++) {
        if (obj->unk0 != 0) {
            obj->unk78(obj);
            obj->unk0 = 0;
            obj->unk1 = 0;
            D_801A2654 = 0;
        }
    }
}

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
    DrawSync(0);
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
    D_801A2318 = SsVabOpenHead(func_80051248(6, 0), -1);
    SsVabTransBody(func_80051248(6, 1), D_801A2318);
    SsVabTransCompleted(1);
}

void func_80050C18(void) {
    s32 vol;

    SsSetMVol(0, 0);
    D_801BC470 = 0;
    D_801BC45C = 0;
    D_801BC458 = 0;
    D_801BC464 = 0;
    D_801BC460 = 0;
    D_801BC46C = 0;
    D_801BC468 = 0;
    D_801BC456 = 0;
    D_801BC454 = 0;
    D_801BC471 = 0;
    D_801BC473 = 0;
    D_801BC472 = 0;
    D_801BC474 = 0;
    vol = D_80048661 * 2;
    SsSetMVol(vol, vol);
    SsUtSetReverbType(4);
    SsUtSetReverbDepth(0x28, 0x28);
    SsSetRVol(0x28, 0x28);
    func_800228E4();
}

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
    EnterCriticalSection();
    free2(arg0);
    ExitCriticalSection();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800510B0);

void func_800510FC(void) {
    EnterCriticalSection();
    InitHeap2(D_800CF37C, 0xAF000);
    ExitCriticalSection();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051138);

void func_800511A4(u8 *arg0, u32 *arg1, s32 arg2) {
    s32 result;
    s32 retry;

    func_80015A48();
    retry = 0;
    do {
        while (CdControl(2, arg0, 0) == 0) {
        }
        while (CdRead(arg2, arg1, 0x80) == 0) {
        }
        while ((result = CdReadSync(1, NULL)) > 0) {
        }
        retry++;
    } while (result != 0 && retry < 3);
}

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

void func_800515F8(void) {
    D_801BC473 = 0;
}

void func_80051608(void) {
    D_801BC472 = 0;
}

void func_80051618(void) {
    D_801BC471 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051628);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800517C8);

void func_80051830(u32 *arg0) {
    func_80050944(arg0);
    DrawSync(0);
    free2(arg0);
}

void func_80051868(void) {
    EnterCriticalSection();
    func_800309A8(1, 3, 0x1FA400);
    ExitCriticalSection();
}

void func_800518A4(u32 *arg0) {
    free2(arg0);
}

void func_800518C4(void) {
}

void func_800518CC(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800518D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800519A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051A74);

void func_80051B8C(s8 *arg0) {
    Obj80051C20 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_80051B8C;
    obj->unk74 = func_80051C20;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B6F1C;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 0;
    obj->unk4C = 0;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_80051C20(Obj80051C20 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80051C44);

void func_80051D14(Obj80051C20 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

void func_80051D38(s8 *arg0) {
    Obj80051C20 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_80051D38;
    obj->unk74 = func_80051DCC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B6F04;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 0;
    obj->unk4C = 0;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_80051DCC(Obj80051C20 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

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

void func_80052334(Obj80052334 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_80051D38(&arg0->unkA1);
        if (arg0->unk80 == 0) {
            func_8005D754(3, D_800B6EF8, 0, 0, 4);
            func_8005D754(3, D_800B6EF8, 0, 0x18, 4);
            func_8005D754(3, D_800B6EF8, 0, 0x30, 4);
            func_8005D754(3, D_800B6EF8, 0, 0x48, 4);
            func_8005D754(3, D_800B6EF8, 0, 0x60, 4);
            func_8005D80C(2, D_8004AF88, 0x10, 8, 4, 4);
            func_8005D80C(2, D_8004AF94, 0x10, 8, 0x1C, 4);
            func_8005D80C(2, D_8004AFA0, 0x10, 8, 0x34, 4);
            func_8005D80C(2, D_8004AFAC, 0x10, 8, 0x4C, 4);
            func_8005D80C(2, D_8004AFB8, 0x10, 8, 0x64, 4);
        }
        func_8005BA2C(0xA0, 0x20, 0x90, 0xA0, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8005252C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005252C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80052BD0);

void func_80052F68(Obj80052334 *arg0) {
    func_800506EC(4);
    func_800506EC(6);
    func_8005015C(3)->unk1 = 1;
    func_8005015C(5)->unk1 = 1;
    arg0->unkA0 = 0;
    func_8005C2D0(0x10, 0x28, 0x80, 0x78, 3);
    func_8005C2D0(0xA0, 0x20, 0x90, 0xA0, 5);
    arg0->unk74 = func_80053008;
}

void func_80053008(Obj80052334 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x60, 0x60, 0x80, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800530A0;
    }
}

void func_800530A0(Obj80052334 *arg0) {
    Obj8004DEB0 *obj;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        obj = func_8005D80C(2, D_8004B02C, 0x10, 0x24, 4, 4);
        arg0->unk88 = obj;
        obj->unk16 = 0x10;
        obj = func_8005D80C(2, D_8004B034, 0x10, 0x24, 0x1C, 4);
        arg0->unk8C = obj;
        obj->unk16 = 0x10;
        func_8005D754(3, D_800B6F10, 0, 0, 4);
        func_8005D754(3, D_800B6F10, 0, 0x18, 4);
        func_80051B8C(&arg0->unkA0);
        arg0->unk98 = 2;
        arg0->unk9C = 2;
        arg0->unk74 = func_800531A8;
    }
}

void func_800531A8(Obj80052334 *arg0) {
    arg0->unk74 = func_800531B8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800531B8);

void func_800537E0(Obj80052334 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x80, 0x78, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80052334;
    }
}

void func_80053878(Obj8005552C *arg0) {
    void (**callback)();

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x5C, 0x60, 0x88, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        callback = &arg0->unk7C->unk74;
        *callback = func_800A38CC;
        D_801A2574 = 0;
        arg0->unk1 = 1;
    }
}

void func_80053924(Obj8004DEB0 *arg0) {
    func_800506EC(4);
    func_8005015C(3)->unk1 = 1;
    func_8005C2D0(0x60, 0x60, 0x80, 0x30, 3);
    arg0->unk74 = func_80053988;
}

void func_80053988(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        if (func_800684A0(arg0->unkA4) != 0) {
            arg0->unk74 = func_80054258;
            return;
        }
        func_8005BA2C(0xC, 0x68, 0x128, 0x20, 9, 1, 0);
        arg0->unk74 = func_80053A20;
    }
}

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

void func_80053C98(Obj80053C98 *arg0) {
    u8 n;

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x60, 0x18, 3, 1, 0);
        func_8005BA2C(0x10, 0x40, 0x120, 0x18, 5, 1, 0);
        n = D_801A257C;
        if (arg0->unkA7 != 0) {
            n++;
        }
        if (n >= 6) {
            n = 5;
        }
        func_8005BA2C(0x10, 0x58, 0x120, n * 0x18, 7, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80053DB4;
    }
}

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

void func_80054C34(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0xC, 0x60, 0x128, 0x30, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80054CD0;
    }
}

void func_80054CD0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B1BC, 8, 8, 0xA);
        arg0->unk74 = func_80054D34;
    }
}

void func_80054D34(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_80054D44;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054D44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80054F1C);

void func_800550A0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0xC, 0x60, 0x128, 0x30, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8005513C;
    }
}

void func_8005513C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B22C, 8, 8, 0xA);
        arg0->unk74 = func_800551A0;
    }
}

void func_800551A0(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800551B0;
}

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

void func_80055940(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_80055950;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055950);

void func_80055B3C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_800531B8, D_8004B2D0, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_80055BA4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80051DF0(arg0, func_800531B8, D_8004B2E8, 0xC, 0x14, 0x68, 0x118, 0x20);
        arg0->unk74 = func_800507FC;
    }
}

void func_80055C2C(Obj8004DEB0 *arg0) {
    void (*cb)();
    void (**slot)();

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        if (arg0->unkAB != 0) {
            func_80050078(func_8005CC48)->unk1 = 1;
        }
        cb = arg0->unk80;
        if (cb == 0) {
            D_801A2574 = 0;
            func_8004EFE8();
        } else {
            slot = &arg0->unk7C->unk74;
            *slot = cb;
            D_801A2574 = 2;
        }
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80055CE0);

void func_80055F08(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_80054258, D_8004B310, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_80055F70(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x78, 0x18, 3, 1, 0);
        func_8005BA2C(0x10, 0x40, 0x120, 0x94, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80056034;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056034);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005616C);

void func_800566AC(Obj8004DEB0 *arg0) {
    SsUtKeyOn(D_801A2318, 0, 0, 0x3C, 0, 0x7F, 0x7F);
    func_800506EC(4);
    func_800506EC(6);
    func_8005015C(3)->unk1 = 1;
    func_8005015C(5)->unk1 = 1;
    func_8005C2D0(0x10, 0x28, 0x78, 0x18, 3);
    func_8005C2D0(0x10, 0x40, 0x120, 0x94, 5);
    arg0->unk74 = func_800549D0;
}

void func_80056770(Obj8004DEB0 *arg0) {
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    arg0->unk74 = func_8005616C;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800567B8);

void func_800568D8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0xC, 0x60, 0x128, 0x30, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80056974;
    }
}

void func_80056974(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B1BC, 8, 8, 0xA);
        arg0->unk74 = func_800569D8;
    }
}

void func_800569D8(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800569E8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800569E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056B60);

void func_80056C48(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0xC, 0x60, 0x128, 0x30, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80056CE4;
    }
}

void func_80056CE4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004B22C, 8, 8, 0xA);
        arg0->unk74 = func_80056D48;
    }
}

void func_80056D48(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_80056D58;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80056D58);

void func_80056EF4(u8 *arg0, u8 *arg1) {
    Obj80056EF4 *obj;
    s32 y;

    obj = func_800501BC(6);
    obj->unk70 = func_80056EF4;
    obj->unk74 = func_80056FC4;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xB;
    obj->unk14 = 1;
    obj->unkC = D_800B6FB8;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = *arg0 * 0x44 + 6;
    y = *arg1 * 0x44;
    obj->unk50 = 0;
    obj->unk7C = arg0;
    obj->unk80 = arg1;
    obj->unk4C = y + 6;
}

void func_80056FC4(Obj80056FC4 *arg0) {
    arg0->unk48 = *arg0->unk7C * 0x44 + 6;
    arg0->unk4C = *arg0->unk80 * 0x44 + 6;
}

void func_8005700C(Obj8004DEB0 *arg0) {
    func_800506EC(4);
    func_8005015C(3)->unk1 = 1;
    func_800506EC(6);
    func_8005015C(5)->unk1 = 1;
    func_8005C2D0(0x10, 0x28, 0x80, 0x78, 3);
    func_8005C2D0(0xA0, 0x20, 0x90, 0xA0, 5);
    arg0->unk74 = func_800570A8;
}

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
    exit(1);
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

void func_8005A1C4(void) {
    exit(1);
}

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

Obj80056EF4 *func_8005CAE0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Obj80056EF4 *obj;

    obj = func_800501BC((s16)arg3);
    obj->unk70 = func_8005CAE0;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = arg0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = (s16)arg1;
    obj->unk4C = (s16)arg2;
    obj->unk50 = 0;
    return obj;
}

void func_8005CB94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Obj80056EF4 *obj;

    obj = func_800501BC((s16)arg3);
    obj->unk70 = func_8005CB94;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 6;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = arg0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = (s16)arg1;
    obj->unk4C = (s16)arg2;
    obj->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CC48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005CDEC);

void func_8005D15C(u8 *arg0, s32 arg1, s32 arg2) {
    while (*arg0 != 0) {
        D_800B7400.unk0 = ((*arg0 - 0x20) & 0x1F) * 2 + 0x1C0;
        D_800B7400.unk2 = ((*arg0 - 0x20) / 32) * 0x10;
        MoveImage((u8 *)&D_800B7400, (s16)arg1, (s16)arg2);
        arg0++;
        arg1 += 2;
    }
    DrawSync(0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D21C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D2DC);

Obj8004DEB0 *func_8005D39C(s32 arg0) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_8005D39C;
    obj->unk74 = func_8005D430;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
    func_800514AC(arg0 & 0xFFFF);
    D_801BC473 = 1;
    D_801BC472 = 1;
    D_801BC471 = 1;
    D_801BC474 = 1;
    return obj;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D430);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D500);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005D544);

void func_8005D71C(void) {
    ClearImage(D_800B7418, 0, 0, 0);
    DrawSync(0);
}

void func_8005D754(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    Obj80056EF4 *obj;

    obj = func_800501BC((s16)arg4);
    obj->unk70 = func_8005D754;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = arg0;
    obj->unkC = arg1;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = (s16)arg2;
    obj->unk4C = (s16)arg3;
    obj->unk50 = 0;
}

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

void func_8005DD38(s16 arg0, s16 arg1, s16 arg2) {
    s16 x;
    s16 i;

    MoveImage(D_800B7420, arg0, arg1);
    x = arg0 + 2;
    for (i = 0; i < arg2; i++) {
        MoveImage(D_800B7428, x, arg1);
        x += 2;
    }
    MoveImage(D_800B7430, x, arg1);
}

void func_8005DE08(s16 arg0, s16 arg1, s16 arg2) {
    s16 x;
    s16 i;

    MoveImage(D_800B7438, arg0, arg1);
    x = arg0 + 2;
    for (i = 0; i < arg2; i++) {
        MoveImage(D_800B7440, x, arg1);
        x += 2;
    }
    MoveImage(D_800B7448, x, arg1);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DED8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005DFB4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E040);

void func_8005E1E8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
        arg0->unk7C->unk74 = arg0->unk80;
    }
}

Obj8005E23C *func_8005E23C(Obj8004DEB0 *arg0, void (*arg1)(), u8 *arg2, s16 arg3) {
    Obj8005E23C *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_8005E23C;
    obj->unk74 = func_8005E318;
    obj->unk78 = func_800507F4;
    obj->unk8C = arg3;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
    obj->unk7C = arg0;
    obj->unk80 = arg1;
    obj->unk88 = arg2;
    obj->unk84 = 0;
    func_8005BA2C(0x14, 0x68, 0x118, 0x20, (s16)(arg3 - 1), 1, 0);
    return obj;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E318);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E3A4);

void func_8005E4D4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
        arg0->unk7C->unk74 = arg0->unk80;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E528);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E684);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005E710);

void func_8005E8D8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
        arg0->unk7C->unk74 = arg0->unk80;
    }
}

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

void func_8005EAF8(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(2);
    obj->unk70 = func_8005EAF8;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B70B8;
    obj->unk48 = 0x20;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x78;
    obj->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005EB80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005EE90);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8005F054);

void func_8005F1DC(u8 arg0) {
    u8 cur;
    u8 sel;
    s32 ret;

    cur = D_80031A59;
    if (cur == 0xFF) {
        ret = func_8007AA04(1);
        sel = ret;
        if (sel != cur) {
            func_80050AF4(0xE, (ret & 0xFF) + 0x40);
            func_80051450(0xB, sel);
        }
    }
    if (arg0) {
        func_80074A18();
    }
}

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
    StartCARD();
    _bu_init();
}

void func_80068480(void) {
    StopCARD();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800684A0);

s32 func_800685A8(u8 arg0) {
    s32 flag;

    flag = (arg0 != 0) * 0x10;
    func_80068930();
    func_80016EE8(flag);
    return func_80068828();
}

void func_800685E8(void) {
    EnterCriticalSection();
    D_8017E5B4 = OpenEvent(0xF4000001, 4, 0x2000, 0);
    D_8017E5B8 = OpenEvent(0xF4000001, 0x8000, 0x2000, 0);
    D_8017E5BC = OpenEvent(0xF4000001, 0x100, 0x2000, 0);
    D_8017E5C0 = OpenEvent(0xF4000001, 0x2000, 0x2000, 0);
    D_8017E5C4 = OpenEvent(0xF0000011, 4, 0x2000, 0);
    D_8017E5C8 = OpenEvent(0xF0000011, 0x8000, 0x2000, 0);
    D_8017E5CC = OpenEvent(0xF0000011, 0x100, 0x2000, 0);
    D_8017E5D0 = OpenEvent(0xF0000011, 0x2000, 0x2000, 0);
    EnableEvent(D_8017E5B4);
    EnableEvent(D_8017E5B8);
    EnableEvent(D_8017E5BC);
    EnableEvent(D_8017E5C0);
    EnableEvent(D_8017E5C4);
    EnableEvent(D_8017E5C8);
    EnableEvent(D_8017E5CC);
    EnableEvent(D_8017E5D0);
    ExitCriticalSection();
}

void func_80068790(void) {
    func_80029AD0(D_8017E5B4);
    func_80029AD0(D_8017E5B8);
    func_80029AD0(D_8017E5BC);
    func_80029AD0(D_8017E5C0);
    func_80029AD0(D_8017E5C4);
    func_80029AD0(D_8017E5C8);
    func_80029AD0(D_8017E5CC);
    func_80029AD0(D_8017E5D0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068828);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800688AC);

void func_80068930(void) {
    TestEvent(D_8017E5B4);
    TestEvent(D_8017E5B8);
    TestEvent(D_8017E5BC);
    TestEvent(D_8017E5C0);
}

void func_80068988(void) {
    TestEvent(D_8017E5C4);
    TestEvent(D_8017E5C8);
    TestEvent(D_8017E5CC);
    TestEvent(D_8017E5D0);
}

void func_800689E0(void) {
    ClearImage(D_800B7FC4, 0, 0, 0);
    func_8006C1B4(&D_801BC4F8);
}

Obj80068A20 *func_80068A20(s32 arg0, s32 arg1) {
    Obj80068A20 *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_80068A20;
    obj->unk74 = func_80068BC0;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
    obj->unk7C.unk8 = 2;
    obj->unk7C.unkA = 1;
    obj->unk7C.unk10 = 0;
    obj->unk7C.unk12 = 0;
    obj->unk92 = 0;
    obj->unk94 = 0;
    obj->unkCA = 0;
    obj->unk7C.unkC = func_80050FC4(0x800);
    obj->unkA0 = 0;
    obj->unkA4 = 0;
    obj->unk98 = func_8006FA74(obj);
    obj->unk9C = func_8006FC84(obj);
    func_8006F964();
    func_8006F9EC();
    func_8006FC04();
    func_8006FDA0(obj);
    func_800703D0(obj);
    func_8006FF90(obj);
    obj->unk7C.unk0 = arg0;
    obj->unk7C.unk4 = arg1;
    D_801A2574 = 2;
    D_800B7E4A = 0;
    D_800B7E49 = 0;
    D_800B7E48 = 0;
    obj->unk7C.unk13 = 1;
    func_8005DD38(0x380, 0x80, 0xB);
    func_8005DE08(0x380, 0x98, 0xB);
    MoveImage(D_800B7FCC, 0x39A, 0);
    MoveImage(D_800B7FCC, 0x39A, 0x40);
    MoveImage(D_800B7FD4, 0x3B0, 0);
    DrawSync(0);
    func_8006BF84(obj->unk7C.unkC);
    return obj;
}

void func_80068BC0(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_800517C8() == 0) {
        arg0->unk74 = func_80068C08;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068C08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068E14);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80068FBC);

void func_80069490(Obj8004DEB0 *arg0) {
    func_8006BA08();
    func_800506EC(6);
    func_8005015C(5)->unk1 = 1;
    func_800506EC(8);
    func_8005015C(7)->unk1 = 1;
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    func_8005C2D0(0x50, 0x32, 0x68, 0x90, 9);
    arg0->unk74 = func_80069528;
}

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

void func_8006ADE0(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_80068C08;
    }
}

void func_8006AE34(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_80068FBC;
    }
}

void func_8006AE88(s8 *arg0, s8 *arg1) {
    Obj80051C20 *obj;
    s32 y;

    obj = func_800501BC(0xE);
    obj->unk70 = func_8006AE88;
    obj->unk74 = func_8006AF58;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xB;
    obj->unk14 = 1;
    obj->unkC = D_800B7FA0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = *arg0 * 0x44 + 6;
    y = *arg1 * 0x44 + 4;
    obj->unk50 = 0;
    obj->unk7C = arg0;
    obj->unk80 = arg1;
    obj->unk4C = y;
}

void func_8006AF58(Obj80051C20 *arg0) {
    arg0->unk48 = *arg0->unk7C * 0x44 + 6;
    arg0->unk4C = *arg0->unk80 * 0x44 + 4;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006AFA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006B080);

void func_8006B194(Obj8004DEB0 *arg0) {
    func_8006BA08();
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_80068FBC;
    }
}

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

void func_8006F220(Obj80068A20 *arg0) {
    s16 x;
    s16 y;
    s32 ret;
    u8 *buf;
    u8 *p;

    x = arg0->unk92;
    y = arg0->unk94;
    ret = func_8006C4C0(&arg0->unk7C, x, y);
    if ((ret & 0xFF) != arg0->unk7C.unkA) {
        buf = (u8 *)func_80050FC4(0x2000);
        p = buf + 2;
        buf[0] = x;
        buf[1] = y;
        while (p != buf) {
            p = func_8006F2CC(arg0, p, ret & 0xFF);
        }
        func_80051078((u32 *)buf);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F2CC);

void func_8006F55C(void) {
    MoveImage(D_800B8134, 0x39A, 0x40);
    DrawSync(0);
}

void func_8006F590(Obj8006B1E8 *arg0) {
    MoveImage(D_800B813C, 0x39A, 0);
    StoreImage(D_800B813C, arg0->unk88);
    DrawSync(0);
}

void func_8006F5E8(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006F5E8;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x12;
    obj->unk14 = 4;
    obj->unkC = D_800B8144;
    obj->unk48 = 0x20;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0xA8;
    obj->unk50 = 0;
}

void func_8006F670(struct Obj80068A20 *arg0) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006F670;
    obj->unk74 = func_8006F708;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk14 = 2;
    obj->unkC = D_800B8150;
    obj->unk48 = 0x60;
    obj->unk16 = 0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0xB7;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F708);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F79C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006F8C0);

void func_8006F964(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006F964;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 4;
    obj->unk14 = 0xA;
    obj->unkC = D_800B8168;
    obj->unk48 = 0xA0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x18;
    obj->unk50 = 0;
}

void func_8006F9EC(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006F9EC;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 4;
    obj->unk14 = 0xA;
    obj->unkC = D_800B8174;
    obj->unk48 = 0x20;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x28;
    obj->unk50 = 0;
}

Sub8006DCEC *func_8006FA74(struct Obj80068A20 *arg0) {
    Sub8006DCEC *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006FA74;
    obj->unk74 = func_8006FB20;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xA;
    obj->unk14 = 5;
    obj->unkC = D_800B7EBC;
    obj->unk48 = 0xEA;
    obj->unk4C = 0x62;
    obj->unk7E = 0xEC;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk50 = 0;
    obj->unk80 = 0x64;
    obj->unk84 = arg0;
    return obj;
}

void func_8006FB20(Sub8006DCEC *arg0) {
    u16 x;
    u8 scale;

    x = arg0->unk7E;
    if ((u32)(x - 0xAC) >= 0x80 || (u32)(arg0->unk80 - 0x24) >= 0x80) {
        arg0->unkC = D_800B7EB0;
        arg0->unk48 = (s16)arg0->unk7E;
        arg0->unk4C = (s16)arg0->unk80;
        return;
    }
    arg0->unk48 = (((s16)x - 0xAC) & -arg0->unk84->unk7C.unk8) + 0xAB;
    arg0->unk4C = (((s16)arg0->unk80 - 0x24) & -arg0->unk84->unk7C.unk8) + 0x23;
    scale = arg0->unk84->unk7C.unk8;
    if (scale == 2) {
        arg0->unkC = D_800B7EBC;
    } else if (scale == 4) {
        arg0->unkC = D_800B7EC8;
    } else {
        arg0->unkC = D_800B7ED4;
    }
}

void func_8006FC04(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006FC04;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 4;
    obj->unk16 = 4;
    obj->unk14 = 4;
    obj->unkC = D_800B8180;
    obj->unk48 = 0x28;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x30;
    obj->unk50 = 0;
}

Obj8006FC84 *func_8006FC84(struct Obj80068A20 *arg0) {
    Obj8006FC84 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006FC84;
    obj->unk74 = func_8006FD24;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk14 = 2;
    obj->unkC = D_800B818C;
    obj->unk48 = 0x28;
    obj->unk16 = 0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x30;
    obj->unk50 = 0;
    obj->unk80 = arg0;
    obj->unk7C = 0;
    obj->unk7E = 0;
    return obj;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FD24);

void func_8006FDA0(struct Obj80068A20 *arg0) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006FDA0;
    obj->unk74 = func_8006FE38;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk14 = 6;
    obj->unkC = D_800B81B0;
    obj->unk48 = 0xA8;
    obj->unk16 = 0;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0xBC;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_8006FE38(Obj8006FE38 *arg0) {
    arg0->unk48 = arg0->unk7C->unk86 * 8 + 0xA8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8006FE58);

void func_8006FF90(struct Obj80068A20 *arg0) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8006FF90;
    obj->unk74 = func_8007002C;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unkC = D_800B7E5C;
    obj->unk16 = 4;
    obj->unk14 = 2;
    obj->unk48 = 0x26;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x83;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_8007002C(Obj8006FE38 *arg0) {
    arg0->unkC = &D_800B7E5C[arg0->unk7C->unk8C];
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007005C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800700D8);

void func_80070154(void) {
    Obj8005EAF8 *obj;

    obj = func_800501BC(0xC);
    obj->unk70 = func_80070154;
    obj->unk74 = func_800507FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unkC = D_800B81EC;
    obj->unk16 = 4;
    obj->unk14 = 3;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 8;
    obj->unk4C = 8;
    obj->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800701D4);

void func_800702A8(Obj800702A8 *arg0) {
    arg0->unk4C = arg0->unk80 + *arg0->unk7C * 0x10;
}

void func_800702C8(s16 arg0, u8 *arg1, s16 arg2, s16 arg3) {
    Obj800702A8 *obj;
    u8 row;

    obj = func_800501BC(arg0);
    obj->unk70 = func_800702C8;
    obj->unk74 = func_800703A4;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unkC = D_800B7FB8;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = arg2;
    row = *arg1;
    obj->unk50 = 0;
    obj->unk7C = arg1;
    obj->unk80 = arg3;
    obj->unk4C = arg3 + row * 0x18;
}

void func_800703A4(Obj800702A8 *arg0) {
    arg0->unk4C = arg0->unk80 + *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800703D0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007046C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007053C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070834);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80070890);

void func_8007092C(void) {
    func_8005D71C();
    func_80070834();
    func_8005BA2C(0x20, 0x28, 0x80, 0xA8, 3, 0, 0);
    func_8005BA2C(0xB0, 0x18, 0x80, 0x90, 5, 1, 0);
    SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
    D_801A2574 = 2;
}

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

void func_8007145C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800866FC();
        func_80096230();
        D_80041B10 = -1;
        func_800866A8();
        D_800411F8 = 0x46;
        D_80039C5D = 0xFF;
        func_8009C964(0);
        D_80039CAA = 1;
        func_8005E92C();
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800714FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80071A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072134);

void func_80072298(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800709D4;
    func_8007092C();
    arg0->unk88 = 4;
}

void func_800722D4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x18, 0x28, 0x120, 0x88, 3, 1, 0);
        func_8005BA2C(0x18, 0xB2, 0x90, 0x30, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80072398;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072398);

void func_80072448(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x90, 0xB8, 3, 4, 0);
        func_8005BA2C(0xB0, 0xA2, 0x80, 0x3E, 7, 8, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007250C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007250C);

void func_80072640(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800726D8;
    }
}

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

s32 func_80072788(u8 arg0) {
    Obj8007281C *task;

    task = func_800501BC(4);
    task->unk70 = func_80072788;
    task->unk74 = func_8007281C;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B83AC;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = 0;
    task->unk50 = 0;
    task->unk7C = arg0;
    return (s32)task;
}

void func_8007281C(Obj8007281C *arg0) {
    arg0->unk4C = arg0->unk7C * 0x18;
}

Obj800709D4 *func_80072838(void) {
    Obj800709D4 *task;

    task = func_800501BC(0x15);
    task->unk70 = func_80072838;
    task->unk74 = func_800728A8;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    task->unk7C = func_800728D8(task);
    return task;
}

void func_800728A8(Obj8004DEB0 *arg0) {
    if (arg0->unk1 == 0) {
        func_800728F8();
    }
}

s32 func_800728D8(Obj800709D4 *arg0) {
    return func_80072958(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800728F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072958);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80072C80);

void func_800736F0(Obj8004DEB0 *arg0) {
    if (arg0->unk6C == 0) {
        arg0->unk42 += 0x20;
    }
}

void func_80073718(void) {
    func_80073904();
    func_80073740();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073740);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073904);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073B7C);

void func_80073D20(void) {
    if (D_80031A5E != 0xFF && D_80031A5E >= 0x1F) {
        func_80051450(0xC, D_80031A5E);
    }
    if (D_80031A5F != 0xFF && D_80031A5F >= 0x1F) {
        func_80051450(0xD, D_80031A5F);
    }
    if (D_80031A5C != 0xFF) {
        func_80051450(0xE, D_80031A5C);
    }
    if (D_80031A60 != 0xFF) {
        func_80051450(0x12, D_80031A60);
    }
    if (D_80031A61 != 0xFF) {
        func_80051450(0x10, D_80031A61);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80073DDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800740AC);

void func_8007437C(s32 arg0, s32 arg1) {
    Obj8007437C *task;

    task = func_800501BC(0);
    task->unk70 = func_8007437C;
    task->unk74 = func_8007440C;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    D_800B9088 = 0x80;
    D_800B908E = 0x80;
    D_800B9094 = 0x80;
    task->unk7C = arg0;
    task->unk80 = arg1;
}

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

void func_80078A38(Obj8004DEB0 *arg0) {
    func_80075898();
    if (func_800517C8() == 0 && (arg0->unk9C == &D_801BC4F8 || arg0->unk9C->unk0 != 1)) {
        arg0->unk74 = func_80078AAC;
        arg0->unkA6 = arg0->unkA8;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80078AAC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80078D84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AA04);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AAF0);

void func_8007AC74(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *task;

    if (func_800517C8() == 0 && func_80050078(func_8005C2D0) == &D_801BC4F8) {
        if (arg0->unk84 != 0) {
            task = func_80050078(func_8007437C);
            task->unk1 = 1;
            task->unk74 = func_800507FC;
        }
        arg0->unk84 = 1;
        arg0->unk85 = 0;
        func_8005BA2C(0x10, 0x28, 0x90, 0x80, 3, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007AD64;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007AD64);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007B850);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BA10);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BB48);

void func_8007BBC0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x80, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007BC58;
    }
}

void func_8007BC58(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *parent;
    Obj8007281C *task;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        parent = func_80050078(func_80070890);
        func_8008651C();
        task = (Obj8007281C *)func_80072788(arg0->unk88);
        parent->unk7C = (Obj8004DEB0 *)task;
        task->unk7C = arg0->unk97;
        parent->unk74 = func_80070A44;
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BCE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007BE0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C15C);

void func_8007C22C(Obj8004DEB0 *arg0) {
    arg0->unk42 -= 0x20;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C240);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C2F0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C68C);

void func_8007C6FC(Obj8004DEB0 *arg0) {
    func_8005DD38(0x3C0, 0x10, 0xF);
    func_8005DE08(0x3C0, 0x28, 0xF);
    func_8005D15C(D_8004C498, 0x3C2, 0x44);
    func_8005D15C(D_8004C4A8, 0x3C2, 0x5C);
    func_8005D754(3, D_800B8454, 0, 0, 4);
    func_8005D754(3, D_800B8454, 0, 0x18, 4);
    func_8005D754(2, D_800B8460, 0, 0, 4);
    func_8007FFEC(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007C7D8);

void func_8007CBC0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x80, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007CC58;
    }
}

void func_8007CC58(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *parent;
    Obj8007281C *task;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        parent = func_80050078(func_80070890);
        func_8008651C();
        task = (Obj8007281C *)func_80072788(arg0->unk88);
        parent->unk7C = (Obj8004DEB0 *)task;
        task->unk7C = 3;
        parent->unk74 = func_80070A44;
        arg0->unk1 = 1;
    }
}

void func_8007CCE4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007CD7C;
    }
}

void func_8007CD7C(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *task;

    task = func_80050078(func_8005BA2C);
    if (task == &D_801BC4F8) {
        func_800804F0(task, 0);
        arg0->unk74 = func_800507FC;
    }
}

void func_8007CDD8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x90, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007CE70;
    }
}

void func_8007CE70(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *task;

    task = func_80050078(func_8005BA2C);
    if (task == &D_801BC4F8) {
        func_8007D738(task, 0);
        arg0->unk74 = func_800507FC;
    }
}

void func_8007CECC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x80, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007CF64;
    }
}

void func_8007CF64(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *task;

    task = func_80050078(func_8005BA2C);
    if (task == &D_801BC4F8) {
        func_8007CFC0(task, 0);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007CFC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D07C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D254);

void func_8007D640(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_8007D690;
    }
}

void func_8007D690(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_800506EC(0xA);
        func_8005015C(9)->unk1 = 1;
        arg0->unk74 = func_8007D6E8;
    }
}

void func_8007D6E8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_8007D254;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D738);

void func_8007D840(Obj8004DEB0 *arg0) {
    func_8005D754(4, D_800B8454, 0, 0, 4);
    func_8005D754(4, D_800B8454, 0, 0x18, 4);
    func_8005D754(4, D_800B8454, 0, 0x30, 4);
    func_8005D754(4, D_800B8454, 0, 0x48, 4);
    func_8005D754(4, D_800B8454, 0, 0x60, 4);
    func_8005D754(4, D_800B8454, 0, 0x78, 4);
    func_8005D754(3, D_800B8478, 0, 4, 4);
    func_8007FED0(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007D934);

void func_8007DE1C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007DEB4;
    }
}

void func_8007DEB4(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *task;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        task = func_80050078(func_8007C68C);
        func_8007C6FC(task);
        task->unk74 = func_8007C7D8;
        arg0->unk1 = 1;
    }
}

void func_8007DF2C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x90, 0x80, 3, 9, 0);
        func_8005BA2C(0x14, 0xB1, 0x86, 0x18, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007DFF0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007DFF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007E450);

Obj8004DEB0 *func_8007F2A8(void *arg0) {
    Obj8004DEB0 *task;

    task = func_800501BC(0);
    task->unk70 = func_8007F2A8;
    task->unk74 = func_8007F30C;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    task->unk7C = arg0;
    return task;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F30C);

void func_8007F598(Obj8007F598 *arg0) {
    arg0->unk8C[0]->unk1 = 1;
    arg0->unk8C[1]->unk1 = 1;
    arg0->unk8C[2]->unk1 = 1;
    arg0->unk8C[3]->unk1 = 1;
    arg0->unk8C[4]->unk1 = 1;
    arg0->unk8C[5]->unk1 = 1;
    arg0->unk8C[6]->unk1 = 1;
    arg0->unk8C[7]->unk1 = 1;
    arg0->unk8C[8]->unk1 = 1;
    func_800506EC(4);
    func_8005015C(3)->unk1 = 1;
    func_800506EC(8);
    func_8005015C(7)->unk1 = 1;
    func_8005C2D0(0x10, 0x28, 0x90, 0x80, 3);
    func_8005C2D0(0x14, 0xB1, 0x84, 0x18, 7);
    func_8005D15C(D_8004C4B4, 0x3C2, 0x74);
    func_8005D2DC(D_8004C63C, 0x3C0, 0x84);
    arg0->unk74 = func_8007F6C0;
}

void func_8007F6C0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x90, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8007F758;
    }
}

void func_8007F758(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8007D840(arg0);
        arg0->unk74 = func_8007D934;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F7B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007F9C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FB44);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8007FD48);

void func_8007FED0(Obj8004DEB0 *arg0) {
    Obj8007FED0 *task;

    task = func_800501BC(4);
    task->unk70 = func_8007FED0;
    task->unk74 = func_8007FF64;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B846C;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = 0;
    task->unk50 = 0;
    task->unk7C = arg0;
}

void func_8007FF64(Obj8007FED0 *arg0) {
    s32 y;

    if (func_80050078(func_8007CFC0) != &D_801BC4F8) {
        y = (s8)arg0->unk7C->unk84 * 0x18 + 0x20;
    } else {
        y = (s8)arg0->unk7C->unk84 * 0x18;
    }
    arg0->unk4C = y;
}

void func_8007FFEC(Obj8004DEB0 *arg0) {
    Obj8007FED0 *task;

    task = func_800501BC(4);
    task->unk70 = func_8007FFEC;
    task->unk74 = func_80080080;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B846C;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = 0;
    task->unk50 = 0;
    task->unk7C = arg0;
}

void func_80080080(Obj80080080 *arg0) {
    arg0->unk4C = arg0->unk7C->unk80 * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800800A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080224);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800804DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800804F0);

void func_80080618(Obj8004DEB0 *arg0) {
    func_8005D754(3, D_800B8454, 0, 0, 4);
    func_8005D754(3, D_800B8454, 0, 0x18, 4);
    func_8005D754(3, D_800B8454, 0, 0x30, 4);
    func_8005D754(3, D_800B8454, 0, 0x48, 4);
    func_8005D754(3, D_800B8454, 0, 0x60, 4);
    func_8005D754(3, D_800B8454, 0, 0x78, 4);
    func_8005D754(3, D_800B8454, 0, 0x90, 4);
    func_8005D754(2, D_800B84FC, 8, 4, 4);
    func_8005D754(2, D_800B8508, 8, 0x1C, 4);
    func_8005D754(2, D_800B8514, 8, 0x34, 4);
    func_8005D754(2, D_800B8520, 8, 0x4C, 4);
    func_8005D754(2, D_800B852C, 8, 0x64, 4);
    func_8005D754(2, D_800B8538, 8, 0x7C, 4);
    func_8005D754(2, D_800B8544, 8, 0x94, 4);
    func_80081010(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800807CC);

void func_80080B80(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CB94(D_8004C6C4, 8, 8, 0xA);
        arg0->unk74 = func_80080BE4;
    }
}

void func_80080BE4(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_800506EC(0xA);
        func_8005015C(9)->unk1 = 1;
        func_8005C2D0(0x10, 0x78, 0x118, 0x20, 9);
        arg0->unk74 = func_80080C58;
    }
}

void func_80080C58(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_800807CC;
    }
}

void func_80080CA8(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *obj;
    Obj8004DEB0 *parent;

    obj = func_80050078(func_8005C2D0);
    if (obj == &D_801BC4F8) {
        func_800506EC(4);
        func_8005015C(3)->unk1 = 1;
        func_8005C2D0(0x20, 0x28, 0x88, 0xA8, 3);
        parent = arg0->unk7C;
        if (parent == obj) {
            arg0->unk74 = func_80080D60;
            return;
        }
        parent->unk74 = arg0->unk80;
        arg0->unk1 = 1;
    }
}

void func_80080D60(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x88, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80080DF8;
    }
}

void func_80080DF8(Obj8004DEB0 *arg0) {
    s16 i;
    Obj8004DEB0 *obj;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        for (i = 0; i < 8; i++) {
            func_8005D15C(D_8004C6DC, 0x3C0, (s16)(i * 16 + 0x40));
        }
        obj = func_80050078(func_8007C68C);
        func_8007C6FC(obj);
        obj->unk74 = func_8007C7D8;
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80080EB0);

void func_80080F40(void) {
    s32 off;

    func_80051450(0xA, D_80031A5A + D_80039CA2 * 10);
    func_80051450(7, D_80031A58 + D_80039CA2 * 3);
    func_80051450(9, D_80031A5B + D_80039CA2 * 16);
    func_80051450(8, D_80031A63 + D_80039CA2 * 32);
    if (D_80039CA2 != 0) {
        off = D_80039CA2 * 4;
        func_80051450(4, D_80039CA3 + (off + 0x3A));
    }
}

void func_80081010(Sub80080080 *arg0) {
    Obj80081010 *obj;
    s32 n;

    obj = func_800501BC(4);
    obj->unk70 = func_80081010;
    obj->unk74 = func_800810C0;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B846C;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk7C = arg0;
    n = (u8)(arg0->unk8C - arg0->unk8D);
    obj->unk48 = 0;
    obj->unk50 = 0;
    obj->unk4C = n * 0x18;
}

void func_800810C0(Obj80080080 *arg0) {
    Sub80080080 *sub;

    sub = arg0->unk7C;
    arg0->unk4C = (u8)(sub->unk8C - sub->unk8D) * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800810F0);

u8 func_80081260(Elem80081260 *arg0) {
    s32 count;

    count = 0;
    while (arg0->unk0 != 0x3E) {
        arg0++;
        count++;
    }
    return count;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081290);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008131C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800813A8);

void func_80081B50(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x18, 0x28, 0x120, 0x88, 3, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80081BEC;
    }
}

void func_80081BEC(Obj80081BEC *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008131C();
        arg0->unk9A = 0;
        arg0->unk9B = 0;
        func_80083894(&arg0->unk9A, &arg0->unk9B, 4);
        arg0->unk74 = func_80081C5C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80081C5C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008240C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800824D0);

void func_80082594(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *parent;

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        parent = arg0->unk7C;
        if (parent->unk70 == func_800A2D0C) {
            parent->unk74 = arg0->unk80;
            arg0->unk1 = 1;
            return;
        }
        func_8005BA2C(0xB0, 0x18, 0x80, 0x90, 5, 1, 0);
        func_8005BA2C(0x20, 0x28, 0x80, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80082688;
    }
}

void func_80082688(Obj80082688 *arg0) {
    Obj800709D4 *parent;
    s32 sub;

    parent = arg0->unk7C;
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008651C();
        sub = func_80072788(arg0->unk88);
        parent->unk7C = sub;
        ((Sub80082688 *)sub)->unk7C = 5;
        parent->unk84 = func_80072838();
        parent->unk74 = arg0->unk80;
        arg0->unk1 = 1;
    }
}

void func_80082714(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x18, 0x40, 0xC0, 0x58, 3, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800827B0;
    }
}

void func_800827B0(Obj80081BEC *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_80081290();
        arg0->unk9A = 0;
        arg0->unk9B = 0;
        func_80083894(&arg0->unk9A, &arg0->unk9B, 4);
        arg0->unk74 = func_800813A8;
    }
}

void func_80082820(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(8, 0x28, 0x130, 0x88, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800828BC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800828BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800829F4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80082E90);

void func_80083790(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x18, 0x40, 0xC0, 0x58, 3, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008382C;
    }
}

void func_8008382C(Obj80081BEC *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_80081290();
        func_80083894(&arg0->unk9A, &arg0->unk9B, 4);
        arg0->unk74 = func_800813A8;
    }
}

void func_80083894(u8 *arg0, u8 *arg1, s32 arg2) {
    Obj80083894 *obj;
    u8 x;

    obj = func_800501BC((s16)arg2);
    obj->unk70 = func_80083894;
    obj->unk74 = func_80083958;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xB;
    obj->unk14 = 1;
    obj->unkC = D_800B8550;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk7C = arg0;
    obj->unk80 = arg1;
    x = *obj->unk7C;
    obj->unk4C = *arg1 * 16 + 4;
    obj->unk50 = 0;
    obj->unk48 = x * 16 + 8;
}

void func_80083958(Obj80056FC4 *arg0) {
    s32 y;

    y = *arg0->unk80 * 0x10 + 4;
    arg0->unk48 = *arg0->unk7C * 0x10 + 8;
    arg0->unk4C = y;
}

void func_80083984(Obj8005DCDC *arg0) {
    Obj80081010 *obj;
    s32 x;

    obj = func_800501BC(6);
    obj->unk70 = func_80083984;
    obj->unk74 = func_80083A28;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xB;
    obj->unk14 = 1;
    obj->unkC = D_800B8550;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk7C = arg0;
    x = arg0->unk96 * 16;
    obj->unk4C = 0x1C;
    obj->unk50 = 0;
    obj->unk48 = x + 8;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083A28);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083A58);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80083C00);

void func_80083C58(Obj8004DEB0 *arg0) {
    s32 n;

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        D_801A2574 = 0;
        func_8005DD38(0x3C0, 0x10, 0x10);
        func_8005DE08(0x3C0, 0x28, 0xD);
        VSync(4);
        n = func_800842D4();
        if ((u8)n >= 6) {
            n = 5;
        }
        func_8005BA2C(0x10, 0x40, 0x90, (u8)n * 0x18, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80083D48;
    }
}

void func_80083D48(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8005BA2C(0x10, 0xCA, 0x120, 0x18, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80083DF0;
    }
}

void func_80083DF0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800843A8();
        func_8005BA2C(0xA8, 0x9E, 0x80, 0x28, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80083E98;
    }
}

void func_80083E98(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8005BA2C(0xA8, 0x22, 0x80, 0x78, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80083F40;
    }
}

void func_80083F40(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008405C(arg0, func_800851FC);
        arg0->unk74 = func_800507FC;
    }
}

void func_80083FA0(s32 *arg0) {
    Obj80081010 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_80083FA0;
    obj->unk74 = func_80084038;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B8580;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 0x18;
    obj->unk4C = 0;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_80084038(Obj80056FC4 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

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

void func_80084758(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80083FA0(&arg0->unkC4);
        arg0->unkC0 = func_80085258(func_80084290());
        arg0->unk74 = func_80084AE4;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800847B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084884);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084A8C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80084AE4);

void func_800851FC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_800709D4;
        func_8007092C();
        arg0->unk88 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085258);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008530C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085320);

void func_800854A8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(8, 0x28, 0xA0, 0xB4, 3, 1, 0);
        func_8005BA2C(0xB0, 0xA2, 0x80, 0x3E, 7, 8, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008556C;
    }
}

void func_8008556C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800855CC(arg0, func_80070A44);
        arg0->unk74 = func_800507FC;
    }
}

Obj8004DEB0 *func_800855CC(Obj8004DEB0 *arg0, void (*arg1)()) {
    Obj8004DEB0 *task;

    task = func_800501BC(0);
    task->unk70 = func_800855CC;
    task->unk74 = func_80085640;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    task->unk7C = arg0;
    task->unk80 = arg1;
    return task;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80085640);

void func_8008630C(Obj8004DEB0 *arg0) {
    if (D_801A2568 & 0x60) {
        D_801A2550 |= D_801A2568;
        SsUtKeyOn(D_801A2318, 0, 0, 0x3C, 0, 0x7F, 0x7F);
        func_800506EC(4);
        func_800506EC(8);
        func_8005015C(3)->unk1 = 1;
        func_8005015C(7)->unk1 = 1;
        func_8005C2D0(8, 0x28, 0xA0, 0xB4, 3);
        func_8005C2D0(0xB0, 0xA2, 0x80, 0x3E, 7);
        arg0->unk74 = func_800863F4;
    }
}

void func_800863F4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x20, 0x28, 0x80, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008648C;
    }
}

void func_8008648C(Obj80082688 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008651C();
        arg0->unk7C->unk7C = func_80072788(arg0->unk88);
        ((Sub80082688 *)arg0->unk7C->unk7C)->unk7C = 2;
        arg0->unk7C->unk74 = arg0->unk80;
        arg0->unk1 = 1;
    }
}

void func_8008651C(void) {
    func_8005D754(3, D_800B83C4, 0, 0, 4);
    func_8005D80C(2, D_8004CB60, 0x10, 8, 4, 4);
    func_8005D80C(2, D_8004CB6C, 0x10, 8, 0x1C, 4);
    func_8005D80C(2, D_8004CB7C, 0x10, 8, 0x34, 4);
    func_8005D80C(2, D_8004CB88, 0x10, 8, 0x4C, 4);
    func_8005D80C(2, D_8004CB98, 0x10, 8, 0x64, 4);
    func_8005D80C(2, D_8004CBA4, 0x10, 8, 0x7C, 4);
    func_8005D80C(2, D_8004CBB4, 0x10, 8, 0x94, 4);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086654);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800866A8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800866FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086750);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800867C4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086838);

void func_80086E04(void) {
    func_80050078(func_80088DE4)->unk74 = func_80089250;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80086E34);

void func_80086E80(void) {
    while (func_800517C8() != 0) {
    }
    D_801F37C8 = 1;
    func_800513F0(0x13, 0, func_80086E34);
}

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

void func_80088334(Obj8004DEB0 *arg0) {
    Obj8004DEB0 *s1;
    Obj8004DEB0 *s2;
    Obj8004DEB0 *s3;
    Obj8004DEB0 *s4;
    Obj8004DEB0 *s5;
    Obj8004DEB0 *v0;

    s5 = func_80050078(func_8008AFA8);
    s3 = func_80050078(func_8008BC58);
    s4 = func_80050078(func_8008BDA8);
    s1 = func_80050078(func_8008BEF8);
    s2 = func_80050078(func_8008BFB4);
    v0 = func_80050078(func_8005BA2C);
    if (v0 == &D_801BC4F8) {
        if ((D_801A2568 & 0x40) && !(D_801A256C & 0x40)) {
            func_80088DE4();
            s3->unk74 = func_8008BD9C;
            s4->unk74 = func_8008BEEC;
            if (s1 != v0) {
                s1->unk74 = func_8008BFA8;
            }
            if (s2 != v0) {
                s2->unk74 = func_8008C07C;
            }
            s5->unk74 = func_8008B568;
            func_800506EC(4);
            func_8005015C(3)->unk1 = 1;
            func_8005C2D0(0x20, (s16)(((Obj80088334 *)D_801F5094)->unk24 + 0x5C), 0x100,
                          ((Obj80088334 *)D_801F5094)->unk1 * 0x18, 3);
            arg0->unk74 = func_800507FC;
            return;
        }
        if ((D_801A2568 & 0x20) && !(D_801A256C & 0x20)) {
            SsUtKeyOn(D_801A2318, 0, 0, 0x3C, 0, 0x7F, 0x7F);
            s3->unk74 = func_8008BD9C;
            s4->unk74 = func_8008BEEC;
            if (s1 != &D_801BC4F8) {
                s1->unk74 = func_8008BFA8;
            }
            if (s2 != &D_801BC4F8) {
                s2->unk74 = func_8008C07C;
            }
            s5->unk74 = func_8008B568;
            func_800506EC(4);
            func_8005015C(3)->unk1 = 1;
            func_8005C2D0(0x20, (s16)(((Obj80088334 *)D_801F5094)->unk24 + 0x5C), 0x100,
                          ((Obj80088334 *)D_801F5094)->unk1 * 0x18, 3);
            arg0->unk74 = func_800885DC;
        }
    }
}

void func_800885DC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80050078(func_8008AF0C)->unk74 = func_8008AF9C;
        func_80050078(func_8005CC48)->unk1 = 1;
        D_801A2574 = 0;
        func_8004EFE8();
        arg0->unk1 = 1;
    }
}

void func_80088664(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80050078(func_8008AF0C)->unk74 = func_8008AF9C;
        func_80050078(func_8005CC48)->unk1 = 1;
        D_801A2574 = 0;
        func_80050078(func_8004DCC0)->unk98->unk1 = 1;
        if (func_800517C8() != 0) {
            func_80051628();
        }
        while (func_800517C8() != 0) {
        }
        arg0->unk74 = func_80088730;
    }
}

void func_80088730(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8008AF0C) == &D_801BC4F8) {
        func_8009C964(0);
        func_8005E92C();
        arg0->unk1 = 1;
    }
}

void func_8008878C(void) {
    if (D_801F5094 != 0) {
        func_80051078(D_801F5094);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800887B8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088940);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088A18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088AC4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80088DE4);

void func_800891BC(Obj8004DEB0 *arg0) {
    if (func_8005015C(5) == &D_801BC4F8) {
        func_8005BA2C(8, 0x80, 0x130, 0x60, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80089250;
    }
}

void func_80089250(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008B574()->unk2 = 0;
        arg0->unk74 = func_800897D0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800892AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008935C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800895D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800897D0);

void func_8008A2F0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

Obj8004DEB0 *func_8008A338(void) {
    Obj8004DEB0 *task;

    task = func_800501BC(6);
    task->unk70 = func_8008A338;
    task->unk74 = func_8008A388;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    return task;
}

void func_8008A388(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xD) == &D_801BC4F8) {
        func_8005BA2C(0x60, 0x64, 0x90, 0x30, 0xD, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 7, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008A418;
    }
}

void func_8008A418(Obj8004DEB0 *arg0) {
    u8 *str;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8008B610();
        str = D_8004CBE4;
        if (D_801F3751 >= 0) {
            str = D_8004CBD4;
        }
        func_8005CB94(str, 8, 4, 0xE);
        func_8005D754(2, D_800B8A98, 0, 0, 0xE);
        arg0->unk74 = func_8008A4BC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008A4BC);

void func_8008AEC4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_8008AF0C(void) {
    Obj8008AF0C *obj;

    obj = func_800501BC(2);
    obj->unk70 = func_8008AF0C;
    obj->unk74 = func_8008AF94;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B8AD4;
    obj->unk48 = 8;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x30;
    obj->unk50 = 0;
}

void func_8008AF94(void) {
}

void func_8008AF9C(Obj8004DEB0 *arg0) {
    arg0->unk1 = 1;
}

void func_8008AFA8(void) {
    Obj8008AF0C *obj;
    s32 diff;

    obj = func_800501BC(4);
    obj->unk70 = func_8008AFA8;
    obj->unk74 = func_8008B094;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B8A80;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 0;
    diff = D_801F37C9[0] - D_801F37CA[0];
    obj->unk50 = 0;
    obj->unk4C = diff * 0x18;
}

void func_8008B048(u8 *arg0, u8 *arg1) {
    s32 i;
    u8 *src;
    u8 *dst;

    i = 0;
    if (*arg1 != 0) {
        src = arg1;
        dst = arg0;
        do {
            *dst++ = *src++;
            i++;
        } while (*src != 0);
    }
    arg0[i] = arg1[i];
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B094);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B568);

Obj8004DEB0 *func_8008B574(void) {
    Obj8008AF0C *obj;

    obj = func_800501BC(6);
    obj->unk70 = func_8008B574;
    obj->unk74 = func_8008B5FC;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0xB;
    obj->unk14 = 1;
    obj->unkC = D_800B8A8C;
    obj->unk48 = 0x110;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x50;
    obj->unk50 = 0;
    return (Obj8004DEB0 *)obj;
}

void func_8008B5FC(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B604);

void func_8008B610(void) {
    Obj8008AF0C *obj;

    obj = func_800501BC(0xE);
    obj->unk70 = func_8008B610;
    obj->unk74 = func_8008B698;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800B8AA4;
    obj->unk48 = 4;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk4C = 0x18;
    obj->unk50 = 0;
}

void func_8008B698(Obj8008AF0C *arg0) {
    if ((D_801A2568 & 0x8000) && !(D_801A256C & 0x8000)) {
        SsUtKeyOn(D_801A2318, 0, 1, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk48 = 4;
    }
    if ((D_801A2568 & 0x2000) && !(D_801A256C & 0x2000)) {
        SsUtKeyOn(D_801A2318, 0, 1, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk48 = 0x49;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008B76C);

Obj8004DEB0 *func_8008B778(void) {
    Obj8004DEB0 *task;

    task = func_800501BC(8);
    task->unk70 = func_8008B778;
    task->unk74 = func_8008B7C8;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    return task;
}

void func_8008B7C8(Obj8004DEB0 *arg0) {
    if (func_8005015C(7) == &D_801BC4F8) {
        func_8005BA2C(4, 0x16, 0x68, 0x64, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008B85C;
    }
}

void func_8008B85C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8AE0, 0, 0, 8)->unkA = 4;
        arg0->unk74 = func_8008B8C8;
    }
}

void func_8008B8C8(void) {
}

void func_8008B8D0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

Obj8004DEB0 *func_8008B918(void) {
    Obj8004DEB0 *task;

    task = func_800501BC(10);
    task->unk70 = func_8008B918;
    task->unk74 = func_8008B968;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
    return task;
}

void func_8008B968(Obj8004DEB0 *arg0) {
    if (func_8005015C(9) == &D_801BC4F8) {
        func_8005BA2C(0x6C, 0x16, 0x68, 0x64, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008B9FC;
    }
}

void func_8008B9FC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8AEC, 0, 0, 10)->unkA = 4;
        arg0->unk74 = func_8008BA68;
    }
}

void func_8008BA68(void) {
}

void func_8008BA70(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_8008BAB8(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0xC);
    obj->unk70 = func_8008BAB8;
    obj->unk74 = func_8008BB08;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_8008BB08(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xB) == &D_801BC4F8) {
        func_8005BA2C(0xD4, 0x16, 0x68, 0x64, 0xB, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008BB9C;
    }
}

void func_8008BB9C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8AF8, 0, 0, 0xC)->unkA = 4;
        arg0->unk74 = func_8008BC08;
    }
}

void func_8008BC08(void) {
}

void func_8008BC10(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BC58);

void func_8008BD48(Obj8004DEB0 *arg0) {
    func_8005D15C(D_8004CC08, 0x380, 0);
    DrawSync(0);
    arg0->unk74 = func_8008BD94;
}

void func_8008BD94(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BD9C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BDA8);

void func_8008BE98(Obj8004DEB0 *arg0) {
    func_8005D15C(D_8004CC10, 0x380, 0x10);
    DrawSync(0);
    arg0->unk74 = func_8008BEE4;
}

void func_8008BEE4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BEEC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BEF8);

void func_8008BF90(Obj8008AF0C *arg0) {
    arg0->unk74 = func_8008BFA0;
}

void func_8008BFA0(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BFA8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008BFB4);

void func_8008C064(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_8008C074;
}

void func_8008C074(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C07C);

void func_8008C088(void) {
    Obj8004DEB0 *a;
    Obj8004DEB0 *b;

    a = func_80050078(func_80095130);
    b = func_80050078(func_8008C3EC);
    D_8019C14C[0]->unk16 = 0x15;
    D_8019C150[0]->unk16 = 0x15;
    D_8019C170[0]->unk16 = 0x14;
    D_8019C174[0]->unk16 = 0x14;
    b->unk74 = func_8008D560;
    a->unk16 = 0x15;
    a->unk74 = func_800951B0;
}

void func_8008C120(void) {
    Obj8004DEB0 *a;
    Obj8004DEB0 *b;

    a = func_80050078(func_8008DD50);
    b = func_80050078(func_800953AC);
    D_8019C154[0]->unk16 = 0x15;
    D_8019C158[0]->unk16 = 0x15;
    D_8019C15C[0]->unk16 = 0x15;
    D_8019C160[0]->unk16 = 0x15;
    D_8019C178[0]->unk16 = 0x14;
    D_8019C17C[0]->unk16 = 0x14;
    D_8019C180[0]->unk16 = 0x14;
    D_8019C184[0]->unk16 = 0x14;
    a->unk74 = func_8008E260;
    b->unk16 = 0x15;
    b->unk74 = func_8009544C;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C1F8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C348);

void func_8008C394(void) {
    while (func_800517C8() != 0) {
    }
    D_8019C090 = 1;
    func_800513F0(0x13, 0x331, func_8008C348);
}

void func_8008C3DC(void) {
    D_8019C090 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008C3EC);

void func_8008CCA8(Obj8004DEB0 *arg0) {
    if (func_8005015C(3) == &D_801BC4F8) {
        func_8005BA2C(4, 0x50, 0x70, 0x30, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008CD38;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008CD38);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008CFD4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D060);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D2E0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D560);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008D8AC);

void func_8008DCB0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8008D8AC();
        func_80050078(func_80095094)->unk74 = func_80095124;
        func_80050078(func_8005CC48)->unk1 = 1;
        D_801A2574 = 0;
        func_8005B12C();
        func_8004EFE8();
        arg0->unk1 = 1;
    }
}

void func_8008DD48(void) {
}

void func_8008DD50(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_8008DD50;
    obj->unk74 = func_8008DDA0;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_8008DDA0(Obj8004DEB0 *arg0) {
    if (func_8005015C(5) == &D_801BC4F8) {
        func_8005BA2C(0x2C, 0x5C, 0x70, 0x60, 5, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008DF6C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DE30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008DF6C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E260);

void func_8008E6C4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E70C);

void func_8008E7E0(Obj8004DEB0 *arg0) {
    if (func_8005015C(9) == &D_801BC4F8) {
        func_8005BA2C(0x8C, 0x18, 0xB0, D_8019C094 * 0x18, 9, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8008F3B4;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008E880);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008EC30);

void func_8008EE88(u8 *arg0, u8 *arg1) {
    s32 i;
    u8 *src;
    u8 *dst;

    i = 0;
    if (*arg1 != 0) {
        src = arg1;
        dst = arg0;
        do {
            *dst++ = *src++;
            i++;
        } while (*src != 0);
    }
    arg0[i] = arg1[i];
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008EED4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F08C);

void func_8008F274(u8 arg0, u8 arg1, u8 arg2) {
    u8 buf[8];

    func_8008EC30(func_8008F08C(arg0, arg1), buf);
    func_8005D15C(buf, 0x3EC, arg2 * 0x10 + 0x80);
    DrawSync(0);
}

void func_8008F2D0(u8 arg0, u8 arg1, u8 arg2) {
    u8 buf[8];
    s32 y;

    func_8008EC30(func_8008F08C(arg0, arg1), buf);
    y = arg2 * 0x10 + 0x80;
    func_8005D15C(D_8004CD18, 0x3EC, y);
    func_8005D15C(buf, 0x3EC, y);
    DrawSync(0);
}

void func_8008F344(u8 arg0, u8 arg1, u8 arg2) {
    u8 buf[16];
    s32 y;

    func_8008EE88(buf, func_8008EED4(arg0, arg1));
    y = arg2 * 0x10;
    func_8005D15C(D_8004CD20, 0x380, y);
    func_8005D15C(buf, 0x380, y);
    DrawSync(0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F3B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008F914);

void func_8008F978(void) {
    D_801A2309 = 1;
    D_801A230A = 7;
    D_801A2314 = func_8008C1F8;
    D_801A230B = 0xA;
    D_801A230C = 0xE;
    D_801A230D = 0xD;
    D_801A230E = 6;
    D_801A2310 = D_800B8C98;
    func_800AE30C();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008FA00);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8008FA94);

void func_800902A4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_800902EC(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0xA);
    obj->unk70 = func_800902EC;
    obj->unk74 = func_8009033C;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_8009033C(Obj8004DEB0 *arg0) {
    if (func_8005015C(7) == &D_801BC4F8) {
        func_8005BA2C(0xA8, 0x68, 0x90, 0x70, 7, 1, 0);
        arg0->unk74 = func_800903A8;
    }
}

void func_800903A8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_800903F8;
    }
}

void func_800903F8(void) {
}

void func_80090400(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090448);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090668);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800908F8);

void func_80090B90(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(8);
    obj->unk70 = func_80090B90;
    obj->unk74 = func_80090BFC;
    obj->unk78 = func_800507F4;
    obj->unkE = 0x1D;
    obj->unk16 = 0x12;
    obj->unkA = 0;
    obj->unkC = 0;
    obj->unk4 = 1;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
}

void func_80090BFC(Obj8004DEB0 *arg0) {
    func_80090668();
    func_800908F8();
    arg0->unk74 = func_80090C38;
}

void func_80090C38(Obj8004DEB0 *arg0) {
    arg0->unk42 -= 0x20 << D_801A2574;
}

void func_80090C58(Obj8004DEB0 *arg0) {
    if (func_800517C8() != 0) {
        func_80051628();
    }
    arg0->unk1 = 1;
}

void func_80090C9C(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(8);
    obj->unk70 = func_80090C9C;
    obj->unk74 = func_80090CEC;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_80090CEC(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xB) == &D_801BC4F8) {
        func_8005B648(0x30, 0x1C, 0xE0, 0x90, 0xB, 1, 0)->unk8A = 1;
        arg0->unk74 = func_80093A20;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090D60);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80090E88);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093A20);

void func_80093AE8(Obj8004DEB0 *arg0) {
    if (((D_801A2568 & 0x1000) && !(D_801A256C & 0x1000)) ||
        ((D_801A2568 & 0x4000) && !(D_801A256C & 0x4000))) {
        arg0->unk74 = func_80093A20;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093B4C);

void func_80093B58(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(8);
    obj->unk70 = func_80093B58;
    obj->unk74 = func_80093BA8;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_80093BA8(Obj8004DEB0 *arg0) {
    if (func_8005015C(0x11) == &D_801BC4F8) {
        func_8005BA2C(8, 0xAC, 0x130, 0x18, 0x11, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80093C3C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80093C3C);

void func_80093E3C(Obj8004DEB0 *arg0) {
    if (((D_801A2568 & 0x1000) && !(D_801A256C & 0x1000)) ||
        ((D_801A2568 & 0x4000) && !(D_801A256C & 0x4000))) {
        arg0->unk74 = func_80093C3C;
    }
}

void func_80093EA0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_80093EE8(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0xA);
    obj->unk70 = func_80093EE8;
    obj->unk74 = func_80093F38;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_80093F38(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xD) == &D_801BC4F8) {
        func_8005BA2C(0x60, 0x64, 0x90, 0x30, 0xD, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 7, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80093FC8;
    }
}

void func_80093FC8(Obj8004DEB0 *arg0) {
    u8 *str;

    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_80095F58();
        str = D_8004CE24;
        if (D_8019C091 == 0) {
            str = D_8004CE18;
        }
        func_8005CB94(str, 0x10, 4, 0xE);
        func_8005D754(2, D_800B8BCC, 0, 0, 0xE);
        arg0->unk74 = func_800940A4;
    }
}

void func_8009406C(void) {
    u8 buf[16];

    func_8008E880(D_80039CA4, buf);
    func_8005D15C(buf, 0x3F0, 0xE0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800940A4);

void func_80094DC0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_80094E08(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_80094E08;
    obj->unk74 = func_80094E58;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_80094E58(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xF) == &D_801BC4F8) {
        func_8005BA2C(4, 0xC4, 0x90, 0x18, 0xF, 0, 0);
        arg0->unk74 = func_80094EC0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80094EC0);

void func_80095044(void) {
}

void func_8009504C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_80095094(void) {
    Obj80095094 *task;

    task = func_800501BC(2);
    task->unk70 = func_80095094;
    task->unk74 = func_8009511C;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8CBC;
    task->unk48 = 8;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk4C = 0x30;
    task->unk50 = 0;
}

void func_8009511C(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095124);

void func_80095130(void) {
    Obj80095094 *task;

    task = func_800501BC(4);
    task->unk70 = func_80095130;
    task->unk74 = func_800951B0;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8B84;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = 0;
    task->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800951B0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800953A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800953AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009544C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095778);

void func_80095784(void) {
    Obj80095094 *task;

    task = func_800501BC(0xA);
    task->unk70 = func_80095784;
    task->unk74 = func_80095824;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8BC0;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = (D_8019C0EA[0] - D_8019C104[0]) * 0x18;
    task->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095824);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095F4C);

void func_80095F58(void) {
    Obj80095094 *task;

    task = func_800501BC(0xE);
    task->unk70 = func_80095F58;
    task->unk74 = func_80095FE0;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8BD8;
    task->unk48 = 4;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk4C = 0x18;
    task->unk50 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80095FE0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800960B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800960C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096178);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80096230);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800962E8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800963A0);

void func_80096424(void) {
    while (func_800517C8() != 0) {
    }
    D_8017F794 = 1;
    func_800513F0(0x13, 0x332, func_800963A0);
}

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

void func_800978A8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80050078(func_8009972C)->unk74 = func_800997BC;
        func_80050078(func_8005CC48)->unk1 = 1;
        D_801A2574 = 0;
        func_8004EFE8();
        arg0->unk1 = 1;
    }
}

void func_80097930(void) {
    if (D_80180860 != 0) {
        func_80051078(D_80180860);
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009795C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097A08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097B4C);

void func_80097C40(Obj8004DEB0 *arg0) {
    if (func_8005015C(0xB) == &D_801BC4F8) {
        func_8005BA2C(6, 0x4C, 0xE0, 0x30, 0xB, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80097CD4;
    }
}

void func_80097CD4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_80097D24;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097D24);

void func_80097EE8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097F30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80097FDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800980E4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800981BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098268);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098550);

void func_80098968(Obj8004DEB0 *arg0) {
    if (func_8005015C(5) == &D_801BC4F8) {
        func_8005BA2C(8, 0x80, 0x130, 0x60, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800989FC;
    }
}

void func_800989FC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_80099E3C()->unk2 = 0;
        arg0->unk74 = func_80098A58;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80098A58);

void func_800996E4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_8009972C(void) {
    Obj80095094 *task;

    task = func_800501BC(2);
    task->unk70 = func_8009972C;
    task->unk74 = func_800997B4;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8CF4;
    task->unk48 = 8;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk4C = 0x30;
    task->unk50 = 0;
}

void func_800997B4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800997BC);

void func_800997C8(void) {
    Obj80095094 *task;

    task = func_800501BC(4);
    task->unk70 = func_800997C8;
    task->unk74 = func_800998B4;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0x15;
    task->unk14 = 1;
    task->unkC = D_800B8CDC;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk48 = 0;
    task->unk4C = (D_8017F795[0] - D_8017F796[0]) * 0x18;
    task->unk50 = 0;
}

void func_80099868(u8 *arg0, u8 *arg1) {
    s32 i;
    u8 *src;
    u8 *dst;

    i = 0;
    if (*arg1 != 0) {
        src = arg1;
        dst = arg0;
        do {
            *dst++ = *src++;
            i++;
        } while (*src != 0);
    }
    arg0[i] = arg1[i];
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800998B4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099E30);

Obj80095094 *func_80099E3C(void) {
    Obj80095094 *task;

    task = func_800501BC(6);
    task->unk70 = func_80099E3C;
    task->unk74 = func_80099EC4;
    task->unk78 = func_800507F4;
    task->unkA = 3;
    task->unk16 = 0xB;
    task->unk14 = 1;
    task->unkC = D_800B8CE8;
    task->unk48 = 0x110;
    task->unk5 = 0;
    task->unk40 = 0;
    task->unk42 = 0;
    task->unk44 = 0;
    task->unk4C = 0x50;
    task->unk50 = 0;
    return task;
}

void func_80099EC4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_80099ECC);

void func_80099ED8(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(8);
    obj->unk70 = func_80099ED8;
    obj->unk74 = func_80099F28;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

void func_80099F28(Obj8004DEB0 *arg0) {
    if (func_8005015C(7) == &D_801BC4F8) {
        func_8005BA2C(4, 0x16, 0x68, 0x64, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_80099FBC;
    }
}

void func_80099FBC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8D00, 0, 0, 8)->unkA = 4;
        arg0->unk74 = func_8009A028;
    }
}

void func_8009A028(void) {
}

void func_8009A030(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_8009A078(void) {
    Obj8004DEB0 *task;

    task = func_800501BC(0xA);
    task->unk70 = func_8009A078;
    task->unk74 = func_8009A0C8;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
}

void func_8009A0C8(Obj8004DEB0 *arg0) {
    if (func_8005015C(9) == &D_801BC4F8) {
        func_8005BA2C(0x6C, 0x16, 0x68, 0x64, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8009A15C;
    }
}

void func_8009A15C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8D0C, 0, 0, 0xA)->unkA = 4;
        arg0->unk74 = func_8009A1C8;
    }
}

void func_8009A1C8(void) {
}

void func_8009A1D0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

void func_8009A218(void) {
    Obj8004DEB0 *task;

    task = func_800501BC(8);
    task->unk70 = func_8009A218;
    task->unk74 = func_8009A268;
    task->unk78 = func_800507F4;
    task->unk2 = 0;
    task->unk3 = 0;
    task->unk6C = 0;
    task->unk5 = 0;
}

void func_8009A268(Obj8004DEB0 *arg0) {
    if (func_8005015C(7) == &D_801BC4F8) {
        func_8005BA2C(0xD4, 0x16, 0x68, 0x64, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_8009A2FC;
    }
}

void func_8009A2FC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CAE0(D_800B8D18, 0, 0, 8)->unkA = 4;
        arg0->unk74 = func_8009A368;
    }
}

void func_8009A368(void) {
}

void func_8009A370(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A3B8);

void func_8009A4A8(Obj8004DEB0 *arg0) {
    func_8005D15C(D_8004CE70, 0x380, 0);
    DrawSync(0);
    arg0->unk74 = func_8009A4F4;
}

void func_8009A4F4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A4FC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A508);

void func_8009A5F8(Obj8004DEB0 *arg0) {
    func_8005D15C(D_8004CE78, 0x380, 0x10);
    DrawSync(0);
    arg0->unk74 = func_8009A644;
}

void func_8009A644(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A64C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A658);

void func_8009A6F0(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_8009A700;
}

void func_8009A700(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A708);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A714);

void func_8009A7C4(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_8009A7D4;
}

void func_8009A7D4(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A7DC);

void func_8009A7E8(void) {
    SetGeomScreen(0x100);
    SetGeomOffset(0xA0, 0x78);
    D_8018E468 = 0;
    D_8018E469 = 0;
    D_8018E46A = 0;
    SetBackColor(0, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009A83C);

void func_8009B3D8(Obj8004DEB0 *arg0) {
    s16 i;

    i = 0;
    do {
        i++;
        arg0->unk0 = 0;
        arg0->unk1 = 0;
        arg0->unk6C = 0;
        arg0++;
    } while (i < 0x1FE);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009B414);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C5C0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C6DC);

void func_8009C928(void) {
    D_80039D14 = ((D_80039D14 + 0x3FD) * 0x6D) & 0x7FFF;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_8009C964);

void func_800A2D04(void) {
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2D0C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2DBC);

void func_800A2EA0(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800A2EB0;
}

void func_800A2EB0(Obj800A2EB0 *arg0) {
    if (func_800517C8() == 0) {
        arg0->unk84++;
        if ((s16)arg0->unk84 >= 0xFA) {
            arg0->unk74 = func_800A2F14;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A2F14);

void func_800A2FD0(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800A2FE0;
}

void func_800A2FE0(Obj8004DEB0 *arg0) {
    func_800A448C(D_800BDBBC, 1);
    D_800BDBBC++;
    if (D_800BDBBC == 2) {
        D_800BDBBC = 0;
    }
    arg0->unk74 = func_800A304C;
}

void func_800A304C(Obj8004DEB0 *arg0) {
    func_80051450(4, 3);
    arg0->unk74 = func_800A3088;
}

void func_800A3088(Obj800A3088 *arg0) {
    if (func_800517C8() == 0) {
        arg0->unk7C = func_800A4340(0x4C);
        arg0->unk80 = func_800A4340(0x52);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        if (arg0->unk9F != 0) {
            arg0->unk8C = &D_801BC4F8;
        } else {
            arg0->unk8C = func_800A4408();
        }
        arg0->unk74 = func_800A310C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A310C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3334);

void func_800A3554(Obj8004DEB0 *arg0) {
    arg0->unk74 = func_800A3564;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3564);

void func_800A3814(s32 arg0) {
    Obj800A3814 *obj;

    obj = func_800501BC(4);
    obj->unk70 = func_800A3814;
    obj->unk74 = func_800A38A8;
    obj->unk78 = func_800507F4;
    obj->unkA = 3;
    obj->unk16 = 0x15;
    obj->unk14 = 1;
    obj->unkC = D_800BDC50;
    obj->unk5 = 0;
    obj->unk40 = 0;
    obj->unk42 = 0;
    obj->unk44 = 0;
    obj->unk48 = 0;
    obj->unk4C = 0;
    obj->unk50 = 0;
    obj->unk7C = arg0;
}

void func_800A38A8(Obj80051C20 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A38CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A39D8);

void func_800A3D30(Obj800A3D30 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80050804(4, 0);
        arg0->unk9F = 1;
        arg0->unk74 = func_800A304C;
    }
}

void func_800A3D90(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x18, 0x28, 0x120, 0x88, 3, 1, 0);
        func_8005BA2C(0x18, 0xB2, 0x90, 0x30, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        func_800689E0();
        arg0->unk74 = func_800A3F90;
    }
}

void func_800A3E5C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80052134(arg0, func_800A3EBC);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A3EBC);

void func_800A3F90(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005CC48();
        func_800810F0(arg0, func_800A3FFC, 0x50);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A3FFC(Obj8004DEB0 *arg0) {
    func_8005BA2C(0x1C, 0x14, 0x108, 0xC8, 3, 1, 0);
    SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
    arg0->unk74 = func_800A407C;
}

void func_800A407C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8 && func_800517C8() == 0) {
        func_8005D754(1, D_800BDC5C, 4, 0, 4);
        arg0->unk74 = func_800A40FC;
    }
}

void func_800A40FC(Obj8004DEB0 *arg0) {
    if (D_801A2568 & 0x840) {
        SsUtKeyOn(D_801A2318, 0, 2, 0x3C, 0, 0x7F, 0x7F);
        func_800506EC(4);
        func_8005015C(3)->unk1 = 1;
        func_8005C2D0(0x20, 0x18, 0x108, 0xC8, 3);
        arg0->unk74 = func_800A4198;
    }
}

void func_800A4198(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80050078(func_8005CC48)->unk1 = 1;
        func_80073740();
        while (func_800517C8() != 0) {
        }
        func_80086EC8();
        func_8009646C();
        func_8008C3DC();
        func_80096230();
        func_800866FC();
        D_800411F8 = 0;
        D_80039C5D = 0;
        D_8004860C = 0;
        D_80048608 = 0;
        D_80039CAF = 1;
        func_8009C964(0);
        func_8005E92C();
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4274);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4340);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4408);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A448C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A46AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A499C);

void func_800A4A04(u8 *arg0, s32 arg1) {
    func_800B4E84(0);
    func_800B5128(arg1);
    StSetRing(D_8017F434, 0x10);
    StSetStream(1, 1, -1, 0, 0);
    func_800A4E38(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4A74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4BE8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4C70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4DA0);

void func_800A4E38(u8 *arg0) {
    volatile u8 sp10;

    sp10 = 0x80;
    do {
        while (CdControl(2, arg0, 0) == 0) {
        }
        while (CdControl(0xE, (u8 *)&sp10, 0) == 0) {
        }
        VSync(3);
    } while (CdRead2(0x1C0) == 0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A4EAC);

void func_800A4EF0(void) {
    func_800309A8(4, 0, func_800A4EAC);
}

void func_800A4F1C(void) {
    func_800309A8(4, 0, NULL);
}

void func_800A4F44(void) {
    Obj8004DEB0 *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_800A88F8;
    obj->unk74 = func_800A503C;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
    func_800A4FFC(obj);
    func_80051450(4, 6);
    func_8005CC48();
    if (D_80039CAD == 0) {
        func_800AE7A4();
        func_800AE838();
        func_8005B2CC();
        func_8005AE8C();
        D_80039CA0 = 0;
    }
    D_801A2574 = 2;
}

void func_800A4FFC(Obj8004DEB0 *arg0) {
    arg0->unk8A = 0;
    func_8005B648(0, 0, 0x140, 0xF0, 1, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A503C);

void func_800A50C4(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80051450(4, 1);
        func_80051450(4, 4);
        arg0->unk74 = func_800A5118;
    }
}

void func_800A5118(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_8005EB80(1);
        func_80074A18();
        func_80073740();
        arg0->unk74 = func_800A5170;
    }
}

void func_800A5170(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80073904();
        arg0->unk74 = func_800A51B8;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A51B8);

void func_800A5318(Obj800A5318 *arg0) {
    Obj8004DEB0 *sub;

    sub = arg0->unk80;
    D_80039CAC = 0;
    D_80039CAD = 1;
    sub->unk1 = 1;
    func_800A5368();
    arg0->unk74 = func_800A5414;
}

void func_800A5368(void) {
    func_8005DD38(0x3C0, 0x80, 0xF);
    func_8005DE08(0x3C0, 0x98, 0xF);
    func_8005BA2C(0x10, 0x28, 0x88, 0x90, 3, 0, 0);
    func_8005BA2C(0xA0, 0x50, 0x98, 0x30, 5, 0xB, 0);
    SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
}

void func_800A5414(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A546C(arg0);
        arg0->unk74 = func_800A57F0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A546C);

void func_800A56A8(u8 *arg0, u16 arg1) {
    s32 digit;
    s32 div;
    s16 i;
    u8 started;

    started = 0;
    if (arg1 >= 1000) {
        arg1 = 999;
    }
    div = 100;
    i = 0;
    do {
        digit = arg1 / div;
        if (digit > 0) {
            *arg0++ = digit + '0';
            started = 1;
            arg1 -= digit * div;
        } else {
            if (started || i == 2) {
                *arg0 = '0';
            } else {
                *arg0 = ' ';
            }
            arg0++;
        }
        i++;
        div /= 10;
    } while (i < 3);
    *arg0 = 0;
}

void func_800A576C(void) {
    func_800506EC(4);
    func_8005015C(3)->unk1 = 1;
    func_800506EC(6);
    func_8005015C(5)->unk1 = 1;
    func_8005C2D0(0x10, 0x28, 0x88, 0x90, 3);
    func_8005C2D0(0xA0, 0x50, 0x98, 0x30, 5);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A57F0);

void func_800A5EA4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0x10, 0x28, 0x90, 0xB8, 3, 4, 0);
        func_8005BA2C(0xB0, 0xA2, 0x80, 0x3E, 7, 8, 0);
        func_8005BA2C(0xB0, 0x18, 0x80, 0x90, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A5F90;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A5F90);

void func_800A6034(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_800744A8(arg0, func_800A6DA4, 1);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A6084(Obj8004DEB0 *arg0) {
    u8 count;

    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        D_801A2574 = 0;
        func_8005DD38(0x3C0, 0x10, 0x10);
        func_8005DE08(0x3C0, 0x28, 0xD);
        VSync(4);
        count = func_800842D4();
        if (count >= 7) {
            count = 6;
        }
        func_8005BA2C(0x10, 0x40, 0x90, count * 0x18, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A6174;
    }
}

void func_800A6174(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8005BA2C(0x10, 0xCA, 0x120, 0x18, 9, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A621C;
    }
}

void func_800A621C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800843A8();
        func_8005BA2C(0xA8, 0x9E, 0x80, 0x28, 7, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A62C4;
    }
}

void func_800A62C4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8005BA2C(0xA8, 0x22, 0x80, 0x78, 5, 1, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A636C;
    }
}

void func_800A636C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8008405C(arg0, func_800A6DA4);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A63D4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005BA2C(0xB0, 0x18, 0x80, 0x90, 5, 1, 0);
        func_8005BA2C(0x20, 0x28, 0x88, 0xA8, 3, 0, 0);
        SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
        arg0->unk74 = func_800A6494;
    }
}

void func_800A6494(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        arg0->unk74 = func_800507FC;
        func_8005D71C();
        func_8005DD38(0x3C0, 0x10, 0xF);
        func_8005DE08(0x3C0, 0x28, 0xF);
        func_80072838();
        func_800804F0(arg0, (s32)func_800A6D24);
    }
}

void func_800A6520(Obj8004DEB0 *arg0) {
    func_800505F0(4, 0x10);
    func_8005BA2C(0xA0, 0x88, 0x88, 0x30, 9, 0, 0);
    arg0->unk74 = func_800A6580;
}

void func_800A6580(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005D754(3, D_800BDCD8, 0, 0, 0xA);
        func_8005D754(3, D_800BDCD8, 0, 0x18, 0xA);
        func_8005D80C(2, D_8004D344, 0x10, 8, 4, 0xA);
        func_8005D80C(2, D_8004D350, 0x10, 8, 0x1C, 0xA);
        func_800A8560(arg0->unk8B);
        arg0->unk74 = func_800A6664;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6664);

void func_800A6948(Obj8004DEB0 *arg0) {
    func_800506EC(0xA);
    func_8005015C(9)->unk1 = 1;
    func_8005C2D0(0xA0, 0x88, 0x88, 0x30, 9);
    arg0->unk74 = func_800A69AC;
}

void func_800A69AC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800505F0(4, 0x15);
        arg0->unk74 = func_800A57F0;
    }
}

void func_800A6A04(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80052134(arg0, func_800A6AC4);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A6A64(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800AEB30(arg0, func_800A6AC4);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A6AC4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        D_801A2574 = 2;
        func_800A5368();
        arg0->unk74 = func_800A6B24;
    }
}

void func_800A6B24(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A546C(arg0);
        func_800505F0(4, 0x10);
        arg0->unk74 = func_800A6520;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6B88);

void func_800A6C68(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005D71C();
        func_8005DD38(0x3C0, 0x10, 0xF);
        func_8005DE08(0x3C0, 0x28, 0xF);
        func_80072838();
        if (D_80039CA2 == 0) {
            func_8007D738(arg0, (s32)func_800A6D24);
        } else {
            func_8007CFC0(arg0, (s32)func_800A6D24);
        }
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6D24);

void func_800A6DA4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800A5368();
        arg0->unk74 = func_800A6DFC;
    }
}

void func_800A6DFC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A546C(arg0);
        arg0->unk74 = func_800A57F0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6E54);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A6EA0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7028);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A70EC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7160);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7244);

void func_800A730C(Obj8004DEB0 *arg0) {
    D_8017F4B9 = 0x41;
    D_8017F4BA = 0x43;
    D_8017F4B1 = 0;
    D_8017F4B2 = 0;
    D_8017F4BB = 0;
    D_8017F4BC = 0;
    D_8017F4BD = 0;
    D_8017F4BE = 0;
    D_8017F4BF = 0;
    D_8017F4B8 = 0;
    D_800BDCCC = 0;
    arg0->unk74 = func_800A737C;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A737C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A74A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A74B4);

void func_800A7550(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_800A75A0;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A75A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A771C);

void func_800A779C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005D754(1, D_800BDCFC, 4, 2, 8);
        arg0->unk74 = func_800A7808;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7808);

void func_800A7818(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_800A7880, D_8004D388, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A7880(void) {
    func_800A6EA0();
}

void func_800A78A0(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_800A7908, D_8004D388, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A7908(void) {
    func_800A6EA0();
}

void func_800A7928(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_8005DED8(arg0, func_800A7990, D_8004D388, 0xC);
        arg0->unk74 = func_800507FC;
    }
}

void func_800A7990(void) {
    func_800A6EA0();
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A79B0);

void func_800A7A44(Obj800A7A44 *arg0) {
    arg0->unk4C = arg0->unk7C->unk8A * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A7A68);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8560);

void func_800A85F4(Obj80056FC4 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A8618);

u8 func_800A869C(s32 arg0) {
    return func_800A86D0(D_801F07E8, D_801BC448, arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A86D0);

void func_800A88F8(void) {
    Obj800A8974 *obj;

    obj = func_800501BC(0);
    obj->unk70 = func_800A88F8;
    obj->unk74 = func_800A89C0;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
    func_800A8974(obj);
    func_80051450(4, 6);
    func_8005CC48();
    D_801A2574 = 2;
}

void func_800A8974(Obj800A8974 *arg0) {
    arg0->unk81 = 1;
    arg0->unk80 = 0;
    arg0->unk7C = 0;
    func_8005B648(0, 0, 0x140, 0xF0, 1, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A89C0);

void func_800A8FFC(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80050AF4(0xF, 1);
        func_80050AF4(0x10, 2);
        func_80051450(4, D_80039CAE - 0x17);
        arg0->unk74 = func_800A9070;
    }
}

void func_800A9068(void) {
}

void func_800A9070(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_800A9068();
        func_8005EB80(1);
        func_80074A18();
        func_80073740();
        arg0->unk74 = func_800A90D0;
    }
}

void func_800A90D0(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80073904();
        arg0->unk74 = func_800A9118;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9118);

void func_800A94F4(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_80073904();
        arg0->unk74 = func_800A953C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A953C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800A9614);

void func_800A96E8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A9740(arg0);
        arg0->unk74 = func_800A9AFC;
    }
}

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

void func_800AB8D8(void) {
    if (func_800517C8() != 0) {
        func_80051628();
        while (func_800517C8() != 0) {
        }
    }
    func_80051450(4, D_80039CAE - 0x17);
}

void func_800AB938(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800AB99C(arg0);
        func_800505F0(4, 0x10);
        arg0->unk74 = func_800ABB10;
    }
}

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

void func_800ACBDC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        VSync(4);
        func_8008405C(arg0, func_800AD780);
        arg0->unk74 = func_800507FC;
    }
}

void func_800ACC44(Obj8004DEB0 *arg0) {
    func_8005BA2C(0x88, 0xA8, 0x88, 0x30, 0xD, 0, 0);
    SsUtKeyOn(D_801A2318, 0, 6, 0x3C, 0, 0x7F, 0x7F);
    arg0->unk74 = func_800ACCC0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACCC0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ACDBC);

void func_800AD0D8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_80052134(arg0, func_800AD198);
        arg0->unk74 = func_800507FC;
    }
}

void func_800AD138(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800AEB30(arg0, func_800AD198);
        arg0->unk74 = func_800507FC;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD198);

void func_800AD2D8(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A9740(arg0);
        func_800AB99C(arg0);
        func_800505F0(4, 0x10);
        func_800505F0(0xA, 0x10);
        arg0->unk74 = func_800ACC44;
    }
}

void func_800AD350(Obj8004DEB0 *arg0) {
    func_800506EC(0xE);
    func_8005015C(0xD)->unk1 = 1;
    func_8005C2D0(0x88, 0xA8, 0x88, 0x30, 0xD);
    arg0->unk74 = func_800AD3B4;
}

void func_800AD3B4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800505F0(0xA, 0x15);
        arg0->unk74 = func_800ABB10;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD40C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD4F8);

void func_800AD730(Obj8004DEB0 *arg0) {
    if (func_800517C8() == 0) {
        func_800744A8(arg0, func_800AD780, 1);
        arg0->unk74 = func_800507FC;
    }
}

void func_800AD780(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800A9614();
        func_8005BA2C(0x48, 0x50, 0x88, 0x78, 9, 0, 0);
        arg0->unk74 = func_800AD7FC;
    }
}

void func_800AD7FC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_800A9740(arg0);
        func_800AB99C(arg0);
        func_800505F0(4, 0x10);
        arg0->unk74 = func_800ABB10;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD868);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AD96C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADB40);

void func_800ADC20(Obj800702A8 *arg0) {
    arg0->unk4C = arg0->unk82 + *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADC4C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADD70);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800ADE38);

void func_800AE128(Obj8005DCDC *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        *arg0->unk90 = arg0->unk96;
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE184);

void func_800AE30C(void) {
    Obj8004DEB0 *obj;

    D_801A2308 = 1;
    obj = func_800501BC(D_801A230B);
    obj->unk70 = func_800AE30C;
    obj->unk74 = func_800AE370;
    obj->unk78 = func_800507F4;
    obj->unk2 = 0;
    obj->unk3 = 0;
    obj->unk6C = 0;
    obj->unk5 = 0;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE370);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE418);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE644);

void func_800AE75C(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE7A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE838);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AE99C);

void func_800AEA40(Obj80056FC4 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEA64);

void func_800AEB0C(Obj80056FC4 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEB30);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEBF4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEC84);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEEDC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AEF2C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF374);

void func_800AF410(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_800507FC;
        func_800B04BC(arg0, func_800AF470);
    }
}

void func_800AF470(Obj8004DEB0 *arg0) {
    func_800AEBF4();
    arg0->unk88 = 4;
    arg0->unk74 = func_800AEC84;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF4AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF548);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF5CC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF658);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AF740);

void func_800AFA00(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk74 = func_800AEF2C;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFA50);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFAD8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFBFC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800AFEB4);

void func_800AFFD4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005BA2C) == &D_801BC4F8) {
        func_8005D754(3, &D_800BDE00, 0, 0, 8);
        func_800B0400(&arg0->unk85);
        arg0->unk74 = func_800B0048;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0048);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B02D0);

void func_800B03A4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk7C->unk74 = arg0->unk80;
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0400);

void func_800B04A0(Obj800702A8 *arg0) {
    arg0->unk48 = *arg0->unk7C + 7;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B04BC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0598);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B0CF0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B146C);

void func_800B1924(Obj800B1924 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        arg0->unk80->unk74 = arg0->unk84;
        func_800AE838();
        arg0->unk1 = 1;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1980);

void func_800B1A44(Obj80056FC4 *arg0) {
    arg0->unk48 = *arg0->unk7C * 0x90;
    arg0->unk4C = *arg0->unk80 * 0x10 + 0xC;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1A80);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1B08);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1C18);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1ED0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1F20);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B1F74);

void func_800B2018(Obj80056FC4 *arg0) {
    arg0->unk4C = *arg0->unk7C * 0x18;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B203C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B20A4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2398);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2584);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B26C8);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B27A0);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B29AC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2AC4);

void func_800B2EC4(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        D_801A2574 = 0;
        arg0->unk1 = 1;
        func_8004EFE8();
    }
}

s32 func_800B2F18(u16 arg0) {
    Obj800513F0 loc;
    s32 a;
    s32 b;

    a = func_80015C9C(4, arg0, &loc);
    b = func_80050FC4(a);
    func_80015B78(0x10, &loc, a, b, 0);
    return b;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B2F74);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3010);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3168);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B32D4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3414);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3748);

void func_800B3E7C(Obj8004DEB0 *arg0) {
    if (arg0->unk6C == 0) {
        arg0->unk42 = 0x100;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B3E98);

void func_800B3FFC(Obj8004DEB0 *arg0) {
    if (func_80050078(func_8005C2D0) == &D_801BC4F8) {
        func_800B2584(arg0);
        arg0->unk74 = func_800B26C8;
    }
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4054);

s32 func_800B4370(u8 *arg0) {
    s32 sum;
    u32 i;

    sum = 0;
    for (i = 0; i < 0x38E2; i++) {
        sum += *arg0++;
    }
    return sum;
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4398);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B498C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4BD4);

void func_800B4E84(s32 arg0) {
    if (arg0 == 0) {
        ResetCallback();
    }
    func_800B514C(arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4EBC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4F48);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4FE4);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B4FF0);

void func_800B506C(void) {
    func_800B52DC();
}

s32 func_800B508C(s32 arg0) {
    s32 ret;

    if (arg0 == 0) {
        ret = func_800B536C();
    } else {
        ret = (func_800B549C() >> 0x1D) & 1;
    }
    return ret;
}

s32 func_800B50C8(s32 arg0) {
    s32 ret;

    if (arg0 == 0) {
        ret = func_800B5404();
    } else {
        ret = (func_800B549C() >> 0x18) & 1;
    }
    return ret;
}

void func_800B5104(s32 arg0) {
    DMACallback(0, arg0);
}

void func_800B5128(s32 arg0) {
    DMACallback(1, arg0);
}

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B514C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5248);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B52DC);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B536C);

INCLUDE_ASM("asm/USA/fdat201/nonmatchings/fdat201", func_800B5404);

u32 func_800B549C(void) {
    return *D_800BE350;
}

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
