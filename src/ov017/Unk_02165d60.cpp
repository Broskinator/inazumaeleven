#include "ov017/Unk_02165d60.hpp"

extern "C" void func_ov017_02165d60(u8 *arg0, s32 arg1);
extern "C" void func_ov017_02165d74(void);
extern "C" s32 func_ov017_02165d78(s32 arg0);
extern "C" void func_ov017_02165d8c(void);
extern "C" void func_ov017_02165dc0(void);
extern "C" void func_ov017_02165e84(void);
extern "C" void func_ov017_02165fac(void);
extern "C" void func_ov017_02166574(void);
extern "C" void func_ov017_021665e4(void);
extern "C" void func_ov017_02166688(void);
extern "C" void func_ov017_02166d80(s32 arg0, u8 *arg1);
extern "C" void func_ov017_02166db8(s32 arg0, s32 arg1, s32 arg2, u8 *arg3);
extern "C" s32 func_ov017_02166e28(...);
extern "C" void func_ov017_021670a8(void);
extern "C" s32 func_ov017_021670ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern "C" s32 func_ov017_021670e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern "C" void func_ov017_02167110(void);
extern "C" void func_ov017_021672c4(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c46d4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c484c[];
extern "C" char data_020c5e40[];
extern "C" char data_020cafe0[];
extern "C" char data_020d3d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov017_021674f8[];
extern "C" char data_ov017_02167764[];
extern "C" char data_ov017_02167790[];
extern "C" char data_ov017_021677fc[];
extern "C" char data_ov017_0216781c[];
extern "C" char data_ov017_02167824[];
extern "C" char data_ov017_02167844[];
extern "C" char data_ov017_02167864[];
extern "C" void STD_ConcatenateString(void);
extern "C" s32 STD_CopyString(...);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11FileManager7ReleaseEPv(void);
extern "C" void _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" void _ZN17UnkClass_020621b413func_020768fcEm(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8TextFont12GetCharWidthEPKc(void);
extern "C" void _ZN8TextFont12GetTextWidthEPKc(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_0202273c(void);
extern "C" void func_02091d54(void);
extern "C" void func_02091d64(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02092c48(void);
extern "C" s32 func_02093188(...);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_020936b4(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" void func_02093bf4(void);
extern "C" void func_02093ca8(void);
extern "C" void func_02093d1c(void);
extern "C" void func_02097898(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097ca8(void);
extern "C" void func_020982a0(void);
extern "C" void func_0209b3f8(void);
extern "C" void func_ov015_02132628(void);
extern "C" s32 func_ov015_0213328c(...);
extern "C" void func_ov015_02134b08(void);
extern "C" void sprintf(void);

extern "C" void func_ov017_02165d60(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = (s32)data_ov017_02167790;
}

extern "C" void func_ov017_02165d74(void)
{
}

extern "C" s32 func_ov017_02165d78(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" asm void func_ov017_02165d8c(void)
{
    ldr r3, [r0, #0x24]
    strh r2, [r0, #0xa]
    strh r1, [r0, #8]
    cmp r3, #0
    ldrneh r1, [r0, #0xa]
    orrne r1, r1, #0x4000
    strneh r1, [r0, #0xa]
    ldr r1, [r0, #0x2c]
    cmp r1, #0
    ldrneh r1, [r0, #8]
    orrne r1, r1, #0x4000
    strneh r1, [r0, #8]
    bx lr
}

extern "C" asm void func_ov017_02165dc0(void)
{
    stmdb sp!, {r3, lr}
    mov r2, #0
    str r2, [r0, #0x28]
    str r2, [r0, #0x2c]
    ldrh r2, [r1, #4]
    cmp r2, #1
    bne @L_02165e44
    ldrh r2, [r1]
    strh r2, [r0, #0xc]
    ldrh r2, [r1, #2]
    strh r2, [r0, #0xe]
    ldrh r2, [r1, #4]
    strh r2, [r0, #0x10]
    ldrh r2, [r1, #6]
    strh r2, [r0, #0x12]
    ldrh r1, [r1, #6]
    cmp r1, #0
    ldreq r1, [r0, #0x24]
    cmpeq r1, #0
    bne @L_02165e38
    ldrh lr, [r0, #0xc]
    ldrh r12, [r0, #0xe]
    ldrh r3, [r0, #0x10]
    ldrh r2, [r0, #0x12]
    mov r1, #1
    strh lr, [r0, #0x14]
    strh r12, [r0, #0x16]
    strh r3, [r0, #0x18]
    strh r2, [r0, #0x1a]
    str r1, [r0, #0x28]
@L_02165e38:
    mov r1, #1
    str r1, [r0, #0x24]
    ldmia sp!, {r3, pc}
@L_02165e44:
    ldr r1, [r0, #0x24]
    cmp r1, #0
    beq @L_02165e78
    ldrh lr, [r0, #0xc]
    ldrh r12, [r0, #0xe]
    ldrh r3, [r0, #0x10]
    ldrh r2, [r0, #0x12]
    mov r1, #1
    strh lr, [r0, #0x1c]
    strh r12, [r0, #0x1e]
    strh r3, [r0, #0x20]
    strh r2, [r0, #0x22]
    str r1, [r0, #0x2c]
@L_02165e78:
    mov r1, #0
    str r1, [r0, #0x24]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov017_02165e84(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, [sp, #0x10]
    ldr lr, [sp, #0x14]
    cmp r1, #4
    mov r12, #0
    addls pc, pc, r1, lsl #2
    b @L_02165fa4
    b @L_02165eb4
    b @L_02165ed8
    b @L_02165ef0
    b @L_02165f14
    b @L_02165f58
@L_02165eb4:
    ldr r1, [r0, #0x24]
    cmp r1, #0
    beq @L_02165fa4
    ldrh r1, [r0, #0xc]
    cmp r1, r2
    ldrgeh r0, [r0, #0xe]
    cmpge r0, r3
    blt @L_02165fa4
    b @L_02165f98
@L_02165ed8:
    ldrh r1, [r0, #0x14]
    cmp r1, r2
    ldrgeh r0, [r0, #0x16]
    cmpge r0, r3
    blt @L_02165fa4
    b @L_02165f98
@L_02165ef0:
    ldr r1, [r0, #0x24]
    cmp r1, #0
    bne @L_02165fa4
    ldrh r1, [r0, #0x1c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x1e]
    cmpge r0, r3
    blt @L_02165fa4
    b @L_02165f98
@L_02165f14:
    ldr r1, [r0, #0x24]
    cmp r1, #0
    beq @L_02165fa4
    ldrh r5, [r0, #0x14]
    cmp r5, r2
    ldrgeh r1, [r0, #0x16]
    cmpge r1, r3
    blt @L_02165fa4
    cmp r5, r4
    cmple r1, lr
    bgt @L_02165fa4
    ldrh r1, [r0, #0xc]
    cmp r1, r2
    ldrgeh r0, [r0, #0xe]
    cmpge r0, r3
    blt @L_02165fa4
    b @L_02165f98
@L_02165f58:
    ldr r1, [r0, #0x24]
    cmp r1, #0
    bne @L_02165fa4
    ldrh r5, [r0, #0x14]
    cmp r5, r2
    ldrgeh r1, [r0, #0x16]
    cmpge r1, r3
    blt @L_02165fa4
    cmp r5, r4
    cmple r1, lr
    bgt @L_02165fa4
    ldrh r1, [r0, #0x1c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x1e]
    cmpge r0, r3
    blt @L_02165fa4
@L_02165f98:
    cmp r1, r4
    cmple r0, lr
    movle r12, #1
@L_02165fa4:
    mov r0, r12
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov017_02165fac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1e8
    ldr r6, =data_ov017_02167764
    mov r10, r0
    ldmia r6!, {r0, r1, r2, r3}
    add r5, sp, #0x3c
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldr r4, =data_020c46d4
    ldr r1, [r6]
    ldr r0, [r4]
    str r1, [r5]
    mov r5, #1
    bl func_02091d54
    ldr r3, =data_020c47b4
    mov r11, #0
    ldr r0, [r3]
    str r11, [sp, #0x18]
    ldr r1, =data_ov017_021677fc
    cmp r0, #0
    beq @L_02166024
    str r11, [sp]
    str r11, [sp, #4]
    str r11, [sp, #8]
    str r5, [sp, #0xc]
    str r5, [sp, #0x10]
    ldr r0, [r3]
    add r2, sp, #0x18
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02166024:
    mov r9, #0
    add r7, sp, #0x1c
    ldr r6, =data_ov017_0216781c
    add r5, sp, #0x3c
    ldr r8, =data_ov017_02167824
    b @L_02166084
@L_0216603c:
    ldr r2, [r5, r9, lsl #2]
    mov r0, r7
    mov r1, r6
    bl sprintf
    ldr r3, [sp, #0x18]
    mov r0, r10
    mov r1, r7
    mov r2, r8
    bl func_ov017_02166574
    add r1, r10, r9, lsl #2
    str r0, [r1, #0x48]
    movs r1, r0
    beq @L_02166080
    ldr r0, [r4]
    mov r2, r11
    mov r3, r11
    bl func_02097ca8
@L_02166080:
    add r9, r9, #1
@L_02166084:
    cmp r9, #9
    blt @L_0216603c
    ldr r1, [sp, #0x18]
    ldr r0, =data_020c47b4
    mov r5, #1
    bl _ZN8GameHeap4FreeEPv
    mov r9, #0
    mov r7, #5
    mov r6, #2
    b @L_021660dc
@L_021660ac:
    ldr r0, [r4]
    mov r1, r7
    mov r2, r6
    bl func_020982a0
    add r2, r10, r9, lsl #2
    mov r1, r0
    str r0, [r2, #0x6c]
    ldr r0, [r4]
    mov r2, r11
    mov r3, r11
    bl func_02097ca8
    add r9, r9, #1
@L_021660dc:
    cmp r9, #4
    blt @L_021660ac
    ldr r0, [r4]
    mov r2, r5
    mov r1, #4
    bl func_020920c4
    str r0, [r10, #0x7c]
    ldr r0, [r4]
    mov r2, r5
    mov r1, #5
    bl func_020920c4
    str r0, [r10, #0x80]
    mov r9, #2
    mov r6, #5
    b @L_02166134
@L_02166118:
    ldr r0, [r4]
    mov r1, r6
    mov r2, r5
    bl func_020920c4
    add r1, r10, r9, lsl #2
    str r0, [r1, #0x7c]
    add r9, r9, #1
@L_02166134:
    cmp r9, #6
    blt @L_02166118
    ldr r7, =data_ov017_021674f8
    add r6, sp, #0x60
    mov r5, #0x18
@L_02166148:
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    subs r5, r5, #1
    mov r4, #0x1c
    bne @L_02166148
    ldr r5, =data_020c46d4
    mov r9, #0
    ldmia r7, {r0, r1}
    stmia r6, {r0, r1}
    ldr r0, [r5]
    ldr r1, [r10, #0x7c]
    mov r2, r9
    mov r3, r9
    bl func_02093bf4
    ldr r0, [r5]
    ldr r1, [r10, #0x80]
    mov r2, #0xd0
    mov r3, #8
    bl func_02093bf4
    add r6, sp, #0x60
    b @L_02166244
@L_0216619c:
    mul r0, r9, r4
    add r1, r6, r0
    ldr r2, [r6, r0]
    ldr r0, [r1, #8]
    add r2, r10, r2, lsl #2
    add r0, r10, r0, lsl #2
    ldr r7, [r2, #0x7c]
    ldr r8, [r1, #4]
    ldr r1, [r0, #0x48]
    ldr r0, [r5]
    and r3, r1, #0xff
    mov r1, r7
    mov r2, r8
    bl func_02093188
    str r11, [sp]
    ldr r0, [r5]
    mov r1, r7
    mov r2, r8
    mla r3, r9, r4, r6
    ldr r3, [r3, #0xc]
    bl func_020939c8
    ldr r0, [r5]
    mov r1, r7
    mov r2, r8
    mla r3, r9, r4, r6
    ldr r3, [r3, #0x10]
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_02093368
    mov r1, r7
    mov r2, r8
    mla r3, r9, r4, r6
    ldr r0, [r3, #0x18]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r3, [r3, #0x14]
    ldr r0, [r5]
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl func_02093524
    add r9, r9, #1
@L_02166244:
    mul r0, r9, r4
    ldr r0, [r6, r0]
    cmp r0, #2
    blt @L_0216619c
    mov r11, #0
    str r11, [sp]
    mov r8, #3
    stmib sp, {r8, r11}
    mov r7, #1
    mov r6, #2
    ldr r2, [r10, #0x7c]
    mov r0, r10
    mov r1, r7
    mov r3, r6
    bl func_ov017_021670ac
    mov r5, #0xa8
    str r5, [sp]
    mov r0, #0x38
    str r0, [sp, #4]
    mov r4, #0xc0
    mov r0, r10
    mov r1, r7
    str r4, [sp, #8]
    mov r2, #0x20
    mov r3, #8
    bl func_ov017_021670e4
    str r7, [sp]
    mov r9, #4
    str r9, [sp, #4]
    str r7, [sp, #8]
    ldr r2, [r10, #0x7c]
    mov r0, r10
    mov r1, r6
    mov r3, r8
    bl func_ov017_021670ac
    str r5, [sp]
    mov r0, #0xf8
    stmib sp, {r0, r4}
    mov r0, r10
    mov r1, r6
    mov r2, #0x10
    mov r3, #0xc8
    bl func_ov017_021670e4
    str r6, [sp]
    mov r0, #5
    stmib sp, {r0, r6}
    ldr r2, [r10, #0x7c]
    mov r3, r9
    mov r0, r10
    mov r1, r8
    bl func_ov017_021670ac
    str r5, [sp]
    mov r0, #0x98
    stmib sp, {r0, r4}
    mov r1, r8
    mov r2, r6
    mov r0, r10
    mov r3, #0x68
    bl func_ov017_021670e4
    ldr r5, =data_020c46d4
    mov r4, #0x1c
    b @L_02166478
@L_0216633c:
    add r1, r11, #2
    mov r0, r11, lsl #5
    add r1, r10, r1, lsl #2
    add r0, r0, #0x20
    mov r2, r0, lsl #0x10
    mov r3, r2, asr #0x10
    ldr r0, [r5]
    ldr r1, [r1, #0x7c]
    mov r2, #8
    bl func_02093bf4
    add r0, r10, r11, lsl #2
    mov r9, #9
    str r0, [sp, #0x14]
    add r6, sp, #0x60
    b @L_0216646c
@L_02166378:
    mul r0, r9, r4
    ldr r1, [r6, r0]
    add r0, r6, r0
    add r1, r11, r1
    add r1, r10, r1, lsl #2
    ldr r7, [r1, #0x7c]
    ldr r8, [r0, #4]
    cmp r8, #5
    beq @L_021663c0
    ldr r1, [r0, #8]
    ldr r0, [r5]
    add r1, r10, r1, lsl #2
    ldr r2, [r1, #0x48]
    mov r1, r7
    and r3, r2, #0xff
    mov r2, r8
    bl func_02093188
    b @L_021663f8
@L_021663c0:
    ldr r3, [sp, #0x14]
    ldr r0, [r5]
    ldr r3, [r3, #0x6c]
    mov r1, r7
    mov r2, r8
    and r3, r3, #0xff
    bl func_02093188
    mov r0, #0x20
    str r0, [sp]
    ldr r0, [r5]
    mov r1, r7
    mov r2, r8
    mov r3, #0x100
    bl func_020936b4
@L_021663f8:
    mla r3, r9, r4, r6
    mov r0, #0
    str r0, [sp]
    ldr r0, [r5]
    ldr r3, [r3, #0xc]
    mov r1, r7
    mov r2, r8
    bl func_020939c8
    mla r3, r9, r4, r6
    ldr r3, [r3, #0x10]
    ldr r0, [r5]
    mov r3, r3, lsl #0x10
    mov r1, r7
    mov r2, r8
    mov r3, r3, lsr #0x10
    bl func_02093368
    mla r3, r9, r4, r6
    ldr r0, [r3, #0x18]
    mov r1, r7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r3, [r3, #0x14]
    ldr r0, [r5]
    mov r3, r3, lsl #0x10
    mov r2, r8
    mov r3, r3, asr #0x10
    bl func_02093524
    add r9, r9, #1
@L_0216646c:
    cmp r9, #0xe
    blt @L_02166378
    add r11, r11, #1
@L_02166478:
    cmp r11, #4
    blt @L_0216633c
    mov r0, #1
    ldr r1, =data_020cafe0
    str r0, [r10, #0x30]
    ldrh r2, [r1, #0xf4]
    sub r1, r0, #2
    mov r9, #0
    ldr r0, =data_020d3d20
    str r2, [r10, #0x38]
    str r1, [r10, #0x34]
    str r9, [r10, #0x3c]
    bl func_0209b3f8
    str r9, [r10, #0xeb4]
    str r9, [r10, #0xeb8]
    b @L_021664d0
@L_021664b8:
    ldrb r1, [r0, r9, lsl #2]
    add r9, r9, #1
    cmp r1, #0
    ldrne r1, [r10, #0x3c]
    addne r1, r1, #1
    strne r1, [r10, #0x3c]
@L_021664d0:
    cmp r9, #0xbc
    blt @L_021664b8
    ldr r0, [r10, #0x3c]
    ldr r4, =0x66666667
    add r1, r0, #3
    mov r0, r1, asr #1
    add r7, r1, r0, lsr #30
    mov r0, #0
    mov r6, r7, asr #2
    str r0, [sp]
    smull r0, r3, r4, r6
    mov r2, r6, lsr #0x1f
    add r3, r2, r3, asr #2
    ldr r0, [r5]
    ldr r1, [r10, #0x80]
    mov r2, #3
    bl func_020939c8
    smull r1, r3, r4, r6
    mov r0, #0
    str r0, [sp]
    mov r0, r6, lsr #0x1f
    add r3, r0, r3, asr #2
    mov r1, #0xa
    smull r2, r0, r1, r3
    rsb r3, r2, r7, asr #2
    ldr r0, [r5]
    ldr r1, [r10, #0x80]
    mov r2, #4
    bl func_020939c8
    add sp, sp, #0x1e8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov017_02166574(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x1c
    mov r4, r2
    mov r0, r1
    mov r1, r3
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl func_ov015_02134b08
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r3, r4, pc}
    ldr r0, =data_020c46d4
    ldr r12, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r0]
    mov r3, #0
    str r3, [sp]
    mov r1, #1
    stmib sp, {r1, r3}
    str r2, [sp, #0xc]
    mov r2, r4
    mov r1, #5
    str r12, [sp, #0x10]
    bl func_02097898
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov017_021665e4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, #0
    ldr r6, =data_020c46d4
    b @L_0216660c
@L_021665f8:
    add r1, r5, r4, lsl #2
    ldr r0, [r6]
    ldr r1, [r1, #0x7c]
    bl func_02092270
    add r4, r4, #1
@L_0216660c:
    cmp r4, #6
    blt @L_021665f8
    mov r4, #0
    ldr r6, =data_020c46d4
    b @L_02166634
@L_02166620:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x48]
    ldr r0, [r6]
    bl func_02097b3c
    add r4, r4, #1
@L_02166634:
    cmp r4, #9
    blt @L_02166620
    mov r4, #0
    ldr r6, =data_020c46d4
    b @L_0216665c
@L_02166648:
    add r0, r5, r4, lsl #2
    ldr r1, [r0, #0x6c]
    ldr r0, [r6]
    bl func_02097b3c
    add r4, r4, #1
@L_0216665c:
    cmp r4, #4
    blt @L_02166648
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02091d64
    ldr r1, [r5, #0x38]
    ldr r0, =data_020cafe0
    strh r1, [r0, #0xf4]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov017_02166688(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r1, [r4, #0x30]
    mov r7, #2
    cmp r1, #6
    mov r6, #1
    mov r5, #0x358
    addls pc, pc, r1, lsl #2
    b @L_02166d5c
    b @L_02166d5c
    b @L_021666cc
    b @L_02166878
    b @L_02166984
    b @L_02166bb0
    b @L_02166d5c
    b @L_02166d28
@L_021666cc:
    ldr r0, [r4, #4]
    mov r10, #0
    ldr r2, [r0]
    mov r1, r10
    ldr r2, [r2, #0x3c]
    blx r2
    ldr r0, =data_020d3d20
    ldr r7, [r4, #0x38]
    bl func_0209b3f8
    mov r8, r0
    mov r9, r10
    add r11, r4, #0x94
    b @L_02166824
@L_02166700:
    add r1, r9, r7, lsl #2
    ldr r0, [r4, #0x3c]
    cmp r1, r0
    bge @L_0216682c
    ldrb r3, [r8, r1, lsl #2]
    cmp r3, #0x11
    cmpne r3, #0x12
    cmpne r3, #0x13
    cmpne r3, #0x19
    cmpne r3, #0x1a
    cmpne r3, #0x1b
    cmpne r3, #0x1c
    cmpne r3, #0x1d
    cmpne r3, #0x25
    cmpne r3, #0x26
    cmpne r3, #0x27
    cmpne r3, #0x2f
    cmpne r3, #0x30
    cmpne r3, #0x31
    cmpne r3, #0x39
    cmpne r3, #0x3a
    cmpne r3, #0x3b
    cmpne r3, #0x42
    cmpne r3, #0x43
    cmpne r3, #0x44
    cmpne r3, #0x45
    cmpne r3, #0x4e
    cmpne r3, #0x4f
    cmpne r3, #0x57
    cmpne r3, #0x58
    cmpne r3, #0x59
    cmpne r3, #0x5f
    cmpne r3, #0x60
    cmpne r3, #0x61
    cmpne r3, #0x62
    cmpne r3, #0x69
    cmpne r3, #0x6a
    cmpne r3, #0x6b
    cmpne r3, #0x6c
    cmpne r3, #0x6d
    beq @L_02166820
    mul r2, r10, r5
    add r0, r4, r2
    add r12, r8, r1, lsl #2
    strb r3, [r0, #0x3e9]
    ldrb r3, [r12, #1]
    add r2, r11, r2
    strb r3, [r0, #0x3e8]
    ldrh r3, [r12, #2]
    str r3, [r0, #0x3e4]
    str r2, [sp, #0x10]
    ldr r0, =data_020c47b4
    ldrb r1, [r8, r1, lsl #2]
    ldr r0, [r0]
    cmp r0, #0
    sub r1, r1, #1
    mov r0, #0x248
    mul r0, r1, r0
    beq @L_0216681c
    str r0, [sp]
    mov r0, #0x248
    str r0, [sp, #4]
    mov r0, #0
    str r0, [sp, #8]
    ldr r0, =data_020c47b4
    str r6, [sp, #0xc]
    ldr r0, [r0]
    ldr r1, =data_ov017_02167844
    ldr r3, =data_020c47b4
    add r2, sp, #0x10
    bl _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih
@L_0216681c:
    add r10, r10, #1
@L_02166820:
    add r9, r9, #1
@L_02166824:
    cmp r9, #4
    blt @L_02166700
@L_0216682c:
    mov r9, r10
    str r10, [r4, #0x44]
    mov r6, #2
    ldr r5, =data_020c46d4
    b @L_0216685c
@L_02166840:
    add r0, r9, #2
    add r1, r4, r0, lsl #2
    ldr r0, [r5]
    ldr r1, [r1, #0x7c]
    mov r2, r6
    bl func_02093d1c
    add r9, r9, #1
@L_0216685c:
    cmp r9, #4
    blt @L_02166840
    ldr r0, [r4, #0x30]
    add sp, sp, #0x14
    add r0, r0, #1
    str r0, [r4, #0x30]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166878:
    ldr r0, [r4, #0x44]
    cmp r0, #0
    addeq r0, r1, #1
    addeq sp, sp, #0x14
    streq r0, [r4, #0x30]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r9, #0
    add r7, r4, #0x94
    mvn r8, #0
    ldr r6, =data_020c47b4
    b @L_021668c8
@L_021668a4:
    ldr r0, [r6]
    cmp r0, #0
    moveq r0, r8
    beq @L_021668bc
    mla r1, r9, r5, r7
    bl _ZN11FileManager7ReleaseEPv
@L_021668bc:
    cmp r0, #0
    bgt @L_021668d4
    add r9, r9, #1
@L_021668c8:
    ldr r0, [r4, #0x44]
    cmp r9, r0
    blt @L_021668a4
@L_021668d4:
    ldr r0, [r4, #0x44]
    mov r7, #1
    cmp r9, r0
    addlt sp, sp, #0x14
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r8, #0x108
    mov r9, #0
    add r10, r4, #0x2dc
    ldr r6, =data_020c47b4
    mov r11, r8
    b @L_02166964
@L_02166900:
    mul r0, r9, r5
    add r2, r4, r0
    ldrb r1, [r2, #0x3e8]
    tst r1, #2
    addne r1, r2, #0x200
    ldrnesb r1, [r1, #0xda]
    cmpne r1, #0
    beq @L_02166960
    sub r1, r1, #1
    mul r2, r1, r11
    ldr r1, [r6]
    add r0, r10, r0
    str r0, [sp, #0x10]
    cmp r1, #0
    beq @L_02166960
    stmia sp, {r2, r8}
    mov r0, #0
    str r0, [sp, #8]
    str r7, [sp, #0xc]
    ldr r0, [r6]
    ldr r1, =data_ov017_02167864
    add r2, sp, #0x10
    mov r3, r6
    bl _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih
@L_02166960:
    add r9, r9, #1
@L_02166964:
    ldr r0, [r4, #0x44]
    cmp r9, r0
    blt @L_02166900
    ldr r0, [r4, #0x30]
    add sp, sp, #0x14
    add r0, r0, #1
    str r0, [r4, #0x30]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166984:
    mov r9, #0
    add r6, r4, #0x2dc
    mvn r7, #0
    ldr r8, =data_020c47b4
    b @L_021669dc
@L_02166998:
    mul r2, r9, r5
    add r1, r4, r2
    ldrb r0, [r1, #0x3e8]
    tst r0, #2
    addne r0, r1, #0x200
    ldrnesb r0, [r0, #0xda]
    cmpne r0, #0
    beq @L_021669d8
    ldr r0, [r8]
    cmp r0, #0
    moveq r0, r7
    beq @L_021669d0
    add r1, r6, r2
    bl _ZN11FileManager7ReleaseEPv
@L_021669d0:
    cmp r0, #0
    bgt @L_021669e8
@L_021669d8:
    add r9, r9, #1
@L_021669dc:
    ldr r0, [r4, #0x44]
    cmp r9, r0
    blt @L_02166998
@L_021669e8:
    ldr r0, [r4, #0x44]
    mov r8, #2
    cmp r9, r0
    mov r7, #1
    addlt sp, sp, #0x14
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r9, #0
    add r10, r4, #0x94
    mov r11, #3
    ldr r6, =data_020c46d4
    b @L_02166af0
@L_02166a14:
    mla r1, r9, r5, r10
    mov r0, r4
    bl func_ov017_02166d80
    mov r0, r4
    add r1, r9, #2
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0x7c]
    add r2, r4, r9, lsl #2
    ldr r2, [r2, #0x6c]
    mla r3, r9, r5, r10
    bl func_ov017_02166db8
    ldr r0, [r6]
    add r1, r9, #2
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0x7c]
    mov r2, r8
    mov r3, r7
    bl func_02093ca8
    ldr r0, [r6]
    add r1, r9, #2
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0x7c]
    mov r2, r8
    mov r3, r7
    bl func_02092c48
    ldr r0, [r6]
    add r1, r9, #2
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0x7c]
    mov r2, r7
    mov r3, r8
    bl func_02093928
    mla r0, r9, r5, r4
    ldrb r0, [r0, #0x3e8]
    tst r0, #1
    bne @L_02166ac0
    add r0, r9, #2
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x7c]
    ldr r0, [r6]
    mov r2, r11
    mov r3, r8
    bl func_02093928
@L_02166ac0:
    mla r0, r9, r5, r4
    ldrb r0, [r0, #0x3e8]
    tst r0, #2
    bne @L_02166aec
    add r0, r9, #2
    add r0, r4, r0, lsl #2
    ldr r1, [r0, #0x7c]
    ldr r0, [r6]
    mov r2, #4
    mov r3, r8
    bl func_02093928
@L_02166aec:
    add r9, r9, #1
@L_02166af0:
    ldr r0, [r4, #0x44]
    cmp r9, r0
    blt @L_02166a14
    mov r7, #0
    str r7, [sp]
    ldr r0, [r4, #0x38]
    ldr r6, =data_020c46d4
    add r0, r0, #1
    ldr r5, =0x66666667
    mov r2, r0, lsr #0x1f
    smull r0, r3, r5, r0
    ldr r0, [r6]
    ldr r1, [r4, #0x80]
    add r3, r2, r3, asr #2
    mov r2, #1
    mov r8, #0x358
    bl func_020939c8
    str r7, [sp]
    ldr r0, [r4, #0x38]
    mov r1, #0xa
    add r7, r0, #1
    mov r0, r7, lsr #0x1f
    smull r2, r3, r5, r7
    add r3, r0, r3, asr #2
    smull r2, r0, r1, r3
    ldr r0, [r6]
    ldr r1, [r4, #0x80]
    sub r3, r7, r2
    mov r2, #2
    bl func_020939c8
    ldr r2, [r4, #0x34]
    cmp r2, #0
    blt @L_02166b8c
    add r1, r4, #0x94
    ldr r0, [r4, #4]
    mla r1, r2, r8, r1
    ldr r2, [r0]
    ldr r2, [r2, #0x3c]
    blx r2
@L_02166b8c:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    ldr r0, [r4, #0x30]
    add sp, sp, #0x14
    add r0, r0, #1
    str r0, [r4, #0x30]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166bb0:
    bl func_ov017_02167110
    mov r8, r0
    cmp r8, #3
    bne @L_02166be4
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r5, #6
    mov r0, r5
    bl func_ov015_02132628
    add sp, sp, #0x14
    str r5, [r4, #0x30]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166be4:
    ldr r5, [r4, #0x38]
    cmp r8, #1
    subeq r0, r5, #1
    streq r0, [r4, #0x38]
    cmp r8, #2
    ldreq r0, [r4, #0x38]
    addeq r0, r0, #1
    streq r0, [r4, #0x38]
    ldr r0, [r4, #0x3c]
    ldr r2, [r4, #0x38]
    add r1, r0, #3
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r1, r0, asr #2
    add r0, r2, r0, asr #2
    bl func_0202273c
    str r1, [r4, #0x38]
    cmp r1, r5
    beq @L_02166c50
    ldr r0, =data_020c5e40
    mov r1, r6
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, #0
    add sp, sp, #0x14
    str r6, [r4, #0x30]
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166c50:
    cmp r8, #1
    cmpne r8, #2
    bne @L_02166c68
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
@L_02166c68:
    ldr r0, [r4, #0x44]
    cmp r0, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r4
    bl func_ov017_021672c4
    ldr r0, =data_020d3d20
    ldr r10, [r4, #0x38]
    bl func_0209b3f8
    mov r8, r0
    mov r9, #0
    mov r11, #3
    ldr r5, =data_020c46d4
    b @L_02166d18
@L_02166ca0:
    ldr r0, [r4, #0x34]
    cmp r9, r0
    bne @L_02166cf8
    add r0, r9, r10, lsl #2
    add r3, r8, r0, lsl #2
    ldrb r2, [r3, #1]
    add r0, r9, #2
    add r1, r4, r0, lsl #2
    and r0, r2, #0xfe
    strb r0, [r3, #1]
    str r6, [sp]
    ldr r0, [r5]
    ldr r1, [r1, #0x7c]
    mov r2, r6
    mov r3, r7
    bl func_0209386c
    ldr r0, [r5]
    add r1, r9, #2
    add r1, r4, r1, lsl #2
    ldr r1, [r1, #0x7c]
    mov r2, r11
    b @L_02166d0c
@L_02166cf8:
    add r0, r9, #2
    add r1, r4, r0, lsl #2
    ldr r0, [r5]
    ldr r1, [r1, #0x7c]
    mov r2, r6
@L_02166d0c:
    mov r3, r7
    bl func_02093928
    add r9, r9, #1
@L_02166d18:
    cmp r9, #4
    blt @L_02166ca0
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02166d28:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    mov r0, r4
    mov r1, r6
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
@L_02166d5c:
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov017_02166d80(s32 arg0, u8 *arg1)
{
    s32 local[129];
    STD_CopyString((s32)((u8 *)local), (arg1 + 0x44));
    func_ov017_02166e28((arg1 + 0x44), (s32)((u8 *)local), *(s32 *)(arg1 + 0x350), *(u8 *)(arg1 + 0x355));
}

extern "C" void func_ov017_02166db8(s32 arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    func_02093188(*(s32 *)(data_020c46d4), arg1, 2, (*(s32 *)(((u8 *)(arg0 + ((*(s8 *)(arg3) + 4) << 2))) + 0x48) & 0xFF));
    func_ov015_0213328c((arg3 + 2), arg2, 1, 1, 1, 0, 0, 0, 0, 1);
}

extern "C" asm s32 func_ov017_02166e28(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc0
    mov r5, r0
    mov r4, r1
    mov r10, r2
    cmp r3, #8
    mov r6, #0
    beq @L_02166e50
    cmp r3, #6
    bne @L_02166eb8
@L_02166e50:
    ldr r7, =data_020e88a0
    mov r8, #0
@L_02166e58:
    mov r0, r7
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_020768fcEm
    mov r9, r0
    ldrb r0, [r9, #0x29]
    cmp r0, #0
    beq @L_02166e90
    cmp r0, r10
    bne @L_02166e90
    mov r0, r7
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_020768fcEm
    mov r9, r0
    b @L_02166e9c
@L_02166e90:
    add r8, r8, #1
    cmp r8, #0x400
    blt @L_02166e58
@L_02166e9c:
    add r0, sp, #0x20
    mov r1, r9
    bl STD_CopyString
    add r0, sp, #0x40
    mov r1, r9
    bl STD_CopyString
    b @L_02166ef8
@L_02166eb8:
    cmp r10, #0
    beq @L_02166ef8
    add r7, sp, #0x60
    mov r1, r10, lsl #0x10
    ldr r0, =data_020e88a0
    mov r2, r7
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    cmp r0, #0
    beq @L_02166ef8
    add r0, sp, #0x20
    mov r1, r7
    bl STD_CopyString
    add r0, sp, #0x40
    add r1, sp, #0x80
    bl STD_CopyString
@L_02166ef8:
    ldrsb r0, [r4]
    mov r8, #0
    mov r9, r8
    cmp r0, #0
    beq @L_02167090
@L_02166f0c:
    ldrsb r0, [r4]
    cmp r0, #0x25
    bne @L_02166fe8
    ldrsb r0, [r4, #1]!
    mov r7, #0
    cmp r0, #0x73
    bne @L_02166f50
    add r0, sp, #0x20
    add r10, r0, r9, lsl #5
    mov r0, r10
    bl STD_GetStringLength
    mov r7, r0
    add r0, sp, #0
    mov r1, r10
    bl STD_CopyString
    add r0, r9, #1
    and r9, r0, #1
@L_02166f50:
    cmp r7, #0
    beq @L_02167084
    ldr r0, =data_020c46a8
    add r7, sp, #0
    ldr r0, [r0]
    mov r1, r7
    bl _ZN8TextFont12GetTextWidthEPKc
    mov r10, #0
    mov r0, r5
    mov r1, r7
    strb r10, [r5, r8]
    bl STD_ConcatenateString
    mov r0, r5
    bl STD_GetStringLength
    mov r8, r0
    mov r0, r7
    bl STD_GetStringLength
    cmp r0, #0
    ble @L_02167084
    mov r1, #1
@L_02166fa0:
    ldrb r2, [r7, r10]
    cmp r2, #0x81
    blo @L_02166fb4
    cmp r2, #0x9f
    bls @L_02166fc4
@L_02166fb4:
    cmp r2, #0xe0
    blo @L_02166fcc
    cmp r2, #0xfc
    bhi @L_02166fcc
@L_02166fc4:
    mov r2, r1
    b @L_02166fd0
@L_02166fcc:
    mov r2, r6
@L_02166fd0:
    cmp r2, #0
    addne r10, r10, #1
    add r10, r10, #1
    cmp r10, r0
    blt @L_02166fa0
    b @L_02167084
@L_02166fe8:
    cmp r0, #0x5c
    bne @L_02167014
    ldrsb r0, [r4, #1]!
    cmp r0, #0x66
    beq @L_0216700c
    cmp r0, #0x6e
    moveq r0, #0xa
    streqb r0, [r4]
    b @L_02167014
@L_0216700c:
    mov r0, #0xc
    strb r0, [r4]
@L_02167014:
    ldrsb r0, [r4]
    cmp r0, #0xa
    cmpne r0, #0xc
    beq @L_02167034
    ldr r0, =data_020c46a8
    mov r1, r4
    ldr r0, [r0]
    bl _ZN8TextFont12GetCharWidthEPKc
@L_02167034:
    ldrsb r1, [r4]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_0216704c
    cmp r0, #0x9f
    bls @L_0216705c
@L_0216704c:
    cmp r0, #0xe0
    blo @L_02167064
    cmp r0, #0xfc
    bhi @L_02167064
@L_0216705c:
    mov r0, #1
    b @L_02167068
@L_02167064:
    mov r0, #0
@L_02167068:
    cmp r0, #0
    strneb r1, [r5, r8]
    addne r4, r4, #1
    ldrsb r0, [r4]
    addne r8, r8, #1
    strb r0, [r5, r8]
    add r8, r8, #1
@L_02167084:
    ldrsb r0, [r4, #1]!
    cmp r0, #0
    bne @L_02166f0c
@L_02167090:
    mov r0, #0
    strb r0, [r5, r8]
    add sp, sp, #0xc0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov017_021670a8(void)
{
}

extern "C" s32 func_ov017_021670ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xDF4) = arg2;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xDF8) = arg3;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xDFC) = arg4;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE00) = arg5;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE04) = arg6;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE0C) = 0;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE08) = 0;
    return 0;
}

extern "C" s32 func_ov017_021670e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE10) = arg2;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE14) = arg3;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE18) = arg4;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE1C) = arg5;
    *(s32 *)(((u8 *)((arg1 * 0x30) + arg0)) + 0xE20) = arg6;
    return arg6;
}

extern "C" asm void func_ov017_02167110(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r0
    add r0, r10, #0x20c
    add r1, r10, #0x208
    mov r4, #0x30
    mov r11, #0
    mov r9, #1
    add r8, r0, #0xc00
    add r7, r1, #0xc00
    ldr r6, =data_020c484c
    ldr r5, =data_020c46d4
    b @L_021672a8
@L_02167144:
    mul r0, r9, r4
    add r2, r10, r0
    ldrh r3, [r10, #8]
    ldr r1, [r2, #0xe10]
    tst r3, r1
    movne r1, #4
    strne r1, [r2, #0xe08]
    ldrne r1, [r8, r0]
    mla r3, r9, r4, r10
    orrne r1, r1, #6
    strne r1, [r8, r0]
    ldr r1, [r3, #0xe1c]
    mov r0, r10
    str r1, [sp]
    ldr r2, [r3, #0xe20]
    mov r1, #3
    str r2, [sp, #4]
    ldr r2, [r3, #0xe14]
    ldr r3, [r3, #0xe18]
    bl func_ov017_02165e84
    cmp r0, #0
    mulne r1, r9, r4
    ldrne r0, [r8, r1]
    orrne r0, r0, #2
    strne r0, [r8, r1]
    ldr r0, [r10, #0x2c]
    cmp r0, #0
    beq @L_02167204
    mla r3, r9, r4, r10
    ldr r1, [r3, #0xe1c]
    mov r0, r10
    str r1, [sp]
    ldr r2, [r3, #0xe20]
    mov r1, #4
    str r2, [sp, #4]
    ldr r2, [r3, #0xe14]
    ldr r3, [r3, #0xe18]
    bl func_ov017_02165e84
    cmp r0, #0
    beq @L_02167204
    ldr r0, [r6]
    mul r1, r9, r4
    add r2, r0, #4
    add r0, r10, r1
    str r2, [r0, #0xe08]
    ldr r0, [r8, r1]
    orr r0, r0, #4
    str r0, [r8, r1]
@L_02167204:
    mla r3, r9, r4, r10
    ldr r0, [r3, #0xe0c]
    tst r0, #2
    mov r0, #0
    str r0, [sp]
    ldr r0, [r5]
    ldr r1, [r3, #0xdf4]
    beq @L_02167230
    ldr r2, [r3, #0xdf8]
    ldr r3, [r3, #0xe00]
    b @L_02167238
@L_02167230:
    ldr r2, [r3, #0xdf8]
    ldr r3, [r3, #0xdfc]
@L_02167238:
    bl func_020939c8
    mul r0, r9, r4
    ldr r3, [r7, r0]
    ldr r1, [r6]
    add r2, r10, r0
    sub r1, r3, r1
    str r1, [r7, r0]
    ldr r1, [r2, #0xe08]
    cmp r1, #0
    ldrgt r1, [r8, r0]
    orrgt r1, r1, #2
    strgt r1, [r8, r0]
    bgt @L_021672a4
    mov r1, #0
    str r1, [r2, #0xe08]
    ldr r1, [r2, #0xe0c]
    tst r1, #2
    bne @L_02167294
    tst r1, #4
    ldrne r1, [r8, r0]
    movne r11, r9
    bicne r1, r1, #4
    strne r1, [r8, r0]
@L_02167294:
    mul r1, r9, r4
    ldr r0, [r8, r1]
    bic r0, r0, #2
    str r0, [r8, r1]
@L_021672a4:
    add r9, r9, #1
@L_021672a8:
    cmp r9, #4
    blt @L_02167144
    mov r0, r11
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov017_021672c4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r10, r0
    ldr r0, [r10, #0x28]
    ldr r8, [r10, #0x34]
    cmp r0, #0
    ldr r9, [r10, #0x38]
    beq @L_0216734c
    ldr r0, [r10, #0x44]
    mov r7, #0
    cmp r0, #0
    ble @L_021674a0
    mov r6, #0xf8
    mov r5, #1
    mov r4, #8
@L_02167300:
    add r0, r7, #1
    mov r12, r0, lsl #5
    mov r3, r7, lsl #5
    str r6, [sp]
    add r12, r12, #0x20
    mov r0, r10
    mov r1, r5
    mov r2, r4
    add r3, r3, #0x20
    str r12, [sp, #4]
    bl func_ov017_02165e84
    cmp r0, #0
    strne r7, [r10, #0x34]
    bne @L_021674a0
    ldr r0, [r10, #0x44]
    add r7, r7, #1
    cmp r7, r0
    blt @L_02167300
    b @L_021674a0
@L_0216734c:
    ldrh r0, [r10, #8]
    tst r0, #0x40
    beq @L_021673a4
    cmp r8, #0
    bne @L_021673a4
    cmp r9, #0
    ble @L_02167394
    mov r4, #1
    ldr r0, =data_020c5e40
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r10, #0x38]
    mov r1, #3
    sub r0, r0, #1
@L_02167384:
    str r4, [r10, #0x30]
    str r1, [r10, #0x34]
    str r0, [r10, #0x38]
    b @L_02167448
@L_02167394:
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    b @L_02167448
@L_021673a4:
    ldrh r1, [r10, #0xa]
    tst r1, #0x40
    beq @L_021673cc
    cmp r8, #0
    ble @L_02167448
    ldr r0, [r10, #0xeb4]
    cmp r0, #0
    ldreq r0, [r10, #0x34]
    subeq r0, r0, #1
    b @L_02167444
@L_021673cc:
    tst r0, #0x80
    beq @L_02167420
    ldr r0, [r10, #0x44]
    sub r0, r0, #1
    cmp r8, r0
    bne @L_02167420
    ldr r0, [r10, #0x3c]
    sub r1, r0, #1
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    cmp r9, r0, asr #2
    bge @L_0216741c
    mov r4, #1
    ldr r0, =data_020c5e40
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r10, #0x38]
    mov r1, #0
    add r0, r0, #1
    b @L_02167384
@L_0216741c:
    b @L_02167394
@L_02167420:
    tst r1, #0x80
    ldrne r0, [r10, #0x44]
    subne r0, r0, #1
    cmpne r8, r0
    bge @L_02167448
    ldr r0, [r10, #0xeb8]
    cmp r0, #0
    ldreq r0, [r10, #0x34]
    addeq r0, r0, #1
@L_02167444:
    streq r0, [r10, #0x34]
@L_02167448:
    ldrh r0, [r10, #0xa]
    tst r0, #0x40
    ldrne r0, [r10, #0xeb4]
    addne r0, r0, #1
    moveq r0, #0
    str r0, [r10, #0xeb4]
    ldrh r0, [r10, #0xa]
    tst r0, #0x80
    ldrne r0, [r10, #0xeb8]
    addne r0, r0, #1
    moveq r0, #0
    str r0, [r10, #0xeb8]
    ldr r0, [r10, #0xeb4]
    ldr r2, [r10, #0xeb8]
    mov r1, r0, lsr #0x1f
    mov r3, r2, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    add r1, r1, r0, ror #29
    rsb r2, r3, r2, lsl #29
    add r0, r3, r2, ror #29
    str r1, [r10, #0xeb4]
    str r0, [r10, #0xeb8]
@L_021674a0:
    ldr r0, [r10, #0x38]
    cmp r9, r0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r10, #0x34]
    cmp r8, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r10, #4]
    ldr r3, [r10, #0x34]
    ldr r2, [r0]
    add r4, r10, #0x94
    mov r1, #0x358
    mla r1, r3, r1, r4
    ldr r2, [r2, #0x3c]
    blx r2
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
