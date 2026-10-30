// (asm for now)

void FindContainHeap(void);
void FindListContainHeap(void);
void func_02032964(void);
void func_020329e0(void);

void NNS_FndGetNextListObject(void);
extern char data_020c454c[];
void NNS_FndInitList(void);
extern char data_020c4548[];
void func_020326f8(void);
void NNS_FndRemoveListObject(void);

asm void FindContainHeap(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r1, #0
    mov r6, r0
    bl NNS_FndGetNextListObject
    movs r4, r0
    beq @L_02032934
@L_020328f0:
    ldr r0, [r4, #0x18]
    cmp r0, r5
    bhi @L_02032920
    ldr r0, [r4, #0x1c]
    cmp r5, r0
    bhs @L_02032920
    mov r1, r5
    add r0, r4, #0xc
    bl FindContainHeap
    cmp r0, #0
    moveq r0, r4
    ldmia sp!, {r4, r5, r6, pc}
@L_02032920:
    mov r0, r6
    mov r1, r4
    bl NNS_FndGetNextListObject
    movs r4, r0
    bne @L_020328f0
@L_02032934:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void FindListContainHeap(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020c454c
    mov r1, r0
    mov r0, r4
    bl FindContainHeap
    cmp r0, #0
    addne r4, r0, #0xc
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02032964(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldrh r5, [sp, #0x10]
    mov r4, r0
    mov r0, #0
    bic r6, r0, #0xff
    and r0, r5, #0xff
    orr r5, r6, r0
    mov r6, #4
    str r1, [r4]
    mov r1, r6
    add r0, r4, #0xc
    str r2, [r4, #0x18]
    str r3, [r4, #0x1c]
    str r5, [r4, #0x20]
    bl NNS_FndInitList
    ldr r5, =data_020c4548
    ldr r0, [r5]
    cmp r0, #0
    bne @L_020329c4
    ldr r0, =data_020c454c
    mov r1, r6
    bl NNS_FndInitList
    mov r0, #1
    str r0, [r5]
@L_020329c4:
    mov r0, r4
    bl FindListContainHeap
    mov r1, r4
    bl func_020326f8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020329e0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl FindListContainHeap
    mov r1, r4
    bl NNS_FndRemoveListObject
    ldmia sp!, {r4, pc}
}
