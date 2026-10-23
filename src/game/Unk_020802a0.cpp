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
extern "C" void _ZN17UnkClass_020621b413func_0206deecEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0206df08Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0206f9e0Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_020744d4Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02078844Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207c1b0Ev(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_021319fc(void);
extern "C" void gGameState(void);

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

extern "C" asm void func_020802cc(void)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    ldmltia sp!, {r4, pc}
    cmp r1, #0x10
    ldmgeia sp!, {r4, pc}
    ldr r3, =0xfff
    tst r2, r3
    moveq r2, #0
    cmp r2, #0
    beq @L_02080318
    mov r4, #0
    mov r3, r4
@L_020802fc:
    mov lr, r4, lsl #1
    ldrh r12, [r0, lr]
    add r4, r4, #1
    cmp r2, r12
    streqh r3, [r0, lr]
    cmp r4, #0x10
    blt @L_020802fc
@L_02080318:
    mov r1, r1, lsl #1
    strh r2, [r0, r1]
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_02080368(void)
{
    mov r3, #0
@L_0208036c:
    mov r2, r3, lsl #1
    ldrh r2, [r0, r2]
    cmp r2, #0
    beq @L_02080388
    cmp r1, r2
    moveq r0, #1
    bxeq lr
@L_02080388:
    add r3, r3, #1
    cmp r3, #0x10
    blt @L_0208036c
    mov r0, #0
    bx lr
}

extern "C" asm void func_0208039c(void)
{
    ldr r2, =0xfff
    mov r3, #0
    and r1, r1, r2
    mov r1, r1, lsl #0x10
    mov r12, r1, lsr #0x10
@L_020803b0:
    mov r1, r3, lsl #1
    ldrh r1, [r0, r1]
    cmp r1, #0
    beq @L_020803d0
    and r1, r1, r2
    cmp r12, r1
    moveq r0, #1
    bxeq lr
@L_020803d0:
    add r3, r3, #1
    cmp r3, #0x10
    blt @L_020803b0
    mov r0, #0
    bx lr
}

extern "C" asm void func_020803e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    mov r7, r0
    mov r5, r6
    mov r4, r6
@L_020803fc:
    mov r0, r7
    mov r1, r5
    bl func_02080328
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    addne r0, r6, #1
    add r5, r5, #1
    andne r6, r0, #0xff
    cmp r5, #0x10
    blt @L_020803fc
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02080430(void)
{
    mov r3, #0
@L_02080434:
    add r2, r0, r3
    ldrb r2, [r2, #0xa]
    cmp r1, r2
    moveq r1, r3, lsl #1
    ldreqh r0, [r0, r1]
    bxeq lr
    add r3, r3, #1
    cmp r3, #0x10
    blt @L_02080434
    mov r0, #0
    bx lr
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

extern "C" asm void func_020804bc(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =0xfff
    mov r12, #0
    and r1, r1, r3
    mov r1, r1, lsl #0x10
    mov lr, r1, lsr #0x10
@L_020804d4:
    mov r1, r12, lsl #1
    ldrh r1, [r0, r1]
    cmp r1, #0
    beq @L_02080504
    and r1, r1, r3
    cmp lr, r1
    bne @L_02080504
    cmp r2, #0
    addne r0, r12, #1
    strne r0, [r2]
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_02080504:
    add r12, r12, #1
    cmp r12, #0xb
    blt @L_020804d4
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_0208051c(void)
{
    ldr r2, =0xfff
    mov r3, #0
    and r1, r1, r2
    mov r1, r1, lsl #0x10
    mov r12, r1, lsr #0x10
@L_02080530:
    mov r1, r3, lsl #1
    ldrh r1, [r0, r1]
    ands r1, r1, r2
    beq @L_0208054c
    cmp r12, r1
    addeq r0, r3, #1
    bxeq lr
@L_0208054c:
    add r3, r3, #1
    cmp r3, #0x10
    blt @L_02080530
    mov r0, #0
    bx lr
}

extern "C" asm void func_02080564(void)
{
    ldr r2, =0xfff
    mov r12, #0
@L_0208056c:
    mov r3, r12, lsl #1
    ldrh r3, [r0, r3]
    tst r3, r2
    beq @L_02080588
    cmp r1, r3
    addeq r0, r12, #1
    bxeq lr
@L_02080588:
    add r12, r12, #1
    cmp r12, #0x10
    blt @L_0208056c
    mov r0, #0
    bx lr
}

extern "C" asm void func_020805a0(void)
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

extern "C" asm void func_02080650(void)
{
    cmp r1, #0
    ble @L_02080660
    cmp r1, #5
    blt @L_02080668
@L_02080660:
    mov r0, #0
    bx lr
@L_02080668:
    mov r3, #0
@L_0208066c:
    add r2, r0, r3
    ldrb r2, [r2, #0xa]
    cmp r1, r2
    moveq r0, #0
    bxeq lr
    add r3, r3, #1
    cmp r3, #4
    blt @L_0208066c
    mov r0, #1
    bx lr
}

extern "C" asm void func_02080694(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r5, r1
    mov r6, r0
    mov r4, r2
    mov r7, r3
    ldmmiia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r5, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r5, lsl #1
    ldrh r1, [r6, r1]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r4
    bl func_02080650
    cmp r0, #0
    addne r0, r6, r5
    strneb r4, [r0, #0xa]
    cmp r7, #0
    bne @L_020806f4
    mov r0, r6
    bl func_020805a0
    add r1, r6, r5
    strb r0, [r1, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020806f4:
    mov r7, #0
@L_020806f8:
    add r0, r6, r7
    ldrb r0, [r0, #0xa]
    cmp r4, r0
    beq @L_02080714
    add r7, r7, #1
    cmp r7, #4
    blt @L_020806f8
@L_02080714:
    add r1, r6, r5
    mov r0, r6
    strb r4, [r1, #0xa]
    bl func_020805a0
    add r1, r6, r7
    strb r0, [r1, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02080730(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmltia sp!, {r3, pc}
    cmp r1, #4
    ldmgeia sp!, {r3, pc}
    ldr r12, =0xfff
    tst r2, r12
    moveq r2, #0
    mov r12, r1, lsl #1
    strh r2, [r0, r12]
    mov r2, r3
    mov r3, #0
    bl func_02080694
    ldmia sp!, {r3, pc}
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

extern "C" asm void func_020807d0(void)
{
    mov r3, #0
@L_020807d4:
    mov r2, r3, lsl #1
    ldrh r2, [r0, r2]
    cmp r2, #0
    beq @L_020807f0
    cmp r1, r2
    moveq r0, #1
    bxeq lr
@L_020807f0:
    add r3, r3, #1
    cmp r3, #4
    blt @L_020807d4
    mov r0, #0
    bx lr
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

extern "C" asm void func_0208084c(void)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    blt @L_02080860
    cmp r1, #6
    ble @L_02080868
@L_02080860:
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_02080868:
    cmp r2, #0
    blt @L_02080878
    cmp r2, #1
    ble @L_02080880
@L_02080878:
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_02080880:
    ldr r3, =gGameState
    add r2, r2, r1, lsl #1
    ldrb r1, [r3, #0x1b]
    add r2, r0, r2, lsl #1
    ldrh r4, [r2, #0x7c]
    cmp r1, #0
    bne @L_020808b4
    ldr r1, =0xfff
    ands r4, r4, r1
    beq @L_020808b4
    bl func_02080b90
    cmp r0, #1
    orreq r4, r4, #0x8000
@L_020808b4:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" u16 func_020808c4(MatchPlayer *player, int i)
{
    if (i < 0 || i > 6) {
        return 0;
    }
    return player->unk_98[i];
}

extern "C" asm void func_020808e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r7, r0
    mov r6, r1
    mov r5, r4
@L_020808fc:
    mov r0, r7
    mov r1, r5
    bl func_020808c4
    cmp r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r5, #1
    cmp r5, #4
    blt @L_020808fc
    mov r5, #0
@L_02080924:
    mov r0, r7
    mov r1, r5
    bl func_020808c4
    cmp r0, #0
    bne @L_02080950
    add r0, r7, r5, lsl #1
    strh r6, [r0, #0x98]
    add r0, r7, r5
    strb r4, [r0, #0xa4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02080950:
    add r5, r5, #1
    cmp r5, #4
    blt @L_02080924
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02080964(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r1
    cmp r7, #4
    mov r8, r0
    mov r6, r2
    mov r4, #0
    cmpne r7, #5
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r3, #0
    bne @L_020809a8
    mov r0, r8
    mov r1, r7
    bl func_020808c4
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_020809a8:
    mov r5, #0
@L_020809ac:
    mov r0, r8
    mov r1, r5
    bl func_020808c4
    cmp r6, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r5, r5, #1
    cmp r5, #6
    blt @L_020809ac
    add r0, r8, r7, lsl #1
    strh r6, [r0, #0x98]
    add r0, r8, r7
    strb r4, [r0, #0xa4]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020809e8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    cmp r4, #4
    mov r5, r0
    cmpne r4, #5
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl func_020808c4
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r5, r4, lsl #1
    mov r1, #0
    strh r1, [r0, #0x98]
    add r0, r5, r4
    strb r1, [r0, #0xa4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02080a38(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, #0
@L_02080a48:
    mov r0, r6
    mov r1, r4
    bl func_020808c4
    cmp r5, r0
    bne @L_02080a6c
    mov r0, r6
    mov r1, r4
    bl func_02080a80
    ldmia sp!, {r4, r5, r6, pc}
@L_02080a6c:
    add r4, r4, #1
    cmp r4, #6
    blt @L_02080a48
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" int func_02080a80(void)
{
    return 0;
}

extern "C" asm void func_02080a88(void)
{
    mov r1, r0
    ldr r0, =data_020e88a0
    ldr r12, =_ZN17UnkClass_020621b413func_020744d4Ev
    bx r12
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

extern "C" asm void func_02080d60(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x10
    bl func_02080c74
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080d9c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x10
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080dd8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x20
    bl func_02080c74
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080e14(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x20
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080e50(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r5, #1
    cmp r5, #1
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_02080d40
    cmp r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    mov r1, #0x40
    bl func_02080c74
    ldr r0, =data_020e88a0
    mov r1, r6
    bl _ZN17UnkClass_020621b413func_0207c1b0Ev
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02080eb4(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0206f9e0Ev
    mov r0, r0, lsl #0x10
    mov r4, #0
    mov r1, r4
    mov r0, r0, lsr #0x10
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x40
    bl func_02080c84
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_02080f8c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x80
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080fc8(void)
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
    mov r0, r4
    bl func_02080d00
    cmp r0, #1
    bne @L_02081014
    mov r0, r4
    mov r1, #0x80
    bl func_02080c84
@L_02081014:
    mov r0, r4
    mov r1, #0x100
    bl func_02080c74
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02081024(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x100
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02081060(void)
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
    mov r0, r4
    bl func_02080d10
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, #0x200
    bl func_02080c74
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020810b0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x200
    bl func_02080c84
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_020811b4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x400
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020811f0(void)
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
    mov r0, r4
    bl func_02080d30
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, #0x800
    bl func_02080c74
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02081240(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x800
    bl func_02080c84
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208127c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x1000
    bl func_02080c74
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020812b8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r0, r1
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r4, #1
    cmp r4, #1
    ldmneia sp!, {r4, pc}
    mov r1, #0x1000
    bl func_02080c84
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_0208130c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    b @L_02081348
    b @L_02081348
    b @L_02081330
    b @L_02081338
    b @L_02081340
@L_02081330:
    bl func_020812f4
    ldmia sp!, {r3, r4, r5, pc}
@L_02081338:
    bl func_020812fc
    ldmia sp!, {r3, r4, r5, pc}
@L_02081340:
    bl func_02081304
    ldmia sp!, {r3, r4, r5, pc}
@L_02081348:
    ldr r4, =data_020e88a0
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206deecEv
    cmp r0, #0
    beq @L_02081368
    mov r0, r5
    bl func_020812fc
    ldmia sp!, {r3, r4, r5, pc}
@L_02081368:
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206df08Ev
    cmp r0, #0
    mov r0, r5
    beq @L_02081384
    bl func_02081304
    ldmia sp!, {r3, r4, r5, pc}
@L_02081384:
    bl func_020812f4
    ldmia sp!, {r3, r4, r5, pc}
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

extern "C" asm void func_020813a8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    cmp r2, #3
    addls pc, pc, r2, lsl #2
    b @L_020813e8
    b @L_020813e8
    b @L_020813d0
    b @L_020813d8
    b @L_020813e0
@L_020813d0:
    bl func_02081390
    ldmia sp!, {r4, r5, r6, pc}
@L_020813d8:
    bl func_02081398
    ldmia sp!, {r4, r5, r6, pc}
@L_020813e0:
    bl func_020813a0
    ldmia sp!, {r4, r5, r6, pc}
@L_020813e8:
    ldr r4, =data_020e88a0
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206deecEv
    cmp r0, #0
    beq @L_0208140c
    mov r0, r6
    mov r1, r5
    bl func_02081398
    ldmia sp!, {r4, r5, r6, pc}
@L_0208140c:
    mov r0, r4
    bl _ZN17UnkClass_020621b413func_0206df08Ev
    cmp r0, #0
    mov r0, r6
    mov r1, r5
    beq @L_0208142c
    bl func_020813a0
    ldmia sp!, {r4, r5, r6, pc}
@L_0208142c:
    bl func_02081390
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02081438(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xdb]
    bxeq lr
    cmp r1, #1
    bne @L_02081474
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xdb]
    moveq r0, #1
    bx lr
@L_02081474:
    ldrb r0, [r0, #0xdb]
    bx lr
}

extern "C" asm void func_02081484(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xd9]
    bxeq lr
    cmp r1, #1
    bne @L_020814c0
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xd9]
    moveq r0, #1
    bx lr
@L_020814c0:
    ldrb r0, [r0, #0xd9]
    bx lr
}

extern "C" asm void func_020814d0(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xde]
    bxeq lr
    cmp r1, #1
    bne @L_0208150c
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xde]
    moveq r0, #1
    bx lr
@L_0208150c:
    ldrb r0, [r0, #0xde]
    bx lr
}

extern "C" asm void func_0208151c(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xdd]
    bxeq lr
    cmp r1, #1
    bne @L_02081558
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xdd]
    moveq r0, #1
    bx lr
@L_02081558:
    ldrb r0, [r0, #0xdd]
    bx lr
}

extern "C" asm void func_02081568(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xda]
    bxeq lr
    cmp r1, #1
    bne @L_020815a4
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xda]
    moveq r0, #1
    bx lr
@L_020815a4:
    ldrb r0, [r0, #0xda]
    bx lr
}

extern "C" asm void func_020815b4(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xd8]
    bxeq lr
    cmp r1, #1
    bne @L_020815f0
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xd8]
    moveq r0, #1
    bx lr
@L_020815f0:
    ldrb r0, [r0, #0xd8]
    bx lr
}

extern "C" asm void func_02081600(void)
{
    ldrb r1, [r0, #0xbf]
    cmp r1, #0
    ldreqb r0, [r0, #0xdc]
    bxeq lr
    cmp r1, #1
    bne @L_0208163c
    ldr r1, =gGameState
    ldrb r1, [r1, #0x98]
    cmp r1, #0
    ldreq r1, =data_020cb6e0
    ldreqb r1, [r1, #0x288]
    cmpeq r1, #0
    ldrneb r0, [r0, #0xdc]
    moveq r0, #1
    bx lr
@L_0208163c:
    ldrb r0, [r0, #0xdc]
    bx lr
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
