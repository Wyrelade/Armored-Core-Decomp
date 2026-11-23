#include "common.h"
#include "fdat052.h"

void func_801C5918(Obj801C5454 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD8E8;
    func_801CC9A8(arg0);
}

INCLUDE_RODATA("asm/USA/fdat052/nonmatchings/fdat052", D_801C4B40);

void func_801C5948(Obj801C5948 *arg0) {
    Elem801C5948 *p;
    Sub801C5948 *t;
    u8 *tbl;
    s32 speed;
    Sub801C7410 vec;
    s16 rise;

    if (arg0->unk40 != 0xFF) {
        t = func_8006D4BC(1);
        if (t != NULL) {
            arg0->unk2E = t->unkE;
        } else {
            arg0->unk2E = 0x7FFF;
        }
        arg0->unk8.unk2 += 0x32;
        if (arg0->unk8.unk2 >= arg0->unk2C) {
            arg0->unk40 = 0;
        }
        if (func_800754D0(arg0, D_801CDF0C) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (arg0->unk44 == 0) {
        arg0->unk42++;
        p = &D_801CDE2C[arg0->unk42];
        arg0->unk44 = p->unk8;
        if (p->unkB != 0xFF) {
            switch (D_8019F518) {
            case 6:
                tbl = D_801CDF34;
                break;
            case 8:
                tbl = D_801CDF38;
                break;
            case 21:
                tbl = D_801CDF3C;
                break;
            case 26:
                tbl = D_801CDF40;
                break;
            case 36:
                tbl = D_801CDF44;
                break;
            default:
                tbl = D_801CDF30;
                break;
            }
            func_800529F0(0, 0, tbl[p->unkB]);
        }
        if (p->unkE != 0) {
            func_8004D178(p->unkE, NULL, 0x7F, 0x7F, 0);
        }
    } else {
        p = &D_801CDE2C[arg0->unk42];
    }
    func_80014728(arg0->unk10.unk2, &vec);
    speed = ((p[-1].unk4 - p->unk4) * arg0->unk44) / p->unk8 + p->unk4;
    arg0->unk8.unk0 += (vec.unk0 * speed) >> 12;
    arg0->unk8.unk4 += (vec.unk4 * speed) >> 12;
    arg0->unk8.unk2 += ((p[-1].unk2 - p->unk2) * arg0->unk44) / p->unk8 + p->unk2;
    arg0->unk10.unk6 = func_8006E6B4(arg0->unk10.unk6, &arg0->unk8);
    func_8004CC30(0x85, D_801A5DC0->unk1000, &arg0->unk8,
                  ((p[-1].unkC - p->unkC) * arg0->unk44) / p->unk8 + p->unkC, 0x32C8, 0x36B0,
                  ((p[-1].unkD - p->unkD) * arg0->unk44) / p->unk8 + p->unkD);
    D_801A5DC8 = 1;
    t = func_80075030(arg0, 0x1800);
    if (t != NULL) {
        arg0->unk2C = t->unkE;
        arg0->unk30 = t->unk4 - D_801D0B68;
    } else {
        arg0->unk2C = 0x7FFF;
        arg0->unk30 = -1;
    }
    D_801A5DC8 = 0;
    switch (p->unkF) {
    case 0:
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 1:
        func_8004E98C(&arg0->unk64, 1, 1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 2:
        func_8004E98C(&arg0->unk64, 1, -1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 3:
        func_8004E98C(&arg0->unk64, 2, 1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    case 4:
        func_8004E98C(&arg0->unk64, 2, -1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    }
    switch (p->unkA) {
    case 0:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        arg0->unk108 = D_801A26B8[0].unk8.unk2 = arg0->unk8.unk2;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk16 = arg0->unk10.unk6;
        break;
    case 1:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk32 = 0;
        D_801A26B8[0].unk36 = 1;
        rise = arg0->unkCC.unk2 + 0x100;
        arg0->unkCC.unk2 = rise;
        D_801A26B8[0].unk8.unk2 = arg0->unk108 += rise >> 6;
        break;
    case 2:
        D_801A26B8[0].unk41 = 0x4B;
        D_8019F524[0] &= ~0x2400;
        D_801987D8[0] &= ~1;
        D_801A26B8[0].unkCC = arg0->unkCC;
        D_8019F52A = 0xFFFE;
        break;
    case 9:
        if ((u16)(arg0->unk8.unk0 + 0x7D00) > 0xFA00 || (u16)(arg0->unk8.unk4 + 0x7D00) > 0xFA00) {
            func_80078E1C(arg0);
        }
        break;
    }
    arg0->unk44--;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5F4C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5FC8);

Obj801C5454 *func_801C60E0(u8 *arg0) {
    Obj801C5454 *obj;

    if (arg0 >= (u8 *)&D_8019FB68) {
        obj = func_80078A2C();
        if (obj != NULL) {
            func_80078B14(obj, arg0);
            obj->unk36 = 2;
            return obj;
        }
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C614C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6760);

void func_801C67F4(Obj801C67F4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk58 = func_801C614C;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = func_801C6760;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
    arg0->unk10B = 0;
    arg0->unk10A = 0;
}

void func_801C6864(Obj801C6864 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CE024;
    func_801CD89C(arg0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6894);

void func_801C6AEC(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6894;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6B28);

void func_801C6C50(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6B28;
}

void func_801C6C8C(Obj801C5F00 *arg0) {
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

void func_801C6CF0(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C90C0 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_80198B08[arg0->unk24];
        do {
            if (elem->unk6 != -1) {
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

void func_801C6D68(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6C8C;
        break;
    case 1:
        task->unk0 = func_801C6CF0;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6DD4);

void func_801C6EB4(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6DD4;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6EF0);

void func_801C720C(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6EF0;
}

void func_801C7248(void) {
}

void func_801C7250(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, (u8 *)&D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unk8.unk6](&D_8019FB68.unk2CC0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C72B4);

void func_801C73A8(s32 *arg0) {
    if (D_801D17AE == -1 && D_801D17EE == D_801D17AE && D_801D182E == D_801D17EE && D_801D186E == D_801D182E) {
        *arg0 += 500;
    }
}

void func_801C7410(Obj801C6864 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7490(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C74B8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 |= 0xF;
    if (arg0->unk15C & arg1->unk38) {
        arg0->unk15C &= ~arg1->unk38;
        arg0->unk14A = 0x3C;
        arg0->unk14B = 0x28;
        arg0->unk14C = 0x14;
    } else {
        arg0->unk15C |= arg1->unk38;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
    }
}

void func_801C7524(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7540(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7560(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C757C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7598(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C75B8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C75D4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C75F4(Obj801C6864 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7B14);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7690);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7848);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7B14);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7E00);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8104);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C83F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C85A8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8884);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C898C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8A5C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8B6C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8D34);

void func_801C90C0(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9120);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C917C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C91D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9418);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9978);

void func_801C9C04(Obj801C52C0 *arg0, Sub801C7DA8 *arg1) {
    Seg801C7DA8 seg;
    Sub801C7410 rot;
    Tbl801C7DA8 *tbl;
    Elem801C52C0 *sub;
    Mdl801C7DA8 *mdl;
    Hdr801C7DA8 *hdr;
    Part801C7DA8 *part;
    Slot801C7DA8 *slot;
    Elem801C7DA8 *elem;
    Obj801C52C0 *target;
    s32 ok;
    s32 scale;
    s32 time;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 hit;
    s32 unused[2];

    tbl = &D_8008E658[arg1->unk2 & 0xF];
    sub = arg0->unk108;
    ok = func_801C9978(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C7DA8 *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
            slot = &part->unk14[arg1->unk4];
            elem = &mdl->unk20[slot->unk0];
            if (elem->unk26 & 4) {
                goto tail;
            }
        }
        if (arg0->unk3F != 0) {
            goto tail;
        }
        if (arg0->unk3E == 0) {
            if (ok == 0) {
                goto tail;
            }
            if (arg1->unkF < (rand() & 0xFF)) {
                goto tail;
            }
            arg0->unk3E = arg1->unk10;
        }
        if (!(arg1->unk2 & 0x40)) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else if (arg0->unk3E & 1) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else {
            hit = func_800745D0(arg0, &seg, arg1->unk7, arg1->unk8, 2, 0, 1);
        }
        if (hit != 0) {
            seg.unk8.unk0 -= seg.unk0.unk0;
            seg.unk8.unk2 -= seg.unk0.unk2;
            seg.unk8.unk4 -= seg.unk0.unk4;
            VectorNormalSS(&seg.unk8, &seg.unk8);
            scale = (arg0->unk108->unk24 * tbl->unk2) >> 8;
            if (scale != 0) {
                arg0->unkCC.unk0 -= (seg.unk8.unk0 * scale) >> 6;
                arg0->unkCC.unk2 -= (seg.unk8.unk2 * scale) >> 6;
                arg0->unkCC.unk4 -= (seg.unk8.unk4 * scale) >> 6;
                if (arg0->unk3D == 2 || arg0->unk3D == 3) {
                    func_801C7690(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CE57C, 0x14, 3, 0x78, &D_801CE580, &D_801CE584, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 1:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 7);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 2:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 6);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 3:
                if (func_800781E8(arg0) == 0) {
                    goto done;
                }
                seg.unk8.unk0 = (seg.unk8.unk0 * 75) >> 9;
                seg.unk8.unk2 = (seg.unk8.unk2 * 75) >> 9;
                seg.unk8.unk4 = (seg.unk8.unk4 * 75) >> 9;
                target = arg0->unk48;
                if (target != NULL) {
                    dx = (target->unk8.unk0 - arg0->unk8.unk0) >> 1;
                    dy = (target->unk8.unk2 - arg0->unk8.unk2) >> 1;
                    dz = (target->unk8.unk4 - arg0->unk8.unk4) >> 1;
                    time = (SquareRoot0(dx * dx + dy * dy + dz * dz) << 2) / 600;
                } else {
                    time = (s16)(arg1->unk12 / 600);
                }
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_80086448(arg0, &arg1->unk22, &seg.unk0, &rot, &seg.unk8, 0x31, 0, time);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 4:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 5);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 5:
                func_8008840C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 6:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 3, 0x31, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 7:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 8:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 2, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 9:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CE588, 0x14, 3, 0x78, &D_801CE58C, &D_801CE590, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            }
        }
    done:
        arg0->unk3E--;
        arg0->unk64.unk1 = arg1->unkC;
        arg0->unk3F = tbl->unk5;
    } else if (ok != 0 && arg0->unk3D != 0xC0 && arg0->unk3C != 0x22) {
        arg0->unk135 = arg1->unkB + 0x2A;
        arg0->unk3C = 0x22;
        arg0->unk133 = 0;
        arg0->unk36 |= 0x10;
    }
tail:
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA3D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA748);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAAC4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAB18);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB028);

void func_801CB374(Obj801C52C0 *arg0) {
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

void func_801CB414(Obj801CB414 *arg0) {
    Elem801C52C0 *elem;

    if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
        if (arg0->unk64.unk0 == 0x16) {
            if (arg0->unk64.unkA == 6) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        } else {
            elem = arg0->unk108;
            if (arg0->unk64.unkA == 0xC) {
                func_80078250(arg0, elem->unk30, elem->unk31, 0, 0x50, 0xC8, 0x41, 0);
            } else if (arg0->unk64.unkA == 5) {
                func_80078250(arg0, elem->unk32, elem->unk33, 0, 0x50, 0xC8, 0x41, 0);
            }
        }
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB550);

void func_801CB678(Obj801CB414 *arg0, s32 arg1) {
    Elem801C52C0 *info;
    s32 state;
    s32 orig;
    s32 hit;
    s32 *flag;
    s32 dir;
    Sub801C7410 pos;

    info = arg0->unk108;
    orig = arg1;
    state = arg1;
    if (arg0->unk36 & 0x10) {
        state = arg0->unk3C;
    }
    if (arg0->unk64.unk0 == 0x16) {
        if (func_8004EAD0(&arg0->unk64) != 0) {
            func_8004DE88(&arg0->unk64, &arg0->unkCC);
            arg0->unkCC.unk0 <<= 6;
            arg0->unkCC.unk2 <<= 6;
            arg0->unkCC.unk4 <<= 6;
            goto fall;
        }
    } else if (info->unk16 != 0 && arg0->unk3D != 0xC0 && (u32)(state - 0x60) >= 2) {
        if (arg0->unk41 != 0x40 || arg0->unk3D != 0xB0) {
            if (arg0->unk2C - arg0->unk8.unk2 < 0x32) {
                goto act;
            }
            pos.unk0 = arg0->unk8.unk0;
            pos.unk2 = arg0->unk8.unk2 + 0x32;
            flag = &D_801A5DC8;
            pos.unk4 = arg0->unk8.unk4;
            *flag = 1;
            hit = func_80074FA4(arg0, &pos);
            *flag = 0;
            if (hit != 0) {
                goto act;
            }
            state = 0x4B;
            arg0->unkCC.unk2 = 0x100;
            arg0->unkCC.unk4 = 0;
            arg0->unkCC.unk0 = 0;
            arg0->unk3C = 0x4B;
            arg0->unk41 = 0x4B;
        }
        arg0->unk148 = 0;
        arg0->unk15C = 0;
        switch (arg0->unk64.unk0) {
        case 1:
        case 2:
        case 0x30:
            func_801C75F4(arg0, 0x1A);
            return;
        case 3:
        case 4:
        case 0x34:
            func_801C75F4(arg0, 0x20);
            return;
        case 5:
        case 6:
        case 0x35:
            func_801C75F4(arg0, 0x21);
            return;
        case 14:
        case 15:
        case 0x31:
            func_801C75F4(arg0, 0x1B);
            return;
        case 16:
        case 17:
        case 0x36:
            func_801C75F4(arg0, 0x22);
            return;
        case 18:
        case 19:
        case 0x37:
            func_801C75F4(arg0, 0x23);
            return;
        case 8:
        case 9:
        case 0x32:
            func_801C75F4(arg0, 0x1C);
            return;
        case 11:
        case 12:
        case 0x33:
            func_801C75F4(arg0, 0x1D);
            return;
        case 0x2D:
        case 0x2E:
            arg0->unk36 &= ~0x10;
            func_801C75F4(arg0, 0x18);
            return;
        }
    }
act:
    switch (state) {
    case 1:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 2, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 1:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 2, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 3:
        case 5:
            func_800766E0(arg0, 1, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 2:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 4, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 3:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 4, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 5:
            func_800766E0(arg0, 3, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 3:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 6, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 5:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 6, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 3:
            func_800766E0(arg0, 5, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 6:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xF, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 14:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xF, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 16:
        case 18:
            func_800766E0(arg0, 0xE, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 7:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x11, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 16:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x11, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 18:
            func_800766E0(arg0, 0x10, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 8:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x13, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 18:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x13, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 16:
            func_800766E0(arg0, 0x12, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 4:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 9, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 8:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 9, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 5:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xC, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 11:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xC, 1, 0, 2, &info->unk1, func_801CB414);
            } else {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CB550(arg0) != 0) {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 0:
        if (func_801CB550(arg0) != 0) {
            func_80076578(arg0, 0, 1, D_80076014);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x40:
        if (arg0->unk3D != 0xC0) {
            if (func_801CB550(arg0) != 0) {
                if (arg0->unk64.unk0 == 0x38) {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                    arg0->unk64.unkE = 0x400;
                } else {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                }
            }
            break;
        }
    fall:
        func_800775B8(arg0, 0x19, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x41:
        func_800775B8(arg0, 0x1A, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x42:
        func_800775B8(arg0, 0x20, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x43:
        func_800775B8(arg0, 0x21, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x44:
        func_800775B8(arg0, 0x1B, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x45:
        func_800775B8(arg0, 0x22, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x46:
        func_800775B8(arg0, 0x23, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x47:
        func_800775B8(arg0, 0x1C, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x48:
        func_800775B8(arg0, 0x1D, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x4B:
        func_800775B8(arg0, 0x18, 1, info->unk22, &arg0->unkCC, func_801C7B14);
        break;
    case 0x60:
        func_801C7490(arg0, info);
        if (arg0->unk64.unk0 != 0x17) {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_8004CE44(0xE, &arg0->unk8, 0x3C, 0);
        }
        switch (orig) {
        case 1:
            func_800766E0(arg0, 2, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 2:
            func_800766E0(arg0, 4, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 3:
            func_800766E0(arg0, 6, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 6:
            func_800766E0(arg0, 0xF, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 7:
            func_800766E0(arg0, 0x11, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 8:
            func_800766E0(arg0, 0x13, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 4:
            func_800766E0(arg0, 9, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 5:
            func_800766E0(arg0, 0xC, 1, 0, 2, info->unk1, func_801CB414);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        default:
            if (arg0->unk64.unk0 == 0x17) {
                if (func_8004EBF8(&arg0->unk64) != 0) {
                    arg0->unk36 &= ~0x10;
                    func_80076578(arg0, 0, 1, D_80076014);
                } else {
                    func_800765E8(arg0, 0x17, 1, D_80076078);
                }
            } else {
                func_800765E8(arg0, 0x17, 1, D_80076078);
                arg0->unkCC = D_80039C78;
            }
            arg0->unk64.unkE = info->unk22;
            break;
        }
        break;
    case 0x61:
        func_801C7490(arg0, info);
        if (arg0->unk64.unk0 == 0x24) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
                func_80076578(arg0, 0, 1, D_80076014);
            } else {
                func_800765E8(arg0, 0x24, 1, D_80076078);
            }
        } else {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_800765E8(arg0, 0x24, 1, D_80076078);
            func_8004EA3C(&arg0->unk64, 1, info->unk9);
            arg0->unkCC = D_80039C78;
            if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        }
        break;
    case 0x30:
        func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x31:
        func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x32:
        func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x35:
        func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x37:
        func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x33:
        func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x34:
        func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x36:
        func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C7E00);
        break;
    case 0x38:
        if (abs(arg0->unkCC.unk0) >= 0x15 || abs(arg0->unkCC.unk4) >= 0x15) {
            dir = -ratan2(arg0->unkCC.unk0, arg0->unkCC.unk4);
            dir = dir - arg0->unk12 + 0x100;
            switch ((dir >> 9) & 7) {
            case 0:
                func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 1:
                func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 2:
                func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 3:
                func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 4:
                func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 5:
                func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 6:
                func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            case 7:
                func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C7E00);
                break;
            }
        } else {
            func_80076578(arg0, 0, 1, D_80076014);
            func_801C7490(arg0, info);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x20:
        if (arg0->unk64.unk0 == 0x38 && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800766E0(arg0, 0x38, 1, 0, 0, NULL, func_801C83F4);
        arg0->unk64.unkE = 0x400;
        break;
    case 0x21:
        if (arg0->unk64.unk0 == 0x2F && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800775B8(arg0, 0x2F, 1, 0x400, &arg0->unkCC, func_801C85A8);
        break;
    case 0x22:
        if ((u8)(arg0->unk64.unk0 - 0x2D) >= 2) {
            arg0->unkCC = D_80039C78;
        }
        func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8884);
        break;
    case 0x23:
        if (arg0->unk64.unkC < 0) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
            }
            func_80077170(arg0, arg0->unk135, -1, &arg0->unkCC, func_801C8884);
        } else {
            func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8884);
            arg0->unk64.unkC = -1;
            arg0->unk64.unk6 = arg0->unk28;
            arg0->unk64.unk8 = arg0->unk2A;
        }
        break;
    case 0x80:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    case 0x81:
        func_800778B8(arg0, arg0->unk64.unk0, 0x400, &arg0->unkCC, -1, func_801C7B14);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = state;
    }
}

void func_801CC9A8(Obj801C6864 *arg0) {
    arg0->unk50 = func_801CB678;
    arg0->unk54 = func_801C9418;
    arg0->unk58 = func_801CAB18;
    arg0->unk5C = func_801CB028;
    func_801CB374(arg0);
}

s32 func_801CC9F4(Obj801C52C0 *arg0) {
    switch (arg0->unk64.unk0) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 9:
    case 12:
    case 15:
    case 17:
    case 19:
        if (arg0->unkCC.unk0 != 0 || arg0->unkCC.unk4 != 0) {
            func_801C7690(arg0, 0, 0, 0x100, &arg0->unkCC);
            return 0;
        }
        break;
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CCA78);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CD804);

void func_801CD89C(Obj801C6864 *arg0) {
    arg0->unk50 = func_801CCA78;
    arg0->unk54 = func_801C9418;
    arg0->unk58 = func_801CD804;
    arg0->unk5C = func_801CB028;
    func_801CB374(arg0);
}
