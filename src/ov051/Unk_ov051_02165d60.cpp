#include "ov051/Unk_ov051_02165d60.hpp"

extern "C" s32 func_ov051_02165d60(u8 *arg0, s32 arg1);
extern "C" s32 func_ov051_02165da8(s32 arg0, u8 *arg1);
extern "C" s32 func_ov051_02165e08(...);
extern "C" s32 func_ov051_02165ea0(...);
extern "C" void func_ov051_02165f28(void);
extern "C" void func_ov051_02165fa0(void);
extern "C" s32 func_ov051_02166070(...);
extern "C" void func_ov051_021660e0(void);
extern "C" void func_ov051_02166118(u8 *arg0);
extern "C" void func_ov051_02166170(void);
extern "C" void func_ov051_02166230(void);
extern "C" void func_ov051_02166234(s32 arg0);
extern "C" s32 func_ov051_02166254(s32 arg0);
extern "C" void func_ov051_02166268(void);

extern "C" char data_020c46d4[];
extern "C" char data_020c5e40[];
extern "C" char data_020d9978[];
extern "C" char data_ov051_0216636c[];
extern "C" char data_ov051_02166388[];
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN11TreasureBox13func_02052618Ei(void);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" void func_020939c8(void);
extern "C" void func_02097898(void);
extern "C" void func_02097aa0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097c74(void);
extern "C" void func_02097ca8(void);
extern "C" void func_ov015_02134118(void);
extern "C" s32 func_ov015_02134198(...);
extern "C" void sprintf(void);

extern "C" s32 func_ov051_02165d60(u8 *arg0, s32 arg1)
{
    if (*(s32 *)(arg0 + 0x20) != 4)
        return *(s32 *)(arg0 + 0x20);
    if ((arg1 & 0x2FFF) == 0)
        return 0x2FFF;
    _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 1);
    func_ov051_02166070((s32)arg0);
    *(s32 *)(arg0 + 0x20) = 6;
    return 6;
}

extern "C" s32 func_ov051_02165da8(s32 arg0, u8 *arg1)
{
    u8 *r4;
    s32 t0;
    r4 = (u8 *)arg0;
    if (*(u8 *)(r4 + 0x28) == 0) {
        if (*(u16 *)(arg1 + 0x4) == 1)
            return *(u16 *)(arg1 + 0x4);
    }
    t0 = *(s32 *)(r4 + 0x20);
    *(u8 *)(r4 + 0x28) = 1;
    if (t0 != 4)
        return t0;
    if (*(u16 *)(arg1 + 0x4) != 1)
        return *(u16 *)(arg1 + 0x4);
    _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 1, 1);
    func_ov051_02166070((s32)r4);
    *(s32 *)(r4 + 0x20) = 6;
    return 6;
}

extern "C" asm s32 func_ov051_02165e08(...)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x114
    mov r5, r0
    mov r1, #1
    str r1, [r5, #0x20]
    ldr r0, =data_020d9978
    mov r1, #0x17
    bl _ZN11TreasureBox13func_02052618Ei
    ldr r0, [r0]
    add r4, sp, #0x14
    str r0, [r5, #0x18]
    cmp r0, #3
    movlt r0, #3
    strlt r0, [r5, #0x18]
    ldr r3, [r5, #0x18]
    ldr r1, =data_ov051_0216636c
    ldr r2, =data_ov051_02166388
    mov r0, r4
    bl sprintf
    ldr r0, =data_020c46d4
    mov r12, #0
    ldr r0, [r0]
    mov r2, r4
    str r12, [sp]
    str r12, [sp, #4]
    str r12, [sp, #8]
    str r12, [sp, #0xc]
    mov r1, #5
    mov r3, #1
    str r12, [sp, #0x10]
    bl func_02097898
    str r0, [r5, #0x10]
    add sp, sp, #0x114
    ldmia sp!, {r4, r5, pc}
}

extern "C" asm s32 func_ov051_02165ea0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r5, r0
    mov r7, r4
    ldr r6, =data_020c46d4
    b @L_02165edc
@L_02165eb8:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x14]
    cmp r1, #0
    beq @L_02165ed8
    ldr r0, [r6]
    bl func_02092270
    add r0, r5, r4, lsl #2
    str r7, [r0, #0x14]
@L_02165ed8:
    add r4, r4, #1
@L_02165edc:
    cmp r4, #1
    blt @L_02165eb8
    mov r4, #0
    mov r7, r4
    ldr r6, =data_020c46d4
    b @L_02165f18
@L_02165ef4:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x10]
    cmp r1, #0
    beq @L_02165f14
    ldr r0, [r6]
    bl func_02097b3c
    add r0, r5, r4, lsl #2
    str r7, [r0, #0x10]
@L_02165f14:
    add r4, r4, #1
@L_02165f18:
    cmp r4, #1
    blt @L_02165ef4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov051_02165f28(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x10]
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r4, =data_020c46d4
    ldr r0, [r4]
    bl func_02097aa0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x10]
    ldr r0, [r4]
    bl func_02097c74
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r6, r5, lsl #2
    mov r2, #0
    ldr r1, [r0, #0x10]
    ldr r0, [r4]
    mov r3, r2
    bl func_02097ca8
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov051_02165fa0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r0
    mov r6, r1
    add r0, r7, r6, lsl #2
    ldr r0, [r0, #0x14]
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, =data_020c46d4
    mov r5, #1
    ldr r0, [r8]
    mov r2, r5
    add r1, r6, #1
    bl func_020920c4
    mov r4, r0
    add r0, r7, r6, lsl #2
    ldr r3, [r0, #0x10]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    and r3, r3, #0xff
    bl func_02093188
    add r0, r7, r6, lsl #2
    mov r6, #0
    str r4, [r0, #0x14]
    str r6, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, r6
    bl func_020939c8
    str r6, [sp]
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    mov r3, r6
    bl func_02093524
    mov r3, r6
    ldr r0, [r8]
    mov r1, r4
    mov r2, r5
    bl func_02093368
    mov r1, r4
    str r5, [sp]
    ldr r0, [r8]
    mov r2, r5
    mov r3, #2
    bl func_0209386c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov051_02166070(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #0x24]
    mov r1, #0
    add r6, r0, #1
    cmp r6, #3
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, #1
    mov r5, r4
@L_02166094:
    cmp r6, #1
    beq @L_021660a8
    cmp r6, #2
    beq @L_021660b0
    b @L_021660c4
@L_021660a8:
    mov r1, r5
    b @L_021660c4
@L_021660b0:
    mov r0, r7
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    mov r1, r4
@L_021660c4:
    cmp r1, #0
    strne r6, [r7, #0x24]
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r6, r6, #1
    cmp r6, #3
    blt @L_02166094
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov051_021660e0(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0, #0x24]
    cmp r1, #2
    bne @L_02166100
    ldr r0, [r0, #0x1c]
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    ldmia sp!, {r3, pc}
@L_02166100:
    mov r1, #3
    str r1, [r0, #0x20]
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov051_02166118(u8 *arg0)
{
    MI_CpuFill8((arg0 + 4), 0, 0xC);
    MI_CpuFill8((arg0 + 0x10), 0, 4);
    MI_CpuFill8((arg0 + 0x14), 0, 4);
    *(s32 *)(arg0 + 0x20) = 0;
    *(u8 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    func_ov051_02165e08((s32)arg0);
}

extern "C" asm void func_ov051_02166170(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0x20]
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_021661a4
    b @L_021661c0
    b @L_021661f4
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_02166210
@L_021661a4:
    add r0, r4, #4
    mov r1, #1
    bl func_ov015_02134118
    cmp r0, #0
    movne r0, #2
    strne r0, [r4, #0x20]
    ldmia sp!, {r3, r4, r5, pc}
@L_021661c0:
    mov r5, #0
    mov r1, r5
    bl func_ov051_02165f28
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, r5
    bl func_ov051_02165fa0
    mov r0, r4
    bl func_ov051_02166070
    mov r0, r4
    bl func_ov051_021660e0
    ldmia sp!, {r3, r4, r5, pc}
@L_021661f4:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    moveq r0, #4
    streq r0, [r4, #0x20]
    ldmia sp!, {r3, r4, r5, pc}
@L_02166210:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl func_ov051_021660e0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov051_02166230(void)
{
}

extern "C" void func_ov051_02166234(s32 arg0)
{
    func_ov015_02134198((arg0 + 4), 1);
    func_ov051_02165ea0(arg0);
}

extern "C" s32 func_ov051_02166254(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov051_02166268(void)
{
}
