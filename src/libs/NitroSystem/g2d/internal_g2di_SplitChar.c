// (asm for now)

void NNSi_G2dSplitCharShiftJIS(void);
void NNS_G3dAnmObjInit(void);

extern char data_020ab824[];
extern char data_020ab848[];
extern char data_020ab84c[];

asm void NNSi_G2dSplitCharShiftJIS(void)
{
    ldr r1, [r0]
    ldrb r3, [r1]
    cmp r3, #0x81
    blo @L_02027924
    cmp r3, #0xa0
    blo @L_0202792c
@L_02027924:
    cmp r3, #0xe0
    blo @L_0202794c
@L_0202792c:
    ldrb r1, [r1, #1]
    ldr r2, [r0]
    orr r1, r1, r3, lsl #8
    mov r1, r1, lsl #0x10
    add r2, r2, #2
    str r2, [r0]
    mov r3, r1, lsr #0x10
    b @L_02027958
@L_0202794c:
    ldr r1, [r0]
    add r1, r1, #1
    str r1, [r0]
@L_02027958:
    mov r0, r3
    bx lr
}

asm void NNS_G3dAnmObjInit(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r12, #0
    mov r5, #0x7f
    mov r4, #0x1000
    ldr lr, =data_020ab824
    str r12, [r0]
    str r1, [r0, #8]
    str r12, [r0, #0x10]
    strb r5, [r0, #0x18]
    str r4, [r0, #4]
    str r3, [r0, #0x14]
    strb r12, [r0, #0x19]
    str r12, [r0, #0xc]
    ldr r6, [lr]
    cmp r6, #0
    ldmlsia sp!, {r4, r5, r6, pc}
    ldrb r5, [r1]
    ldr r4, =data_020ab848
@L_020279a8:
    ldrb r3, [r4, r12, lsl #3]
    cmp r5, r3
    addeq r3, r4, r12, lsl #3
    ldreqh lr, [r1, #2]
    ldreqh r3, [r3, #2]
    cmpeq lr, r3
    bne @L_020279dc
    ldr r3, =data_020ab84c
    ldr r3, [r3, r12, lsl #3]
    cmp r3, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    blx r3
    ldmia sp!, {r4, r5, r6, pc}
@L_020279dc:
    add r12, r12, #1
    cmp r12, r6
    blo @L_020279a8
    ldmia sp!, {r4, r5, r6, pc}
}
