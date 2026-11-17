// (asm for now)

void NNS_GfdInitLnkTexVramManager(void);
void NNS_GfdAllocLnkTexVram(void);
void NNS_GfdFreeLnkTexVram(void);
void NNS_GfdResetLnkTexVramState(void);
void func_02030490(void);

extern char mgr_0209776C[];
extern char NNS_GfdDefaultFuncAllocTexVram[];
extern char NNS_GfdDefaultFuncFreeTexVram[];
extern char data_020c2390[];
extern char data_020c2394[];
void NNSi_GfdAllocLnkVram(void);
void NNSi_GfdFreeLnkVram(void);
extern char data_020a4914[];
extern char data_020c238c_b[];
void NNSi_GfdInitLnkVramMan(void);
void NNSi_GfdInitLnkVramBlockPool(void);
void NNSi_GfdAddNewFreeBlock(void);
void NNSi_GfdMergeAllFreeBlocks(void);

asm void NNS_GfdInitLnkTexVramManager(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, =mgr_0209776C
    str r0, [r12, #0xc]
    str r1, [r12, #0x10]
    str r2, [r12, #0x14]
    str r3, [r12, #0x18]
    bl NNS_GfdResetLnkTexVramState
    ldr r0, [sp, #8]
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r3, =NNS_GfdAllocLnkTexVram
    ldr r1, =NNS_GfdDefaultFuncAllocTexVram
    ldr r2, =NNS_GfdFreeLnkTexVram
    ldr r0, =NNS_GfdDefaultFuncFreeTexVram
    str r3, [r1]
    str r2, [r0]
    ldmia sp!, {r3, pc}
}

asm void NNS_GfdAllocLnkTexVram(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r0, #0
    moveq r5, #0x10
    addne r0, r0, #0xf
    bicne r5, r0, #0xf
    ldr r0, =0x7fff0
    mov r4, r1
    cmp r5, r0
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    add r2, sp, #0
    beq @L_020301c4
    ldr r0, =data_020c2390
    b @L_020301c8
@L_020301c4:
    ldr r0, =mgr_0209776C
@L_020301c8:
    ldr r1, =data_020c2394
    mov r3, r5
    bl NNSi_GfdAllocLnkVram
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [sp]
    mov r1, r5, lsr #4
    mov r0, r0, lsl #0xd
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    orr r0, r0, r4, lsl #31
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_GfdFreeLnkTexVram(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =0x7fff0000
    mov r2, r0, lsl #0x10
    and r1, r0, r1
    mov r1, r1, lsr #0x10
    and r0, r0, #0x80000000
    mov r2, r2, lsr #0xd
    movs r3, r1, lsl #4
    mov r0, r0, lsr #0x1f
    beq @L_02030260
    cmp r0, #0
    beq @L_02030244
    ldr r0, =data_020c2390
    b @L_02030248
@L_02030244:
    ldr r0, =mgr_0209776C
@L_02030248:
    ldr r1, =data_020c2394
    bl NNSi_GfdFreeLnkVram
    cmp r0, #0
    movne r0, #0
    moveq r0, #1
    ldmia sp!, {r3, pc}
@L_02030260:
    mov r0, #2
    ldmia sp!, {r3, pc}
}

asm void NNS_GfdResetLnkTexVramState(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x30
    ldr r5, =data_020a4914
    add r4, sp, #0
    ldmia r5!, {r0, r1, r2, r3}
    mov r12, r4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, =mgr_0209776C
    ldr r4, =data_020c2394
    ldr r1, [r0, #0x10]
    ldr r2, [r0, #0xc]
    add r0, r1, r1, lsr #1
    sub r0, r2, r0
    mov r5, r1, lsr #1
    mov r6, #0
    mov r2, #0xc
@L_020302c8:
    cmp r6, #0
    beq @L_020302d8
    cmp r6, #2
    bne @L_02030314
@L_020302d8:
    mul r3, r6, r2
    ldr r7, [r12, r3]
    add lr, r12, r3
    cmp r7, #0
    cmpne r1, #0
    beq @L_02030314
    ldr r3, [lr, #8]
    cmp r7, r1
    movhi r7, r1
    add r3, r3, r7
    str r3, [lr, #8]
    ldr r3, [lr]
    sub r1, r1, r7
    sub r3, r3, r7
    str r3, [lr]
@L_02030314:
    add r6, r6, #1
    cmp r6, #4
    blo @L_020302c8
    ldr r1, [sp, #0xc]
    mov r7, #0
    sub r1, r1, r5
    str r1, [sp, #0xc]
    add r3, sp, #0
    mov r1, #0xc
@L_02030338:
    mul r2, r7, r1
    ldr r12, [r3, r2]
    add r6, r3, r2
    cmp r12, #0
    cmpne r0, #0
    beq @L_02030374
    ldr r2, [r6, #4]
    cmp r12, r0
    movhi r12, r0
    add r2, r2, r12
    str r2, [r6, #4]
    ldr r2, [r6]
    sub r0, r0, r12
    sub r2, r2, r12
    str r2, [r6]
@L_02030374:
    add r7, r7, #1
    cmp r7, #4
    blo @L_02030338
    ldr r0, =data_020c238c_b
    bl NNSi_GfdInitLnkVramMan
    ldr r7, =data_020c2390
    mov r0, r7
    bl NNSi_GfdInitLnkVramMan
    ldr r6, =mgr_0209776C
    ldr r1, [r6, #0x18]
    ldr r0, [r6, #0x14]
    mov r1, r1, lsr #4
    bl NNSi_GfdInitLnkVramBlockPool
    str r0, [r6, #8]
    ldr r6, [sp, #8]
    cmp r6, #0
    beq @L_020303cc
    ldr r1, =data_020c2394
    mov r0, r7
    mov r3, r6
    mov r2, #0
    bl NNSi_GfdAddNewFreeBlock
@L_020303cc:
    ldr r3, [sp, #4]
    cmp r3, #0
    beq @L_020303e8
    ldr r0, =data_020c238c_b
    ldr r1, =data_020c2394
    mov r2, r6
    bl NNSi_GfdAddNewFreeBlock
@L_020303e8:
    ldr r6, [sp, #0x20]
    cmp r6, #0
    beq @L_02030408
    ldr r0, =data_020c2390
    ldr r1, =data_020c2394
    mov r3, r6
    mov r2, #0x40000
    bl NNSi_GfdAddNewFreeBlock
@L_02030408:
    ldr r3, [sp, #0x1c]
    cmp r3, #0
    beq @L_02030424
    ldr r0, =data_020c238c_b
    ldr r1, =data_020c2394
    add r2, r6, #0x40000
    bl NNSi_GfdAddNewFreeBlock
@L_02030424:
    ldr r3, [sp, #0x28]
    cmp r3, #0
    beq @L_02030440
    ldr r0, =data_020c238c_b
    ldr r1, =data_020c2394
    mov r2, #0x60000
    bl NNSi_GfdAddNewFreeBlock
@L_02030440:
    ldr r3, [sp, #0x10]
    cmp r3, #0
    beq @L_0203045c
    ldr r0, =data_020c238c_b
    ldr r1, =data_020c2394
    add r2, r5, #0x20000
    bl NNSi_GfdAddNewFreeBlock
@L_0203045c:
    ldr r0, =data_020c238c_b
    mov r1, r4
    bl NNSi_GfdMergeAllFreeBlocks
    ldr r0, =data_020c2390
    mov r1, r4
    bl NNSi_GfdMergeAllFreeBlocks
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02030490(void)
{
    mov r0, r0, lsl #4
    bx lr
}
