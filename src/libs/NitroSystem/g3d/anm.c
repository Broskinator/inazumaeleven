// (asm for now)

void NNSi_G3dAnmBlendMat(void);
void blendScaleVec_(void);
void NNSi_G3dAnmBlendJnt(void);
void NNSi_G3dAnmBlendVis(void);
void G3dDrawInternal_Loop_(void);
void G3dDrawInternal_(void);
void Sbc_updateHintVec_(void);
void NNS_G3dDraw(void);

void MIi_CpuClearFast(void);
void MIi_CpuCopy32(void);
void FX_Div(void);
void VEC_CrossProduct(void);
void VEC_Normalize(void);
extern char data_020ab9c0[];
extern char data_020ab8a4[];
extern char data_020ab898[];
extern char data_020ab8b0[];
void MIi_CpuClear32(void);
extern char NNS_G3dRS[];

asm void NNSi_G3dAnmBlendMat(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    movs r5, r1
    mov r4, r2
    mov r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r7, #1
@L_02028918:
    ldrb r1, [r5, #0x19]
    cmp r4, r1
    bhs @L_02028958
    add r1, r5, r4, lsl #1
    ldrh r2, [r1, #0x1a]
    and r1, r2, #0x300
    cmp r1, #0x100
    bne @L_02028958
    ldr r3, [r5, #0xc]
    cmp r3, #0
    beq @L_02028958
    mov r0, r6
    mov r1, r5
    and r2, r2, #0xff
    blx r3
    mov r0, r7
@L_02028958:
    ldr r5, [r5, #0x10]
    cmp r5, #0
    bne @L_02028918
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void blendScaleVec_(void)
{
    stmdb sp!, {r4, lr}
    cmp r3, #0
    beq @L_0202899c
    ldr r3, [r0, #4]
    ldr r1, [r0, #8]
    ldr r4, [r0]
    add r3, r3, r2
    add r1, r1, r2
    add r4, r4, r2
    str r3, [r0, #4]
    str r1, [r0, #8]
    str r4, [r0]
    ldmia sp!, {r4, pc}
@L_0202899c:
    ldr r12, [r1]
    ldr r3, [r1, #4]
    ldr r1, [r1, #8]
    mul lr, r2, r12
    ldmia r0, {r4, r12}
    mul r3, r2, r3
    mul r1, r2, r1
    ldr r2, [r0, #8]
    add r4, r4, lr, asr #12
    add r3, r12, r3, asr #12
    str r4, [r0]
    add r1, r2, r1, asr #12
    str r3, [r0, #4]
    str r1, [r0, #8]
    ldmia sp!, {r4, pc}
}

asm void NNSi_G3dAnmBlendJnt(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    movs r9, r1
    mov r10, r0
    mov r8, r2
    addeq sp, sp, #0x70
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r9, #0x10]
    cmp r2, #0
    bne @L_02028a64
    ldrb r2, [r9, #0x19]
    cmp r8, r2
    bhs @L_02028a58
    add r2, r9, r8, lsl #1
    ldrh r4, [r2, #0x1a]
    and r2, r4, #0x300
    cmp r2, #0x100
    bne @L_02028a4c
    ldr r3, [r9, #0xc]
    cmp r3, #0
    addeq sp, sp, #0x70
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    and r2, r4, #0xff
    blx r3
    add sp, sp, #0x70
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02028a4c:
    add sp, sp, #0x70
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02028a58:
    add sp, sp, #0x70
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02028a64:
    mov r5, #0
    mov r3, r5
    mov r6, r5
    mov r2, r9
@L_02028a74:
    ldrb r0, [r2, #0x19]
    cmp r8, r0
    bhs @L_02028ab4
    add r0, r2, r8, lsl #1
    ldrh r0, [r0, #0x1a]
    and r0, r0, #0x300
    cmp r0, #0x100
    bne @L_02028ab4
    ldr r0, [r2, #4]
    cmp r0, #0x1000
    addgt r5, r5, #0x1000
    bgt @L_02028aac
    cmp r0, #0
    addgt r5, r5, r0
@L_02028aac:
    mov r1, r2
    add r3, r3, #1
@L_02028ab4:
    ldr r2, [r2, #0x10]
    cmp r2, #0
    bne @L_02028a74
    cmp r5, #0
    addeq sp, sp, #0x70
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r3, #1
    bne @L_02028b0c
    ldr r3, [r1, #0xc]
    add r0, r1, r8, lsl #1
    cmp r3, #0
    ldrh r2, [r0, #0x1a]
    addeq sp, sp, #0x70
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    and r2, r2, #0xff
    blx r3
    add sp, sp, #0x70
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02028b0c:
    mov r4, #0x58
    mov r1, r10
    mov r2, r4
    mov r0, #0
    bl MIi_CpuClearFast
    sub r0, r4, #0x59
    str r0, [r10]
    mov r4, #0xc
    add r11, sp, #0x18
@L_02028b30:
    ldrb r0, [r9, #0x19]
    cmp r8, r0
    bhs @L_02028d14
    add r0, r9, r8, lsl #1
    ldrh r1, [r0, #0x1a]
    and r0, r1, #0x300
    cmp r0, #0x100
    bne @L_02028d14
    ldr r0, [r9, #4]
    cmp r0, #0
    ble @L_02028d14
    ldr r3, [r9, #0xc]
    cmp r3, #0
    beq @L_02028d14
    and r2, r1, #0xff
    mov r0, r11
    mov r1, r9
    blx r3
    cmp r6, #0
    bne @L_02028ba0
    add r0, sp, #0x40
    add r1, sp, #0xc
    mov r2, r4
    bl MIi_CpuCopy32
    add r0, sp, #0x58
    add r1, sp, #0
    mov r2, r4
    bl MIi_CpuCopy32
@L_02028ba0:
    cmp r5, #0x1000
    ldreq r7, [r9, #4]
    beq @L_02028bbc
    ldr r0, [r9, #4]
    mov r1, r5
    bl FX_Div
    mov r7, r0
@L_02028bbc:
    ldr r3, [sp, #0x18]
    add r0, r10, #4
    add r1, sp, #0x1c
    mov r2, r7
    and r3, r3, #1
    bl blendScaleVec_
    ldr r3, [sp, #0x18]
    add r0, r10, #0x10
    add r1, sp, #0x28
    mov r2, r7
    and r3, r3, #8
    bl blendScaleVec_
    ldr r3, [sp, #0x18]
    add r0, r10, #0x1c
    add r1, sp, #0x34
    mov r2, r7
    and r3, r3, #0x10
    bl blendScaleVec_
    ldr r0, [sp, #0x18]
    tst r0, #4
    bne @L_02028c64
    ldr r0, [r10, #0x4c]
    ldr r2, [sp, #0x64]
    ldr r1, [r10, #0x50]
    smull r3, r2, r7, r2
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    add r0, r0, r3
    str r0, [r10, #0x4c]
    ldr r2, [sp, #0x68]
    ldr r0, [r10, #0x54]
    smull r3, r2, r7, r2
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    add r1, r1, r3
    str r1, [r10, #0x50]
    ldr r1, [sp, #0x6c]
    smull r2, r1, r7, r1
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    add r0, r0, r2
    str r0, [r10, #0x54]
@L_02028c64:
    ldr r0, [sp, #0x18]
    tst r0, #2
    bne @L_02028cec
    ldr r2, [r10, #0x28]
    ldr r0, [sp, #0x40]
    ldr r1, [r10, #0x2c]
    mul r0, r7, r0
    add r0, r2, r0, asr #12
    str r0, [r10, #0x28]
    ldr r0, [sp, #0x44]
    ldr r2, [r10, #0x30]
    mul r0, r7, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x2c]
    ldr r0, [sp, #0x48]
    ldr r1, [r10, #0x34]
    mul r0, r7, r0
    add r0, r2, r0, asr #12
    str r0, [r10, #0x30]
    ldr r0, [sp, #0x4c]
    ldr r2, [r10, #0x38]
    mul r0, r7, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x34]
    ldr r0, [sp, #0x50]
    ldr r1, [r10, #0x3c]
    mul r0, r7, r0
    add r0, r2, r0, asr #12
    str r0, [r10, #0x38]
    ldr r0, [sp, #0x54]
    mul r0, r7, r0
    add r0, r1, r0, asr #12
    str r0, [r10, #0x3c]
    b @L_02028d04
@L_02028cec:
    ldr r1, [r10, #0x28]
    ldr r0, [r10, #0x38]
    add r1, r1, r7
    add r0, r0, r7
    str r1, [r10, #0x28]
    str r0, [r10, #0x38]
@L_02028d04:
    ldr r1, [r10]
    ldr r0, [sp, #0x18]
    and r0, r1, r0
    str r0, [r10]
@L_02028d14:
    ldr r9, [r9, #0x10]
    add r6, r6, #1
    cmp r9, #0
    bne @L_02028b30
    add r0, r10, #0x28
    add r1, r10, #0x34
    add r2, r10, #0x40
    bl VEC_CrossProduct
    ldr r0, [r10, #0x28]
    cmp r0, #0
    ldreq r0, [r10, #0x2c]
    cmpeq r0, #0
    ldreq r0, [r10, #0x30]
    cmpeq r0, #0
    bne @L_02028d64
    add r0, sp, #0xc
    add r1, r10, #0x28
    mov r2, #0xc
    bl MIi_CpuCopy32
    b @L_02028d70
@L_02028d64:
    add r0, r10, #0x28
    mov r1, r0
    bl VEC_Normalize
@L_02028d70:
    ldr r0, [r10, #0x40]
    cmp r0, #0
    ldreq r0, [r10, #0x44]
    cmpeq r0, #0
    ldreq r0, [r10, #0x48]
    cmpeq r0, #0
    bne @L_02028da0
    add r0, sp, #0
    add r1, r10, #0x40
    mov r2, #0xc
    bl MIi_CpuCopy32
    b @L_02028dac
@L_02028da0:
    add r0, r10, #0x40
    mov r1, r0
    bl VEC_Normalize
@L_02028dac:
    add r0, r10, #0x40
    add r1, r10, #0x28
    add r2, r10, #0x34
    bl VEC_CrossProduct
    mov r0, #1
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void NNSi_G3dAnmBlendVis(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r0
    mov r0, #0
    mov r6, r1
    mov r5, r2
    str r0, [r7]
    add r4, sp, #0
    mov r8, #1
@L_02028dec:
    ldrb r1, [r6, #0x19]
    cmp r5, r1
    bhs @L_02028e3c
    add r1, r6, r5, lsl #1
    ldrh r2, [r1, #0x1a]
    and r1, r2, #0x300
    cmp r1, #0x100
    bne @L_02028e3c
    ldr r3, [r6, #0xc]
    cmp r3, #0
    beq @L_02028e3c
    mov r0, r4
    mov r1, r6
    and r2, r2, #0xff
    blx r3
    ldr r2, [r7]
    ldr r1, [sp]
    mov r0, r8
    orr r1, r2, r1
    str r1, [r7]
@L_02028e3c:
    ldr r6, [r6, #0x10]
    cmp r6, #0
    bne @L_02028dec
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void G3dDrawInternal_Loop_(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_020ab9c0
    mov r4, r0
@L_02028e5c:
    ldr r1, [r4, #8]
    ldr r0, [r4]
    bic r1, r1, #0x40
    str r1, [r4, #8]
    ldrb r3, [r0]
    mov r0, r4
    and r1, r3, #0x1f
    ldr r2, [r5, r1, lsl #2]
    and r1, r3, #0xe0
    blx r2
    ldr r0, [r4, #8]
    tst r0, #0x20
    beq @L_02028e5c
    ldmia sp!, {r3, r4, r5, pc}
}

asm void G3dDrawInternal_(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    mov r1, r5
    mov r0, #0
    mov r2, #0x188
    bl MIi_CpuClearFast
    mov r0, #1
    str r0, [r5, #0xc4]
    str r0, [r5, #8]
    ldr r0, [r4, #0x30]
    ldr r2, =data_020ab8a4
    cmp r0, #0
    ldreq r1, [r4, #4]
    ldreq r0, [r1, #4]
    addeq r0, r1, r0
    stmia r5, {r0, r4}
    ldr r0, [r4, #4]
    cmp r0, #0
    addne r0, r0, #0x40
    moveq r0, #0
    str r0, [r5, #0xd4]
    ldr r1, [r4, #4]
    cmp r1, #0
    ldrne r0, [r1, #8]
    cmpne r0, #0
    addne r0, r1, r0
    moveq r0, #0
    str r0, [r5, #0xd8]
    ldr r1, [r4, #4]
    cmp r1, #0
    ldrne r0, [r1, #0xc]
    cmpne r0, #0
    addne r0, r1, r0
    moveq r0, #0
    str r0, [r5, #0xdc]
    ldr r0, [r4, #4]
    ldr r1, =data_020ab898
    ldrb r3, [r0, #0x15]
    ldr r0, =data_020ab8b0
    ldr r2, [r2, r3, lsl #2]
    str r2, [r5, #0xe8]
    ldr r2, [r4, #4]
    ldrb r2, [r2, #0x15]
    ldr r1, [r1, r2, lsl #2]
    str r1, [r5, #0xec]
    ldr r1, [r4, #4]
    ldrb r1, [r1, #0x16]
    ldr r0, [r0, r1, lsl #2]
    str r0, [r5, #0xf0]
    ldr r0, [r4, #4]
    ldr r0, [r0, #0x1c]
    str r0, [r5, #0xe0]
    ldr r0, [r4, #4]
    ldr r0, [r0, #0x20]
    str r0, [r5, #0xe4]
    ldr r1, [r4, #0x20]
    cmp r1, #0
    beq @L_02028fa8
    ldrb r0, [r4, #0x24]
    cmp r0, #0x20
    bhs @L_02028fa8
    add r0, r5, r0, lsl #2
    str r1, [r0, #0xc]
    ldrb r0, [r4, #0x24]
    ldrb r1, [r4, #0x25]
    add r0, r5, r0
    strb r1, [r0, #0x8c]
@L_02028fa8:
    ldr r0, [r4]
    tst r0, #1
    ldrne r0, [r5, #8]
    orrne r0, r0, #0x80
    strne r0, [r5, #8]
    ldr r0, [r4]
    tst r0, #2
    ldrne r0, [r5, #8]
    orrne r0, r0, #0x100
    strne r0, [r5, #8]
    ldr r0, [r4]
    tst r0, #4
    ldrne r0, [r5, #8]
    orrne r0, r0, #0x200
    strne r0, [r5, #8]
    ldr r0, [r4]
    tst r0, #8
    ldrne r0, [r5, #8]
    orrne r0, r0, #0x400
    strne r0, [r5, #8]
    ldr r1, [r4, #0x28]
    cmp r1, #0
    beq @L_0202900c
    mov r0, r5
    blx r1
@L_0202900c:
    mov r0, r5
    bl G3dDrawInternal_Loop_
    ldr r0, [r4]
    bic r0, r0, #1
    str r0, [r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void Sbc_updateHintVec_(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r3, #1
    mov r4, #0
@L_02029044:
    ldrb r2, [r1, #0x19]
    mov r5, r4
    cmp r2, #0
    ble @L_02029084
@L_02029054:
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
    blt @L_02029054
@L_02029084:
    ldr r1, [r1, #0x10]
    cmp r1, #0
    bne @L_02029044
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dDraw(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x188
    mov r4, r0
    ldr r0, [r4]
    and r0, r0, #0x10
    cmp r0, #0x10
    bne @L_02029130
    mov r6, #0
    mov r5, #8
    mov r0, r6
    mov r2, r5
    add r1, r4, #0x3c
    bl MIi_CpuClear32
    mov r0, r6
    mov r2, r5
    add r1, r4, #0x44
    bl MIi_CpuClear32
    mov r0, r6
    mov r2, r5
    add r1, r4, #0x4c
    bl MIi_CpuClear32
    ldr r1, [r4, #8]
    cmp r1, #0
    beq @L_020290fc
    add r0, r4, #0x3c
    bl Sbc_updateHintVec_
@L_020290fc:
    ldr r1, [r4, #0x10]
    cmp r1, #0
    beq @L_02029110
    add r0, r4, #0x44
    bl Sbc_updateHintVec_
@L_02029110:
    ldr r1, [r4, #0x18]
    cmp r1, #0
    beq @L_02029124
    add r0, r4, #0x4c
    bl Sbc_updateHintVec_
@L_02029124:
    ldr r0, [r4]
    bic r0, r0, #0x10
    str r0, [r4]
@L_02029130:
    ldr r5, =NNS_G3dRS
    ldr r0, [r5]
    cmp r0, #0
    beq @L_02029150
    mov r1, r4
    bl G3dDrawInternal_
    add sp, sp, #0x188
    ldmia sp!, {r4, r5, r6, pc}
@L_02029150:
    add r0, sp, #0
    mov r1, r4
    str r0, [r5]
    bl G3dDrawInternal_
    mov r0, #0
    str r0, [r5]
    add sp, sp, #0x188
    ldmia sp!, {r4, r5, r6, pc}
}
