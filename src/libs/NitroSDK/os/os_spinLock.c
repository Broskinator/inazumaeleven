// (asm for now)

void WaitByLoop(void);
void func_02008400(void);
void OS_DisableInterrupts(void);
void OS_RestoreInterrupts_IrqAndFiq(void);
void OS_RestoreInterrupts(void);
void func_02009bd8(void);
void func_020172a0(void);
extern char data_020bb104[];

asm void OSi_DoLockByWord(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl OSi_DoTryLockByWord
    cmp r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    mov r4, #0x400
@L_0200568c:
    mov r0, r4
    bl WaitByLoop
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5
    bl OSi_DoTryLockByWord
    cmp r0, #0
    bgt @L_0200568c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_020056b4(void)
{
    ldr r12, =OSi_DoLockByWord
    mov r3, #0
    bx r12
}

asm void OSi_DoUnlockByWord(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    ldrh r1, [r7, #4]
    mov r6, r2
    mov r5, r3
    cmp r0, r1
    mvnne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r5, #0
    beq @L_020056f4
    bl func_02008400
    b @L_020056f8
@L_020056f4:
    bl OS_DisableInterrupts
@L_020056f8:
    mov r4, r0
    mov r0, #0
    strh r0, [r7, #4]
    cmp r6, #0
    beq @L_02005710
    blx r6
@L_02005710:
    mov r0, #0
    str r0, [r7]
    cmp r5, #0
    mov r0, r4
    beq @L_0200572c
    bl OS_RestoreInterrupts_IrqAndFiq
    b @L_02005730
@L_0200572c:
    bl OS_RestoreInterrupts
@L_02005730:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02005738(void)
{
    ldr r12, =OSi_DoUnlockByWord
    mov r3, #0
    bx r12
}

asm void OSi_DoTryLockByWord(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r6, r3
    mov r9, r0
    mov r8, r1
    mov r7, r2
    beq @L_02005768
    bl func_02008400
    b @L_0200576c
@L_02005768:
    bl OS_DisableInterrupts
@L_0200576c:
    mov r5, r0
    mov r0, r9
    mov r1, r8
    bl func_02009bd8
    movs r4, r0
    bne @L_02005794
    cmp r7, #0
    beq @L_02005790
    blx r7
@L_02005790:
    strh r9, [r8, #4]
@L_02005794:
    cmp r6, #0
    mov r0, r5
    beq @L_020057a8
    bl OS_RestoreInterrupts_IrqAndFiq
    b @L_020057ac
@L_020057a8:
    bl OS_RestoreInterrupts
@L_020057ac:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_020057b4(void)
{
    ldr r12, =OSi_DoTryLockByWord
    mov r3, #0
    bx r12
}

asm void func_020057c4(void)
{
    ldr r1, =0x2ffffe8
    ldr r2, =OSi_FreeCartridgeBus
    ldr r12, =OSi_DoUnlockByWord
    mov r3, #1
    bx r12
}

asm void func_020057e4(void)
{
    ldr r1, =func_020057c4
    bx r1
}

asm void func_020057f0(void)
{
    ldr r1, =0x2ffffe8
    ldr r2, =OSi_AllocateCartridgeBus
    ldr r12, =OSi_DoTryLockByWord
    mov r3, #1
    bx r12
}

asm void OSi_AllocateCartridgeBus(void)
{
    ldr r1, =0x4000204
    ldrh r0, [r1]
    bic r0, r0, #0x80
    strh r0, [r1]
    bx lr
}

asm void OSi_FreeCartridgeBus(void)
{
    ldr r1, =0x4000204
    ldrh r0, [r1]
    orr r0, r0, #0x80
    strh r0, [r1]
    bx lr
}

asm void func_02005840(void)
{
    ldr r1, =0x2ffffe0
    ldr r2, =OSi_FreeCardBus
    ldr r12, =func_02005738
    bx r12
}

asm void func_0200585c(void)
{
    ldr r1, =0x2ffffe0
    ldr r2, =OSi_AllocateCardBus
    ldr r12, =func_020057b4
    bx r12
}

asm void OSi_AllocateCardBus(void)
{
    ldr r1, =0x4000204
    ldrh r0, [r1]
    bic r0, r0, #0x800
    strh r0, [r1]
    bx lr
}

asm void OSi_FreeCardBus(void)
{
    ldr r1, =0x4000204
    ldrh r0, [r1]
    orr r0, r0, #0x800
    strh r0, [r1]
    bx lr
}

asm void func_020058a8(void)
{
    ldrh r0, [r0, #4]
    bx lr
}

asm void OS_GetLockID(void)
{
    ldr r3, =0x2ffffb0
    ldr r1, [r3]
    clz r2, r1
    cmp r2, #0x20
    movne r0, #0x40
    bne @L_020058e4
    add r3, r3, #4
    ldr r1, [r3]
    clz r2, r1
    cmp r2, #0x20
    ldr r0, =0xfffffffd
    bxeq lr
    mov r0, #0x60
@L_020058e4:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3]
    bic r2, r2, r1
    str r2, [r3]
    bx lr
}

asm void func_02005908(void)
{
    ldr r3, =0x2ffffb0
    cmp r0, #0x60
    addpl r3, r3, #4
    subpl r0, r0, #0x60
    submi r0, r0, #0x40
    mov r1, #0x80000000
    mov r1, r1, lsr r0
    ldr r2, [r3]
    orr r2, r2, r1
    str r2, [r3]
    bx lr
}

asm void func_02005938(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r2, sp, #0xc
    bic r2, r2, #3
    ldr r1, [sp, #0xc]
    add r2, r2, #4
    bl func_02005960
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_02005960(void)
{
    ldr r12, =func_020059a0
    mov r3, r2
    mov r2, r1
    mvn r1, #0x80000000
    bx r12
}

asm void func_02005978(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r3, sp, #0x10
    bic r3, r3, #3
    ldr r2, [sp, #0x10]
    add r3, r3, #4
    bl func_020059a0
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

asm void func_020059a0(void)
{
    ldr r12, =func_020172a0
    bx r12
}

asm void func_020059ac(void)
{
    ldr r1, =data_020bb104
    ldr r0, [r1, #0x18]
    add r0, r0, #1
    str r0, [r1, #0x18]
    bx lr
}

asm void func_020059c4(void)
{
    ldr r12, [r0]
    b @L_020059d8
@L_020059cc:
    cmp r12, r1
    bxeq lr
    ldr r12, [r12, #0x80]
@L_020059d8:
    cmp r12, #0
    beq @L_020059f0
    ldr r3, [r12, #0x70]
    ldr r2, [r1, #0x70]
    cmp r3, r2
    bls @L_020059cc
@L_020059f0:
    cmp r12, #0
    bne @L_02005a1c
    ldr r3, [r0, #4]
    mov r2, #0
    cmp r3, #0
    streq r1, [r0]
    strne r1, [r3, #0x80]
    str r3, [r1, #0x7c]
    str r2, [r1, #0x80]
    str r1, [r0, #4]
    bx lr
@L_02005a1c:
    ldr r2, [r12, #0x7c]
    cmp r2, #0
    streq r1, [r0]
    strne r1, [r2, #0x80]
    str r2, [r1, #0x7c]
    str r12, [r1, #0x80]
    str r1, [r12, #0x7c]
    bx lr
}
