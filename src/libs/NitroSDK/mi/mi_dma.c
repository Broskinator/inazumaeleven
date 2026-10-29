// (asm for now)

void func_0200878c(void);
extern char data_020bb4b4[];
void func_02008cb4(void);
void OS_DisableInterrupts(void);
void OS_GetIrqFunction(void);
void OS_SetIrqFunction(void);
void OS_EnableIrqMask(void);
void OS_RestoreInterrupts(void);
void OSi_EnterDmaCallback(void);
void func_01ff845c(void);
void OS_ResetRequestIrqMask(void);
void OS_DisableIrqMask(void);
void func_02008da0(void);
void MIi_DMAFastCallback(void);

asm void MIi_CheckDma0SourceAddress(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    cmp r3, #0
    and r12, r1, #0xff000000
    beq @L_02008e50
    cmp r3, #0x800000
    subeq r1, r1, r2
    b @L_02008e54
@L_02008e50:
    add r1, r1, r2
@L_02008e54:
    cmp r12, #0x4000000
    and r0, r1, #0xff000000
    beq @L_02008e78
    cmp r12, #0x8000000
    bhs @L_02008e78
    cmp r0, #0x4000000
    beq @L_02008e78
    cmp r0, #0x8000000
    ldmloia sp!, {r3, pc}
@L_02008e78:
    bl func_0200878c
    ldmia sp!, {r3, pc}
}

asm void func_02008e80(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    cmp r2, #0
    bne @L_02008ea4
    cmp r3, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [sp, #0x18]
    blx r3
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02008ea4:
    ldr r0, =data_020bb4b4
@L_02008ea8:
    ldr r5, [r0]
    cmp r5, #0
    bne @L_02008ea8
    ldr r5, =0x4000600
@L_02008eb8:
    ldr r0, [r5]
    and r0, r0, #0x7000000
    mov r0, r0, lsr #0x18
    tst r0, #2
    beq @L_02008eb8
    ldr r6, =data_020bb4b4
    mov r0, #1
    str r0, [r6]
    str r4, [r6, #4]
    str r1, [r6, #8]
    str r2, [r6, #0xc]
    str r3, [r6, #0x10]
    ldr r7, [sp, #0x18]
    mov r0, r4
    mov r3, #0
    str r7, [r6, #0x14]
    bl MIi_CheckDma0SourceAddress
    mov r0, r4
    bl func_02008cb4
    bl OS_DisableInterrupts
    ldr r1, [r5]
    mov r7, #0x200000
    and r1, r1, #0xc0000000
    mov r1, r1, lsr #0x1e
    mov r4, r0
    mov r0, r7
    str r1, [r6, #0x18]
    bl OS_GetIrqFunction
    str r0, [r6, #0x1c]
    ldr r0, [r5]
    ldr r1, =func_02008f6c
    bic r0, r0, #0xc0000000
    orr r0, r0, #0x40000000
    str r0, [r5]
    mov r0, r7
    bl OS_SetIrqFunction
    mov r0, r7
    bl OS_EnableIrqMask
    bl func_02008f6c
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02008f6c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r0, =data_020bb4b4
    ldr r5, [r0, #0xc]
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r6, =data_020bb4b4
    cmp r5, #0x1d8
    ldr r0, [r6, #0xc]
    movhs r5, #0x1d8
    ldr r4, [r6, #8]
    subs r0, r0, r5
    str r0, [r6, #0xc]
    add r0, r4, r5
    str r0, [r6, #8]
    bne @L_02008fe4
    mov r7, #0
    ldr r0, [r6, #4]
    ldr r1, =func_02009020
    mov r2, r7
    bl OSi_EnterDmaCallback
    str r7, [sp]
    sub r3, r7, #0x3bc00000
    ldr r0, [r6, #4]
    ldr r2, =0x4000400
    mov r1, r4
    orr r3, r3, r5, lsr #2
    bl func_01ff845c
    mov r0, #0x200000
    bl OS_ResetRequestIrqMask
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02008fe4:
    mov r0, #0
    str r0, [sp]
    ldr r3, =0x84400000
    ldr r0, [r6, #4]
    ldr r2, =0x4000400
    mov r1, r4
    orr r3, r3, r5, lsr #2
    bl func_01ff845c
    mov r0, #0x200000
    bl OS_ResetRequestIrqMask
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02009020(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0x200000
    mov r0, r5
    bl OS_DisableIrqMask
    ldr r1, =0x4000600
    ldr r4, =data_020bb4b4
    ldr r0, [r1]
    ldr r2, [r4, #0x18]
    bic r0, r0, #0xc0000000
    orr r0, r0, r2, lsl #30
    str r0, [r1]
    ldr r1, [r4, #0x1c]
    mov r0, r5
    bl OS_SetIrqFunction
    mov r0, #0
    str r0, [r4]
    ldr r1, [r4, #0x10]
    ldr r0, [r4, #0x14]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02009080(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r4, r2
    mov r6, r0
    mov r5, r1
    bne @L_020090a8
    cmp r3, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, [sp, #0x18]
    blx r3
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020090a8:
    ldr r0, =data_020bb4b4
@L_020090ac:
    ldr r1, [r0]
    cmp r1, #0
    bne @L_020090ac
    ldr r2, =data_020bb4b4
    mov r0, #1
    str r0, [r2]
    str r6, [r2, #4]
    ldr r7, [sp, #0x18]
    str r3, [r2, #0x10]
    mov r0, r6
    mov r1, #0x38000000
    str r7, [r2, #0x14]
    bl func_02008da0
    mov r7, #0
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl MIi_CheckDma0SourceAddress
    mov r0, r6
    bl func_02008cb4
    mov r0, r6
    ldr r1, =MIi_DMAFastCallback
    mov r2, r7
    bl OSi_EnterDmaCallback
    mov r0, r6
    mov r1, r5
    str r7, [sp]
    sub r2, r7, #0x3c00000
    orr r3, r2, r4, lsr #2
    ldr r2, =0x4000400
    bl func_01ff845c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
