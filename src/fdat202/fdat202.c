#include "common.h"
#include "fdat202.h"

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C1BC);

void func_8004C200(void) {
    D_8008D920 = 0;
    func_800309A8(4, 0, func_8004C1BC);
}

void func_8004C234(void) {
    func_800309A8(4, 0, NULL);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C25C);

void func_8004C318(s32 arg0) {
    D_8019F524 = arg0;
    if (D_8019F528 == 0) {
        D_8019F528 = 100;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C340);

void func_8004C730(void) {
    s32 ff;
    s32 f0;

    ff = 0xFF;
    D_80041BCE = ff;
    D_80041BCD = ff;
    D_80041BCC = ff;
    D_80041BCB = ff;
    D_80041BCA = ff;
    D_80041BC9 = ff;
    f0 = 0xF0;
    D_80041BC8 = ff;
    D_80041BA0 = 0;
    D_80041BC2 = f0;
    D_80041BBB = D_80041BB8;
    D_80041BBD = D_80041BBA;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C7A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C854);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C91C);

void func_8004C958(void) {
    func_8001EE10(0, 0);
    func_80016DA8();
    func_8001C1F0();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C98C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CC30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CE44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CE88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CF0C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CF7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CFC8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CFF4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D020);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D044);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D178);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D424);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D4C8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D558);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D610);

void func_8004D948(s16 arg0) {
    func_80020440(0, arg0, arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D974);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DA1C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DB18);

void func_8004DCBC(void) {
    if (D_80041BC0 == 0) {
        func_8004D948(0);
        return;
    }
    func_8004D974();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DCF8);

void func_8004DE88(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    arg1->unk0 = arg0->unk20.unk0;
    arg1->unk2 = arg0->unk28.unk0;
    arg1->unk4 = arg0->unk30.unk0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DEAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DF54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DFF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E06C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E22C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E98C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EA3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EA98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EAD0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EBF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EC4C);

void func_8004ECA8(Sub8007618C *arg0) {
    s16 step;
    s16 cur;
    s16 cur2;
    Sub8004ECA8 *tbl;

    step = arg0->unkC;
    if (step > 0) {
        tbl = arg0->unk1C;
        cur = arg0->unkA;
        if (cur < ((Elem8004ECA8 *)(tbl->unkC[arg0->unk0] + (s32)tbl))->unk10 - 1) {
            arg0->unkA = cur + step;
        }
    } else {
        cur2 = arg0->unkA;
        if (cur2 > 0) {
            arg0->unkA = cur2 + step;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004ED1C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004ED5C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EDAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EF74);

s32 func_8004EFB8(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    arg1->unk0 = func_8004EF74(&arg0->unk20, arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004EF74(&arg0->unk28, arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004EF74(&arg0->unk30, arg1->unk4, arg0->unk3);
}

s32 func_8004F024(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    u8 n;

    func_8004EDAC(arg0, arg1);
    func_8004EC4C(arg0);
    func_8004EFB8(arg0, arg1);
    n = arg0->unk2 - 1;
    arg0->unk2 = n;
    return n & 0xFF;
}

s32 func_8004F080(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    u8 n;

    func_8004ECA8(arg0);
    func_8004EFB8(arg0, arg1);
    n = arg0->unk2 - 1;
    arg0->unk2 = n;
    return n & 0xFF;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004F0D4);

void func_8004F1A0(void) {
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004F1A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004F508);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FA44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FD9C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FEAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FF48);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80050088);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800501DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80050468);

void func_80051148(void) {
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051150);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800513EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800514C0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005154C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005156C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800519B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800519F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051C94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051CDC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051D04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051F28);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052010);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052048);

s32 func_80052338(void) {
    return D_801ED844->unk10 == 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052350);

void func_8005239C(s16 arg0) {
    D_801ED848 = arg0;
    D_801ED84A = 0;
    D_801ED84C = 0;
}

Elem80052338 *func_800523BC(Elem80052338 *arg0) {
    arg0++;
    if (arg0 == D_801ED840) {
        arg0 -= 8;
    }
    return arg0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800523DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052440);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052650);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005277C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800529F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052A2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052B28);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052F90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053020);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053190);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005360C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053688);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800537FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053848);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053908);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053950);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053A54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053FAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800543F0);

void func_8005460C(Elem8005460C *arg0, s32 arg1) {
    s32 i;
    Elem8005460C *p;
    s32 unused[2];

    p = arg0;
    i = arg1 - 1;
    if (arg1 != 0) {
        do {
            func_800543F0(p);
            i--;
            p++;
        } while (i != -1);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80054660);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800546E0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80054750);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005583C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005586C);

void func_800558A8(Obj800558A8 *arg0) {
    arg0->unk0 = 0;
    *arg0->unk24 = 0;
    if (arg0->unk20 != NULL) {
        func_80016114(arg0->unk20);
        arg0->unk20 = NULL;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800558F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055964);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800559D0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055A24);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055DB8);

void func_80055E20(Obj80055E20 *arg0, u8 *arg1) {
    u32 idx;
    s16 v;
    Elem8005460C *e;

    if (arg0 != NULL) {
        idx = *arg1++;
        if (idx != 0xFF) {
            do {
                e = &arg0->unk20[idx];
                v = e->unk12;
                if (v >= 0) {
                    e->unk12 = v - 0x1000;
                }
                idx = *arg1++;
            } while (idx != 0xFF);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055E84);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055EB8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055FD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800560F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056304);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800563DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800564AC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056958);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056A54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056AD0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056B54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056C30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056C6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056DD4);

void func_80057134(void) {
    s32 i;
    Elem80057134 *p;
    s32 ff;

    i = 8;
    p = D_801AC8A4;
    ff = 0xFF;
    do {
        p->unk0 = ff;
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005715C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800571F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057288);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800572A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057360);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800574D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057994);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800579D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057A00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057C44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057F74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80058028);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005804C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80058B04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80058E04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800590C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800590E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005911C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80059140);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80059178);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80059198);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005A330);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005A364);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005A57C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005AF90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005B124);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005B1D0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BDBC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BDE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BE04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BE20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005C630);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005C710);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005C904);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005CE3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005D0F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005D19C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005D76C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DB10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DC7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DEC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E22C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E300);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E434);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E604);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E7D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E97C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E9A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005EB50);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005EF38);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005F2CC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005F5DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005FB90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006023C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800604B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800607C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80060800);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80060B54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800610A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006131C);

s32 func_80061F00(s32 arg0, s32 arg1) {
    s32 flags;

    flags = 1;
    if (arg0 >= -0xA0) {
        flags = (arg0 >= 0xA0) * 2;
    }
    if (arg1 < -0x78) {
        flags |= 4;
    } else if (arg1 >= 0x78) {
        flags |= 8;
    }
    return flags;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80061F44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062090);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006260C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006280C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062860);

void func_80062934(void) {
    func_80062860(0, 1, 8, (func_8002701C(D_801AC81C << 9) + 0x1400) >> 1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062974);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062B04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062BD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062FFC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063048);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006306C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006308C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800639D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063B94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063BE8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800645E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006460C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064628);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006464C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006466C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064684);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064BE8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064C3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064CB8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064D64);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064D88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064DAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064DC8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800658B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800659EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80065CF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80066048);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006606C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006611C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800672A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800672CC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800674B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067AB4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067BAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067BE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067E54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067E84);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067EA4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067EBC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068A10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068A44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068CB8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068CE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068D00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068D18);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80069A5C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80069F04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006A13C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006A7EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006AA90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006AAB0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006AAC8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B0BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B34C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B36C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B384);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BC30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BF54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BF74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BF8C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C580);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C7DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C7FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C814);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D0C0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D39C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D45C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D4BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D534);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D5BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D628);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D8F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D9DC);

void func_8006DA20(void) {
    func_80015538(D_801EA790[0], 0, 0x400);
    func_80015538(D_801EA790[1], 0, 0x400);
    do { } while (0);
    func_80015538(D_801EA790[2], 0, 0x400);
}

void func_8006DA78(void) {
    func_8006DA20();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DA98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DB90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DBE4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DC3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DD00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DDC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DE54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DEF4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DFCC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E0C0);

void func_8006E308(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] |= 1 << (arg1 & 0x1F);
}

void func_8006E330(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] &= ~(1 << (arg1 & 0x1F));
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E35C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E380);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E6B4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E718);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E780);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E7B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E7D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E8D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006EB10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006EE8C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006EFFC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F028);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F04C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F08C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F234);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F300);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F3E0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F4D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F7A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F83C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FA30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FB14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FB6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FC88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FD6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FF34);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FF58);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007003C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070168);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800705D8);

s32 func_80070A00(Obj80070A00 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg1 < 8 && arg2 < 8 && arg3 < 8) {
        return arg0->unk4[arg1] & arg0->unk24[arg2] & arg0->unk44[arg3];
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070A58);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070F30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071014);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071188);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071220);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071244);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800714C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071610);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071768);

void func_800718B4(Obj800718B4 *arg0) {
    s32 a;
    s32 b;

    a = arg0->unk0;
    b = arg0->unkC;
    if (b < a) {
        arg0->unk0 = b;
        arg0->unkC = (s16)a;
    }
    a = arg0->unk8;
    b = arg0->unk14;
    if (b < a) {
        arg0->unk8 = b;
        arg0->unk14 = (s16)a;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071904);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071ADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071D4C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071DC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071E14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072120);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072180);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800722B4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072548);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072A00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800730DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073104);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073170);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800731E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007334C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800733D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073598);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073674);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800736AC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073714);

u16 func_80073904(void) {
    return func_8001628C();
}

s32 func_80073924(s32 arg0) {
    return (func_8001628C() & 0xFFFF) - (arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073958);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007398C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007399C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800739AC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073AD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073B74);

void func_80073BC8(void) {
    func_80015538(D_801A26B8, 0, 0x5C0);
    D_801A5DB8 = D_801A26B8;
    D_801A5DB8 = D_801A5DB8 + 0x5C0;
    D_801A5DC4 = 0;
    func_8007398C(0);
    D_801A5DC8 = 0;
    func_8007399C(0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073C2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073F38);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074280);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800742DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800743A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007449C);

void func_800745D0(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4, s32 arg5) {
    func_80055A24(arg0->unk60, arg0->unk8.unk6 + 0x80, &arg0->unk8, &arg0->unk10, arg1, arg2, arg3, arg4, &arg5);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074620);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074728);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074800);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800749A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074CA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074FA4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075030);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075108);

typedef struct {
    u8 flags;
    u8 pad1;
    u16 val;
} Obj80075280;

extern u8 D_80041214;
extern u8 D_80041215;

s32 func_80075280(Obj80075280 *p) {
    s32 v = p->val;

    switch (p->flags & 0x30) {
    case 0x10:
        v = (v * D_80041214) >> 6;
        break;
    case 0x20:
        v = (v * D_80041215) >> 6;
        break;
    }
    return (v * 2) / 3;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800752F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075350);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075418);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800754D0);

s32 func_80075750(Obj80075750 *arg0, s32 arg1) {
    s32 v;

    v = (arg1 * 50) / arg0->unk164;
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x1F) {
        v = 0x1E;
    }
    return v;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075798);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800759A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800759DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A18);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075ACC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075B08);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075B3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075BC0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075EB4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075FC0);

void func_80076014(Obj8007618C *arg0) {
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076078);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800760DC);

void func_80076134(Obj8007618C *arg0) {
    if (func_8004F0D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_8007618C(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_800761E4(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    func_80075B3C(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80076244(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800762AC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076350);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800763F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800764C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076548);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076578);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800765E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076658);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800766E0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800767D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076A84);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076B94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076C48);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076D20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076E20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076F60);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80077170);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007732C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800775B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800778B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007790C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80077B78);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007816C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800781E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078250);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007832C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800783F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007847C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800784F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078598);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007863C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078970);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078A2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078ADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078B14);

void func_80078CFC(u8 *arg0) {
    Obj80078CFC *obj;

    if (arg0 >= D_8019FB68) {
        obj = func_80078A2C();
        if (obj != NULL) {
            func_80078B14(obj, arg0);
            D_8019F51C->unk20[obj->unkE](obj);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078D78);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078E1C);

void func_80078EC8(s32 arg0) {
    s32 temp;

    temp = func_80078ADC();
    if (temp != 0) {
        func_80078D78(temp, arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078F00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007909C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007922C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079370);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079524);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007959C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800796F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079728);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079798);

void func_80079888(Obj8007618C *arg0) {
    func_8004EDAC(&arg0->unk64, &arg0->unk8);
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80079904(Obj8007618C *arg0) {
    func_8004EDAC(&arg0->unk64, &arg0->unk8);
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079980);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079AF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079BB4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079C0C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079C74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079CDC);

void func_80079DB0(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    func_80079CDC(arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079DE4);

void func_80079EC0(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    func_80079DE4(arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079EF4);

void func_8007A02C(Obj8007618C *arg0) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~D_8004125E;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A058);

void func_8007A0C4(Obj8007618C *arg0) {
    arg0->unk15C ^= 1 << D_8004124B;
}

void func_8007A0E4(Obj8007618C *arg0) {
    arg0->unk15C &= ~(1 << D_8004124B);
}

void func_8007A108(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C |= 1 << arg1->unk3;
}

void func_8007A124(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk3;
}

void func_8007A140(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk3);
}

void func_8007A160(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_8007A17C(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_8007A19C(Obj8007618C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(1, &arg0->unk8, 0x50, -0x50);
        return;
    }
    func_8004CC30(0xB, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A218);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A334);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A4F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A654);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007AB04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007ACC0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B160);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B548);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B868);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B8E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B994);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007BA2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007BA98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C02C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C730);

void func_8007C790(Obj8007618C *arg0) {
    arg0->unk15C &= D_8004125E;
    func_8004ED5C(&arg0->unk64);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C7C8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007CD74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007D068);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007D2F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007DB98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007DF08);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007DF98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EAE8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EE44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EF94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008080C);

void func_80080D00(void) {
    func_8007DF98();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80080D20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80080DA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80081088);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80081318);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800813D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008238C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082654);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800826FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082BC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082C58);

void func_80082CAC(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    D_801987DA = arg0;
    D_801987DC = arg1;
    D_801987E0 = arg2;
    D_801987E4 = arg3;
    D_801987DE = arg4;
    D_801987D1 = arg5;
    D_801987D2 = arg6;
    D_801987D4 = arg7;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082D04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082E7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083038);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800835A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800835E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083738);

void func_80083928(Obj80083928 *arg0) {
    u8 count;

    count = arg0->unk21;
    if ((count % arg0->unk1E) == 0) {
        func_80087798(arg0->unk8, arg0, arg0->unk18, arg0->unk1F, count == arg0->unk20);
    }
    arg0->unk21++;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008399C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083A10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083D38);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083FA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800841F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084314);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084A98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084B58);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084DAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084EE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800851A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008523C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085328);

void func_80085394(Obj80085394 *arg0) {
    arg0->unkBA += arg0->unk18;
    arg0->unk18 += arg0->unk1A;
    if ((s16)arg0->unkBA <= arg0->unk1C) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800853D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085454);

void func_80085510(Obj80085510 *arg0) {
    arg0->unk0 += arg0->unk18;
    arg0->unk2 += arg0->unk1A;
    arg0->unk4 += arg0->unk1C;
    arg0->unkC6 += arg0->unk20;
    arg0->unkC8 += arg0->unk22;
    arg0->unkCA += arg0->unk24;
    arg0->unk1A += 6;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085580);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085764);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800857EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008582C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008589C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085948);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085A14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085AFC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085E98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800860EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800862E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086448);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086598);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800866F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086854);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800869F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086AD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086BC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086C9C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086DDC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086F20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087070);

s32 func_800871CC(s32 arg0) {
    return ((func_8002A4A0() * arg0) >> 15) - (arg0 >> 1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087208);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800872EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800873F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087798);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008792C);

void func_80087A24(Obj80087A24 *arg0) {
    arg0->unkBE += arg0->unk1E;
    arg0->unkB8 -= arg0->unk28;
    arg0->unkB9 -= arg0->unk29;
    arg0->unkBA -= arg0->unk2A;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087A68);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087BC8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087DEC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800880BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008840C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80088664);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800889B4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80088C80);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008915C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008938C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089484);

void func_800895B0(Obj800895B0 *arg0) {
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    func_80089484(arg0, arg0->unk24, arg0->unk1A, arg0->unk1C, arg0->unk1E, arg0->unk20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089628);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089758);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800898A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800899E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089A80);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089B44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089C30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089D34);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089DE4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089ECC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089F7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089FE0);

void func_8008A048(s32 arg0) {
    if (D_8019F528 == 0 && arg0 != 0) {
        func_800529F0(0, 0, arg0);
    }
}

void func_8008A080(s32 arg0) {
    if (arg0 != 0) {
        D_80031A94[arg0]++;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A0B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A344);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A3B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A464);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A5CC);

void func_8008A778(s16 arg0, s16 arg1, s8 arg2) {
    D_8019F52C = arg0;
    D_801D0B46 = arg1;
    D_801D0B44 = arg2;
}

void func_8008A798(s32 arg0) {
    s8 v;

    if (arg0 < 0x15) {
        if (arg0 == 0x14) {
            D_801AC8A3 = 0;
            return;
        }
        D_801AC8A3 = 2;
        v = (((0x14 - arg0) << 8) - 0xA) / 20;
        D_801AC8A2 = v;
        D_801AC8A1 = v;
        D_801AC8A0 = v;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A80C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A8F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A9FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AA90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AB68);

void func_8008ABD4(s8 arg0) {
    D_80090922 = arg0;
    D_80090921 = arg0;
    D_80090920 = arg0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008ABF4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008ACE4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AD80);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AE44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AF2C);

void func_8008B320(Obj8008B320 *arg0) {
    s32 sp18[2];
    s32 sp20[2];
    Sub8008B320 *sub;

    sub = arg0->unk4;
    func_8004DEAC(sub->unk64, func_8004E22C(sub->unk64, sub->unk10, sub->unk10, sp18, sp20), sp18, sp20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008B380);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C154);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C178);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C2FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C6FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C7BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C890);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C95C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008CA14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008CB5C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008CC88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008D288);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008D3B0);

s32 func_8008D668(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 val;

    val = arg0 + arg1;
    if (arg1 >= 0) {
        if (arg3 < val) {
            val = arg3;
        }
    } else if (val < arg2) {
        val = arg2;
    }
    return val;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008D69C);

void func_8008D8DC(void) {
    D_801ED794 = 0xFA0;
    D_801ED792 = 0;
    D_801ED790 = 0;
    D_801ED798 = 0x200;
    D_801ED79C = 0;
    D_801ED79A = 0;
}
