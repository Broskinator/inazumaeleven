// (asm for now)

void NNS_G3dGetAnmByIdx(void);
void NNSi_G3dGetTexPatAnmTexNameByIdx(void);
void NNSi_G3dGetTexPatAnmPlttNameByIdx(void);
void NNSi_G3dGetTexPatAnmFV(void);
void NNSi_G3dGetTexPatAnmDataByIdx(void);
void NNSi_G3dAnmObjInitNsBca(void);

extern char data_020ab82c[];
void MIi_CpuClear16(void);

asm void NNS_G3dGetAnmByIdx(void)
{
    cmp r0, #0
    beq @L_0202c1c0
    ldrh r2, [r0, #0xc]
    ldr r2, [r0, r2]
    add r12, r0, r2
    adds r3, r12, #8
    beq @L_0202c1ac
    ldrb r0, [r12, #9]
    cmp r1, r0
    bhs @L_0202c1ac
    ldrh r2, [r12, #0xe]
    ldrh r0, [r3, r2]
    add r2, r3, r2
    add r2, r2, #4
    mla r1, r0, r1, r2
    b @L_0202c1b0
@L_0202c1ac:
    mov r1, #0
@L_0202c1b0:
    cmp r1, #0
    ldrne r0, [r1]
    addne r0, r12, r0
    bxne lr
@L_0202c1c0:
    mov r0, #0
    bx lr
}

asm void NNSi_G3dGetTexPatAnmTexNameByIdx(void)
{
    cmp r0, #0
    beq @L_0202c1e8
    ldrb r2, [r0, #6]
    cmp r1, r2
    ldrloh r2, [r0, #8]
    addlo r0, r0, r2
    addlo r0, r0, r1, lsl #4
    bxlo lr
@L_0202c1e8:
    mov r0, #0
    bx lr
}

asm void NNSi_G3dGetTexPatAnmPlttNameByIdx(void)
{
    cmp r0, #0
    beq @L_0202c210
    ldrb r2, [r0, #7]
    cmp r1, r2
    ldrloh r2, [r0, #0xa]
    addlo r0, r0, r2
    addlo r0, r0, r1, lsl #4
    bxlo lr
@L_0202c210:
    mov r0, #0
    bx lr
}

asm void NNSi_G3dGetTexPatAnmFV(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r2
    bl NNSi_G3dGetTexPatAnmDataByIdx
    ldrsh r1, [r0, #4]
    ldrh r3, [r0, #6]
    mul r2, r1, r4
    add r3, r5, r3
    mov r2, r2, lsr #0xc
    b @L_0202c244
@L_0202c240:
    sub r2, r2, #1
@L_0202c244:
    cmp r2, #0
    beq @L_0202c25c
    mov r1, r2, lsl #2
    ldrh r1, [r3, r1]
    cmp r1, r4
    bhs @L_0202c240
@L_0202c25c:
    ldrh r1, [r0]
    b @L_0202c268
@L_0202c264:
    add r2, r2, #1
@L_0202c268:
    add r0, r2, #1
    cmp r0, r1
    bhs @L_0202c284
    add r0, r3, r2, lsl #2
    ldrh r0, [r0, #4]
    cmp r0, r4
    bls @L_0202c264
@L_0202c284:
    add r0, r3, r2, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNSi_G3dGetTexPatAnmDataByIdx(void)
{
    adds r3, r0, #0xc
    beq @L_0202c2b8
    ldrb r2, [r0, #0xd]
    cmp r1, r2
    bhs @L_0202c2b8
    ldrh r0, [r0, #0x12]
    ldrh r2, [r3, r0]
    add r0, r3, r0
    add r0, r0, #4
    mla r0, r2, r1, r0
    bx lr
@L_0202c2b8:
    mov r0, #0
    bx lr
}

asm void NNSi_G3dAnmObjInitNsBca(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    ldr r0, =data_020ab82c
    str r5, [r6, #8]
    ldr r1, [r0]
    ldrb r2, [r2, #0x17]
    mov r4, #0
    str r1, [r6, #0xc]
    strb r2, [r6, #0x19]
    mov r0, r4
    add r1, r6, #0x1a
    mov r2, r2, lsl #1
    bl MIi_CpuClear16
    ldrh r0, [r5, #6]
    add r2, r5, #0x14
    cmp r0, #0
    ldmlsia sp!, {r4, r5, r6, pc}
@L_0202c308:
    mov r0, r4, lsl #1
    ldrh r1, [r2, r0]
    add r0, r6, r4, lsl #1
    add r4, r4, #1
    ldr r1, [r5, r1]
    mov r1, r1, lsr #0x18
    orr r1, r1, #0x100
    strh r1, [r0, #0x1a]
    ldrh r0, [r5, #6]
    cmp r4, r0
    blo @L_0202c308
    ldmia sp!, {r4, r5, r6, pc}
}
