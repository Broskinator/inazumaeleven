// (asm for now)

void NNS_G3dGlbFlushVP(void);
void NNS_G3dGlbGetInvV(void);
void calcSrtCameraMtx_(void);
void func_02028830(void);
void func_02028864(void);
void NNS_G3dGlbGetViewPort(void);

extern char data_020bf41c[];
void NNS_G3dGeBufferOP_N(void);
extern char NNS_G3dGlb_cameraMtx[];
extern char data_020bf494[];
extern char NNS_G3dGlb[];
extern char data_020bf518[];
void MTX_Inverse43(void);
extern char data_020bf548[];
extern char NNS_G3dGlb_prmBaseRot[];
void MTX_Concat43(void);
void MTX_ScaleApply43(void);
extern char data_020bf578[];

asm void NNS_G3dGlbFlushVP(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, =0x1610
    ldr r1, =data_020bf41c
    mov r2, #0x11
    bl NNS_G3dGeBufferOP_N
    ldr r1, =NNS_G3dGlb_cameraMtx
    mov r0, #0x19
    mov r2, #0xc
    bl NNS_G3dGeBufferOP_N
    mov r3, #2
    add r1, sp, #0
    mov r0, #0x10
    mov r2, #1
    str r3, [sp]
    bl NNS_G3dGeBufferOP_N
    ldr r1, =data_020bf494
    mov r0, #0x15
    mov r2, #0x20
    bl NNS_G3dGeBufferOP_N
    ldr r0, =NNS_G3dGlb
    ldr r1, [r0, #0xfc]
    bic r1, r1, #1
    orr r1, r1, #2
    str r1, [r0, #0xfc]
    ldmia sp!, {r3, pc}
}

asm void NNS_G3dGlbGetInvV(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =NNS_G3dGlb
    ldr r0, [r4, #0xfc]
    tst r0, #8
    bne @L_020287b8
    ldr r0, =NNS_G3dGlb_cameraMtx
    ldr r1, =data_020bf518
    bl MTX_Inverse43
    ldr r0, [r4, #0xfc]
    orr r0, r0, #8
    str r0, [r4, #0xfc]
@L_020287b8:
    ldr r0, =data_020bf518
    ldmia sp!, {r4, pc}
}

asm void calcSrtCameraMtx_(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r4, =data_020bf548
    ldr r0, =NNS_G3dGlb_prmBaseRot
    ldr r1, =NNS_G3dGlb_cameraMtx
    mov r2, r4
    bl MTX_Concat43
    ldr r3, =NNS_G3dGlb
    mov r0, r4
    ldr r2, [r3, #0xf4]
    mov r1, r4
    str r2, [sp]
    ldr r2, [r3, #0xec]
    ldr r3, [r3, #0xf0]
    bl MTX_ScaleApply43
    ldr r1, =data_020bf578
    mov r0, r4
    bl MTX_Inverse43
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void func_02028830(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =NNS_G3dGlb
    ldr r0, [r4, #0xfc]
    tst r0, #0x80
    bne @L_02028854
    bl calcSrtCameraMtx_
    ldr r0, [r4, #0xfc]
    orr r0, r0, #0x80
    str r0, [r4, #0xfc]
@L_02028854:
    ldr r0, =data_020bf548
    ldmia sp!, {r4, pc}
}

asm void func_02028864(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =NNS_G3dGlb
    ldr r0, [r4, #0xfc]
    tst r0, #0x80
    bne @L_02028888
    bl calcSrtCameraMtx_
    ldr r0, [r4, #0xfc]
    orr r0, r0, #0x80
    str r0, [r4, #0xfc]
@L_02028888:
    ldr r0, =data_020bf578
    ldmia sp!, {r4, pc}
}

asm void NNS_G3dGlbGetViewPort(void)
{
    cmp r0, #0
    ldrne r12, =NNS_G3dGlb
    ldrne r12, [r12, #0xa0]
    andne r12, r12, #0xff
    strne r12, [r0]
    cmp r1, #0
    ldrne r0, =NNS_G3dGlb
    ldrne r0, [r0, #0xa0]
    movne r0, r0, lsr #8
    andne r0, r0, #0xff
    strne r0, [r1]
    cmp r2, #0
    ldrne r0, =NNS_G3dGlb
    ldrne r0, [r0, #0xa0]
    movne r0, r0, lsr #0x10
    andne r0, r0, #0xff
    strne r0, [r2]
    cmp r3, #0
    ldrne r0, =NNS_G3dGlb
    ldrne r0, [r0, #0xa0]
    movne r0, r0, lsr #0x18
    andne r0, r0, #0xff
    strne r0, [r3]
    bx lr
}
