// (asm for now)

void MBi_AttachCacheBuffer(void);
void MBi_ReadFromCache(void);
void func_ov089_02178b1c(void);

void OS_DisableInterrupts(void);
void func_0200878c(void);
void OS_RestoreInterrupts(void);
void MI_CpuCopy8(void);
void func_0200628c(void);
void OS_SleepThread(void);
void func_02006334(void);
void func_02005ea8(void);

asm void MBi_AttachCacheBuffer(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl OS_DisableInterrupts
    add r6, r4, #0x30
    mov r5, r0
    add r4, r4, #0x70
@L_02178a40:
    cmp r6, r4
    blo @L_02178a4c
    bl func_0200878c
@L_02178a4c:
    ldr r0, [r6, #0xc]
    cmp r0, #0
    bne @L_02178a70
    str r9, [r6]
    str r8, [r6, #4]
    ldr r0, [sp, #0x20]
    str r7, [r6, #8]
    str r0, [r6, #0xc]
    b @L_02178a78
@L_02178a70:
    add r6, r6, #0x10
    b @L_02178a40
@L_02178a78:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void MBi_ReadFromCache(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    mov r4, #0
    bl OS_DisableInterrupts
    add r2, r9, #0x30
    add r1, r9, #0x70
    mov r5, r0
    cmp r2, r1
    bhs @L_02178b0c
@L_02178ab4:
    ldr r0, [r2, #0xc]
    cmp r0, #2
    blo @L_02178b00
    ldr r0, [r2]
    subs r0, r8, r0
    bmi @L_02178b00
    ldr r3, [r2, #4]
    add r12, r0, r6
    cmp r12, r3
    bhi @L_02178b00
    ldr r3, [r2, #8]
    mov r1, r7
    mov r2, r6
    add r0, r3, r0
    bl MI_CpuCopy8
    mov r0, #0
    str r0, [r9]
    mov r4, #1
    b @L_02178b0c
@L_02178b00:
    add r2, r2, #0x10
    cmp r2, r1
    blo @L_02178ab4
@L_02178b0c:
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_ov089_02178b1c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
@L_02178b24:
    bl OS_DisableInterrupts
    ldr r1, [r7, #0xc0]
    mov r5, r0
    cmp r1, #0
    bne @L_02178b5c
    mov r4, #0
@L_02178b3c:
    mov r0, r7
    mov r1, r4
    bl func_0200628c
    mov r0, r4
    bl OS_SleepThread
    ldr r0, [r7, #0xc0]
    cmp r0, #0
    beq @L_02178b3c
@L_02178b5c:
    ldr r0, [r7, #0xc0]
    mov r4, r0
    ldr r1, [r0]
    mov r0, r7
    str r1, [r7, #0xc0]
    ldr r1, [r4, #4]
    mov r1, r1, lsr #1
    bl func_0200628c
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r1, [r4, #8]
    cmp r1, #0
    beq @L_02178b98
    mov r0, r4
    blx r1
@L_02178b98:
    bl OS_DisableInterrupts
    mov r5, r0
    mov r0, r7
    ldr r6, [r4, #0xc]
    bl func_02006334
    ldr r1, [r7, #0xc0]
    cmp r1, #0
    moveq r1, #0
    beq @L_02178bd8
    ldr r1, [r7, #0xc0]
    ldr r1, [r1, #4]
    cmp r0, r1, lsr #1
    ldrlo r1, [r7, #0xc0]
    ldrlo r1, [r1, #4]
    movlo r1, r1, lsr #1
    movhs r1, r0
@L_02178bd8:
    cmp r1, r0
    beq @L_02178be8
    mov r0, r7
    bl func_0200628c
@L_02178be8:
    mov r0, #0
    str r0, [r4]
    ldr r0, [r4, #4]
    cmp r6, #0
    bic r0, r0, #1
    str r0, [r4, #4]
    beq @L_02178c0c
    mov r0, r4
    blx r6
@L_02178c0c:
    add r0, r7, #0xc4
    cmp r4, r0
    beq @L_02178c24
    mov r0, r5
    bl OS_RestoreInterrupts
    b @L_02178b24
@L_02178c24:
    bl func_02005ea8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
