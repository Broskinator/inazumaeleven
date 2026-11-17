// (asm for now)

void GetGlyphIndex(void);
void NNS_G2dFontInitUTF16(void);
void NNS_G2dFontInitShiftJIS(void);
void NNS_G2dFontFindGlyphIndex(void);
void NNS_G2dFontGetCharWidthsFromIndex(void);
void NNSi_G2dFontGetStringWidth(void);
void NNSi_G2dFontGetTextHeight(void);
void NNSi_G2dFontGetTextRect(void);
void GetCharIndex1D(void);

void NNSi_G2dGetUnpackedFont(void);
void NNSi_G2dSplitCharUTF16(void);
void NNSi_G2dSplitCharShiftJIS(void);
extern char data_020a484c[];

asm void GetGlyphIndex(void)
{
    stmdb sp!, {r3, lr}
    ldrh r3, [r0, #4]
    ldr r2, =0xffff
    cmp r3, #0
    beq @L_02025c14
    cmp r3, #1
    beq @L_02025c30
    cmp r3, #2
    beq @L_02025c44
    b @L_02025ca8
@L_02025c14:
    ldrh r2, [r0]
    ldrh r3, [r0, #0xc]
    sub r0, r1, r2
    add r0, r3, r0
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    b @L_02025ca8
@L_02025c30:
    ldrh r2, [r0]
    sub r1, r1, r2
    add r0, r0, r1, lsl #1
    ldrh r2, [r0, #0xc]
    b @L_02025ca8
@L_02025c44:
    ldrh r3, [r0, #0xc]
    add r12, r0, #0xe
    sub r0, r3, #1
    add lr, r12, r0, lsl #2
    cmp r12, lr
    bhi @L_02025ca8
@L_02025c5c:
    sub r3, lr, r12
    mov r0, r3, asr #1
    add r0, r3, r0, lsr #30
    mov r0, r0, asr #2
    add r0, r0, r0, lsr #31
    mov r3, r0, asr #1
    mov r0, r3, lsl #2
    ldrh r0, [r12, r0]
    add r3, r12, r3, lsl #2
    cmp r0, r1
    addlo r12, r3, #4
    blo @L_02025ca0
    cmp r1, r0
    sublo lr, r3, #4
    blo @L_02025ca0
    ldrh r2, [r3, #2]
    b @L_02025ca8
@L_02025ca0:
    cmp r12, lr
    bls @L_02025c5c
@L_02025ca8:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

asm void NNS_G2dFontInitUTF16(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    mov r1, r4
    bl NNSi_G2dGetUnpackedFont
    ldr r0, =NNSi_G2dSplitCharUTF16
    str r0, [r4, #4]
    ldmia sp!, {r4, pc}
}

asm void NNS_G2dFontInitShiftJIS(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, r1
    mov r1, r4
    bl NNSi_G2dGetUnpackedFont
    ldr r0, =NNSi_G2dSplitCharShiftJIS
    str r0, [r4, #4]
    ldmia sp!, {r4, pc}
}

asm void NNS_G2dFontFindGlyphIndex(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r0]
    ldr r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02025d38
@L_02025d10:
    ldrh r2, [r0]
    cmp r2, r1
    ldrlsh r2, [r0, #2]
    cmpls r1, r2
    bhi @L_02025d2c
    bl GetGlyphIndex
    ldmia sp!, {r3, pc}
@L_02025d2c:
    ldr r0, [r0, #8]
    cmp r0, #0
    bne @L_02025d10
@L_02025d38:
    ldr r0, =0xffff
    ldmia sp!, {r3, pc}
}

asm void NNS_G2dFontGetCharWidthsFromIndex(void)
{
    ldr r12, [r0]
    ldr r3, [r12, #0xc]
    cmp r3, #0
    beq @L_02025d84
@L_02025d54:
    ldrh r2, [r3]
    cmp r2, r1
    ldrlsh r0, [r3, #2]
    cmpls r1, r0
    subls r0, r1, r2
    addls r1, r3, #8
    addls r0, r0, r0, lsl #1
    addls r0, r1, r0
    bxls lr
    ldr r3, [r3, #4]
    cmp r3, #0
    bne @L_02025d54
@L_02025d84:
    add r0, r12, #4
    bx lr
}

asm void NNSi_G2dFontGetStringWidth(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r9, r0
    add r4, sp, #0
    ldr r6, [r9, #4]
    mov r0, r4
    mov r8, r1
    mov r7, r3
    str r2, [sp]
    mov r5, #0
    blx r6
    movs r1, r0
    beq @L_02025e08
    ldr r10, =0xffff
@L_02025dc4:
    cmp r1, #0xa
    beq @L_02025e08
    mov r0, r9
    bl NNS_G2dFontFindGlyphIndex
    mov r1, r0
    cmp r1, r10
    ldreq r0, [r9]
    ldreqh r1, [r0, #2]
    mov r0, r9
    bl NNS_G2dFontGetCharWidthsFromIndex
    ldrsb r1, [r0, #2]
    mov r0, r4
    add r1, r8, r1
    add r5, r5, r1
    blx r6
    movs r1, r0
    bne @L_02025dc4
@L_02025e08:
    cmp r7, #0
    beq @L_02025e20
    cmp r1, #0xa
    ldreq r0, [sp]
    movne r0, #0
    str r0, [r7]
@L_02025e20:
    cmp r5, #0
    subgt r5, r5, r8
    mov r0, r5
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void NNSi_G2dFontGetTextHeight(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r8, r0
    add r5, sp, #8
    ldr r7, [r8, #4]
    add r12, sp, #0
    mov r3, #0
    mov r0, r5
    mov r4, r1
    str r2, [sp, #8]
    str r3, [r12]
    str r3, [r12, #4]
    mov r6, #1
    blx r7
    cmp r0, #0
    beq @L_02025e90
@L_02025e78:
    cmp r0, #0xa
    mov r0, r5
    addeq r6, r6, #1
    blx r7
    cmp r0, #0
    bne @L_02025e78
@L_02025e90:
    ldr r0, [r8]
    ldrsb r0, [r0, #1]
    add r0, r4, r0
    mul r0, r6, r0
    sub r0, r0, r4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void NNSi_G2dFontGetTextRect(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r6, r2
    ldr r2, [sp, #0x28]
    add r9, sp, #0
    mov r4, #0
    mov r8, r0
    mov r7, r1
    mov r5, r3
    str r4, [r9]
    str r4, [r9, #4]
    cmp r2, #0
    mov r4, #1
    beq @L_02025f14
    add r9, sp, #0x28
@L_02025ee8:
    mov r0, r7
    mov r1, r6
    mov r3, r9
    bl NNSi_G2dFontGetStringWidth
    ldr r1, [sp]
    ldr r2, [sp, #0x28]
    cmp r0, r1
    strgt r0, [sp]
    add r4, r4, #1
    cmp r2, #0
    bne @L_02025ee8
@L_02025f14:
    ldr r0, [r7]
    sub r2, r4, #1
    ldrsb r1, [r0, #1]
    ldr r0, [sp]
    add r1, r5, r1
    mul r1, r2, r1
    sub r1, r1, r5
    stmia r8, {r0, r1}
    str r1, [sp, #4]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void GetCharIndex1D(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov lr, #3
    ldr r8, [sp, #0x20]
    ldr r7, [sp, #0x24]
    ldr r9, =data_020a484c
    mov r6, #0
    mov r12, lr
    mvn r5, #0
@L_02025f60:
    and r10, r3, r5, lsl r7
    cmp r10, r1
    and r4, r2, r5, lsl r8
    bhi @L_02025fa0
    mla r6, r2, r10, r6
    cmp r4, r0
    movhi r2, r4
    subhi r1, r1, r10
    subhi r3, r3, r10
    bhi @L_02025fe4
    sub r3, r3, r10
    mla r6, r4, r3, r6
    sub r0, r0, r4
    sub r1, r1, r10
    sub r2, r2, r4
    b @L_02025fe4
@L_02025fa0:
    cmp r4, r0
    mvn r3, r5, lsl r7
    mlals r6, r4, r10, r6
    movls r3, r10
    subls r0, r0, r4
    subls r2, r2, r4
    bls @L_02025fe4
    and r2, r1, r5, lsl r7
    mla r6, r4, r2, r6
    and r2, r0, r5, lsl r8
    mvn r4, r5, lsl r8
    add r2, r6, r2, lsl r7
    and r1, r1, r3
    add r1, r2, r1, lsl r8
    and r0, r0, r4
    add r0, r1, r0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02025fe4:
    cmp r2, #8
    movlt r4, r2
    movge r8, lr
    clzlt r4, r4
    rsblt r8, r4, #0x1f
    cmp r3, #8
    movge r4, r12
    movlt r4, r3
    clzlt r4, r4
    rsblt r4, r4, #0x1f
    add r4, r9, r4, lsl #3
    add r7, r4, r8, lsl #1
    ldrb r8, [r4, r8, lsl #1]
    ldrb r7, [r7, #1]
    b @L_02025f60
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
