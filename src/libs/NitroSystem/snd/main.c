// (asm for now)

void BeginSleep(void);
void EndSleep(void);

void NNSi_SndCaptureBeginSleep(void);
void SND_StopTimer(void);
void SND_GetCurrentCommandTag(void);
void SND_FlushCommand(void);
void SND_WaitForCommandProc(void);
void NNSi_SndCaptureEndSleep(void);

asm void BeginSleep(void)
{
    stmdb sp!, {r4, lr}
    bl NNSi_SndCaptureBeginSleep
    mov r0, #0
    mov r1, r0
    mov r2, r0
    mov r3, r0
    bl SND_StopTimer
    bl SND_GetCurrentCommandTag
    mov r4, r0
    mov r0, #1
    bl SND_FlushCommand
    mov r0, r4
    bl SND_WaitForCommandProc
    ldmia sp!, {r4, pc}
}

asm void EndSleep(void)
{
    ldr r12, =NNSi_SndCaptureEndSleep
    bx r12
}
