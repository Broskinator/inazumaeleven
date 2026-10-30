// (asm for now)

void NNS_SndUnlockChannel(void);
void NNS_SndUnlockCapture(void);
void NNS_SndFreeAlarm(void);
void NNSi_SndInitResourceMgr(void);

void SND_UnlockChannel(void);
extern char data_020c23ec[];

asm void NNS_SndUnlockChannel(void)
{
    stmdb sp!, {r4, lr}
    movs r4, r0
    ldmeqia sp!, {r4, pc}
    mov r1, #0
    bl SND_UnlockChannel
    ldr r0, =data_020c23ec
    mvn r1, r4
    ldr r2, [r0, #8]
    and r1, r2, r1
    str r1, [r0, #8]
    ldmia sp!, {r4, pc}
}

asm void NNS_SndUnlockCapture(void)
{
    ldr r1, =data_020c23ec
    mvn r0, r0
    ldr r2, [r1]
    and r0, r2, r0
    str r0, [r1]
    bx lr
}

asm void NNS_SndFreeAlarm(void)
{
    ldr r1, =data_020c23ec
    mov r2, #1
    mvn r0, r2, lsl r0
    ldr r2, [r1, #4]
    and r0, r2, r0
    str r0, [r1, #4]
    bx lr
}

asm void NNSi_SndInitResourceMgr(void)
{
    ldr r0, =data_020c23ec
    mov r1, #0
    str r1, [r0, #8]
    str r1, [r0]
    str r1, [r0, #4]
    bx lr
}
