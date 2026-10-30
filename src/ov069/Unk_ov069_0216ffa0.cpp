#include "ov069/Unk_ov069_0216ffa0.hpp"

extern "C" s32 func_ov069_0216ffa0(void);
extern "C" void func_ov069_0216ffa8(void);
extern "C" void func_ov069_02170030(void);
extern "C" void func_ov069_02170054(void);
extern "C" void func_ov069_02170094(void);
extern "C" void func_ov069_021700d4(void);
extern "C" void func_ov069_02170124(void);
extern "C" void func_ov069_021701bc(void);
extern "C" s32 func_ov069_02170228(void);
extern "C" void func_ov069_02170230(void);
extern "C" void func_ov069_021703bc(void);
extern "C" void func_ov069_021703c0(void);
extern "C" void func_ov069_021703fc(void);
extern "C" void func_ov069_02170414(void);
extern "C" void func_ov069_021705e0(void);
extern "C" void func_ov069_021705f4(void);
extern "C" void func_ov069_021705f8(void);
extern "C" void func_ov069_021705fc(void);

extern "C" char data_020c46d4[];
extern "C" char data_ov069_021706ec[];
extern "C" char data_ov069_02170720[];
extern "C" void G2x_ChangeBlendBrightness_(void);
extern "C" void GXx_SetMasterBrightness_(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1f4Ev(void);
extern "C" void _ZdlPv(void);
extern "C" void _Znam(void);
extern "C" void func_020255e4(void);
extern "C" void func_02091d54(void);
extern "C" void func_02091d64(void);
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
extern "C" void sprintf(void);

extern "C" s32 func_ov069_0216ffa0(void)
{
    return 1;
}

extern "C" asm void func_ov069_0216ffa8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x114
    add r7, sp, #0x14
    mov r5, r0
    mov r8, r2
    mov r6, #0
    mov r4, r1
    mov r0, r7
    mov r1, r6
    mov r2, #0x100
    bl MI_CpuFill8
    ldr r1, =data_ov069_021706ec
    mov r0, r7
    mov r2, r8
    bl sprintf
    ldr r0, =data_020c46d4
    mov r2, r7
    ldr r0, [r0]
    mov r1, #5
    str r6, [sp]
    str r6, [sp, #4]
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    mov r3, #1
    str r6, [sp, #0x10]
    bl func_02097898
    mov r1, #0x2c
    mla r1, r4, r1, r5
    str r0, [r1, #0x14]
    strb r6, [r5, #0xc0]
    add sp, sp, #0x114
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov069_02170030(void)
{
    mov r2, #0x2c
    mla r2, r1, r2, r0
    ldr r0, =data_020c46d4
    ldr r1, [r2, #0x14]
    ldr r0, [r0]
    ldr r12, =func_02097b3c
    bx r12
}

extern "C" asm void func_ov069_02170054(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_020c46d4
    mov r5, r0
    ldr r0, [r1]
    ldr r1, [r5, #0xcc]
    bl func_02092270
    mov r4, #0
    b @L_02170084
@L_02170074:
    mov r0, r5
    mov r1, r4
    bl func_ov069_02170030
    add r4, r4, #1
@L_02170084:
    cmp r4, #4
    blt @L_02170074
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov069_02170094(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    mov r0, #0x2c
    mla r1, r4, r0, r5
    ldr r0, =data_020c46d4
    mov r2, #0
    ldr r1, [r1, #0x14]
    ldr r0, [r0]
    mov r3, r2
    bl func_02097ca8
    mov r0, r5
    mov r1, r4
    bl func_ov069_02170124
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov069_021700d4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0x2c
    mla r0, r1, r2, r0
    ldr r5, [r0, #0x14]
    cmp r5, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020c46d4
    mov r1, r5
    ldr r0, [r4]
    bl func_02097aa0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4]
    mov r1, r5
    bl func_02097c74
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov069_02170124(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r0, #0x2c
    mla r0, r1, r0, r7
    ldr r4, =data_020c46d4
    ldr r3, [r0, #0x14]
    mov r6, #1
    ldr r0, [r4]
    ldr r1, [r7, #0xcc]
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    mov r5, #0
    str r5, [sp]
    ldr r0, [r4]
    ldr r1, [r7, #0xcc]
    mov r2, r6
    mov r3, r5
    bl func_020939c8
    str r5, [sp]
    ldr r0, [r4]
    ldr r1, [r7, #0xcc]
    mov r2, r6
    mov r3, r5
    bl func_02093524
    mov r3, r5
    ldr r0, [r4]
    ldr r1, [r7, #0xcc]
    mov r2, r6
    bl func_02093368
    str r6, [sp]
    ldr r0, [r4]
    ldr r1, [r7, #0xcc]
    mov r2, r6
    mov r3, #2
    bl func_0209386c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov069_021701bc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #8
    mov r2, #0xb0
    bl MI_CpuFill8
    ldr r0, =data_ov069_02170720
    str r4, [r5, #0xc4]
    str r4, [r5, #0xc8]
    str r4, [r0]
    str r4, [r0, #4]
    str r4, [r0, #8]
    mov r0, #0xc000
    bl _Znam
    str r0, [r5, #0xbc]
    mov r0, #0x600
    bl _Znam
    str r0, [r5, #0xb8]
@L_02170208:
    ldr r1, [r5, #0xb8]
    mov r0, r4, lsl #1
    strh r4, [r1, r0]
    add r4, r4, #1
    cmp r4, #0x300
    blt @L_02170208
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov069_02170228(void)
{
    return 1;
}

extern "C" asm void func_ov069_02170230(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #0xc8]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0217025c
    b @L_02170284
    b @L_021702d0
    b @L_02170330
    b @L_021703a0
@L_0217025c:
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r0, #0x6a
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x6a
    moveq r0, #1
    streq r0, [r4, #0xc8]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170284:
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e1f4Ev
    cmp r0, #0x6a
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x6a
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r5, =data_020c46d4
    ldr r0, [r5]
    bl func_02091d54
    mov r1, #1
    ldr r0, [r5]
    mov r2, r1
    bl func_020920c4
    mov r1, #2
    str r0, [r4, #0xcc]
    str r1, [r4, #0xc8]
    ldmia sp!, {r3, r4, r5, pc}
@L_021702d0:
    bl func_ov069_02170414
    ldr r0, [r4, #0xc4]
    ldr r5, =0x4000050
    mov r1, r0, lsl #4
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r1, r0, asr #3
    mov r0, r5
    sub r1, r1, #0x10
    bl G2x_ChangeBlendBrightness_
    ldr r1, [r4, #0xc4]
    add r0, r5, #0x1c
    mov r2, r1, lsl #4
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    mov r1, r1, asr #3
    sub r1, r1, #0x10
    bl GXx_SetMasterBrightness_
    ldr r0, =data_ov069_02170720
    ldr r0, [r0, #4]
    cmp r0, #0
    movne r0, #3
    strne r0, [r4, #0xc8]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170330:
    ldr r1, [r4, #0xc4]
    sub r1, r1, #1
    str r1, [r4, #0xc4]
    cmp r1, #0
    bgt @L_02170358
    mov r1, #0
    str r1, [r4, #0xc4]
    bl func_ov069_021703c0
    mov r0, #4
    str r0, [r4, #0xc8]
@L_02170358:
    ldr r0, [r4, #0xc4]
    ldr r5, =0x4000050
    mov r1, r0, lsl #4
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r1, r0, asr #3
    mov r0, r5
    sub r1, r1, #0x10
    bl G2x_ChangeBlendBrightness_
    ldr r1, [r4, #0xc4]
    add r0, r5, #0x1c
    mov r2, r1, lsl #4
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    mov r1, r1, asr #3
    sub r1, r1, #0x10
    bl GXx_SetMasterBrightness_
    ldmia sp!, {r3, r4, r5, pc}
@L_021703a0:
    ldr r0, =data_ov069_02170720
    mov r1, #1
    str r1, [r0, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov069_021703bc(void)
{
}

extern "C" asm void func_ov069_021703c0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov069_02170054
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02091d64
    ldr r0, [r5, #0xbc]
    bl func_020255e4
    mov r4, #0
    ldr r0, [r5, #0xb8]
    str r4, [r5, #0xbc]
    bl func_020255e4
    str r4, [r5, #0xb8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov069_021703fc(void)
{
    ldr r0, =0x400006c
    ldr r12, =GXx_SetMasterBrightness_
    mov r1, #0
    bx r12
}

extern "C" asm void func_ov069_02170414(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r6, #0
    mov r9, r0
    mov r4, #0x2c
    mov r2, r6
@L_02170428:
    mla r1, r2, r4, r9
    ldr r0, [r1, #0x18]
    add r2, r2, #1
    cmp r0, #5
    streq r6, [r1, #0x18]
    cmp r2, #4
    blt @L_02170428
    ldr r5, =data_ov069_02170720
    ldr r0, [r5]
    cmp r0, #0
    beq @L_021704bc
    mov r8, #0
    mov r11, #5
    mov r10, #1
@L_02170460:
    mla r7, r8, r4, r9
    ldr r0, [r7, #0x18]
    cmp r0, #0
    bne @L_02170494
    ldr r2, [r5]
    cmp r2, #0
    beq @L_02170494
    mov r0, r9
    mov r1, r8
    bl func_ov069_0216ffa8
    str r10, [r7, #0x18]
    str r6, [r5]
    b @L_021704b0
@L_02170494:
    sub r0, r0, #1
    cmp r0, #2
    bhi @L_021704b0
    mov r0, r9
    mov r1, r8
    bl func_ov069_02170030
    str r11, [r7, #0x18]
@L_021704b0:
    add r8, r8, #1
    cmp r8, #4
    blt @L_02170460
@L_021704bc:
    mvn r4, #0
    mov r5, r4
    mov r6, r4
    mov r8, #0
    mov r10, #2
    mov r11, #3
@L_021704d4:
    mov r0, #0x2c
    mla r7, r8, r0, r9
    ldr r0, [r7, #0x18]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02170534
    b @L_02170534
    b @L_02170500
    b @L_0217051c
    b @L_02170528
    b @L_02170530
@L_02170500:
    mov r0, r9
    mov r1, r8
    mov r4, r8
    bl func_ov069_021700d4
    cmp r0, #0
    beq @L_02170534
    str r10, [r7, #0x18]
@L_0217051c:
    mov r4, r8
    str r11, [r7, #0x18]
    b @L_02170534
@L_02170528:
    mov r5, r8
    b @L_02170534
@L_02170530:
    mov r6, r8
@L_02170534:
    add r8, r8, #1
    cmp r8, #4
    mov r3, #0
    blt @L_021704d4
    cmp r6, #0
    mov r7, #0x2c
    blt @L_021705ac
    cmp r4, #0
    bge @L_02170560
    cmp r5, #0
    blt @L_02170594
@L_02170560:
    ldr r0, [r9, #0xc4]
    sub r0, r0, #1
    str r0, [r9, #0xc4]
    cmp r0, #0
    bgt @L_021705ac
    mla r2, r6, r7, r9
    str r3, [r9, #0xc4]
    mov r3, #5
    mov r0, r9
    mov r1, r6
    str r3, [r2, #0x18]
    bl func_ov069_02170030
    b @L_021705ac
@L_02170594:
    ldr r0, [r9, #0xc4]
    add r0, r0, #1
    str r0, [r9, #0xc4]
    cmp r0, #8
    movge r0, #8
    strge r0, [r9, #0xc4]
@L_021705ac:
    ldr r0, [r9, #0xc4]
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    mov r1, r5
    bl func_ov069_02170094
    mla r0, r5, r7, r9
    mov r1, #4
    str r1, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov069_021705e0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov069_021705f4(void)
{
}

extern "C" void func_ov069_021705f8(void)
{
}

extern "C" void func_ov069_021705fc(void)
{
}
