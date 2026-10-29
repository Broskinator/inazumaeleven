// (asm for now)

extern char data_020bb4d4[];
extern char data_020bb4d8[];
void OS_InitMutex(void);
void func_0200a9a0(void);
void OS_LockMutex(void);
void OS_UnlockMutex(void);
void func_0200a88c(void);
extern char data_020bb7c0[];
extern char data_020bb4f0[];
extern char data_020bc7c0[];
extern char data_020bcfa8[];
extern char data_020bb540[];
extern char data_020bd020[];
void func_0200aae0(void);
void SND_AllocCommand(void);
void SND_PushCommand(void);
void func_0200a550(void);
void OS_DisableInterrupts(void);
void func_0200aabc(void);
void OS_RestoreInterrupts(void);
void func_02008450(void);
extern char data_020bb514[];

asm void SND_Init(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb4d4
    ldr r0, [r1]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    ldr r0, =data_020bb4d8
    mov r2, #1
    str r2, [r1]
    bl OS_InitMutex
    bl func_0200a2c0
    bl func_0200a9a0
    ldmia sp!, {r3, pc}
}

asm void func_0200a298(void)
{
    ldr r0, =data_020bb4d8
    ldr r12, =OS_LockMutex
    bx r12
}

asm void func_0200a2ac(void)
{
    ldr r0, =data_020bb4d8
    ldr r12, =OS_UnlockMutex
    bx r12
}

asm void func_0200a2c0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl func_0200a88c
    ldr r5, =data_020bb7c0
    ldr r0, =data_020bb4f0
    mov r12, #0
    str r5, [r0]
    mov r0, #0x18
    mov r1, r0
    b @L_0200a2f8
@L_0200a2e4:
    add r3, r12, #1
    mul r2, r12, r1
    mla r4, r3, r0, r5
    mov r12, r3
    str r4, [r5, r2]
@L_0200a2f8:
    cmp r12, #0xff
    blt @L_0200a2e4
    ldr r0, =data_020bc7c0
    mov r3, #0
    str r3, [r0, #0x7e8]
    ldr r2, =data_020bcfa8
    ldr r1, =data_020bb4f0
    mov r5, #1
    str r2, [r1, #0x10]
    str r3, [r1, #8]
    str r3, [r1, #0xc]
    str r3, [r1, #0x1c]
    str r3, [r1, #0x14]
    str r3, [r1, #0x18]
    str r5, [r1, #0x20]
    ldr r0, =data_020bb540
    ldr r4, =data_020bd020
    str r3, [r1, #4]
    str r0, [r4]
    bl func_0200aae0
    mov r0, r5
    bl SND_AllocCommand
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, #0x1d
    str r1, [r0, #4]
    ldr r1, [r4]
    str r1, [r0, #8]
    bl SND_PushCommand
    mov r0, r5
    bl func_0200a550
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_0200a390(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r6, =data_020bb4f0
    bl OS_DisableInterrupts
    mov r4, r0
    tst r5, #1
    beq @L_0200a3ec
    bl func_0200aabc
    ldr r1, [r6, #4]
    cmp r1, r0
    bne @L_0200a40c
    mov r5, #0x32
@L_0200a3c0:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    bl func_02008450
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_0200aabc
    ldr r1, [r6, #4]
    cmp r1, r0
    beq @L_0200a3c0
    b @L_0200a40c
@L_0200a3ec:
    bl func_0200aabc
    ldr r1, [r6, #4]
    cmp r1, r0
    bne @L_0200a40c
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0200a40c:
    ldr r2, [r6, #0x14]
    ldr r1, =data_020bb514
    add r0, r2, #1
    ldr r5, [r1, r2, lsl #2]
    cmp r0, #8
    str r0, [r6, #0x14]
    movgt r0, #0
    strgt r0, [r6, #0x14]
    ldr r0, [r5]
    mov r1, r5
    cmp r0, #0
    beq @L_0200a44c
@L_0200a43c:
    ldr r1, [r1]
    ldr r0, [r1]
    cmp r0, #0
    bne @L_0200a43c
@L_0200a44c:
    ldr r0, [r6, #0x10]
    cmp r0, #0
    strne r5, [r0]
    streq r5, [r6]
    str r1, [r6, #0x10]
    ldr r1, [r6, #0x1c]
    mov r0, r4
    sub r1, r1, #1
    str r1, [r6, #0x1c]
    ldr r1, [r6, #4]
    add r1, r1, #1
    str r1, [r6, #4]
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}
