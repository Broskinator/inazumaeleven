// (asm for now)

void OSi_ExceptionHandler(void);
void func_02007820(void);
void func_02007834(void);
void func_020078b4(void);
void func_02007930(void);
void OS_InitTick(void);
void func_020079c4(void);
void func_020079d4(void);
void OS_GetTick(void);
void func_02007adc(void);
void func_02007aec(void);
void func_02007b5c(void);
void func_02007be4(void);
void func_02007c20(void);
void OS_CreateAlarm(void);
void func_02007c40(void);
void func_02007d68(void);
void OS_SetPeriodicAlarm(void);
void OS_CancelAlarm(void);
void func_02007ec8(void);
void func_02007ed8(void);
void func_02007fc4(void);

extern char data_020bb3bc[];
extern char data_020bb3ec[];
void func_020075dc(void);
extern char data_020bb3c0[];
extern char data_020bb3c8[];
void func_020075ec(void);
extern char data_020bb45c[];
extern char data_020bb460[];
void OS_SetIrqFunction(void);
void OS_EnableIrqMask(void);
void func_020053fc(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
extern char data_020bb470[];
void OS_DisableIrqMask(void);
void _ll_udiv(void);
void func_0200878c(void);
extern char data_027e0000[];
extern char data_020bb47c[];

asm void OSi_ExceptionHandler(void)
{
    ldr r12, =data_020bb3bc
    ldr r12, [r12]
    cmp r12, #0
    movne lr, pc
    bxne r12
    ldr r12, =0x2000000
    stmdb r12!, {r0, r1, r2, r3, sp, lr}
    and r0, sp, #1
    mov sp, r12
    mrs r1, CPSR
    and r1, r1, #0x1f
    teq r1, #0x17
    bne @L_020077e8
    bl func_02007820
    b @L_020077f4
@L_020077e8:
    teq r1, #0x1b
    bne @L_020077f4
    bl func_02007820
@L_020077f4:
    ldr r12, =data_020bb3bc
    ldr r12, [r12]
    cmp r12, #0
@L_02007800:
    beq @L_02007800
@L_02007804:
    mov r0, r0
    b @L_02007804
    ldmia sp!, {r0, r1, r2, r3, r12, lr}
    mov sp, r12
    bx lr
}

asm void func_02007820(void)
{
    stmdb sp!, {r0, lr}
    bl func_02007834
    bl func_020078b4
    ldmia sp!, {r0, lr}
    bx lr
}

asm void func_02007834(void)
{
    ldr r1, =data_020bb3ec
    str r0, [r1, #0x6c]
    ldr r0, [r12]
    str r0, [r1, #4]
    ldr r0, [r12, #4]
    str r0, [r1, #8]
    ldr r0, [r12, #8]
    str r0, [r1, #0xc]
    ldr r0, [r12, #0xc]
    str r0, [r1, #0x10]
    ldr r2, [r12, #0x10]
    bic r2, r2, #1
    add r0, r1, #0x14
    stmia r0, {r4, r5, r6, r7, r8, r9, r10, r11}
    ldr r0, [r2]
    str r0, [r1, #0x64]
    ldr r3, [r2, #4]
    str r3, [r1]
    ldr r0, [r2, #8]
    str r0, [r1, #0x34]
    ldr r0, [r2, #0xc]
    str r0, [r1, #0x40]
    mrs r0, CPSR
    orr r3, r3, #0x80
    bic r3, r3, #0x20
    msr cpsr_fsxc, r3
    str sp, [r1, #0x38]
    str lr, [r1, #0x3c]
    mrs r2, spsr
    msr cpsr_fsxc, r0
    bx lr
}

asm void func_020078b4(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020bb3bc
    ldr r0, [r0, #0xc]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mrs r2, CPSR
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmdb sp!, {r1, r2}
    bl func_020075dc
    ldr r0, =data_020bb3ec
    ldr r1, =data_020bb3c0
    ldr r1, [r1]
    ldr r12, =data_020bb3c8
    ldr r12, [r12]
    ldr lr, =0x2007904
    bx r12
    bl func_020075ec
    ldmia sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmia sp!, {r3, pc}
}

asm void func_02007930(void)
{
    ldr r1, =data_020bb45c
    mov r2, #1
    mov r0, r2, lsl r0
    ldrh r2, [r1]
    mov r0, r0, lsl #0x10
    orr r0, r2, r0, lsr #16
    strh r0, [r1]
    bx lr
}

asm void OS_InitTick(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020bb460
    ldrh r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r1, #1
    mov r6, #0
    mov r0, r6
    strh r1, [r4]
    bl func_02007930
    str r6, [r4, #8]
    mov r5, #8
    ldr r3, =0x4000102
    str r6, [r4, #0xc]
    strh r6, [r3]
    ldr r1, =func_020079d4
    mov r0, r5
    strh r6, [r3, #-2]
    mov r2, #0xc1
    strh r2, [r3]
    bl OS_SetIrqFunction
    mov r0, r5
    bl OS_EnableIrqMask
    str r6, [r4, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020079c4(void)
{
    ldr r0, =data_020bb460
    ldrh r0, [r0]
    bx lr
}

asm void func_020079d4(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_020bb460
    mov r3, #0
    ldr r2, [r0, #8]
    ldr r12, [r0, #0xc]
    adds r2, r2, #1
    str r2, [r0, #8]
    adc r1, r12, #0
    str r1, [r0, #0xc]
    ldr r1, [r0, #4]
    cmp r1, #0
    beq @L_02007a1c
    ldr r2, =0x4000102
    mov r1, #0xc1
    strh r3, [r2]
    strh r3, [r2, #-2]
    strh r1, [r2]
    str r3, [r0, #4]
@L_02007a1c:
    mov r0, #0
    ldr r1, =func_020079d4
    mov r2, r0
    bl func_020053fc
    ldmia sp!, {r3, pc}
}

asm void OS_GetTick(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    bl OS_DisableInterrupts
    ldr r4, =0x4000100
    ldr r2, =0xffff
    ldrh r12, [r4]
    ldr r3, =data_020bb460
    sub r1, r2, #0x10000
    strh r12, [sp]
    ldr r12, [r3, #8]
    ldr lr, [r3, #0xc]
    and r12, r12, r1
    and lr, lr, r2
    str r12, [sp, #4]
    str lr, [sp, #8]
    ldr r1, [r4, #0x114]
    tst r1, #8
    beq @L_02007aa8
    ldrh r1, [sp]
    tst r1, #0x8000
    bne @L_02007aa8
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    adds r2, r2, #1
    adc r3, r3, #0
    str r2, [sp, #4]
    str r3, [sp, #8]
@L_02007aa8:
    bl OS_RestoreInterrupts
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    ldrh r0, [sp]
    mov r1, r3, lsl #0x10
    orr r1, r1, r2, lsr #16
    orr r1, r1, r0, asr #31
    orr r0, r0, r2, lsl #16
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void func_02007adc(void)
{
    ldr r0, =0x4000100
    ldrh r0, [r0]
    bx lr
}

asm void func_02007aec(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    bl OS_DisableInterrupts
    mov r12, r5, lsr #0x10
    mov r3, #1
    rsb r1, r3, #0x10000
    ldr lr, =0x4000214
    mov r6, #8
    ldr r2, =data_020bb460
    str r6, [lr]
    str r3, [r2, #4]
    orr r12, r12, r4, lsl #16
    str r12, [r2, #8]
    mov r4, r4, lsr #0x10
    ldr r3, =0x4000102
    str r4, [r2, #0xc]
    mov r2, #0
    strh r2, [r3]
    and r1, r5, r1
    strh r1, [r3, #-2]
    mov r1, #0xc1
    strh r1, [r3]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02007b5c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl OS_GetTick
    mov r4, #0
    ldr r3, =0x4000106
    mov r2, r4
    strh r4, [r3]
    ldr r12, [r5, #0xc]
    ldr lr, [r5, #0x10]
    subs r6, r12, r0
    sbc r5, lr, r1
    ldr r1, =func_02007ec8
    mov r0, #1
    bl func_020053fc
    subs r0, r6, #0
    sbcs r0, r5, #0
    ldrlt r4, =0xfffe
    blt @L_02007bb8
    subs r0, r6, #0x10000
    sbcs r0, r5, r4
    mvnlt r0, r6
    movlt r0, r0, lsl #0x10
    movlt r4, r0, lsr #0x10
@L_02007bb8:
    ldr r2, =0x4000104
    mov r1, #0xc1
    strh r4, [r2]
    mov r0, #0x10
    strh r1, [r2, #2]
    bl OS_EnableIrqMask
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02007be4(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020bb470
    ldrh r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, #1
    strh r0, [r4]
    bl func_02007930
    mov r1, #0
    str r1, [r4, #4]
    mov r0, #0x10
    str r1, [r4, #8]
    bl OS_DisableIrqMask
    ldmia sp!, {r4, pc}
}

asm void func_02007c20(void)
{
    ldr r0, =data_020bb470
    ldrh r0, [r0]
    bx lr
}

asm void OS_CreateAlarm(void)
{
    mov r1, #0
    str r1, [r0]
    str r1, [r0, #8]
    bx lr
}

asm void func_02007c40(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    ldr r0, [r8, #0x20]
    ldr r4, [r8, #0x1c]
    cmp r0, #0
    mov r6, r1
    mov r7, r2
    cmpeq r4, #0
    mov r9, #0
    beq @L_02007cb8
    bl OS_GetTick
    ldr r7, [r8, #0x28]
    ldr r6, [r8, #0x24]
    cmp r7, r1
    cmpeq r6, r0
    bhs @L_02007cb8
    ldr r4, [r8, #0x1c]
    ldr r5, [r8, #0x20]
    subs r0, r0, r6
    mov r2, r4
    mov r3, r5
    sbc r1, r1, r7
    bl _ll_udiv
    adds r2, r0, #1
    adc r0, r1, r9
    umull r3, r1, r4, r2
    mla r1, r4, r0, r1
    mla r1, r5, r2, r1
    adds r6, r6, r3
    adc r7, r7, r1
@L_02007cb8:
    ldr r0, =data_020bb470
    str r6, [r8, #0xc]
    str r7, [r8, #0x10]
    ldr r2, [r0, #4]
    cmp r2, #0
    beq @L_02007d2c
@L_02007cd0:
    ldr r0, [r2, #0xc]
    ldr r1, [r2, #0x10]
    subs r0, r6, r0
    sbc r1, r7, r1
    subs r0, r0, #0
    sbcs r0, r1, #0
    bge @L_02007d20
    ldr r0, [r2, #0x14]
    str r0, [r8, #0x14]
    str r8, [r2, #0x14]
    ldr r0, [r8, #0x14]
    str r2, [r8, #0x18]
    cmp r0, #0
    strne r8, [r0, #0x18]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, =data_020bb470
    mov r0, r8
    str r8, [r1, #4]
    bl func_02007b5c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02007d20:
    ldr r2, [r2, #0x18]
    cmp r2, #0
    bne @L_02007cd0
@L_02007d2c:
    ldr r1, =data_020bb470
    mov r0, #0
    str r0, [r8, #0x18]
    ldr r0, [r1, #8]
    str r8, [r1, #8]
    str r0, [r8, #0x14]
    cmp r0, #0
    strne r8, [r0, #0x18]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    str r8, [r1, #8]
    mov r0, r8
    str r8, [r1, #4]
    bl func_02007b5c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02007d68(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    beq @L_02007d8c
    ldr r0, [r8]
    cmp r0, #0
    beq @L_02007d90
@L_02007d8c:
    bl func_0200878c
@L_02007d90:
    bl OS_DisableInterrupts
    mov r2, #0
    ldr r1, [sp, #0x18]
    mov r4, r0
    str r2, [r8, #0x1c]
    str r2, [r8, #0x20]
    str r5, [r8]
    str r1, [r8, #4]
    bl OS_GetTick
    adds r3, r7, r0
    adc r2, r6, r1
    mov r0, r8
    mov r1, r3
    bl func_02007c40
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void OS_SetPeriodicAlarm(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r9, r0
    mov r7, r1
    mov r8, r2
    mov r5, r3
    ldr r6, [sp, #0x20]
    beq @L_02007dfc
    ldr r0, [r9]
    cmp r0, #0
    beq @L_02007e00
@L_02007dfc:
    bl func_0200878c
@L_02007e00:
    bl OS_DisableInterrupts
    ldr r12, [sp, #0x24]
    ldr r3, [sp, #0x28]
    mov r1, #0
    mov r4, r0
    mov r0, r9
    mov r2, r1
    str r5, [r9, #0x1c]
    str r6, [r9, #0x20]
    str r7, [r9, #0x24]
    str r8, [r9, #0x28]
    str r12, [r9]
    str r3, [r9, #4]
    bl func_02007c40
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void OS_CancelAlarm(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, [r5]
    mov r4, r0
    cmp r1, #0
    bne @L_02007e68
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
@L_02007e68:
    ldr r0, [r5, #0x18]
    cmp r0, #0
    ldreq r2, [r5, #0x14]
    ldreq r1, =data_020bb470
    streq r2, [r1, #8]
    ldrne r1, [r5, #0x14]
    strne r1, [r0, #0x14]
    ldr r1, [r5, #0x14]
    cmp r1, #0
    strne r0, [r1, #0x18]
    bne @L_02007ea8
    ldr r1, =data_020bb470
    cmp r0, #0
    str r0, [r1, #4]
    beq @L_02007ea8
    bl func_02007b5c
@L_02007ea8:
    mov r2, #0
    mov r0, r4
    str r2, [r5]
    str r2, [r5, #0x1c]
    str r2, [r5, #0x20]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02007ec8(void)
{
    stmdb sp!, {r0, lr}
    bl func_02007ed8
    ldmia sp!, {r0, lr}
    bx lr
}

asm void func_02007ed8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =0x4000106
    mov r4, #0
    mov r0, #0x10
    strh r4, [r1]
    bl OS_DisableIrqMask
    ldr r0, =data_027e0000
    add r0, r0, #0x3000
    ldr r1, [r0, #0xff8]
    orr r1, r1, #0x10
    str r1, [r0, #0xff8]
    bl OS_GetTick
    ldr r2, =data_020bb470
    ldr r5, [r2, #4]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r3, [r5, #0x10]
    ldr r12, [r5, #0xc]
    cmp r1, r3
    cmpeq r0, r12
    bhs @L_02007f38
    mov r0, r5
    bl func_02007b5c
    ldmia sp!, {r3, r4, r5, pc}
@L_02007f38:
    ldr r0, [r5, #0x18]
    str r0, [r2, #4]
    cmp r0, #0
    streq r4, [r2, #8]
    strne r4, [r0, #0x14]
    ldr r0, [r5, #0x20]
    ldr r2, [r5, #0x1c]
    cmp r0, #0
    ldr r4, [r5]
    mov r0, #0
    cmpeq r2, #0
    streq r0, [r5]
    cmp r4, #0
    beq @L_02007f78
    ldr r0, [r5, #4]
    blx r4
@L_02007f78:
    ldr r0, [r5, #0x20]
    ldr r2, [r5, #0x1c]
    cmp r0, #0
    cmpeq r2, #0
    mov r1, #0
    beq @L_02007fa0
    mov r0, r5
    mov r2, r1
    str r4, [r5]
    bl func_02007c40
@L_02007fa0:
    ldr r0, =data_020bb470
    ldr r0, [r0, #4]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02007b5c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02007fc4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020bb47c
    ldrh r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #1
    strh r0, [r4]
    mov r5, #0
    str r5, [r4, #0xc]
    mov r0, #4
    str r5, [r4, #0x10]
    bl OS_DisableIrqMask
    str r5, [r4, #8]
    str r5, [r4, #4]
    ldmia sp!, {r3, r4, r5, pc}
}
