#include "game/Unk_020802a0.hpp"
#include "game/Match.hpp"
#include "nitro/mi.h"

extern "C" u16 data_020ca760[];     // (per team)

extern "C" int func_020802a0(MatchPlayer *player);
extern "C" u8 func_020802ac(MatchPlayer *player);
extern "C" void func_020802b8(u16 *list);
extern "C" u16 func_02080328(u16 *list, u32 i);
extern "C" u16 func_0208033c(u16 *list, u32 i);
extern "C" u16 func_0208076c(u16 *list, u32 i);
extern "C" u16 func_02080780(u16 *list, u32 i);
extern "C" u16 func_020807ac(u8 *data);
extern "C" u16 func_020807b4(u8 *data);
extern "C" int func_02080804(MatchPlayer *player);
extern "C" void func_02080830(MatchPlayer *player, int i, u16 a, u16 b);
extern "C" u16 func_020808c4(MatchPlayer *player, int i);
extern "C" int func_02080a80(void);
extern "C" BOOL func_02080aa0(MatchPlayer *player);
extern "C" void func_02080b00(MatchPlayer *player, int value);
extern "C" void func_02080b1c(MatchPlayer *player, int value);
extern "C" BOOL func_02080b38(MatchPlayer *player);
extern "C" void func_02080b54(MatchPlayer *player, int value);
extern "C" u16 func_02080b74(MatchPlayer *player);
extern "C" u8 func_02080b90(MatchPlayer *player);
extern "C" void func_02080c64(MatchPlayer *player, u8 team);
extern "C" u8 func_02080c6c(MatchPlayer *player);
extern "C" void func_02080c74(MatchPlayer *player, u16 flags);
extern "C" void func_02080c84(MatchPlayer *player, int flags);
extern "C" BOOL func_02080ca4(MatchPlayer *player, u16 flag);
extern "C" int func_02080cb8(MatchPlayer *player);
extern "C" int func_02080cc0(MatchPlayer *player);
extern "C" int func_02080cc8(MatchPlayer *player);
extern "C" BOOL func_02080cd0(MatchPlayer *player);
extern "C" BOOL func_02080ce0(MatchPlayer *player);
extern "C" BOOL func_02080cf0(MatchPlayer *player);
extern "C" BOOL func_02080d00(MatchPlayer *player);
extern "C" BOOL func_02080d10(MatchPlayer *player);
extern "C" BOOL func_02080d20(MatchPlayer *player);
extern "C" BOOL func_02080d30(MatchPlayer *player);
extern "C" BOOL func_02080d40(MatchPlayer *player);
extern "C" BOOL func_02080d50(MatchPlayer *player);
extern "C" u8 func_020812f4(MatchPlayer *player);
extern "C" u8 func_020812fc(MatchPlayer *player);
extern "C" u8 func_02081304(MatchPlayer *player);
extern "C" void func_02081390(MatchPlayer *player, u8 value);
extern "C" void func_02081398(MatchPlayer *player, u8 value);
extern "C" void func_020813a0(MatchPlayer *player, u8 value);
extern "C" s32 func_0208164c(s32 *table, int level);
extern "C" u8 func_02081678(u8 *table, int level);
extern "C" void func_0208169c(void *data);
extern "C" void func_020816b0(u8 *bits, int i);
extern "C" void func_020816dc(u8 *bits, int i);

extern "C" char data_020c5320[];
extern "C" char data_020cb6e0[];
extern "C" char data_020e88a0[];
extern "C" s32 _ZN17UnkClass_020621b413func_0206deecEv(...);
extern "C" s32 _ZN17UnkClass_020621b413func_0206df08Ev(...);
extern "C" s32 _ZN17UnkClass_020621b413func_0206f9e0Ev(...);
extern "C" s32 _ZN17UnkClass_020621b413func_020744d4Ev(...);
extern "C" void _ZN17UnkClass_020621b413func_02078844Ev(void);
extern "C" s32 _ZN17UnkClass_020621b413func_0207c1b0Ev(...);
extern "C" void func_0209bf9c(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" void func_ov015_021319fc(void);
extern "C" char gGameState[];

extern "C" int func_020802a0(MatchPlayer *player)
{
    return player->unk_55 >> 5;
}

extern "C" u8 func_020802ac(MatchPlayer *player)
{
    return player->unk_55 & 0x1F;
}

extern "C" void func_020802b8(u16 *list)
{
    MI_CpuFill8(list, 0, 16 * sizeof(u16));
}

extern "C" void func_020802cc(u8 *arg0, s32 arg1, u16 arg2)
{
    s32 r3;
    s32 r4;
    s32 lr;
    if (arg1 < 0)
        return;
    if (arg1 >= 0x10)
        return;
    if ((arg2 & 0xFFF) == 0) {
        arg2 = 0;
    }
    if (arg2 != 0) {
        r4 = 0;
        r3 = 0;
        do {
            lr = (r4 << 1);
            if (arg2 == *(u16 *)(arg0 + lr)) {
                *(u16 *)(arg0 + lr) = r3;
            }
            r4 = (r4 + 1);
        } while (r4 < 0x10);
    }
    *(u16 *)(arg0 + (arg1 << 1)) = arg2;
    return;
}

extern "C" u16 func_02080328(u16 *list, u32 i)
{
    if (i >= 16) {
        return 0;
    }
    return list[i];
}

extern "C" u16 func_0208033c(u16 *list, u32 i)
{
    if (i >= 16) {
        return 0;
    }
    return list[i] & 0xFFF;
}

extern "C" s32 func_02080368(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    r3 = 0;
    do {
        r2 = *(u16 *)(arg0 + (r3 << 1));
        if (r2 != 0) {
            if (arg1 == r2)
                return 1;
        }
        r3 = (r3 + 1);
    } while (r3 < 0x10);
    return 0;
}

extern "C" s32 func_0208039c(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    s32 r12;
    r2 = 0xFFF;
    r3 = 0;
    r12 = ((u16)(arg1 & 0xFFF));
    do {
        arg1 = *(u16 *)(arg0 + (r3 << 1));
        if ((arg1 != 0 && r12 == (arg1 & r2))) {
            return 1;
        } else {
            r3 = (r3 + 1);
        }
    } while (r3 < 0x10);
    return 0;
}

extern "C" s32 func_020803e8(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u16 v0;
    s32 v1;
    r6 = 0;
    r7 = arg0;
    r5 = 0;
    r4 = 0;
    do {
        v0 = func_02080328((u16 *)r7, (u32)r5);
        v1 = func_ov015_02130b14(v0, r4);
        if (v1 != 0) {
            r6 = ((r6 + 1) & 0xFF);
        }
        r5 = (r5 + 1);
    } while (r5 < 0x10);
    return r6;
}

extern "C" s32 func_02080430(u8 *arg0, s32 arg1)
{
    s32 r3;
    r3 = 0;
    do {
        if (arg1 == *(u8 *)(((u8 *)(arg0 + r3)) + 0xA)) {
            return *(u16 *)(arg0 + (r3 << 1));
        } else {
            r3 = (r3 + 1);
        }
    } while (r3 < 0x10);
    return 0;
}

extern "C" asm void func_02080460(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #0
    mov r6, r0
    mov r4, r5
@L_02080470:
    mov r0, r5, lsl #1
    ldrh r0, [r6, r0]
    cmp r0, #0
    beq @L_02080494
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    moveq r0, r5, lsl #1
    streqh r4, [r6, r0]
@L_02080494:
    mov r0, r5, lsl #1
    ldrh r0, [r6, r0]
    cmp r0, #0
    addeq r0, r5, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r5, r5, #1
    cmp r5, #0x10
    blt @L_02080470
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_020804bc(u8 *arg0, s32 arg1, u8 *arg2)
{
    s32 r3;
    s32 r12;
    s32 lr;
    r3 = 0xFFF;
    r12 = 0;
    lr = ((u16)(arg1 & 0xFFF));
    do {
        arg1 = *(u16 *)(arg0 + (r12 << 1));
        if ((arg1 != 0 && lr == (arg1 & r3))) {
            if ((s32)arg2 != 0) {
                *(s32 *)(arg2) = (r12 + 1);
            }
            return 1;
        } else {
            r12 = (r12 + 1);
        }
    } while (r12 < 0xB);
    return 0;
}

extern "C" s32 func_0208051c(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    s32 r12;
    r2 = 0xFFF;
    r3 = 0;
    r12 = ((u16)(arg1 & 0xFFF));
    do {
        arg1 = (*(u16 *)(arg0 + (r3 << 1)) & r2);
        if ((arg1 != 0 && r12 == arg1)) {
            return (r3 + 1);
        } else {
            r3 = (r3 + 1);
        }
    } while (r3 < 0x10);
    return 0;
}

extern "C" s32 func_02080564(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    s32 r12;
    r2 = 0xFFF;
    r12 = 0;
    do {
        r3 = *(u16 *)(arg0 + (r12 << 1));
        if ((r3 & r2) != 0) {
            if (arg1 == r3)
                return (r12 + 1);
        }
        r12 = (r12 + 1);
    } while (r12 < 0x10);
    return 0;
}

extern "C" asm s32 func_020805a0(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    add r12, sp, #0
    mov lr, #0
    strb lr, [r12]
    strb lr, [r12, #1]
    strb lr, [r12, #2]
    strb lr, [r12, #3]
    mov r2, #1
@L_020805c4:
    mov r1, lr, lsl #1
    ldrh r1, [r0, r1]
    add r3, r0, lr
    ldrb r4, [r3, #0xa]
    cmp r1, #0
    bne @L_020805fc
    cmp r4, #1
    blt @L_020805fc
    cmp r4, #4
    movle r1, #0
    addle sp, sp, #4
    movle r0, r4
    strleb r1, [r3, #0xa]
    ldmleia sp!, {r3, r4, pc}
@L_020805fc:
    cmp r4, #1
    blt @L_02080610
    cmp r4, #4
    addle r1, r12, r4
    strleb r2, [r1, #-1]
@L_02080610:
    add lr, lr, #1
    cmp lr, #4
    blt @L_020805c4
    mov r2, #0
    add r1, sp, #0
@L_02080624:
    ldrb r0, [r1, r2]
    cmp r0, #0
    addeq sp, sp, #4
    addeq r0, r2, #1
    ldmeqia sp!, {r3, r4, pc}
    add r2, r2, #1
    cmp r2, #4
    blt @L_02080624
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" s32 func_02080650(s32 arg0, s32 arg1)
{
    s32 r3;
    if ((arg1 <= 0 || arg1 >= 5)) {
        return 0;
    }
    r3 = 0;
    do {
        if (arg1 == *(u8 *)(((u8 *)(arg0 + r3)) + 0xA))
            return 0;
        r3 = (r3 + 1);
    } while (r3 < 4);
    return 1;
}

extern "C" s32 func_02080694(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    if (arg1 < 0)
        return (s32)arg0;
    if (arg1 >= 4)
        return (s32)arg0;
    if (*(u16 *)(arg0 + (arg1 << 1)) == 0)
        return (s32)arg0;
    v0 = func_02080650((s32)arg0, arg2);
    r4 = arg2;
    r5 = arg1;
    r6 = (s32)arg0;
    r7 = arg3;
    if (v0 != 0) {
        *(u8 *)(((u8 *)(r6 + r5)) + 0xA) = r4;
    }
    if (r7 == 0) {
        v1 = func_020805a0(r6);
        *(u8 *)(((u8 *)(r6 + r5)) + 0xA) = v1;
        return v1;
    } else {
        r7 = 0;
        do {
            if (r4 == *(u8 *)(((u8 *)(r6 + r7)) + 0xA))
                break;
            r7 = (r7 + 1);
        } while (r7 < 4);
        *(u8 *)(((u8 *)(r6 + r5)) + 0xA) = r4;
        v2 = func_020805a0(r6, (r6 + r5));
        *(u8 *)(((u8 *)(r6 + r7)) + 0xA) = v2;
        return v2;
    }
}

extern "C" void func_02080730(u8 *arg0, s32 arg1, u16 arg2, s32 arg3)
{
    if (arg1 < 0)
        return;
    if (arg1 >= 4)
        return;
    if ((arg2 & 0xFFF) == 0) {
        arg2 = 0;
    }
    *(u16 *)(arg0 + (arg1 << 1)) = arg2;
    func_02080694(arg0, arg1, arg3, 0);
    return;
}

extern "C" u16 func_0208076c(u16 *list, u32 i)
{
    if (i >= 4) {
        return 0;
    }
    return list[i];
}

extern "C" u16 func_02080780(u16 *list, u32 i)
{
    if (i >= 4) {
        return 0;
    }
    return list[i] & 0xFFF;
}

extern "C" u16 func_020807ac(u8 *data)
{
    return *(u16 *)(data + 8);
}

extern "C" u16 func_020807b4(u8 *data)
{
    return *(u16 *)(data + 8) & 0xFFF;
}

extern "C" s32 func_020807d0(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    r3 = 0;
    do {
        r2 = *(u16 *)(arg0 + (r3 << 1));
        if (r2 != 0) {
            if (arg1 == r2)
                return 1;
        }
        r3 = (r3 + 1);
    } while (r3 < 4);
    return 0;
}

extern "C" int func_02080804(MatchPlayer *player)
{
    int n = 0;
    int i;

    for (i = 4; i < 6; i++) {
        if (player->unk_98[i] != 0) {
            n++;
        }
    }
    return n;
}

extern "C" void func_02080830(MatchPlayer *player, int i, u16 a, u16 b)
{
    player->unk_7c[i * 2] = a;
    player->unk_7c[i * 2 + 1] = b;
}

extern "C" s32 func_0208084c(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    u8 v0;
    if ((arg1 < 0 || arg1 > 6)) {
        return 0;
    } else {
        if ((arg2 < 0 || arg2 > 1)) {
            return 0;
        } else {
            r4 = *(u16 *)(((u8 *)(arg0 + ((arg2 + (arg1 << 1)) << 1))) + 0x7C);
            if ((*(u8 *)(((u8 *)&gGameState) + 0x1B) == 0 && (r4 = (r4 & 0xFFF), r4 != 0))) {
                v0 = func_02080b90((MatchPlayer *)arg0);
                if (v0 == 1) {
                    r4 = (r4 | 0x8000);
                }
            }
            return r4;
        }
    }
}

extern "C" u16 func_020808c4(MatchPlayer *player, int i)
{
    if (i < 0 || i > 6) {
        return 0;
    }
    return player->unk_98[i];
}

extern "C" s32 func_020808e8(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u16 v0;
    u16 v1;
    r4 = 0;
    r5 = 0;
    r6 = arg1;
    r7 = arg0;
    do {
        v0 = func_020808c4((MatchPlayer *)r7, r5);
        if (r6 == v0) {
            return 0;
        } else {
            r5 = (r5 + 1);
        }
    } while (r5 < 4);
    r5 = 0;
    do {
        v1 = func_020808c4((MatchPlayer *)r7, r5);
        if (v1 == 0) {
            *(u16 *)(((u8 *)(r7 + (r5 << 1))) + 0x98) = r6;
            *(u8 *)(((u8 *)(r7 + r5)) + 0xA4) = r4;
            return 1;
        } else {
            r5 = (r5 + 1);
        }
    } while (r5 < 4);
    return 0;
}

extern "C" s32 func_02080964(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    u16 v0;
    u16 v1;
    if ((arg1 != 4 && arg1 != 5))
        return 0;
    if (arg3 == 0) {
        v0 = func_020808c4((MatchPlayer *)arg0, arg1);
        if (v0 != 0)
            return 0;
    }
    r4 = 0;
    r5 = 0;
    r6 = arg2;
    r7 = arg1;
    r8 = arg0;
    do {
        v1 = func_020808c4((MatchPlayer *)r8, r5);
        if (r6 == v1)
            return 0;
        r5 = (r5 + 1);
    } while (r5 < 6);
    *(u16 *)(((u8 *)(r8 + (r7 << 1))) + 0x98) = r6;
    *(u8 *)(((u8 *)(r8 + r7)) + 0xA4) = r4;
    return 1;
}

extern "C" s32 func_020809e8(s32 arg0, s32 arg1)
{
    u16 v0;
    if ((arg1 != 4 && arg1 != 5)) {
        return 0;
    } else {
        v0 = func_020808c4((MatchPlayer *)arg0, arg1);
        if (v0 == 0) {
            return 0;
        } else {
            *(u16 *)(((u8 *)(arg0 + (arg1 << 1))) + 0x98) = 0;
            *(u8 *)(((u8 *)(arg0 + arg1)) + 0xA4) = 0;
            return 1;
        }
    }
}

extern "C" s32 func_02080a38(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 r6;
    u16 v0;
    s32 v1;
    r4 = 0;
    r5 = arg1;
    r6 = arg0;
    do {
        v0 = func_020808c4((MatchPlayer *)r6, r4);
        if (r5 == v0) {
            v1 = ((s32 (*)(...))func_02080a80)(r6, r4);
            return v1;
        } else {
            r4 = (r4 + 1);
        }
    } while (r4 < 6);
    return 0;
}

extern "C" int func_02080a80(void)
{
    return 0;
}

extern "C" void func_02080a88(s32 arg0)
{
    _ZN17UnkClass_020621b413func_020744d4Ev((s32)data_020e88a0, arg0);
}

extern "C" BOOL func_02080aa0(MatchPlayer *player)
{
    BOOL result = FALSE;
    MatchPlayerState *state = player->state;

    if (state != NULL && state->unk_22 > 0) {
        result = TRUE;
    }
    return result;
}

extern "C" asm void func_02080abc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    bl func_02080b38
    cmp r0, #0
    bne @L_02080af8
    ldr r0, [r5, #0xec]
    mov r1, r4
    cmp r0, #0
    beq @L_02080af0
    ldrsh r0, [r0, #0x26]
    cmp r0, #0
    movle r1, #1
@L_02080af0:
    cmp r1, #0
    movne r4, #1
@L_02080af8:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_02080b00(MatchPlayer *player, int value)
{
    if (value > player->unk_d0) {
        value = player->unk_d0;
    }
    if (value < 0) {
        value = 0;
    }
    player->unk_94 = value;
}

extern "C" void func_02080b1c(MatchPlayer *player, int value)
{
    if (value > player->unk_d2) {
        value = player->unk_d2;
    }
    if (value < 0) {
        value = 0;
    }
    player->unk_96 = value;
}

extern "C" BOOL func_02080b38(MatchPlayer *player)
{
    BOOL result = FALSE;
    MatchPlayerState *state = player->state;

    if (state != NULL && state->unk_1e != 0) {
        result = TRUE;
    }
    return result;
}

extern "C" void func_02080b54(MatchPlayer *player, int value)
{
    if (value < 0) {
        return;
    }
    if (value >= 0x34) {
        return;
    }
    if (player->state != NULL) {
        player->state->unk_1c = value;
    }
}

extern "C" u16 func_02080b74(MatchPlayer *player)
{
    return data_020ca760[func_02080b90(player)];
}

extern "C" u8 func_02080b90(MatchPlayer *player)
{
    return player->unk_b6;
}

extern "C" asm void func_02080b98(void)
{
    ldr r1, =gGameState
    ldrh r2, [r0, #0x42]
    ldrb r1, [r1, #0x1b]
    mov r0, #0
    cmp r1, #0
    bxeq lr
    tst r2, #0x1000
    movne r0, #1
    bxne lr
    tst r2, #0x2000
    movne r0, #2
    bxne lr
    tst r2, #0x4000
    movne r0, #3
    bxne lr
    tst r2, #0x8000
    movne r0, #4
    bx lr
}

extern "C" asm void func_02080be4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    ldr r0, =data_020c5320
    bl func_0209bf9c
    mov r5, r0
    mov r0, r4
    bl func_02080b98
    mov r7, r0
    cmp r7, #4
    ldmhsia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, #1
    tst r5, r1, lsl r7
    bne @L_02080c58
    bl func_ov015_021319fc
    mov r8, r0
    mov r6, #0
    mov r4, #1
    b @L_02080c50
@L_02080c2c:
    mov r0, r6
    bl func_ov015_021319fc
    cmp r8, r0
    bne @L_02080c4c
    tst r5, r4, lsl r6
    movne r0, r6, lsl #0x10
    movne r7, r0, lsr #0x10
    bne @L_02080c58
@L_02080c4c:
    add r6, r6, #1
@L_02080c50:
    cmp r6, #4
    blt @L_02080c2c
@L_02080c58:
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_02080c64(MatchPlayer *player, u8 team)
{
    player->unk_b6 = team;
}

extern "C" u8 func_02080c6c(MatchPlayer *player)
{
    return player->unk_5a;
}

extern "C" void func_02080c74(MatchPlayer *player, u16 flags)
{
    player->unk_ba = flags | player->unk_ba;
}

extern "C" void func_02080c84(MatchPlayer *player, int flags)
{
    player->unk_ba = (0xFFFF ^ (u16)flags) & player->unk_ba;
}

extern "C" BOOL func_02080ca4(MatchPlayer *player, u16 flag)
{
    return (flag & player->unk_ba) ? TRUE : FALSE;
}

extern "C" int func_02080cb8(MatchPlayer *player)
{
    return 0;
}

extern "C" int func_02080cc0(MatchPlayer *player)
{
    return 0;
}

extern "C" int func_02080cc8(MatchPlayer *player)
{
    return 0;
}

extern "C" BOOL func_02080cd0(MatchPlayer *player)
{
    return func_02080ca4(player, 0x10);
}

extern "C" BOOL func_02080ce0(MatchPlayer *player)
{
    return func_02080ca4(player, 0x20);
}

extern "C" BOOL func_02080cf0(MatchPlayer *player)
{
    return func_02080ca4(player, 0x40);
}

extern "C" BOOL func_02080d00(MatchPlayer *player)
{
    return func_02080ca4(player, 0x80);
}

extern "C" BOOL func_02080d10(MatchPlayer *player)
{
    return func_02080ca4(player, 0x100);
}

extern "C" BOOL func_02080d20(MatchPlayer *player)
{
    return func_02080ca4(player, 0x200);
}

extern "C" BOOL func_02080d30(MatchPlayer *player)
{
    return func_02080ca4(player, 0x400);
}

extern "C" BOOL func_02080d40(MatchPlayer *player)
{
    return func_02080ca4(player, 0x800);
}

extern "C" BOOL func_02080d50(MatchPlayer *player)
{
    return func_02080ca4(player, 0x1000);
}

extern "C" void func_02080d60(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c74((MatchPlayer *)v0, 0x10);
}

extern "C" void func_02080d9c(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x10);
}

extern "C" void func_02080dd8(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c74((MatchPlayer *)v0, 0x20);
}

extern "C" void func_02080e14(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x20);
}

extern "C" void func_02080e50(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    BOOL v1;
    v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    r4 = (u8 *)v0;
    r5 = 0;
    if ((*(u16 *)(r4 + 0xF0) & 1) != 0) {
        r5 = 1;
    }
    if (r5 != 1)
        return;
    v1 = func_02080d40((MatchPlayer *)r4);
    if (v1 == 1)
        return;
    func_02080c74((MatchPlayer *)r4, 0x40);
    _ZN17UnkClass_020621b413func_0207c1b0Ev((s32)data_020e88a0, arg1);
    return;
}

extern "C" void func_02080eb4(void)
{
    s32 v0;
    s32 v1;
    v0 = _ZN17UnkClass_020621b413func_0206f9e0Ev((s32)data_020e88a0);
    v1 = func_ov015_02130b14(((u16)v0), 0);
    if (v1 == 0)
        return;
    if (((*(u16 *)(((u8 *)v1) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v1, 0x40);
    return;
}

extern "C" asm void func_02080f00(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    mov r0, r1
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r5, #1
    cmp r5, #1
    ldmneia sp!, {r3, r4, r5, pc}
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_02080d30
    cmp r0, #1
    bne @L_02080f60
    mov r0, r4
    mov r1, #0x400
    bl func_02080c84
@L_02080f60:
    mov r0, r4
    bl func_02080d10
    cmp r0, #1
    bne @L_02080f7c
    mov r0, r4
    mov r1, #0x100
    bl func_02080c84
@L_02080f7c:
    mov r0, r4
    mov r1, #0x80
    bl func_02080c74
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_02080f8c(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x80);
}

extern "C" void func_02080fc8(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    BOOL v1;
    v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    r4 = (u8 *)v0;
    r5 = 0;
    if ((*(u16 *)(r4 + 0xF0) & 1) != 0) {
        r5 = 1;
    }
    if (r5 != 1)
        return;
    v1 = func_02080d00((MatchPlayer *)r4);
    if (v1 == 1) {
        func_02080c84((MatchPlayer *)r4, 0x80);
    }
    func_02080c74((MatchPlayer *)r4, 0x100);
    return;
}

extern "C" void func_02081024(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x100);
}

extern "C" void func_02081060(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    BOOL v1;
    v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    r4 = (u8 *)v0;
    r5 = 0;
    if ((*(u16 *)(r4 + 0xF0) & 1) != 0) {
        r5 = 1;
    }
    if (r5 != 1)
        return;
    v1 = func_02080d10((MatchPlayer *)r4);
    if (v1 != 1)
        return;
    func_02080c74((MatchPlayer *)r4, 0x200);
    return;
}

extern "C" void func_020810b0(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x200);
}

extern "C" asm void func_020810ec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r8, r1
    mov r4, #0
    mov r0, r8
    mov r1, r4
    bl func_ov015_02130b14
    movs r5, r0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r0, [r5, #0xf0]
    tst r0, #1
    movne r4, #1
    cmp r4, #1
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r7, #0
    add r4, sp, #4
    ldr r0, =data_020e88a0
    mov r1, r7
    mov r2, r4
    mov r3, #4
    str r7, [sp]
    bl _ZN17UnkClass_020621b413func_02078844Ev
    mov r6, r0
    cmp r6, #0
    addle sp, sp, #0xc
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #0x80
    mov r9, #0x400
@L_02081164:
    mov r0, r7, lsl #1
    ldrh r0, [r4, r0]
    cmp r8, r0
    bne @L_0208119c
    mov r0, r5
    bl func_02080d00
    cmp r0, #1
    bne @L_02081190
    mov r0, r5
    mov r1, r10
    bl func_02080c84
@L_02081190:
    mov r0, r5
    mov r1, r9
    bl func_02080c74
@L_0208119c:
    add r7, r7, #1
    cmp r7, r6
    blt @L_02081164
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_020811b4(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x400);
}

extern "C" void func_020811f0(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    BOOL v1;
    v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    r4 = (u8 *)v0;
    r5 = 0;
    if ((*(u16 *)(r4 + 0xF0) & 1) != 0) {
        r5 = 1;
    }
    if (r5 != 1)
        return;
    v1 = func_02080d30((MatchPlayer *)r4);
    if (v1 != 1)
        return;
    func_02080c74((MatchPlayer *)r4, 0x800);
    return;
}

extern "C" void func_02081240(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x800);
}

extern "C" void func_0208127c(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c74((MatchPlayer *)v0, 0x1000);
}

extern "C" void func_020812b8(s32 arg0, s32 arg1)
{
    s32 v0 = func_ov015_02130b14(arg1, 0);
    if (v0 == 0)
        return;
    if (((*(u16 *)(((u8 *)v0) + 0xF0) & 1) != 0 ? 1 : 0) != 1)
        return;
    func_02080c84((MatchPlayer *)v0, 0x1000);
}

extern "C" u8 func_020812f4(MatchPlayer *player)
{
    return player->unk_b7;
}

extern "C" u8 func_020812fc(MatchPlayer *player)
{
    return player->unk_bd;
}

extern "C" u8 func_02081304(MatchPlayer *player)
{
    return player->unk_c5;
}

extern "C" s32 func_0208130c(s32 arg0, s32 arg1)
{
    u8 v0;
    u8 v1;
    u8 v2;
    s32 v3;
    u8 v4;
    s32 v5;
    u8 v6;
    u8 v7;
    switch (arg1) {
        case 1:
            v0 = func_020812f4((MatchPlayer *)arg0);
            return v0;
        case 2:
            v1 = func_020812fc((MatchPlayer *)arg0);
            return v1;
        case 3:
            v2 = func_02081304((MatchPlayer *)arg0);
            return v2;
        case 0:
        default:
            v3 = _ZN17UnkClass_020621b413func_0206deecEv((s32)data_020e88a0);
            if (v3 != 0) {
                v4 = func_020812fc((MatchPlayer *)arg0);
                return v4;
            } else {
                v5 = _ZN17UnkClass_020621b413func_0206df08Ev((s32)data_020e88a0);
                if (v5 != 0) {
                    v6 = func_02081304((MatchPlayer *)arg0);
                    return v6;
                } else {
                    v7 = func_020812f4((MatchPlayer *)arg0);
                    return v7;
                }
            }
    }
}

extern "C" void func_02081390(MatchPlayer *player, u8 value)
{
    player->unk_b7 = value;
}

extern "C" void func_02081398(MatchPlayer *player, u8 value)
{
    player->unk_bd = value;
}

extern "C" void func_020813a0(MatchPlayer *player, u8 value)
{
    player->unk_c5 = value;
}

extern "C" s32 func_020813a8(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    r6 = arg0;
    r5 = arg1;
    switch (arg2) {
        case 1:
            v0 = ((s32 (*)(...))func_02081390)((MatchPlayer *)arg0, arg1);
            return v0;
        case 2:
            v1 = ((s32 (*)(...))func_02081398)((MatchPlayer *)arg0, arg1);
            return v1;
        case 3:
            v2 = ((s32 (*)(...))func_020813a0)((MatchPlayer *)arg0, arg1);
            return v2;
        case 0:
        default:
            v3 = _ZN17UnkClass_020621b413func_0206deecEv((s32)((u8 *)&data_020e88a0));
            if (v3 != 0) {
                v4 = ((s32 (*)(...))func_02081398)((MatchPlayer *)r6, r5);
                return v4;
            } else {
                v5 = _ZN17UnkClass_020621b413func_0206df08Ev((s32)((u8 *)&data_020e88a0));
                arg0 = r6;
                arg1 = r5;
                if (v5 != 0) {
                    v6 = ((s32 (*)(...))func_020813a0)((MatchPlayer *)arg0, arg1);
                    return v6;
                } else {
                    v7 = ((s32 (*)(...))func_02081390)((MatchPlayer *)arg0, arg1);
                    return v7;
                }
            }
    }
}

extern "C" s32 func_02081438(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xDB);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xDB);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xDB);
        }
    }
}

extern "C" s32 func_02081484(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xD9);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xD9);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xD9);
        }
    }
}

extern "C" s32 func_020814d0(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xDE);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xDE);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xDE);
        }
    }
}

extern "C" s32 func_0208151c(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xDD);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xDD);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xDD);
        }
    }
}

extern "C" s32 func_02081568(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xDA);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xDA);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xDA);
        }
    }
}

extern "C" s32 func_020815b4(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xD8);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xD8);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xD8);
        }
    }
}

extern "C" s32 func_02081600(u8 *arg0)
{
    s32 r1;
    r1 = *(u8 *)(arg0 + 0xBF);
    if (r1 == 0) {
        return *(u8 *)(arg0 + 0xDC);
    } else {
        if (r1 == 1) {
            if ((*(u8 *)(((u8 *)&gGameState) + 0x98) != 0 || *(u8 *)(((u8 *)&data_020cb6e0) + 0x288) != 0)) {
                arg0 = (u8 *)*(u8 *)(arg0 + 0xDC);
            } else {
                arg0 = (u8 *)1;
            }
            return (s32)arg0;
        } else {
            return *(u8 *)(arg0 + 0xDC);
        }
    }
}

extern "C" s32 func_0208164c(s32 *table, int level)
{
    if (level <= 0 || level > 99) {
        return 0;
    }
    if (level == 1) {
        return 0;
    }
    return table[level - 2];
}

extern "C" u8 func_02081678(u8 *table, int level)
{
    if (level <= 0 || level > 99) {
        return 0;
    }
    return table[level - 1];
}

extern "C" void func_0208169c(void *data)
{
    MI_CpuFill8(data, 0, 0x12C);
}

extern "C" void func_020816b0(u8 *bits, int i)
{
    int bit = 1 << (i & 7);

    if (i < 0) {
        return;
    }
    if ((u32)i <= 0x960) {
        bits[i >> 3] |= (u8)bit;
    }
}

extern "C" void func_020816dc(u8 *bits, int i)
{
    int bit = 1 << (i & 7);

    if (i < 0) {
        return;
    }
    if ((u32)i <= 0x960) {
        bits[i >> 3] &= (u8)(bit ^ 0xFF);
    }
}

extern "C" asm void func_0208170c(void)
{
    cmp r1, #0
    and r2, r1, #7
    mov r3, #1
    blt @L_02081724
    cmp r1, #0x960
    bls @L_0208172c
@L_02081724:
    mov r0, #0
    bx lr
@L_0208172c:
    ldrb r0, [r0, r1, asr #3]
    tst r0, r3, lsl r2
    moveq r3, #0
    mov r0, r3
    bx lr
}
