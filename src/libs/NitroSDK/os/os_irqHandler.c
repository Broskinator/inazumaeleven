// (asm for now)

void OS_DisableInterrupts(void);
extern char data_027e0000[];
void OS_RestoreInterrupts(void);
extern char data_027e0060[];
void OS_SleepThread(void);

asm void OS_WaitIrq(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    bl OS_DisableInterrupts
    cmp r5, #0
    beq @L_02005138
    ldr r1, =data_027e0000
    mvn r2, r4
    add r1, r1, #0x3000
    ldr r3, [r1, #0xff8]
    and r2, r3, r2
    str r2, [r1, #0xff8]
@L_02005138:
    bl OS_RestoreInterrupts
    ldr r1, =data_027e0000
    add r0, r1, #0x3000
    ldr r0, [r0, #0xff8]
    tst r4, r0
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r1, #0x3f8
    ldr r5, =data_027e0060
    add r6, r0, #0x3c00
@L_0200515c:
    mov r0, r5
    bl OS_SleepThread
    ldr r0, [r6]
    tst r4, r0
    beq @L_0200515c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0200517c(void)
{
    bx lr
}
