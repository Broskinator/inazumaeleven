// (asm for now)

void func_02002884(void);
void func_020285a4(void);
void NNS_G3dGetTex(void);
void func_02027ccc(void);
void func_02027ce0(void);
void func_02027e10(void);
extern char data_020abaa0[];
extern char data_020abaa8[];
extern char data_020abaac[];
extern char data_020abaa4[];
void func_02027cf4(void);
void func_02027e24(void);
void NNS_G3dTexLoad(void);
void NNS_G3dPlttLoad(void);
void func_0202c11c(void);
void NNS_G3dBindMdlSet(void);
void NNS_G3dReleaseMdlSet(void);
void func_02027e7c(void);
void func_02027dc0(void);
extern char data_020bf420[];
extern char data_020bf464[];
void func_02001414(void);
void func_02001e0c(void);
void FX_GetDivResultFx64c(void);
void func_02028898(void);

asm void NNS_G3dInit(void)
{
    stmdb sp!, {r3, lr}
    bl func_02002884
    bl func_020285a4
    ldr r1, =0x4000600
    ldr r0, [r1]
    bic r0, r0, #0xc0000000
    orr r0, r0, #0x80000000
    str r0, [r1]
    ldmia sp!, {r3, pc}
}

asm void func_0202b798(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r2, [r10]
    ldr r1, =0x30415642
    cmp r2, r1
    bhi @L_0202b7e4
    bhs @L_0202b9ac
    sub r0, r1, #0x900
    cmp r2, r0
    bhi @L_0202b7d4
    bhs @L_0202b9ac
    sub r0, r1, #0x1300
    cmp r2, r0
    beq @L_0202b9ac
    b @L_0202b9b4
@L_0202b7d4:
    sub r0, r1, #0x200
    cmp r2, r0
    beq @L_0202b9ac
    b @L_0202b9b4
@L_0202b7e4:
    ldr r0, =0x30505442
    cmp r2, r0
    bhi @L_0202b804
    bhs @L_0202b9ac
    ldr r0, =0x30444d42
    cmp r2, r0
    beq @L_0202b810
    b @L_0202b9b4
@L_0202b804:
    add r0, r0, #0x80000
    cmp r2, r0
    bne @L_0202b9b4
@L_0202b810:
    mov r5, #1
    mov r0, r10
    mov r6, r5
    mov r7, r5
    bl NNS_G3dGetTex
    movs r4, r0
    beq @L_0202b97c
    bl func_02027ccc
    mov r9, r0
    mov r0, r4
    bl func_02027ce0
    mov r8, r0
    mov r0, r4
    bl func_02027e10
    str r0, [sp]
    cmp r9, #0
    beq @L_0202b878
    ldr r0, =data_020abaa0
    mov r1, #0
    ldr r3, [r0]
    mov r0, r9
    mov r2, r1
    blx r3
    movs r11, r0
    moveq r5, #0
    b @L_0202b87c
@L_0202b878:
    mov r11, #0
@L_0202b87c:
    cmp r8, #0
    beq @L_0202b8a8
    ldr r0, =data_020abaa0
    mov r2, #0
    ldr r3, [r0]
    mov r0, r8
    mov r1, #1
    blx r3
    movs r8, r0
    moveq r6, #0
    b @L_0202b8ac
@L_0202b8a8:
    mov r8, #0
@L_0202b8ac:
    ldr r0, [sp]
    cmp r0, #0
    beq @L_0202b8e0
    ldrh r1, [r4, #0x20]
    ldr r0, =data_020abaa8
    mov r2, #0
    ldr r3, [r0]
    ldr r0, [sp]
    and r1, r1, #0x8000
    blx r3
    movs r9, r0
    moveq r7, #0
    b @L_0202b8e4
@L_0202b8e0:
    mov r9, #0
@L_0202b8e4:
    cmp r5, #0
    cmpne r6, #0
    beq @L_0202b8f8
    cmp r7, #0
    bne @L_0202b948
@L_0202b8f8:
    cmp r7, #0
    beq @L_0202b910
    ldr r1, =data_020abaac
    mov r0, r9
    ldr r1, [r1]
    blx r1
@L_0202b910:
    cmp r6, #0
    beq @L_0202b928
    ldr r1, =data_020abaa4
    mov r0, r8
    ldr r1, [r1]
    blx r1
@L_0202b928:
    cmp r5, #0
    beq @L_0202b940
    ldr r1, =data_020abaa4
    mov r0, r11
    ldr r1, [r1]
    blx r1
@L_0202b940:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202b948:
    mov r0, r4
    mov r1, r11
    mov r2, r8
    bl func_02027cf4
    mov r0, r4
    mov r1, r9
    bl func_02027e24
    mov r0, r4
    mov r1, #1
    bl NNS_G3dTexLoad
    mov r0, r4
    mov r1, #1
    bl NNS_G3dPlttLoad
@L_0202b97c:
    ldr r1, [r10]
    ldr r0, =0x30444d42
    cmp r1, r0
    bne @L_0202b9a4
    mov r0, r10
    bl func_0202c11c
    cmp r4, #0
    beq @L_0202b9a4
    mov r1, r4
    bl NNS_G3dBindMdlSet
@L_0202b9a4:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202b9ac:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202b9b4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202b9d8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r5, r0
    ldr r2, [r5]
    ldr r1, =0x30415642
    cmp r2, r1
    bhi @L_0202ba0c
    addhs sp, sp, #8
    ldmhsia sp!, {r3, r4, r5, pc}
    sub r0, r1, #0x900
    add sp, sp, #8
    cmp r2, r0
    ldmia sp!, {r3, r4, r5, pc}
@L_0202ba0c:
    ldr r1, =0x30505442
    cmp r2, r1
    bhi @L_0202ba34
    addhs sp, sp, #8
    ldmhsia sp!, {r3, r4, r5, pc}
    ldr r1, =0x30444d42
    cmp r2, r1
    beq @L_0202ba48
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
@L_0202ba34:
    add r0, r1, #0x80000
    cmp r2, r0
    beq @L_0202ba68
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
@L_0202ba48:
    bl func_0202c11c
    mov r4, r0
    mov r0, r5
    bl NNS_G3dGetTex
    cmp r0, #0
    beq @L_0202ba68
    mov r0, r4
    bl NNS_G3dReleaseMdlSet
@L_0202ba68:
    mov r0, r5
    bl NNS_G3dGetTex
    movs r5, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02027e7c
    mov r4, r0
    add r1, sp, #4
    add r2, sp, #0
    mov r0, r5
    bl func_02027dc0
    cmp r4, #0
    beq @L_0202baac
    ldr r1, =data_020abaac
    mov r0, r4
    ldr r1, [r1]
    blx r1
@L_0202baac:
    ldr r0, [sp]
    cmp r0, #0
    beq @L_0202bac4
    ldr r1, =data_020abaa4
    ldr r1, [r1]
    blx r1
@L_0202bac4:
    ldr r0, [sp, #4]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, =data_020abaa4
    ldr r1, [r1]
    blx r1
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void NNS_G3dWorldPosToScrPos(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x1c
    mov r5, r1
    mov r4, r2
    ldr r6, =data_020bf420
    ldr r1, =data_020bf464
    add r2, sp, #0x10
    bl func_02001414
    ldr r1, [sp, #0x14]
    ldr r0, [r6, #0x1c]
    ldr r2, [sp, #0x10]
    smull r8, r7, r1, r0
    ldr r0, [r6, #0xc]
    ldr r3, [sp, #0x18]
    smlal r8, r7, r2, r0
    ldr r1, [r6, #0x2c]
    ldr r0, [r6, #0x3c]
    smlal r8, r7, r3, r1
    mov r1, r8, lsr #0xc
    orr r1, r1, r7, lsl #20
    add r0, r1, r0
    bl func_02001e0c
    ldr r2, [sp, #0x14]
    ldr r1, [r6, #0x10]
    ldr r0, [r6, #0x14]
    smull r9, r8, r2, r1
    smull lr, r12, r2, r0
    ldr r1, [sp, #0x10]
    ldr r3, [r6]
    ldr r0, [sp, #0x18]
    smlal r9, r8, r1, r3
    ldr r7, [r6, #0x20]
    ldr r2, [r6, #0x30]
    smlal r9, r8, r0, r7
    mov r3, r9, lsr #0xc
    orr r3, r3, r8, lsl #20
    add r7, r3, r2
    ldr r3, [r6, #4]
    ldr r8, [r6, #0x24]
    smlal lr, r12, r1, r3
    smlal lr, r12, r0, r8
    mov r0, lr, lsr #0xc
    ldr r2, [r6, #0x34]
    orr r0, r0, r12, lsl #20
    add r8, r0, r2
    bl FX_GetDivResultFx64c
    umull lr, r12, r0, r7
    mov r2, r7, asr #0x1f
    mla r12, r0, r2, r12
    mla r12, r1, r7, r12
    adds lr, lr, #0x80000000
    adc r2, r12, #0
    add r2, r2, #0x1000
    add r2, r2, r2, lsr #31
    mov r7, r2, asr #1
    mov r3, r8, asr #0x1f
    umull r12, r2, r0, r8
    mla r2, r0, r3, r2
    mla r2, r1, r8, r2
    adds r0, r12, #0x80000000
    adc r0, r2, #0
    add r0, r0, #0x1000
    add r0, r0, r0, lsr #31
    mov r8, r0, asr #1
    cmp r7, #0
    mov r6, #0
    cmpge r8, #0
    blt @L_0202bc18
    cmp r7, #0x1000
    cmple r8, #0x1000
    ble @L_0202bc1c
@L_0202bc18:
    mvn r6, #0
@L_0202bc1c:
    add r0, sp, #0xc
    add r1, sp, #8
    add r2, sp, #4
    add r3, sp, #0
    bl func_02028898
    ldr r2, [sp, #0xc]
    ldr r0, [sp, #4]
    ldr r12, [sp]
    sub r0, r0, r2
    mul r0, r7, r0
    add r1, r0, #0x800
    ldr r3, [sp, #8]
    add r1, r2, r1, asr #12
    sub r0, r12, r3
    mul r0, r8, r0
    str r1, [r5]
    ldr r1, [sp, #8]
    add r0, r0, #0x800
    rsb r1, r1, #0xbf
    sub r1, r1, r0, asr #12
    mov r0, r6
    str r1, [r4]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}
