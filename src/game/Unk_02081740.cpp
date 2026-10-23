#include "game/Unk_02081740.hpp"

extern "C" void func_02081740(void);
extern "C" void func_020817bc(void);
extern "C" void func_020817f0(void);
extern "C" void func_02081894(void);
extern "C" void func_020818c8(void);
extern "C" void func_020819ac(void);
extern "C" void func_02081a6c(void);
extern "C" void func_02081aa0(void);
extern "C" void func_02081ac0(void);
extern "C" void func_02081ae4(void);
extern "C" void func_02081b04(void);
extern "C" void func_02081b24(void);
extern "C" void func_02081b44(void);
extern "C" void func_02081b70(void);

extern "C" char data_020cadf4[];
extern "C" char data_020caf20[];
extern "C" char data_020e88a0[];
extern "C" void MI_CpuCopy8(void);
extern "C" void _ZN17UnkClass_020621b413func_0206ea68Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a534Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f2f8Ev(void);

extern "C" asm void func_02081740(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    mov r1, r4, lsl #0x10
    ldr r0, =data_020e88a0
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    movs r1, r0
    and r0, r1, #7
    mov r2, #1
    mov r0, r2, lsl r0
    ldmmiia sp!, {r3, r4, r5, pc}
    cmp r1, #0x960
    ldmhiia sp!, {r3, r4, r5, pc}
    ldrb r2, [r5, r1, asr #3]
    and r3, r0, #0xff
    tst r3, r2
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020cadf4
    orr r2, r2, r3
    strb r2, [r5, r1, asr #3]
    bl func_02081894
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020caf20
    mov r1, r4
    bl func_020818c8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020817bc(void)
{
    cmp r1, #0
    and r2, r1, #7
    mov r3, #1
    blt @L_020817d4
    cmp r1, #0x960
    bls @L_020817dc
@L_020817d4:
    mov r0, #0
    bx lr
@L_020817dc:
    ldrb r0, [r0, r1, asr #3]
    tst r0, r3, lsl r2
    moveq r3, #0
    mov r0, r3
    bx lr
}

extern "C" asm void func_020817f0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x60
    mov r5, r1
    mov r1, r5, lsl #0x10
    ldr r4, =data_020e88a0
    mov r6, r0
    mov r0, r4
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    cmp r0, #0
    and r1, r0, #7
    mov r2, #1
    addlt sp, sp, #0x60
    mov r2, r2, lsl r1
    ldmltia sp!, {r4, r5, r6, pc}
    cmp r0, #0x960
    addhi sp, sp, #0x60
    ldmhiia sp!, {r4, r5, r6, pc}
    ldrb r1, [r6, r0, asr #3]
    and r2, r2, #0xff
    tst r2, r1
    addne sp, sp, #0x60
    ldmneia sp!, {r4, r5, r6, pc}
    orr r2, r1, r2
    strb r2, [r6, r0, asr #3]
    mov r1, r5, lsl #0x10
    add r2, sp, #0
    mov r0, r4
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    ldrb r0, [sp, #0x41]
    cmp r0, #1
    addne sp, sp, #0x60
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, =data_020caf20
    mov r1, r5
    bl func_020818c8
    add sp, sp, #0x60
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02081894(void)
{
    cmp r1, #0
    and r2, r1, #7
    mov r3, #1
    blt @L_020818ac
    cmp r1, #0x960
    bls @L_020818b4
@L_020818ac:
    mov r0, #0
    bx lr
@L_020818b4:
    ldrb r0, [r0, r1, asr #3]
    tst r0, r3, lsl r2
    moveq r3, #0
    mov r0, r3
    bx lr
}

extern "C" asm void func_020818c8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x60
    mov r7, r1
    mov r1, r7, lsl #0x10
    ldr r5, =data_020e88a0
    mov r8, r0
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    movs r4, r0
    and r0, r4, #7
    mov r1, #1
    mov r6, r1, lsl r0
    addmi sp, sp, #0x60
    ldmmiia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, #0x960
    addhi sp, sp, #0x60
    ldmhiia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r0, [r8, r4, asr #3]
    and r1, r6, #0xff
    tst r1, r0
    addne sp, sp, #0x60
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, r7, lsl #0x10
    add r2, sp, #0
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    ldrb r0, [sp, #0x41]
    mov r1, r7, lsl #0x10
    mov r1, r1, lsr #0x10
    cmp r0, #1
    mov r0, r5
    bne @L_02081978
    bl _ZN17UnkClass_020621b413func_0207f2f8Ev
    cmp r0, #0
    beq @L_02081990
    add r1, sp, #0x20
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0206ea68Ev
    and r1, r0, #0xff
    mov r0, r8
    bl func_02081aa0
    b @L_02081990
@L_02081978:
    bl _ZN17UnkClass_020621b413func_0207f2f8Ev
    cmp r0, #0
    beq @L_02081990
    ldrb r1, [sp, #0x41]
    mov r0, r8
    bl func_02081ac0
@L_02081990:
    ldrb r1, [r8, r4, asr #3]
    and r0, r6, #0xff
    orr r0, r1, r0
    strb r0, [r8, r4, asr #3]
    add sp, sp, #0x60
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020819ac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x60
    mov r7, r1
    mov r1, r7, lsl #0x10
    ldr r5, =data_020e88a0
    mov r8, r0
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    movs r4, r0
    and r0, r4, #7
    mov r1, #1
    mov r6, r1, lsl r0
    addmi sp, sp, #0x60
    ldmmiia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r4, #0x960
    addhi sp, sp, #0x60
    ldmhiia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r0, [r8, r4, asr #3]
    and r1, r6, #0xff
    tst r1, r0
    addeq sp, sp, #0x60
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, r7, lsl #0x10
    add r2, sp, #0
    mov r0, r5
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    ldrb r1, [sp, #0x41]
    cmp r1, #1
    bne @L_02081a44
    add r1, sp, #0x20
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_0206ea68Ev
    and r1, r0, #0xff
    mov r0, r8
    bl func_02081ae4
    b @L_02081a4c
@L_02081a44:
    mov r0, r8
    bl func_02081b04
@L_02081a4c:
    ldrb r1, [r8, r4, asr #3]
    eor r0, r6, #0xff
    and r0, r0, #0xff
    and r0, r1, r0
    strb r0, [r8, r4, asr #3]
    add sp, sp, #0x60
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02081a6c(void)
{
    cmp r1, #0
    and r2, r1, #7
    mov r3, #1
    blt @L_02081a84
    cmp r1, #0x960
    bls @L_02081a8c
@L_02081a84:
    mov r0, #0
    bx lr
@L_02081a8c:
    ldrb r0, [r0, r1, asr #3]
    tst r0, r3, lsl r2
    moveq r3, #0
    mov r0, r3
    bx lr
}

extern "C" asm void func_02081aa0(void)
{
    add r2, r0, #0x12c
    ldrb r0, [r2, r1]
    cmp r0, #0xff
    bxhs lr
    cmp r1, #0xa
    addle r0, r0, #1
    strleb r0, [r2, r1]
    bx lr
}

extern "C" asm void func_02081ac0(void)
{
    add r0, r0, #0x36
    add r2, r0, #0x100
    ldrb r0, [r2, r1]
    cmp r0, #0xff
    bxhs lr
    cmp r1, #0x32
    addlt r0, r0, #1
    strltb r0, [r2, r1]
    bx lr
}

extern "C" asm void func_02081ae4(void)
{
    add r2, r0, #0x12c
    ldrb r0, [r2, r1]
    cmp r0, #0
    bxeq lr
    cmp r1, #0xa
    suble r0, r0, #1
    strleb r0, [r2, r1]
    bx lr
}

extern "C" asm void func_02081b04(void)
{
    add r0, r0, #0x36
    add r2, r0, #0x100
    ldrb r0, [r2, r1]
    cmp r0, #0
    cmpne r1, #0x32
    sublt r0, r0, #1
    strltb r0, [r2, r1]
    bx lr
}

extern "C" asm void func_02081b24(void)
{
    add r3, r0, #8
    ldrb r0, [r3, r1]
    adds r0, r2, r0
    movmi r0, #0
    cmp r0, #0xff
    movgt r0, #0xff
    strb r0, [r3, r1]
    bx lr
}

extern "C" asm void func_02081b44(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    ldrh r12, [lr, #4]
    ldrh r3, [lr, #6]
    add r0, lr, #0xf
    add r1, lr, #8
    mov r2, #7
    strh r12, [lr]
    strh r3, [lr, #2]
    bl MI_CpuCopy8
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02081b70(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    ldrh r2, [r5]
    ldrh r1, [r4]
    ldr r0, =0x3e7
    add r1, r2, r1
    strh r1, [r5]
    ldrh r1, [r5]
    ldrh r2, [r5, #2]
    cmp r1, r0
    strhih r0, [r5]
    ldrh r1, [r4, #2]
    ldr r0, =0x3e7
    add r1, r2, r1
    strh r1, [r5, #2]
    ldrh r1, [r5, #2]
    cmp r1, r0
    strhih r0, [r5, #2]
    ldrsb r2, [r4, #4]
    mov r0, r5
    mov r1, #0
    bl func_02081b24
    mov r6, #1
    ldrsb r2, [r4, #5]
    mov r0, r5
    mov r1, r6
    bl func_02081b24
    ldrsb r2, [r4, #6]
    mov r0, r5
    mov r1, #3
    bl func_02081b24
    ldrsb r2, [r4, #7]
    mov r0, r5
    mov r1, #2
    bl func_02081b24
    ldrsb r2, [r4, #8]
    mov r0, r5
    mov r1, #4
    bl func_02081b24
    ldrsb r2, [r4, #9]
    mov r0, r5
    mov r1, #6
    bl func_02081b24
    ldrsb r2, [r4, #0xa]
    mov r0, r5
    mov r1, #5
    bl func_02081b24
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}
