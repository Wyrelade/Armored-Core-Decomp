#include "common.h"
#include "fdat034.h"

void func_801C52FC(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC4EC;
    func_801CC4A0(arg0);
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C532C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C55F8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5738);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C585C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C59A0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5A10);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5A78);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5AE0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5C8C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5DC8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C5E5C);

void func_801C60B4(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E5C;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C60F0);

void func_801C6218(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C60F0;
}

void func_801C6254(Obj801C52C0 *arg0) {
    Sub801C60B4 *task;
    Sub801C6254 *data;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C62F0);

void func_801C6314(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C60B4 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6254;
    arg0->unk2C->unk4 = func_801C62F0;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6388);

void func_801C6420(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6388;
    arg0->unk2C->unk4 = 0;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6468);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C65A8);

void func_801C65F0(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    if (func_801C65A8(arg0->unk22, arg0->unk24) != 0 && func_801C65A8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6468;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6664);

void func_801C6744(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6664;
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6780);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6A9C);

void func_801C6AD8(void) {
}

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6AE0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6B44);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6C5C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6D24);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6E70);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6F08);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6F88);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C6FB0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C701C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7038);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7058);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7074);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7090);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C70B0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C70CC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C70EC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7188);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7340);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C760C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C78F8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7BFC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C7EEC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C80A0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C837C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8484);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8554);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8664);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C882C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8BB8);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8C18);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8C74);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8CD0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C8F10);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C9470);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C96FC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801C9ED0);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA240);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA5BC);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CA610);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CAB20);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CAE6C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CAF0C);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CB048);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CB170);

INCLUDE_ASM("asm/USA/fdat034/nonmatchings/fdat034", func_801CC4A0);
