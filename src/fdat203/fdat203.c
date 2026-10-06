#include "common.h"
#include "fdat203.h"

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004BE10);

void func_8004BE54(void) {
    D_800895C8 = 0;
    func_800309A8(4, 0, func_8004BE10);
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004BE88);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004BEB0);

void func_8004BF6C(s32 arg0) {
    D_8019B48C = arg0;
    if (D_8019B490 == 0) {
        D_8019B490 = 0x5A;
    }
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004BF94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004C938);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004C9B0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004CA5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004CB24);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004CB60);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004CB94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004CE38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D04C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D090);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D114);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D184);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D1D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D1FC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D23C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D260);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D394);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D640);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D6E4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D774);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004D82C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004DB64);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004DB90);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004DC38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004DD34);

void func_8004DED8(void) {
    if (D_80041BC0 == 0) {
        func_8004DB64(0);
    } else {
        func_8004DB90();
    }
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004DF14);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E0A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E0C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E170);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E214);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E288);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004E448);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EBA8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EC58);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004ECB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004ECEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004ECF8);

s32 func_8004EE14(Obj8004EE14 *arg0) {
    s32 tbl;

    if (arg0->unkC > 0) {
        tbl = (s32)arg0->unk1C;
        return arg0->unkA >= ((Elem8004EE14 *)(((Sub8004EE14 *)tbl)->unkC[arg0->unk0] + tbl))->unk10 - 1;
    }
    return arg0->unkA < 1;
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EE68);

void func_8004EEC4(Obj8004EE14 *arg0) {
    s32 tbl;
    s16 step;
    s16 pos;
    s16 pos2;

    step = arg0->unkC;
    if (step > 0) {
        tbl = (s32)arg0->unk1C;
        pos = arg0->unkA;
        if (pos < ((Elem8004EE14 *)(((Sub8004EE14 *)tbl)->unkC[arg0->unk0] + tbl))->unk10 - 1) {
            arg0->unkA = pos + step;
        }
    } else {
        pos2 = arg0->unkA;
        if (pos2 > 0) {
            arg0->unkA = pos2 + step;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EF38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EF78);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004EFC8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F190);

void func_8004F1D4(Obj8004EE14 *arg0, Sub8004F1D4 *arg1) {
    arg1->unk0 = func_8004F190(&arg0->unk20[0], arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004F190(&arg0->unk20[1], arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004F190(&arg0->unk20[2], arg1->unk4, arg0->unk3);
}

s32 func_8004F240(Obj8004EE14 *arg0, Sub8004F1D4 *arg1) {
    u8 count;

    func_8004EFC8();
    func_8004EE68(arg0);
    func_8004F1D4(arg0, arg1);
    count = arg0->unk2 - 1;
    arg0->unk2 = count;
    return count;
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F29C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F2F0);

void func_8004F3BC(void) {
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F3C4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F4E0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004F7C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004FB8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004FBDC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004FC6C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004FD18);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8004FE84);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005034C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800506A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800507B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80050858);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80050998);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80050AF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80050D78);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80051B84);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80051E1C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800520B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005218C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052218);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052238);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005267C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800526C4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052960);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800529A8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800529D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052BF4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052CE0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80052D18);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053008);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053084);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800531F8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053244);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053304);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005334C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053450);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800539A8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80053DEC);

void func_80054008(Elem80054008 *arg0, s32 arg1) {
    s32 unused[2];
    Elem80054008 *p;
    s32 i;

    p = arg0;
    i = arg1 - 1;
    if (arg1 != 0) {
        do {
            func_80053DEC(p);
            i--;
            p++;
        } while (i != -1);
    }
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005405C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800540DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005414C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055238);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055268);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800552A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800552F0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055360);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800553CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055420);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800557B4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005581C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055880);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800558B4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800559D4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055AF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055D00);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055DD8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80055EA8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056354);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056450);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800564CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056550);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005662C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056668);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800567D0);

void func_80056B30(void) {
    s32 i;
    Elem80056B30 *p;

    i = 8;
    p = D_801A3E2C;
    do {
        p->unk0 = 0xFF;
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056B58);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056BEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056C84);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056CA4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056D5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80056ED4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80057390);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800573D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800573FC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80057640);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80057964);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80057A18);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80057A3C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800584F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800587F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058AB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058AD8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058B0C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058B30);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058B68);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80058B88);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80059D20);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80059D54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80059F6C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005A980);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005AB14);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005ABC0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005B7AC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005B7D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005B7F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005B810);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005C020);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005C100);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005C2F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005C82C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005CAE0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005CB8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005D15C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005D500);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005D66C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005D8B4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005DC1C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005DCF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005DE24);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005DFF8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005E19C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005E1C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005E370);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005E758);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005EAEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005EDFC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005F3B0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005FA5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005FCD8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8005FFE4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80060020);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80060374);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800608C4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80060B3C);

s32 func_80061338(s32 arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006137C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800614C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80061A44);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80061C54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80061CA8);

void func_80061D7C(void) {
    func_80061CA8(0, 1, 8, (func_8002701C(D_801A3DA4 << 9) + 0x1400) >> 1);
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80061DBC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80061F4C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80062020);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006249C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800624E8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006250C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006252C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80062E78);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063034);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063088);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063A88);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063AAC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063AC8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063AEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063B0C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80063B24);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064088);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800640DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064158);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064204);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064228);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006424C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064268);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064D58);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80064E8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80065198);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800654E8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006550C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80065540);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80065564);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006559C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800655BC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80066744);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006676C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80066950);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80066F54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006704C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80067080);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800672F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80067324);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80067344);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006735C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80067EB0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80067EE4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80068158);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80068180);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800681A0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800681B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80068EFC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800693A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800695DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80069C8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80069F30);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80069F50);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80069F68);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006A55C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006A7EC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006A80C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006A824);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006B0D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006B3F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006B414);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006B42C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006BA20);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006BC7C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006BC9C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006BCB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006C560);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006C83C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006C8FC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006C95C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006C9D4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006CA5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006CAC8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006CD98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006CE7C);

void func_8006CEC0(void) {
    func_80015538(D_801DDD18[0], 0, 0x400);
    func_80015538(D_801DDD18[1], 0, 0x400);
    func_80015538(D_801DDD18[2], 0, 0x400);
}

void func_8006CF18(void) {
    func_8006CEC0();
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006CF38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D030);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D084);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D0DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D1A0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D264);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D2F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D394);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D46C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D560);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D7A8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D7D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D7FC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006D820);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006DB54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006DBB8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006DC20);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006DC58);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006DE94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E210);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E380);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E3AC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E3D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E410);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E5B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E684);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E764);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006E85C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006EB24);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006EBC0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006EDB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006EE98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006EEF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F00C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F0F0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F2B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F2DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F3C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F4EC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006F95C);

s32 func_8006FD84(Obj8006FD84 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg1 < 8 && arg2 < 8 && arg3 < 8) {
        return arg0->unk4[arg1] & arg0->unk24[arg2] & arg0->unk44[arg3];
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8006FDDC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800702B4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070398);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007050C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800705A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800705C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070848);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070994);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070AEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070C38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070C88);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80070E60);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800710D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80071148);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80071198);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800714A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80071504);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80071638);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800718CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80071D84);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072460);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072488);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800724F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007256C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800726D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007275C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007291C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800729F8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072A30);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072A98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072AB8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072AEC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072B20);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072B30);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072B40);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072BDC);

void func_80072C34(void) {
    func_80015538(D_8019B550, 0, 0xB8);
    D_8019D830 = &D_8019B550[0xB8];
    D_8019D83C = 0;
    func_80072B20(0);
    D_8019D840 = 0;
    func_80072B30(0);
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072C98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80072FAC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073008);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800730CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800731C8);

void func_800732FC(Obj800732FC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, ...) {
    func_80055420(arg0->unk60, arg0->unkE + 0x80, &arg0->unk8, &arg0->unk10, arg1, arg2, arg3, arg4, (s32 *)(&arg4 + 1));
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007334C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073454);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007352C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800736CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800739CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073CD0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073D5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073E34);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80073FAC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074030);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007408C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074198);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074250);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800744D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074518);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074724);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007475C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074798);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800747D4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074810);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007484C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074888);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800748BC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074940);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074C34);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074D40);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074D94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074DF8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074E5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074EB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074F0C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074F64);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80074FC4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007502C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800750D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075174);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075244);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800752C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800752F8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075368);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800753D8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075460);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075558);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075804);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075914);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800759C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075AA0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075BA0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075CE0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80075EF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800760AC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80076338);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80076638);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007668C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800768F8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80076EBC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80076F38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80076FA0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007707C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077148);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800771CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077248);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800772E8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007738C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077798);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077854);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007785C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077894);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077A7C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077AF8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077B9C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077C48);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077C80);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80077E10);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800780C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800781BC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800781F0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078258);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078344);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800783C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007843C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800785AC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078688);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800786E0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078748);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800787B0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007888C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800788C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800789A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800789D8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078B0C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078B38);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078BA8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078BCC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078BF8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078C14);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078C30);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078C50);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078C6C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078C8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078D08);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078E24);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80078FE4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80079144);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80079624);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800797D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80079C94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A09C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A3C8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A448);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A4F8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A590);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007A5EC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007AB4C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007B27C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007B2DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007B318);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007B8CC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007BBC4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007BE54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007C740);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007CB08);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007CB90);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007D704);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007DA1C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007DB6C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007F414);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007F938);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007F958);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007F9D8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007FCCC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8007FF5C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008001C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80080FE4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800812B0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80081358);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008182C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800818C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80081914);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008196C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80081AE0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80081C9C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008223C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80082284);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800823E4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800825D4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80082648);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800826BC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800829E4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80082C4C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80082EA4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80082FC0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083744);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083804);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083A58);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083B8C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083E54);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083EE8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80083FD4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084040);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084080);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084100);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800841BC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008422C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084410);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084498);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800844D8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084548);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800845F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800846C0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800847A8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084B44);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084D98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80084F94);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800850F4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085244);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008539C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085500);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008569C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085784);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085870);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085948);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085A88);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085BCC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085D1C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085E78);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085EB4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80085F98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800860A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80086444);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800865D8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800866D0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80086714);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80086874);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80086A98);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80086D68);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800870B8);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80087310);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80087660);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008792C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80087E08);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088038);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088130);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008825C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800882D4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088404);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088550);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088694);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008872C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800887F0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800888DC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800889E0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088A90);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088B78);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088C28);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088C8C);

void func_80088CF4(void) {
}

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088CFC);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088D2C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088F84);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80088FF0);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800890A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_8008920C);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80089310);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80089330);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800893A4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80089420);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800894B4);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_80089558);

INCLUDE_ASM("asm/USA/fdat203/nonmatchings/fdat203", func_800895A4);
