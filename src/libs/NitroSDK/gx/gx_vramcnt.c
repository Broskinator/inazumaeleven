// (asm for now)

void GX_SetBankForSubOBJ(void);
void GX_SetBankForSubBGExtPltt(void);
void GX_SetBankForSubOBJExtPltt(void);
void func_02004ce4(void);
void func_02004d1c(void);
void func_02004d30(void);
void func_02004d54(void);
void func_02004d68(void);
void func_02004d7c(void);
void func_02004d90(void);
void func_02004da4(void);
void func_02004dcc(void);
void func_02004e8c(void);
void func_02004ea0(void);
void func_02004eb4(void);
void func_02004ed8(void);
void func_02004efc(void);
void func_02004f10(void);
void func_02004f24(void);
void func_02004f38(void);
void func_02004f4c(void);
void func_02004f60(void);
void func_02004f74(void);
void func_02004f88(void);
void func_02004fb0(void);
void func_02004fd8(void);
void GX_GetSizeOfX_(void);
void GX_GetSizeOfTex(void);
void GX_GetSizeOfTexPltt(void);
void GX_GetSizeOfSubOBJ(void);

extern char data_020bb080[];
void func_0200415c(void);
extern char data_020bb082[];
extern char data_020bb08e[];
extern char data_020bb088[];
extern char data_020bb08a[];
extern char data_020bb092[];
extern char data_020bb094[];
extern char data_020bb096[];
extern char data_020bb042[];
void func_0200863c(void);
extern char data_020bb084[];
extern char data_020bb090[];
extern char data_020bb08c[];
extern char data_020bb086[];
extern char data_020bb098[];

asm void GX_SetBankForSubOBJ(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb080
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0x14]
    cmp r0, #0
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0x14]
    beq @L_02004bc8
    cmp r0, #8
    beq @L_02004bbc
    cmp r0, #0x100
    ldreq r0, =0x4000249
    moveq r1, #0x82
    streqb r1, [r0]
    b @L_02004bc8
@L_02004bbc:
    ldr r0, =0x4000243
    mov r1, #0x84
    strb r1, [r0]
@L_02004bc8:
    ldr r0, =data_020bb080
    ldrh r0, [r0]
    bl func_0200415c
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForSubBGExtPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb080
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0x16]
    cmp r0, #0
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0x16]
    beq @L_02004c38
    cmp r0, #0x80
    bne @L_02004c48
    ldr r3, =0x4001000
    ldr r0, =0x4000248
    ldr r2, [r3]
    mov r1, #0x82
    orr r2, r2, #0x40000000
    str r2, [r3]
    strb r1, [r0]
    b @L_02004c48
@L_02004c38:
    ldr r1, =0x4001000
    ldr r0, [r1]
    bic r0, r0, #0x40000000
    str r0, [r1]
@L_02004c48:
    ldr r0, =data_020bb080
    ldrh r0, [r0]
    bl func_0200415c
    ldmia sp!, {r3, pc}
}

asm void GX_SetBankForSubOBJExtPltt(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bb080
    mvn r12, r0
    ldrh r3, [r1]
    ldrh r2, [r1, #0x18]
    cmp r0, #0
    orr r2, r3, r2
    and r2, r12, r2
    strh r2, [r1]
    strh r0, [r1, #0x18]
    beq @L_02004cb8
    cmp r0, #0x100
    bne @L_02004cc8
    ldr r3, =0x4001000
    ldr r0, =0x4000249
    ldr r2, [r3]
    mov r1, #0x83
    orr r2, r2, #0x80000000
    str r2, [r3]
    strb r1, [r0]
    b @L_02004cc8
@L_02004cb8:
    ldr r1, =0x4001000
    ldr r0, [r1]
    bic r0, r0, #0x80000000
    str r0, [r1]
@L_02004cc8:
    ldr r0, =data_020bb080
    ldrh r0, [r0]
    bl func_0200415c
    ldmia sp!, {r3, pc}
}

asm void func_02004ce4(void)
{
    stmdb sp!, {r4, lr}
    ldrh r4, [r0]
    mov r1, #0
    ldr r2, =data_020bb080
    strh r1, [r0]
    ldrh r3, [r2]
    mov r1, r4, lsl #0x10
    mov r0, r4
    orr r1, r3, r1, lsr #16
    strh r1, [r2]
    bl func_0200415c
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02004d1c(void)
{
    ldr r0, =data_020bb082
    ldr r12, =func_02004ce4
    bx r12
}

asm void func_02004d30(void)
{
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =data_020bb08e
    bic r1, r1, #0x40000000
    ldr r12, =func_02004ce4
    str r1, [r2]
    bx r12
}

asm void func_02004d54(void)
{
    ldr r0, =data_020bb088
    ldr r12, =func_02004ce4
    bx r12
}

asm void func_02004d68(void)
{
    ldr r0, =data_020bb08a
    ldr r12, =func_02004ce4
    bx r12
}

asm void func_02004d7c(void)
{
    ldr r0, =data_020bb092
    ldr r12, =func_02004ce4
    bx r12
}

asm void func_02004d90(void)
{
    ldr r0, =data_020bb094
    ldr r12, =func_02004ce4
    bx r12
}

asm void func_02004da4(void)
{
    ldr r2, =0x4001000
    ldr r0, =data_020bb096
    ldr r1, [r2]
    ldr r12, =func_02004ce4
    bic r1, r1, #0x40000000
    str r1, [r2]
    bx r12
}

asm void func_02004dcc(void)
{
    stmdb sp!, {r4, lr}
    ldrh r4, [r0]
    mov r1, #0
    strh r1, [r0]
    tst r4, #1
    ldrne r0, =0x4000240
    strneb r1, [r0]
    tst r4, #2
    ldrne r0, =0x4000241
    strneb r1, [r0]
    tst r4, #4
    ldrne r0, =0x4000242
    strneb r1, [r0]
    tst r4, #8
    ldrne r0, =0x4000243
    strneb r1, [r0]
    tst r4, #0x10
    ldrne r0, =0x4000244
    strneb r1, [r0]
    tst r4, #0x20
    ldrne r0, =0x4000245
    strneb r1, [r0]
    tst r4, #0x40
    ldrne r0, =0x4000246
    strneb r1, [r0]
    tst r4, #0x80
    ldrne r0, =0x4000248
    strneb r1, [r0]
    tst r4, #0x100
    ldrne r0, =0x4000249
    strneb r1, [r0]
    ldr r1, =data_020bb042
    mov r0, r4, lsl #0x10
    ldrh r1, [r1]
    mov r0, r0, lsr #0x10
    bl func_0200863c
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02004e8c(void)
{
    ldr r0, =data_020bb082
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004ea0(void)
{
    ldr r0, =data_020bb084
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004eb4(void)
{
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =data_020bb08e
    bic r1, r1, #0x40000000
    ldr r12, =func_02004dcc
    str r1, [r2]
    bx r12
}

asm void func_02004ed8(void)
{
    mov r2, #0x4000000
    ldr r1, [r2]
    ldr r0, =data_020bb090
    bic r1, r1, #0x80000000
    ldr r12, =func_02004dcc
    str r1, [r2]
    bx r12
}

asm void func_02004efc(void)
{
    ldr r0, =data_020bb088
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f10(void)
{
    ldr r0, =data_020bb08a
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f24(void)
{
    ldr r0, =data_020bb08c
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f38(void)
{
    ldr r0, =data_020bb086
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f4c(void)
{
    ldr r0, =data_020bb080
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f60(void)
{
    ldr r0, =data_020bb092
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f74(void)
{
    ldr r0, =data_020bb094
    ldr r12, =func_02004dcc
    bx r12
}

asm void func_02004f88(void)
{
    ldr r2, =0x4001000
    ldr r0, =data_020bb096
    ldr r1, [r2]
    ldr r12, =func_02004dcc
    bic r1, r1, #0x40000000
    str r1, [r2]
    bx r12
}

asm void func_02004fb0(void)
{
    ldr r2, =0x4001000
    ldr r0, =data_020bb098
    ldr r1, [r2]
    ldr r12, =func_02004dcc
    bic r1, r1, #0x80000000
    str r1, [r2]
    bx r12
}

asm void func_02004fd8(void)
{
    ldr r0, =data_020bb080
    ldrh r0, [r0, #8]
    bx lr
}

asm void GX_GetSizeOfX_(void)
{
    mov r1, #0
    tst r0, #1
    addne r1, r1, #0x20000
    tst r0, #2
    addne r1, r1, #0x20000
    tst r0, #4
    addne r1, r1, #0x20000
    tst r0, #8
    addne r1, r1, #0x20000
    tst r0, #0x10
    addne r1, r1, #0x10000
    tst r0, #0x20
    addne r1, r1, #0x4000
    tst r0, #0x40
    addne r1, r1, #0x4000
    tst r0, #0x80
    addne r1, r1, #0x8000
    tst r0, #0x100
    addne r1, r1, #0x4000
    mov r0, r1
    bx lr
}

asm void GX_GetSizeOfTex(void)
{
    ldr r0, =data_020bb080
    ldr r12, =GX_GetSizeOfX_
    ldrh r0, [r0, #8]
    bx r12
}

asm void GX_GetSizeOfTexPltt(void)
{
    ldr r0, =data_020bb080
    ldr r12, =GX_GetSizeOfX_
    ldrh r0, [r0, #0xa]
    bx r12
}

asm void GX_GetSizeOfSubOBJ(void)
{
    ldr r0, =data_020bb080
    ldr r12, =GX_GetSizeOfX_
    ldrh r0, [r0, #0x14]
    bx r12
}
