// (asm for now)

void NNS_SndHeapDestroy(void);
void NNS_SndHeapClear(void);
void NNS_SndHeapAlloc(void);
void InitHeapSection(void);
void InitHeap(void);
void NewSection(void);
void EraseSync(void);

void NNS_FndDestroyFrmHeap(void);
void NNS_FndGetPrevListObject(void);
void NNS_FndRemoveListObject(void);
void NNS_FndFreeToFrmHeap(void);
void NNS_FndAllocFromFrmHeapEx(void);
void NNS_FndAppendListObject(void);
void NNS_FndInitList(void);
void SND_GetCurrentCommandTag(void);
void SND_FlushCommand(void);
void SND_WaitForCommandProc(void);

asm void NNS_SndHeapDestroy(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl NNS_SndHeapClear
    ldr r0, [r4]
    bl NNS_FndDestroyFrmHeap
    ldmia sp!, {r4, pc}
}

asm void NNS_SndHeapClear(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r8, r0
    mov r6, #0
    mov r1, r6
    add r0, r8, #4
    bl NNS_FndGetPrevListObject
    movs r5, r0
    beq @L_020318bc
    mov r10, #1
    mov r9, r6
    mov r4, r6
@L_02031850:
    mov r0, r5
    mov r1, r4
    bl NNS_FndGetPrevListObject
    movs r7, r0
    beq @L_0203189c
@L_02031864:
    ldr r12, [r7, #0xc]
    cmp r12, #0
    beq @L_02031888
    ldr r1, [r7, #8]
    ldr r2, [r7, #0x10]
    ldr r3, [r7, #0x14]
    add r0, r7, #0x20
    blx r12
    mov r6, r10
@L_02031888:
    mov r0, r5
    mov r1, r7
    bl NNS_FndGetPrevListObject
    movs r7, r0
    bne @L_02031864
@L_0203189c:
    mov r1, r5
    add r0, r8, #4
    bl NNS_FndRemoveListObject
    mov r1, r9
    add r0, r8, #4
    bl NNS_FndGetPrevListObject
    movs r5, r0
    bne @L_02031850
@L_020318bc:
    ldr r0, [r8]
    mov r1, #3
    bl NNS_FndFreeToFrmHeap
    cmp r6, #0
    beq @L_020318d4
    bl EraseSync
@L_020318d4:
    mov r0, r8
    bl NewSection
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void NNS_SndHeapAlloc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r1
    mov r8, r0
    add r0, r7, #0x1f
    bic r1, r0, #0x1f
    mov r6, r2
    ldr r0, [r8]
    add r1, r1, #0x20
    mov r2, #0x20
    mov r5, r3
    bl NNS_FndAllocFromFrmHeapEx
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r8, #4
    mov r1, #0
    bl NNS_FndGetPrevListObject
    str r7, [r4, #8]
    str r6, [r4, #0xc]
    ldr r2, [sp, #0x18]
    str r5, [r4, #0x10]
    mov r1, r4
    str r2, [r4, #0x14]
    bl NNS_FndAppendListObject
    add r0, r4, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void InitHeapSection(void)
{
    ldr r12, =NNS_FndInitList
    mov r1, #0
    bx r12
}

asm void InitHeap(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r0, r5, #4
    mov r1, #0xc
    bl NNS_FndInitList
    mov r0, r5
    str r4, [r5]
    bl NewSection
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NewSection(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5]
    mov r1, #0x14
    mov r2, #4
    bl NNS_FndAllocFromFrmHeapEx
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl InitHeapSection
    mov r1, r4
    add r0, r5, #4
    bl NNS_FndAppendListObject
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void EraseSync(void)
{
    stmdb sp!, {r4, lr}
    bl SND_GetCurrentCommandTag
    mov r4, r0
    mov r0, #1
    bl SND_FlushCommand
    mov r0, r4
    bl SND_WaitForCommandProc
    ldmia sp!, {r4, pc}
}
