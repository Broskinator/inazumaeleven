// (asm for now)

void CTRDGi_PulledOutCallback(void);
void CTRDG_TerminateForPulledOut(void);
void CTRDGi_CallbackForSetPhi(void);

extern char isInfoInitialized[];
void OS_Terminate(void);
void CTRDGi_SendtoPxi(void);

asm void CTRDGi_PulledOutCallback(void)
{
    stmdb sp!, {r3, lr}
    and r0, r1, #0x3f
    cmp r0, #0x11
    bne @L_020158dc
    ldr r0, =isInfoInitialized
    ldr r1, [r0, #0xc]
    cmp r1, #0
    ldmneia sp!, {r3, pc}
    ldr r1, [r0, #0x18]
    mov r0, #0
    cmp r1, #0
    beq @L_020158c0
    blx r1
@L_020158c0:
    cmp r0, #0
    beq @L_020158cc
    bl CTRDG_TerminateForPulledOut
@L_020158cc:
    ldr r0, =isInfoInitialized
    mov r1, #1
    str r1, [r0, #0xc]
    ldmia sp!, {r3, pc}
@L_020158dc:
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

asm void CTRDG_TerminateForPulledOut(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #2
    bl CTRDGi_SendtoPxi
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

asm void CTRDGi_CallbackForSetPhi(void)
{
    ldr r0, =isInfoInitialized
    mov r1, #0
    str r1, [r0, #4]
    bx lr
}
