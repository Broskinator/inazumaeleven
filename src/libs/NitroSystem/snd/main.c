// (asm for now)

void BeginSleep(void);
void func_02030744(void);

void func_0203131c(void);
void SND_StopTimer(void);
void SND_GetCurrentCommandTag(void);
void func_0200a550(void);
void SND_WaitForCommandProc(void);
void func_02031374(void);

asm void BeginSleep(void)
{
    stmdb sp!, {r4, lr}
    bl func_0203131c
    mov r0, #0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    bl SND_StopTimer
    bl SND_GetCurrentCommandTag
    mov r4, r0
    mov r0, #1
    bl func_0200a550
    mov r0, r4
    bl SND_WaitForCommandProc
    ldmia sp!, {r4, pc}
}

asm void func_02030744(void)
{
    ldr r12, =func_02031374
    bx r12
}
