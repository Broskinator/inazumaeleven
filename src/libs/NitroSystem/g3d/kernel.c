// (asm for now)

void NNS_G3dRenderObjInit(void);
void addLink_(void);
void Kernel_updateHintVec_(void);
void NNS_G3dRenderObjAddAnmObj(void);
void removeLink_(void);
void NNS_G3dRenderObjRemoveAnmObj(void);
void NNS_G3dRenderObjResetCallBack(void);
void NNS_G3dRenderObjSetInitFunc(void);
void NNS_G3dTexGetRequiredSize(void);
void NNS_G3dTex4x4GetRequiredSize(void);
void NNS_G3dTexSetTexKey(void);
void NNS_G3dTexLoad(void);
void NNS_G3dTexReleaseTexKey(void);
void NNS_G3dPlttGetRequiredSize(void);
void NNS_G3dPlttSetPlttKey(void);
void NNS_G3dPlttLoad(void);
void NNS_G3dPlttReleasePlttKey(void);
void bindMdlTex_Internal_(void);
void releaseMdlTex_Internal_(void);
void NNS_G3dBindMdlTex(void);
void NNS_G3dReleaseMdlTex(void);
void bindMdlPltt_Internal_(void);
void NNS_G3dBindMdlPltt(void);
void NNS_G3dReleaseMdlPltt(void);
void NNS_G3dBindMdlSet(void);
void NNS_G3dReleaseMdlSet(void);
void NNS_G3dGlbInit(void);
void NNS_G3dGlbFlushP(void);

void MIi_CpuClear32(void);
extern char data_020ab844[];
extern char data_020ab840[];
extern char data_020ab83c[];
void GX_BeginLoadTex(void);
void GX_LoadTex(void);
void GX_EndLoadTex(void);
void GX_BeginLoadTexPltt(void);
void GX_LoadTexPltt(void);
void GX_EndLoadTexPltt(void);
void FX_Div(void);
void NNS_G3dGetResDataByName(void);
extern char NNS_G3dGlb[];
extern char NNS_G3dGlb_cameraMtx[];
void MTX_Identity43_(void);
extern char NNS_G3dGlb_projMtx[];
void MTX_Identity44_(void);
extern char NNS_G3dGlb_prmBaseRot[];
void MTX_Identity33_(void);
void NNS_G3dGeBufferOP_N(void);

asm void NNS_G3dRenderObjInit(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    mov r1, r5
    mov r0, #0
    mov r2, #0x54
    bl MIi_CpuClear32
    ldr r0, =data_020ab844
    ldr r1, =data_020ab840
    ldr r2, [r0]
    ldr r0, =data_020ab83c
    str r2, [r5, #0xc]
    ldr r1, [r1]
    str r1, [r5, #0x14]
    ldr r0, [r0]
    str r0, [r5, #0x1c]
    str r4, [r5, #4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void addLink_(void)
{
    ldr r12, [r0]
    cmp r12, #0
    streq r1, [r0]
    bxeq lr
    ldr r2, [r12, #0x10]
    cmp r2, #0
    bne @L_02027aac
    ldrb r3, [r12, #0x18]
    ldrb r2, [r1, #0x18]
    cmp r3, r2
    bls @L_02027aa4
    ldr r2, [r1, #0x10]
    mov r3, r1
    cmp r2, #0
    beq @L_02027a98
@L_02027a88:
    ldr r3, [r3, #0x10]
    ldr r2, [r3, #0x10]
    cmp r2, #0
    bne @L_02027a88
@L_02027a98:
    str r12, [r3, #0x10]
    str r1, [r0]
    bx lr
@L_02027aa4:
    str r1, [r12, #0x10]
    bx lr
@L_02027aac:
    beq @L_02027afc
    ldrb r3, [r1, #0x18]
@L_02027ab4:
    ldrb r0, [r2, #0x18]
    cmp r0, r3
    blo @L_02027aec
    ldr r0, [r1, #0x10]
    mov r3, r1
    cmp r0, #0
    beq @L_02027ae0
@L_02027ad0:
    ldr r3, [r3, #0x10]
    ldr r0, [r3, #0x10]
    cmp r0, #0
    bne @L_02027ad0
@L_02027ae0:
    str r1, [r12, #0x10]
    str r2, [r3, #0x10]
    bx lr
@L_02027aec:
    mov r12, r2
    ldr r2, [r2, #0x10]
    cmp r2, #0
    bne @L_02027ab4
@L_02027afc:
    str r1, [r12, #0x10]
    bx lr
}

asm void Kernel_updateHintVec_(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r3, #1
    mov r4, #0
@L_02027b18:
    ldrb r2, [r1, #0x19]
    mov r5, r4
    cmp r2, #0
    ble @L_02027b58
@L_02027b28:
    add r2, r1, r5, lsl #1
    ldrh r2, [r2, #0x1a]
    tst r2, #0x100
    movne lr, r5, asr #5
    andne r2, r5, #0x1f
    ldrne r12, [r0, lr, lsl #2]
    add r5, r5, #1
    orrne r2, r12, r3, lsl r2
    strne r2, [r0, lr, lsl #2]
    ldrb r2, [r1, #0x19]
    cmp r5, r2
    blt @L_02027b28
@L_02027b58:
    ldr r1, [r1, #0x10]
    cmp r1, #0
    bne @L_02027b18
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dRenderObjAddAnmObj(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    ldrne r0, [r4, #8]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrb r0, [r0]
    cmp r0, #0x4a
    beq @L_02027bb8
    cmp r0, #0x4d
    beq @L_02027ba0
    cmp r0, #0x56
    beq @L_02027bd0
    ldmia sp!, {r3, r4, r5, pc}
@L_02027ba0:
    add r0, r5, #0x3c
    bl Kernel_updateHintVec_
    mov r1, r4
    add r0, r5, #8
    bl addLink_
    ldmia sp!, {r3, r4, r5, pc}
@L_02027bb8:
    add r0, r5, #0x44
    bl Kernel_updateHintVec_
    mov r1, r4
    add r0, r5, #0x10
    bl addLink_
    ldmia sp!, {r3, r4, r5, pc}
@L_02027bd0:
    add r0, r5, #0x4c
    bl Kernel_updateHintVec_
    mov r1, r4
    add r0, r5, #0x18
    bl addLink_
    ldmia sp!, {r3, r4, r5, pc}
}

asm void removeLink_(void)
{
    ldr r3, [r0]
    cmp r3, #0
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    bne @L_02027c18
    ldr r3, [r3, #0x10]
    mov r2, #0
    str r3, [r0]
    str r2, [r1, #0x10]
    mov r0, #1
    bx lr
@L_02027c18:
    ldr r2, [r3, #0x10]
    cmp r2, #0
    beq @L_02027c54
@L_02027c24:
    cmp r2, r1
    bne @L_02027c44
    ldr r1, [r2, #0x10]
    mov r0, #0
    str r1, [r3, #0x10]
    str r0, [r2, #0x10]
    mov r0, #1
    bx lr
@L_02027c44:
    mov r3, r2
    ldr r2, [r2, #0x10]
    cmp r2, #0
    bne @L_02027c24
@L_02027c54:
    mov r0, #0
    bx lr
}

asm void NNS_G3dRenderObjRemoveAnmObj(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #8
    mov r4, r1
    bl removeLink_
    cmp r0, #0
    bne @L_02027ca0
    mov r1, r4
    add r0, r5, #0x10
    bl removeLink_
    cmp r0, #0
    bne @L_02027ca0
    mov r1, r4
    add r0, r5, #0x18
    bl removeLink_
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
@L_02027ca0:
    ldr r0, [r5]
    orr r0, r0, #0x10
    str r0, [r5]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dRenderObjResetCallBack(void)
{
    mov r1, #0
    str r1, [r0, #0x20]
    strb r1, [r0, #0x24]
    strb r1, [r0, #0x25]
    bx lr
}

asm void NNS_G3dRenderObjSetInitFunc(void)
{
    str r1, [r0, #0x28]
    bx lr
}

asm void NNS_G3dTexGetRequiredSize(void)
{
    cmp r0, #0
    ldrneh r0, [r0, #0xc]
    movne r0, r0, lsl #3
    moveq r0, #0
    bx lr
}

asm void NNS_G3dTex4x4GetRequiredSize(void)
{
    cmp r0, #0
    ldrneh r0, [r0, #0x1c]
    movne r0, r0, lsl #3
    moveq r0, #0
    bx lr
}

asm void NNS_G3dTexSetTexKey(void)
{
    cmp r1, #0
    strne r1, [r0, #8]
    cmp r2, #0
    strne r2, [r0, #0x18]
    bx lr
}

asm void NNS_G3dTexLoad(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r8, r1
    mov r9, r0
    beq @L_02027d1c
    bl GX_BeginLoadTex
@L_02027d1c:
    ldrh r0, [r9, #0xc]
    movs r2, r0, lsl #3
    beq @L_02027d4c
    ldr r0, [r9, #8]
    ldr r3, [r9, #0x14]
    mov r1, r0, lsl #0x10
    add r0, r9, r3
    mov r1, r1, lsr #0xd
    bl GX_LoadTex
    ldrh r0, [r9, #0x10]
    orr r0, r0, #1
    strh r0, [r9, #0x10]
@L_02027d4c:
    ldrh r0, [r9, #0x1c]
    movs r6, r0, lsl #3
    beq @L_02027dac
    ldr r1, [r9, #0x18]
    ldr r0, [r9, #0x24]
    mov r4, r1, lsl #0x10
    mov r7, r4, lsr #0xd
    mov r1, r7
    mov r2, r6
    add r0, r9, r0
    ldr r5, [r9, #0x28]
    bl GX_LoadTex
    ldr r0, =0x1ffff
    and r1, r7, #0x40000
    and r0, r0, r4, lsr #13
    mov r0, r0, lsr #1
    add r2, r0, #0x20000
    add r0, r9, r5
    add r1, r2, r1, lsr #2
    mov r2, r6, lsr #1
    bl GX_LoadTex
    ldrh r0, [r9, #0x20]
    orr r0, r0, #1
    strh r0, [r9, #0x20]
@L_02027dac:
    cmp r8, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl GX_EndLoadTex
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void NNS_G3dTexReleaseTexKey(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    beq @L_02027de8
    ldrh lr, [r0, #0x10]
    ldr r12, [r0, #8]
    mov r3, #0
    bic lr, lr, #1
    strh lr, [r0, #0x10]
    str r12, [r1]
    str r3, [r0, #8]
@L_02027de8:
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldrh r12, [r0, #0x20]
    ldr r3, [r0, #0x18]
    mov r1, #0
    bic r12, r12, #1
    strh r12, [r0, #0x20]
    str r3, [r2]
    str r1, [r0, #0x18]
    ldmia sp!, {r3, pc}
}

asm void NNS_G3dPlttGetRequiredSize(void)
{
    cmp r0, #0
    ldrneh r0, [r0, #0x30]
    movne r0, r0, lsl #3
    moveq r0, #0
    bx lr
}

asm void NNS_G3dPlttSetPlttKey(void)
{
    str r1, [r0, #0x2c]
    bx lr
}

asm void NNS_G3dPlttLoad(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r1
    mov r4, r0
    beq @L_02027e40
    bl GX_BeginLoadTexPltt
@L_02027e40:
    ldr r0, [r4, #0x2c]
    ldrh r2, [r4, #0x30]
    mov r1, r0, lsl #0x10
    ldr r3, [r4, #0x38]
    mov r1, r1, lsr #0xd
    add r0, r4, r3
    mov r2, r2, lsl #3
    bl GX_LoadTexPltt
    ldrh r0, [r4, #0x32]
    cmp r5, #0
    orr r0, r0, #1
    strh r0, [r4, #0x32]
    ldmeqia sp!, {r3, r4, r5, pc}
    bl GX_EndLoadTexPltt
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dPlttReleasePlttKey(void)
{
    ldrh r3, [r0, #0x32]
    ldr r2, [r0, #0x2c]
    mov r1, #0
    bic r3, r3, #1
    strh r3, [r0, #0x32]
    str r1, [r0, #0x2c]
    mov r0, r2
    bx lr
}

asm void bindMdlTex_Internal_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r8, r3
    ldr r1, [r8]
    mov r10, r0
    and r0, r1, #0x1c000000
    ldrh r3, [r9]
    cmp r0, #0x14000000
    mov r5, #0
    add r0, r10, r3
    str r0, [sp]
    ldrne r0, [r2, #8]
    ldreq r0, [r2, #0x18]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bic r11, r0, #0xe0000000
    ldrb r0, [r9, #2]
    cmp r0, #0
    bls @L_02027fb8
    add r4, r10, #4
@L_02027eec:
    ldr r0, [sp]
    cmp r10, #0
    ldrb r2, [r0, r5]
    beq @L_02027f3c
    cmp r4, #0
    beq @L_02027f28
    ldrb r0, [r10, #5]
    cmp r2, r0
    bhs @L_02027f28
    ldrh r0, [r10, #0xa]
    add r1, r4, r0
    add r1, r1, #4
    ldrh r0, [r4, r0]
    mla r1, r0, r2, r1
    b @L_02027f2c
@L_02027f28:
    mov r1, #0
@L_02027f2c:
    cmp r1, #0
    ldrne r0, [r1]
    addne r7, r10, r0
    bne @L_02027f40
@L_02027f3c:
    mov r7, #0
@L_02027f40:
    ldr r0, [r8]
    ldr r1, [r7, #0x14]
    add r0, r0, r11
    orr r0, r1, r0
    str r0, [r7, #0x14]
    ldr r3, [r8, #4]
    ldr r0, =0x7ff
    ldrh r1, [r7, #0x20]
    and r2, r3, r0
    and r0, r3, r0, lsl #11
    mov r6, r0, lsr #0xb
    cmp r2, r1
    moveq r0, #0x1000
    beq @L_02027f84
    mov r0, r2, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Div
@L_02027f84:
    str r0, [r7, #0x24]
    ldrh r1, [r7, #0x22]
    cmp r6, r1
    moveq r0, #0x1000
    beq @L_02027fa4
    mov r0, r6, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Div
@L_02027fa4:
    str r0, [r7, #0x28]
    ldrb r0, [r9, #2]
    add r5, r5, #1
    cmp r5, r0
    blo @L_02027eec
@L_02027fb8:
    ldrb r0, [r9, #3]
    orr r0, r0, #1
    strb r0, [r9, #3]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void releaseMdlTex_Internal_(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldrh r3, [r1]
    ldrb r2, [r1, #2]
    mov lr, #0
    add r12, r0, r3
    cmp r2, #0
    bls @L_02028070
    ldr r4, =0xc00f0000
    add r2, r0, #4
    mov r7, lr
    mov r6, lr
    mov r5, #0x1000
@L_02027ffc:
    cmp r0, #0
    ldrb r3, [r12, lr]
    beq @L_02028048
    cmp r2, #0
    beq @L_02028034
    ldrb r8, [r0, #5]
    cmp r3, r8
    bhs @L_02028034
    ldrh r9, [r0, #0xa]
    ldrh r8, [r2, r9]
    add r9, r2, r9
    add r9, r9, #4
    mla r3, r8, r3, r9
    b @L_02028038
@L_02028034:
    mov r3, r7
@L_02028038:
    cmp r3, #0
    ldrne r3, [r3]
    addne r8, r0, r3
    bne @L_0202804c
@L_02028048:
    mov r8, r6
@L_0202804c:
    ldr r3, [r8, #0x14]
    add lr, lr, #1
    and r3, r3, r4
    str r3, [r8, #0x14]
    str r5, [r8, #0x24]
    str r5, [r8, #0x28]
    ldrb r3, [r1, #2]
    cmp lr, r3
    blo @L_02027ffc
@L_02028070:
    ldrb r0, [r1, #3]
    bic r0, r0, #1
    strb r0, [r1, #3]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void NNS_G3dBindMdlTex(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r1
    cmp r0, #0
    ldrne r1, [r0, #8]
    mov r4, #0
    cmpne r1, #0
    addne r8, r0, r1
    moveq r8, #0
    ldrh r0, [r8]
    mov r7, #1
    mov r6, #0
    add r5, r8, r0
    ldrb r0, [r5, #1]
    cmp r0, #0
    bls @L_02028170
@L_020280c0:
    cmp r5, #0
    beq @L_020280ec
    ldrb r0, [r5, #1]
    cmp r6, r0
    bhs @L_020280ec
    ldrh r0, [r5, #6]
    add r1, r5, r0
    ldrh r0, [r1, #2]
    add r0, r1, r0
    add r1, r0, r6, lsl #4
    b @L_020280f0
@L_020280ec:
    mov r1, r4
@L_020280f0:
    cmp r9, #0
    moveq r3, r4
    beq @L_02028108
    add r0, r9, #0x3c
    bl NNS_G3dGetResDataByName
    mov r3, r0
@L_02028108:
    cmp r3, #0
    beq @L_0202815c
    cmp r5, #0
    beq @L_0202813c
    ldrb r0, [r5, #1]
    cmp r6, r0
    bhs @L_0202813c
    ldrh r1, [r5, #6]
    ldrh r0, [r5, r1]
    add r1, r5, r1
    add r1, r1, #4
    mla r1, r0, r6, r1
    b @L_02028140
@L_0202813c:
    mov r1, r4
@L_02028140:
    ldrb r0, [r1, #3]
    tst r0, #1
    bne @L_02028160
    mov r0, r8
    mov r2, r9
    bl bindMdlTex_Internal_
    b @L_02028160
@L_0202815c:
    mov r7, r4
@L_02028160:
    ldrb r0, [r5, #1]
    add r6, r6, #1
    cmp r6, r0
    blo @L_020280c0
@L_02028170:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void NNS_G3dReleaseMdlTex(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    cmp r0, #0
    ldrne r1, [r0, #8]
    mov r5, #0
    cmpne r1, #0
    addne r6, r0, r1
    moveq r6, #0
    ldrh r0, [r6]
    add r4, r6, r0
    ldrb r0, [r4, #1]
    cmp r0, #0
    ldmlsia sp!, {r3, r4, r5, r6, r7, pc}
    mov r7, r5
@L_020281ac:
    cmp r4, #0
    beq @L_020281d8
    ldrb r0, [r4, #1]
    cmp r5, r0
    bhs @L_020281d8
    ldrh r1, [r4, #6]
    ldrh r0, [r4, r1]
    add r1, r4, r1
    add r1, r1, #4
    mla r1, r0, r5, r1
    b @L_020281dc
@L_020281d8:
    mov r1, r7
@L_020281dc:
    ldrb r0, [r1, #3]
    tst r0, #1
    beq @L_020281f0
    mov r0, r6
    bl releaseMdlTex_Internal_
@L_020281f0:
    ldrb r0, [r4, #1]
    add r5, r5, #1
    cmp r5, r0
    blo @L_020281ac
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void bindMdlPltt_Internal_(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r2, [r2, #0x2c]
    ldrh r4, [r3, #2]
    mov r2, r2, lsl #0x10
    ldrh r5, [r1]
    mov r2, r2, lsr #0x10
    tst r4, #1
    bic r2, r2, #0xe0000000
    ldrh r4, [r3]
    mov r2, r2, lsl #0x10
    add r12, r0, r5
    mov r5, r2, lsr #0x10
    moveq r2, r4, lsl #0xf
    moveq r4, r2, lsr #0x10
    moveq r3, r5, lsl #0xf
    moveq r5, r3, lsr #0x10
    ldrb r2, [r1, #2]
    mov r3, #0
    cmp r2, #0
    bls @L_020282d0
    add r2, r4, r5
    mov lr, r2, lsl #0x10
    add r2, r0, #4
    mov r4, lr, lsr #0x10
    mov r6, r3
    mov r5, r3
@L_0202826c:
    cmp r0, #0
    ldrb r8, [r12, r3]
    beq @L_020282b8
    cmp r2, #0
    beq @L_020282a4
    ldrb r7, [r0, #5]
    cmp r8, r7
    bhs @L_020282a4
    ldrh r7, [r0, #0xa]
    ldrh lr, [r2, r7]
    add r7, r2, r7
    add r7, r7, #4
    mla r7, lr, r8, r7
    b @L_020282a8
@L_020282a4:
    mov r7, r6
@L_020282a8:
    cmp r7, #0
    ldrne lr, [r7]
    addne r7, r0, lr
    bne @L_020282bc
@L_020282b8:
    mov r7, r5
@L_020282bc:
    strh r4, [r7, #0x1c]
    ldrb lr, [r1, #2]
    add r3, r3, #1
    cmp r3, lr
    blo @L_0202826c
@L_020282d0:
    ldrb r0, [r1, #3]
    orr r0, r0, #1
    strb r0, [r1, #3]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void NNS_G3dBindMdlPltt(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r1
    cmp r0, #0
    ldrne r1, [r0, #8]
    mov r4, #0
    cmpne r1, #0
    addne r8, r0, r1
    moveq r8, #0
    ldrh r0, [r8, #2]
    mov r7, #1
    mov r6, #0
    add r5, r8, r0
    ldrb r0, [r5, #1]
    cmp r0, #0
    bls @L_020283d4
@L_0202831c:
    cmp r5, #0
    beq @L_02028348
    ldrb r0, [r5, #1]
    cmp r6, r0
    bhs @L_02028348
    ldrh r0, [r5, #6]
    add r1, r5, r0
    ldrh r0, [r1, #2]
    add r0, r1, r0
    add r1, r0, r6, lsl #4
    b @L_0202834c
@L_02028348:
    mov r1, r4
@L_0202834c:
    cmp r9, #0
    ldrneh r0, [r9, #0x34]
    cmpne r0, #0
    moveq r3, r4
    beq @L_0202836c
    add r0, r9, r0
    bl NNS_G3dGetResDataByName
    mov r3, r0
@L_0202836c:
    cmp r3, #0
    beq @L_020283c0
    cmp r5, #0
    beq @L_020283a0
    ldrb r0, [r5, #1]
    cmp r6, r0
    bhs @L_020283a0
    ldrh r1, [r5, #6]
    ldrh r0, [r5, r1]
    add r1, r5, r1
    add r1, r1, #4
    mla r1, r0, r6, r1
    b @L_020283a4
@L_020283a0:
    mov r1, r4
@L_020283a4:
    ldrb r0, [r1, #3]
    tst r0, #1
    bne @L_020283c4
    mov r0, r8
    mov r2, r9
    bl bindMdlPltt_Internal_
    b @L_020283c4
@L_020283c0:
    mov r7, r4
@L_020283c4:
    ldrb r0, [r5, #1]
    add r6, r6, #1
    cmp r6, r0
    blo @L_0202831c
@L_020283d4:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void NNS_G3dReleaseMdlPltt(void)
{
    cmp r0, #0
    ldrne r1, [r0, #8]
    mov r12, #0
    cmpne r1, #0
    addne r1, r0, r1
    moveq r1, #0
    ldrh r0, [r1, #2]
    add r3, r1, r0
    ldrb r0, [r3, #1]
    cmp r0, #0
    bxls lr
    mov r1, r12
@L_0202840c:
    cmp r3, #0
    beq @L_02028438
    ldrb r0, [r3, #1]
    cmp r12, r0
    bhs @L_02028438
    ldrh r2, [r3, #6]
    ldrh r0, [r3, r2]
    add r2, r3, r2
    add r2, r2, #4
    mla r2, r0, r12, r2
    b @L_0202843c
@L_02028438:
    mov r2, r1
@L_0202843c:
    ldrb r0, [r2, #3]
    add r12, r12, #1
    tst r0, #1
    bicne r0, r0, #1
    strneb r0, [r2, #3]
    ldrb r0, [r3, #1]
    cmp r12, r0
    blo @L_0202840c
    bx lr
}

asm void NNS_G3dBindMdlSet(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldrb r0, [r10, #9]
    mov r9, r1
    mov r7, #1
    cmp r0, #0
    mov r6, #0
    bls @L_02028508
    add r5, r10, #8
    mov r4, r6
    mov r11, r6
@L_0202848c:
    cmp r10, #0
    beq @L_020284d4
    cmp r5, #0
    beq @L_020284c0
    ldrb r0, [r10, #9]
    cmp r6, r0
    bhs @L_020284c0
    ldrh r1, [r10, #0xe]
    ldrh r0, [r5, r1]
    add r1, r5, r1
    add r1, r1, #4
    mla r1, r0, r6, r1
    b @L_020284c4
@L_020284c0:
    mov r1, r4
@L_020284c4:
    cmp r1, #0
    ldrne r0, [r1]
    addne r8, r10, r0
    bne @L_020284d8
@L_020284d4:
    mov r8, r11
@L_020284d8:
    mov r0, r8
    mov r1, r9
    bl NNS_G3dBindMdlTex
    and r7, r7, r0
    mov r0, r8
    mov r1, r9
    bl NNS_G3dBindMdlPltt
    ldrb r1, [r10, #9]
    add r6, r6, #1
    and r7, r7, r0
    cmp r6, r1
    blo @L_0202848c
@L_02028508:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void NNS_G3dReleaseMdlSet(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, r0
    ldrb r0, [r6, #9]
    mov r5, #0
    cmp r0, #0
    ldmlsia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r4, r6, #8
    mov r8, r5
    mov r7, r5
@L_02028534:
    cmp r6, #0
    beq @L_0202857c
    cmp r4, #0
    beq @L_02028568
    ldrb r0, [r6, #9]
    cmp r5, r0
    bhs @L_02028568
    ldrh r1, [r6, #0xe]
    ldrh r0, [r4, r1]
    add r1, r4, r1
    add r1, r1, #4
    mla r1, r0, r5, r1
    b @L_0202856c
@L_02028568:
    mov r1, r8
@L_0202856c:
    cmp r1, #0
    ldrne r0, [r1]
    addne r9, r6, r0
    bne @L_02028580
@L_0202857c:
    mov r9, r7
@L_02028580:
    mov r0, r9
    bl NNS_G3dReleaseMdlTex
    mov r0, r9
    bl NNS_G3dReleaseMdlPltt
    ldrb r0, [r6, #9]
    add r5, r5, #1
    cmp r5, r0
    blo @L_02028534
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void NNS_G3dGlbInit(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =0x17101610
    ldr r5, =NNS_G3dGlb
    mov r4, #0
    stmia r5, {r0, r4}
    mov r1, #2
    str r1, [r5, #0x48]
    ldr r0, =0x32323232
    ldr r1, =0x60293130
    str r0, [r5, #0x7c]
    str r1, [r5, #0x90]
    ldr r0, =0x33333333
    ldr r1, =0x2a1b19
    str r0, [r5, #0xa4]
    ldr r0, =NNS_G3dGlb_cameraMtx
    str r1, [r5, #0xb8]
    bl MTX_Identity43_
    ldr r0, =NNS_G3dGlb_projMtx
    bl MTX_Identity44_
    ldr r0, =0x2d8b62d8
    ldr r3, =0x40000200
    str r0, [r5, #0x80]
    ldr r2, =0xc0080000
    str r3, [r5, #0x84]
    sub r0, r3, #0xc0000001
    str r0, [r5, #0x88]
    ldr r1, =0x4210c210
    str r2, [r5, #0x8c]
    str r1, [r5, #0x94]
    str r1, [r5, #0x98]
    ldr r0, =0x1f008f
    sub r1, r2, #0x90000
    str r0, [r5, #0x9c]
    str r1, [r5, #0xa0]
    ldr r0, =0x7fff
    mov r1, #0x4000001f
    str r0, [r5, #0xa8]
    ldr r0, =0x800003e0
    str r1, [r5, #0xac]
    str r0, [r5, #0xb0]
    rsb r0, r3, #0x7e00
    str r0, [r5, #0xb4]
    str r4, [r5, #0xe0]
    str r4, [r5, #0xe4]
    ldr r0, =NNS_G3dGlb_prmBaseRot
    str r4, [r5, #0xe8]
    bl MTX_Identity33_
    mov r0, #0x1000
    str r0, [r5, #0xec]
    str r0, [r5, #0xf0]
    str r0, [r5, #0xf4]
    str r4, [r5, #0xf8]
    str r4, [r5, #0xfc]
    str r4, [r5, #0x248]
    str r4, [r5, #0x244]
    str r4, [r5, #0x240]
    str r4, [r5, #0x254]
    str r4, [r5, #0x24c]
    str r0, [r5, #0x250]
    str r4, [r5, #0x25c]
    str r4, [r5, #0x258]
    sub r0, r0, #0x2000
    str r0, [r5, #0x260]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dGlbFlushP(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =NNS_G3dGlb
    mov r2, #0x3e
    ldr r0, [r4]
    add r1, r4, #4
    bl NNS_G3dGeBufferOP_N
    ldr r0, [r4, #0xfc]
    bic r0, r0, #1
    bic r0, r0, #2
    str r0, [r4, #0xfc]
    ldmia sp!, {r4, pc}
}
