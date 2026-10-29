// (asm for now)

void OS_DisableInterrupts(void);
void NNS_FndGetNextListObject(void);
void NNS_FndRemoveListObject(void);
void OS_RestoreInterrupts(void);
extern char data_020c2e48[];
void func_020326f8(void);

asm void RemoveCommandByPlayer(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    bl OS_DisableInterrupts
    mov r4, r0
    mov r0, r8
    mov r1, #0
    bl NNS_FndGetNextListObject
    movs r5, r0
    beq @L_02032598
@L_0203255c:
    mov r0, r8
    mov r1, r5
    bl NNS_FndGetNextListObject
    ldr r1, [r5, #8]
    mov r6, r0
    cmp r1, r7
    bne @L_0203258c
    mov r0, r8
    mov r1, r5
    bl NNS_FndRemoveListObject
    mov r0, r5
    bl FreeCommandBuffer
@L_0203258c:
    mov r5, r6
    cmp r6, #0
    bne @L_0203255c
@L_02032598:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void FreeCommandBuffer(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r4, r0
    ldr r0, =data_020c2e48
    mov r1, r5
    bl func_020326f8
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}
