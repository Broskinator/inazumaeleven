// (asm for now)

void OS_InitMessageQueue(void);
void OS_SendMessage(void);
void func_020068c0(void);
void func_02006960(void);
void func_020069fc(void);
void OS_InitMutex(void);
void OS_LockMutex(void);
void OS_UnlockMutex(void);
void func_02006af8(void);
void OS_TryLockMutex(void);
void func_02006bd4(void);
void func_02006cac(void);

void OS_DisableInterrupts(void);
void OS_RestoreInterrupts(void);
void OS_SleepThread(void);
void func_0202273c(void);
void OS_WakeupThread(void);
extern char data_020bb120[];
void OSi_RemoveMutexLinkFromQueue(void);
void OSi_DequeueItem(void);

asm void OS_InitMessageQueue(void)
{
    mov r3, #0
    str r3, [r0, #4]
    str r3, [r0]
    str r3, [r0, #0xc]
    str r3, [r0, #8]
    str r1, [r0, #0x10]
    str r2, [r0, #0x14]
    str r3, [r0, #0x18]
    str r3, [r0, #0x1c]
    bx lr
}

asm void OS_SendMessage(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r4, r1
    mov r7, r2
    bl OS_DisableInterrupts
    ldr r2, [r5, #0x1c]
    ldr r1, [r5, #0x14]
    mov r6, r0
    cmp r1, r2
    bgt @L_02006888
    and r7, r7, #1
@L_02006858:
    cmp r7, #0
    bne @L_02006870
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02006870:
    mov r0, r5
    bl OS_SleepThread
    ldr r2, [r5, #0x1c]
    ldr r1, [r5, #0x14]
    cmp r1, r2
    ble @L_02006858
@L_02006888:
    ldr r0, [r5, #0x18]
    add r0, r0, r2
    bl func_0202273c
    ldr r2, [r5, #0x10]
    add r0, r5, #8
    str r4, [r2, r1, lsl #2]
    ldr r1, [r5, #0x1c]
    add r1, r1, #1
    str r1, [r5, #0x1c]
    bl OS_WakeupThread
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020068c0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r7, r2
    bl OS_DisableInterrupts
    ldr r1, [r6, #0x1c]
    mov r4, r0
    cmp r1, #0
    bne @L_02006914
    and r7, r7, #1
@L_020068e8:
    cmp r7, #0
    bne @L_02006900
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02006900:
    add r0, r6, #8
    bl OS_SleepThread
    ldr r0, [r6, #0x1c]
    cmp r0, #0
    beq @L_020068e8
@L_02006914:
    cmp r5, #0
    ldrne r1, [r6, #0x10]
    ldrne r0, [r6, #0x18]
    ldrne r0, [r1, r0, lsl #2]
    strne r0, [r5]
    ldr r0, [r6, #0x18]
    ldr r1, [r6, #0x14]
    add r0, r0, #1
    bl func_0202273c
    ldr r2, [r6, #0x1c]
    mov r0, r6
    sub r2, r2, #1
    str r1, [r6, #0x18]
    str r2, [r6, #0x1c]
    bl OS_WakeupThread
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02006960(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r7, r2
    bl OS_DisableInterrupts
    ldr r1, [r6, #0x14]
    ldr r2, [r6, #0x1c]
    mov r4, r0
    cmp r1, r2
    bgt @L_020069bc
    and r7, r7, #1
@L_0200698c:
    cmp r7, #0
    bne @L_020069a4
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020069a4:
    mov r0, r6
    bl OS_SleepThread
    ldr r1, [r6, #0x14]
    ldr r0, [r6, #0x1c]
    cmp r1, r0
    ble @L_0200698c
@L_020069bc:
    ldr r0, [r6, #0x18]
    add r0, r0, r1
    sub r0, r0, #1
    bl func_0202273c
    ldr r0, [r6, #0x10]
    str r1, [r6, #0x18]
    str r5, [r0, r1, lsl #2]
    ldr r1, [r6, #0x1c]
    add r0, r6, #8
    add r1, r1, #1
    str r1, [r6, #0x1c]
    bl OS_WakeupThread
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_020069fc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r7, r2
    bl OS_DisableInterrupts
    ldr r1, [r6, #0x1c]
    mov r4, r0
    cmp r1, #0
    bne @L_02006a50
    and r7, r7, #1
@L_02006a24:
    cmp r7, #0
    bne @L_02006a3c
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02006a3c:
    add r0, r6, #8
    bl OS_SleepThread
    ldr r0, [r6, #0x1c]
    cmp r0, #0
    beq @L_02006a24
@L_02006a50:
    cmp r5, #0
    ldrne r1, [r6, #0x10]
    ldrne r0, [r6, #0x18]
    ldrne r0, [r1, r0, lsl #2]
    strne r0, [r5]
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_InitMutex(void)
{
    ldr r1, [r0, #0xc]
    mov r2, #0
    and r1, r1, #0xff000000
    bic r1, r1, #0xff000000
    str r2, [r0, #4]
    str r2, [r0]
    str r2, [r0, #8]
    str r1, [r0, #0xc]
    bx lr
}

asm void OS_LockMutex(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    bl OS_DisableInterrupts
    ldr r1, =data_020bb120
    mov r5, r0
    ldr r6, [r1, #4]
    mov r4, #0
@L_02006ab4:
    mov r0, r7
    bl OS_TryLockMutex
    cmp r0, #0
    bne @L_02006ad8
    mov r0, r7
    str r7, [r6, #0x84]
    bl OS_SleepThread
    str r4, [r6, #0x84]
    b @L_02006ab4
@L_02006ad8:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void OS_UnlockMutex(void)
{
    ldr r12, =func_02006bd4
    mov r1, #0x10000000
    bx r12
}

asm void func_02006af8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0x88]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r4, #0
@L_02006b10:
    add r0, r5, #0x88
    bl OSi_RemoveMutexLinkFromQueue
    ldr r1, [r0, #0xc]
    and r1, r1, #0xff000000
    str r4, [r0, #8]
    bic r1, r1, #0xff000000
    str r1, [r0, #0xc]
    bl OS_WakeupThread
    ldr r0, [r5, #0x88]
    cmp r0, #0
    bne @L_02006b10
    ldmia sp!, {r3, r4, r5, pc}
}

asm void OS_TryLockMutex(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r2, [r6, #8]
    ldr r1, =data_020bb120
    mov r4, r0
    cmp r2, #0
    ldr r0, [r1, #4]
    bne @L_02006b98
    ldr r2, [r6, #0xc]
    mov r1, r6
    bic r2, r2, #0xff000000
    orr r3, r2, #0x10000000
    add r2, r3, #1
    and r3, r3, #0xff000000
    bic r2, r2, #0xff000000
    orr r2, r3, r2
    str r0, [r6, #8]
    str r2, [r6, #0xc]
    bl func_02006cac
    mov r5, #1
    b @L_02006bc0
@L_02006b98:
    cmp r2, r0
    movne r5, #0
    bne @L_02006bc0
    ldr r1, [r6, #0xc]
    mov r5, #1
    add r0, r1, #1
    and r1, r1, #0xff000000
    bic r0, r0, #0xff000000
    orr r0, r1, r0
    str r0, [r6, #0xc]
@L_02006bc0:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02006bd4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl OS_DisableInterrupts
    cmp r5, #0
    ldrne r3, [r6, #0xc]
    ldr r1, =data_020bb120
    andne r3, r3, #0xff000000
    ldr r2, [r1, #4]
    mov r4, r0
    mov r1, #0
    cmpne r5, r3
    beq @L_02006c10
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
@L_02006c10:
    ldr r0, [r6, #0xc]
    and r3, r0, #0xff000000
    cmp r3, #0x10000000
    beq @L_02006c30
    cmp r3, #0x20000000
    beq @L_02006c44
    cmp r3, #0x30000000
    bne @L_02006c60
@L_02006c30:
    ldr r0, [r6, #8]
    cmp r0, r2
    bne @L_02006c6c
    ldr r0, [r6, #0xc]
    b @L_02006c44
@L_02006c44:
    sub r0, r0, #1
    bic r0, r0, #0xff000000
    orr r0, r3, r0
    str r0, [r6, #0xc]
    bics r0, r0, #0xff000000
    moveq r1, #1
    b @L_02006c6c
@L_02006c60:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
@L_02006c6c:
    cmp r1, #0
    beq @L_02006c9c
    mov r0, r2
    mov r1, r6
    bl OSi_DequeueItem
    ldr r0, [r6, #0xc]
    mov r2, #0
    bic r1, r0, #0xff000000
    mov r0, r6
    str r2, [r6, #8]
    str r1, [r6, #0xc]
    bl OS_WakeupThread
@L_02006c9c:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02006cac(void)
{
    ldr r3, [r0, #0x8c]
    mov r2, #0
    cmp r3, #0
    streq r1, [r0, #0x88]
    strne r1, [r3, #0x10]
    str r3, [r1, #0x14]
    str r2, [r1, #0x10]
    str r1, [r0, #0x8c]
    bx lr
}
