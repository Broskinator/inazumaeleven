#include "game/UnkClass_02061498.hpp"

extern "C" char data_020aeadc[];
extern "C" char data_020aeb28[];
extern "C" char data_020aeb50[];
extern "C" char data_020c4648[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4920[];
extern "C" char data_020c4de0[];
extern "C" char data_020c4ebc[];
extern "C" char data_020f98a0[];
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02001d80(void);
extern "C" void func_0200226c(void);
extern "C" void func_02083afc(void);
extern "C" void func_0208413c(void);
extern "C" void func_02084350(void);
extern "C" void func_0208454c(void);
extern "C" void func_02084808(void);
extern "C" void func_ov015_02131704(void);
extern "C" void func_ov015_0213a818(void);
extern "C" void func_ov015_02142de8(void);
extern "C" void func_ov015_02142e24(void);
extern "C" void func_ov015_02142ec8(void);
extern "C" void func_ov087_02182234(void);
extern "C" void func_ov087_02182248(void);

asm void UnkClass_02061498::func_02061498()
{
    ldr r2, =data_020aeadc
    mov r1, #0
    str r2, [r0]
    str r1, [r0, #4]
    bx lr
}

asm void UnkClass_02061498::func_020614b0()
{
    bx lr
}

asm void UnkClass_02061498::func_020614b4()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_020614c8()
{
    stmib r0, {r1, r2}
    bx lr
}

asm void UnkClass_02061498::func_020614d0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r4, r1
    mov r1, r2
    ldr r8, [r1]
    mov r1, r3
    ldr r9, [r1]
    ldrh r1, [r4, #0x52]
    mov r5, r0
    ldr r0, =data_020c4de0
    ldr r10, [sp, #0x38]
    str r2, [sp]
    str r3, [sp, #4]
    str r1, [sp, #8]
    mov r11, #0
    bl func_ov087_02182234
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r10, #0
    ldrneh r0, [r4, #0x52]
    ldr r2, [r4]
    ldr r3, [r5, #4]
    strneh r0, [r10]
    str r2, [sp, #0x10]
    ldr r2, [r4, #4]
    ldr r0, =data_020c4de0
    mov r1, #0
    str r2, [sp, #0xc]
    ldr r4, [r3, #0xdc]
    ldr r5, [r3, #0xe4]
    ldr r6, [r3, #0xe0]
    ldr r7, [r3, #0xe8]
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    cmpne r0, r4
    ble @L_0206158c
    cmp r8, r4
    bgt @L_0206158c
    sub r0, r4, r8
    add r2, r4, r0
    ldr r0, [sp, #8]
    mov r1, #0x4000
    add r8, r2, #1
    b @L_020615c4
@L_0206158c:
    ldr r0, =data_020c4de0
    mov r1, #2
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    cmpne r0, r5
    bge @L_020615d0
    cmp r8, r5
    blt @L_020615d0
    sub r0, r8, r5
    sub r2, r5, r0
    ldr r0, [sp, #8]
    mov r1, #0x4000
    sub r8, r2, #1
@L_020615c4:
    mov r11, #1
    bl func_0208413c
    str r0, [sp, #8]
@L_020615d0:
    mov r4, #1
    ldr r0, =data_020c4de0
    mov r1, r4
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0xc]
    cmpne r0, r6
    ble @L_02061614
    cmp r9, r6
    bgt @L_02061614
    sub r0, r6, r9
    add r2, r6, r0
    ldr r0, [sp, #8]
    mov r1, #0
    mov r11, r4
    add r9, r2, #1
    b @L_02061650
@L_02061614:
    ldr r0, =data_020c4de0
    mov r1, #3
    bl func_ov087_02182248
    cmp r0, #0
    ldrne r0, [sp, #0xc]
    cmpne r0, r7
    bge @L_02061658
    cmp r9, r7
    blt @L_02061658
    sub r0, r9, r7
    sub r2, r7, r0
    ldr r0, [sp, #8]
    mov r1, #0
    sub r9, r2, #1
    mov r11, #1
@L_02061650:
    bl func_0208413c
    str r0, [sp, #8]
@L_02061658:
    cmp r11, #0
    beq @L_0206167c
    cmp r10, #0
    ldrne r0, [sp, #8]
    strneh r0, [r10]
    ldr r0, [sp]
    str r8, [r0]
    ldr r0, [sp, #4]
    str r9, [r0]
@L_0206167c:
    mov r0, r11
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02061498::func_0206168c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r4, [sp, #0x50]
    str r2, [sp]
    movs r2, r4
    ldr r2, [sp]
    mov r10, r3
    ldr r8, [r2]
    ldr r2, [r10]
    ldr r9, [sp, #0x58]
    str r2, [sp, #8]
    ldrh r2, [r1, #0x52]
    str r4, [sp, #0x50]
    mov r11, #0
    str r2, [sp, #4]
    ldrne r3, [sp, #4]
    movne r2, r4
    strneh r3, [r2]
    ldr r2, [r1]
    ldr r1, [r1, #4]
    ldr r3, [sp, #0x54]
    str r1, [sp, #0x20]
    ldr r1, [sp, #8]
    cmp r3, #1
    str r1, [sp, #0x28]
    ldr r1, [r0, #4]
    moveq r0, #0x4800
    addeq r3, r1, #0xec
    moveq r1, #0x800
    addne r3, r1, #0xfc
    str r2, [sp, #0x1c]
    str r8, [sp, #0x24]
    movne r0, #0x800
    movne r1, #0x4800
    cmp r9, #0
    ldr r5, [r3, #8]
    ldmia r3, {r4, r6}
    ldr r7, [r3, #0xc]
    beq @L_02061768
    cmp r2, r4
    blt @L_02061768
    cmp r8, r4
    bgt @L_02061768
    sub r3, r6, r0
    ldr r0, [sp, #4]
    add r2, r7, r1
    mov r1, #0x4000
    str r3, [sp, #0x10]
    str r2, [sp, #0x18]
    str r4, [sp, #0xc]
    str r4, [sp, #0x14]
    bl func_0208413c
    mov r1, r4, lsl #1
@L_02061760:
    add r1, r1, #1
    b @L_020617e0
@L_02061768:
    cmp r9, #0
    bne @L_020617a4
    cmp r2, r5
    blt @L_020617a4
    cmp r8, r5
    bgt @L_020617a4
    ldr r0, [sp, #4]
    mov r1, #0x4000
    str r5, [sp, #0xc]
    str r6, [sp, #0x10]
    str r5, [sp, #0x14]
    str r7, [sp, #0x18]
    bl func_0208413c
    mov r1, r5, lsl #1
    b @L_02061760
@L_020617a4:
    cmp r9, #0
    bne @L_020617f0
    cmp r2, r4
    bgt @L_020617f0
    cmp r8, r4
    blt @L_020617f0
    ldr r0, [sp, #4]
    mov r1, #0x4000
    str r4, [sp, #0xc]
    str r6, [sp, #0x10]
    str r4, [sp, #0x14]
    str r7, [sp, #0x18]
    bl func_0208413c
    mov r1, r4, lsl #1
@L_020617dc:
    sub r1, r1, #1
@L_020617e0:
    str r0, [sp, #4]
    sub r8, r1, r8
    mov r0, #1
    b @L_02061838
@L_020617f0:
    cmp r9, #0
    beq @L_02061834
    cmp r2, r5
    bgt @L_02061834
    cmp r8, r5
    blt @L_02061834
    sub r3, r6, r0
    ldr r0, [sp, #4]
    add r2, r7, r1
    mov r1, #0x4000
    str r3, [sp, #0x10]
    str r2, [sp, #0x18]
    str r5, [sp, #0xc]
    str r5, [sp, #0x14]
    bl func_0208413c
    mov r1, r5, lsl #1
    b @L_020617dc
@L_02061834:
    mov r0, #0
@L_02061838:
    cmp r0, #0
    beq @L_0206187c
    add r0, sp, #0xc
    add r1, sp, #0x1c
    mov r2, #0
    bl func_02083afc
    cmp r0, #0
    beq @L_0206187c
    ldr r0, [sp, #0x50]
    orr r11, r11, #1
    cmp r0, #0
    ldrne r1, [sp, #4]
    strneh r1, [r0]
    ldr r0, [sp]
    str r8, [r0]
    ldr r0, [sp, #8]
    str r0, [r10]
@L_0206187c:
    cmp r9, #0
    beq @L_020618c8
    ldr r0, [sp, #0x54]
    ldr r1, [r10]
    cmp r0, #1
    bne @L_020618b0
    add r0, r6, #0x4000
    cmp r1, r0
    addlt r0, r6, #1
    addlt r0, r0, #0x4000
    strlt r0, [r10]
    orrlt r11, r11, #2
    b @L_020618c8
@L_020618b0:
    sub r0, r7, #0x4000
    cmp r1, r0
    mvngt r0, #0x4000
    addgt r0, r7, r0
    strgt r0, [r10]
    orrgt r11, r11, #2
@L_020618c8:
    mov r0, r11
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02061498::func_020618d4()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r1
    ldrb r0, [r10, #0x59]
    ldr r4, [r10, #0xc]
    ldr r5, [r10, #0x10]
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    mov r9, r2
    mov r8, r3
    ldmia r10, {r6, r7}
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r10, #0x59]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_02061950
    mov r0, r6
    mov r1, r7
    bl func_02084350
    cmp r0, #0
    bne @L_02061950
    mov r0, r4
    mov r1, r5
    bl func_02084350
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02061950:
    mov r0, r6
    mov r1, r7
    bl func_02084350
    cmp r0, #0
    cmpeq r9, #0
    bne @L_020619fc
    ldr r1, =data_020c4ebc
    ldr r0, [r1]
    cmp r4, r0
    bge @L_02061980
    cmp r4, r6
    bgt @L_020619bc
@L_02061980:
    ldr r0, [r1, #8]
    cmp r4, r0
    ble @L_02061994
    cmp r4, r6
    blt @L_020619bc
@L_02061994:
    ldr r0, [r1, #4]
    cmp r5, r0
    bge @L_020619a8
    cmp r5, r7
    bgt @L_020619bc
@L_020619a8:
    ldr r0, [r1, #0xc]
    cmp r5, r0
    ble @L_020619c4
    cmp r5, r7
    bge @L_020619c4
@L_020619bc:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020619c4:
    ldrb r0, [r10, #0x59]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_020619f4
    ldr r0, [r10, #0x48]
    cmp r0, #0
    movge r0, #1
    movlt r0, #0
    cmp r0, #0
    beq @L_02061a20
@L_020619f4:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020619fc:
    cmp r8, #0
    beq @L_02061a20
    ldr r2, [r10, #8]
    mov r0, r6
    mov r1, r7
    bl func_0208454c
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02061a20:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02061498::func_02061a2c()
{
    ldr r3, [r0, #4]
    ldr r2, [r1]
    ldr r0, [r3, #0xdc]
    sub r0, r0, #0x20000
    cmp r2, r0
    strlt r0, [r1]
    blt @L_02061a58
    ldr r0, [r3, #0xe4]
    add r0, r0, #0x20000
    cmp r2, r0
    strgt r0, [r1]
@L_02061a58:
    ldr r0, [r3, #0xe0]
    ldr r2, [r1, #4]
    sub r0, r0, #0x3a000
    cmp r2, r0
    strlt r0, [r1, #4]
    bxlt lr
    ldr r0, [r3, #0xe8]
    add r0, r0, #0x3a000
    cmp r2, r0
    strgt r0, [r1, #4]
    bx lr
}

asm void UnkClass_02061498::func_02061a84()
{
    ldr r2, [r0, #8]
    ldr r0, [r1, #0x38]
    smull r1, r0, r2, r0
    adds r2, r1, #0x800
    adc r1, r0, #0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #20
    bx lr
}

asm void UnkClass_02061498::func_02061aa4()
{
    ldr r2, [r1, #0x44]
    ldr r0, [r0, #8]
    add r0, r2, r0
    str r0, [r1, #0x44]
    bx lr
}

asm void UnkClass_02061498::func_02061ab8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r1
    ldr r6, [r7, #0x44]
    ldr r4, [r7, #0x3c]
    smull r5, r1, r6, r6
    smull r8, r6, r4, r6
    adds r4, r8, #0x800
    adc r12, r6, #0
    adds r5, r5, #0x800
    adc r1, r1, #0
    mov r6, r5, lsr #0xc
    orr r6, r6, r1, lsl #20
    ldr r5, =0x4e66
    mov r8, r0
    umull r1, r0, r6, r5
    mov r6, r6, asr #0x1f
    adds r1, r1, #0x800
    mla r0, r6, r5, r0
    mov lr, r4, lsr #0xc
    ldr r4, =data_020f98a0
    mov r6, r2
    mov r5, r3
    ldr r4, [r4, #0x7ec]
    orr lr, lr, r12, lsl #20
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r0, lr, r1
    ldr r1, [r7, #0x40]
    ldr r9, [r7, #0x30]
    add r0, r1, r0
    str r0, [r7, #0x30]
    ldr r1, [r8, #4]
    mov r0, r6
    add r2, r1, #0xec
    mov r1, r5
    bl func_02084808
    cmp r0, #0
    bne @L_02061b70
    ldr r2, [r8, #4]
    mov r0, r6
    mov r1, r5
    add r2, r2, #0xfc
    bl func_02084808
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02061b70:
    cmp r9, r4
    bgt @L_02061b88
    ldr r0, [r7, #0x30]
    cmp r0, r4
    subgt r0, r4, #1
    strgt r0, [r7, #0x30]
@L_02061b88:
    cmp r9, r4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r7, #0x30]
    cmp r0, r4
    addlt r0, r4, #1
    strlt r0, [r7, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02061498::func_02061bac()
{
    ldrh r2, [r1, #0x54]
    ldr r0, [r1, #0x38]
    add r0, r2, r0, asr #5
    strh r0, [r1, #0x54]
    bx lr
}

asm void UnkClass_02061498::func_02061bc0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    ldr r0, [r7, #0x30]
    mov r6, r2
    mov r5, r3
    mov r4, #0
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r7, #0x58]
    cmp r0, #0
    beq @L_02061bf8
    ldr r0, [r7, #0x3c]
    cmp r0, #0x5000
    blt @L_02061c1c
@L_02061bf8:
    ldrb r0, [sp, #0x1c]
    cmp r0, #0
    ldrneb r0, [r7, #0x58]
    cmpne r0, #2
    ldrne r0, [sp, #0x18]
    cmpne r0, #5
    beq @L_02061c1c
    mov r0, #1
    bl func_ov015_02131704
@L_02061c1c:
    ldrb r0, [sp, #0x1c]
    cmp r0, #0
    ldrneb r0, [r7, #0x58]
    cmpne r0, #2
    beq @L_02061c3c
    ldr r0, =data_020c4648
    ldr r0, [r0]
    bl func_ov015_0213a818
@L_02061c3c:
    ldrb r0, [r7, #0x58]
    str r6, [r7, #0x20]
    str r5, [r7, #0x24]
    cmp r0, #2
    beq @L_02061cf8
    ldr r1, [r7, #0x38]
    ldr r0, =0xccd
    umull r3, r2, r1, r0
    mla r2, r1, r4, r2
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x800
    ldr r1, [r7, #0x40]
    adc r2, r2, r4
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    cmp r1, #0
    mov r1, #0x800
    str r3, [r7, #0x38]
    ldrle r1, [r7, #0x3c]
    ble @L_02061cc0
    ldr r2, [r7, #0x44]
    add r0, r0, #0x9000
    umull r5, r3, r2, r0
    mla r3, r2, r4, r3
    mov r2, r2, asr #0x1f
    mla r3, r2, r0, r3
    adds r5, r5, r1
    adc r1, r3, r4
    mov r2, r5, lsr #0xc
    ldr r0, [r7, #0x3c]
    orr r2, r2, r1, lsl #20
    sub r1, r2, r0
@L_02061cc0:
    ldr r0, =0xb33
    umull r3, r2, r1, r0
    mla r2, r1, r4, r2
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x800
    adc r1, r2, r4
    mov r0, r3, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldr r1, [r7, #0x38]
    str r0, [r7, #0x3c]
    bl func_0200226c
    strh r0, [r7, #0x50]
    b @L_02061d10
@L_02061cf8:
    ldr r0, [r7, #0x38]
    cmp r0, #0
    ble @L_02061d10
    subs r0, r0, #0x800
    str r0, [r7, #0x38]
    strmi r4, [r7, #0x38]
@L_02061d10:
    ldrb r0, [r7, #0x58]
    cmp r0, #0
    ldrne r0, [r7, #0x3c]
    ldrne r5, =0xccd
    cmpne r0, r5
    mov r0, r7
    bge @L_02061da0
    mov r1, #2
    str r4, [r7, #0x3c]
    bl func_ov015_02142ec8
    ldr r0, [r7, #0x38]
    cmp r0, r5
    bge @L_02061da8
    ldr r5, [r7]
    mov r6, #0x80000000
    ldr r3, [r7, #4]
    ldr r2, [r7, #8]
    mov r0, r7
    mov r1, #1
    str r6, [r7, #0x18]
    str r6, [r7, #0x1c]
    str r5, [r7, #0xc]
    str r3, [r7, #0x10]
    str r2, [r7, #0x14]
    bl func_ov015_02142de8
    mov r0, r7
    mov r1, r4
    bl func_ov015_02142e24
    str r4, [r7, #0x34]
    str r4, [r7, #0x38]
    str r4, [r7, #0x3c]
    str r4, [r7, #0x30]
    str r4, [r7, #0x40]
    strb r4, [r7, #0x5a]
    strb r4, [r7, #0x56]
    b @L_02061da8
@L_02061da0:
    mov r1, #1
    bl func_ov015_02142ec8
@L_02061da8:
    str r4, [r7, #0x44]
    str r4, [r7, #0x40]
    str r4, [r7, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02061498::func_02061dc4()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrh r12, [r1, #0x52]
    ldmib r1, {r4, lr}
    ldr r5, [r1]
    mov r12, r12, asr #8
    str r5, [r1, #0xc]
    str r4, [r1, #0x10]
    str lr, [r1, #0x14]
    strb r12, [r1, #0x5b]
    ldr r0, [sp, #0x10]
    stmia r1, {r2, r3}
    str r0, [r1, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02061498::func_02061df8()
{
    ldr r2, =data_020aeb28
    mov r1, #0
    str r2, [r0]
    str r1, [r0, #4]
    str r1, [r0, #8]
    str r1, [r0, #0xc]
    str r1, [r0, #0x10]
    str r1, [r0, #0x14]
    str r1, [r0, #0x18]
    bx lr
}

asm void UnkClass_02061498::func_02061e24()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #4]
    cmp r1, #0
    beq @L_02061e48
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #4]
@L_02061e48:
    mov r0, #0
    str r0, [r4, #8]
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_02061e68()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r1
    mov r6, r2
    mul r1, r7, r6
    mov r8, r0
    ldr r0, [r8, #0x10]
    mov r5, r1, lsl #2
    cmp r0, r1, lsl #2
    bge @L_02061ecc
    ldr r1, [r8, #4]
    cmp r1, #0
    beq @L_02061ea0
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02061ea0:
    mov r4, #0
    ldr r0, =data_020c47b4
    mov r1, r5
    mov r2, r4
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r8, #4]
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    str r5, [r8, #0x10]
@L_02061ecc:
    str r7, [r8, #8]
    str r6, [r8, #0xc]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02061498::func_02061ee0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    ldr r0, [r10, #0xc]
    mov r7, #0
    mov r9, r1
    str r2, [sp]
    mov r11, r7
    cmp r0, #0
    ldr r8, [r10, #4]
    ble @L_02061f8c
@L_02061f08:
    ldr r2, [r10, #8]
    mov r6, #0
    mov r5, r6
    cmp r2, #0
    ble @L_02061f74
    smull r1, r0, r7, r7
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r4, r1, lsr #0xc
    cmp r2, #0
    orr r4, r4, r0, lsl #20
    ble @L_02061f74
@L_02061f38:
    smull r1, r0, r6, r6
    adds r1, r1, #0x800
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    mov r0, r1, asr #4
    add r0, r0, r4, asr #4
    bl func_02001d80
    mov r0, r0, lsl #2
    str r0, [r8], #4
    ldr r0, [r10, #8]
    add r5, r5, #1
    cmp r5, r0
    add r6, r6, r9
    blt @L_02061f38
@L_02061f74:
    ldr r0, [r10, #0xc]
    add r11, r11, #1
    cmp r11, r0
    ldr r0, [sp]
    add r7, r7, r0
    blt @L_02061f08
@L_02061f8c:
    ldr r0, [sp]
    str r9, [r10, #0x14]
    str r0, [r10, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02061498::func_02061f9c()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020aeb28
    mov r4, r0
    str r1, [r4]
    bl func_02061e24
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_02061fc4()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020aeb28
    mov r4, r0
    str r1, [r4]
    bl func_02061e24
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_02061fe4()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02061df8
    ldr r1, =data_020aeb50
    mov r0, r4
    str r1, [r4]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_02062004()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020aeb28
    mov r4, r0
    str r1, [r4]
    bl func_02061e24
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_02062024()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020aeb28
    mov r4, r0
    str r1, [r4]
    bl func_02061e24
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02061498::func_0206204c()
{
    mov r1, #0x20
    ldr r12, =func_02061e68
    mov r2, r1
    bx r12
}

asm void UnkClass_02061498::func_02062060()
{
    mov r1, #0x1000
    ldr r12, =func_02061ee0
    mov r2, r1
    bx r12
}

asm void UnkClass_02061498::func_02062074()
{
    ldr r3, [r0, #4]
    add r0, r1, r2, lsl #5
    ldr r0, [r3, r0, lsl #2]
    bx lr
}

asm void UnkClass_02061498::func_02062084()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, r2
    mov r1, r6, asr #0xc
    orr r3, r1, r5, asr #12
    mov r2, r5, asr #0xc
    bics r3, r3, #0x1f
    mov r4, #0
    beq @L_020620c0
@L_020620a8:
    mov r1, r1, asr #1
    mov r2, r2, asr #1
    orr r3, r1, r2
    add r4, r4, #1
    bics r3, r3, #0x1f
    bne @L_020620a8
@L_020620c0:
    bl func_02062074
    cmp r6, r5, lsl #1
    mov r2, #1
    ble @L_020620e8
    add r1, r4, #0xc
    mov r1, r2, lsl r1
    sub r1, r1, #1
    and r1, r6, r1
    add r0, r1, r0, lsl r4
    ldmia sp!, {r4, r5, r6, pc}
@L_020620e8:
    add r1, r4, #0xc
    mov r1, r2, lsl r1
    cmp r5, r6, lsl #1
    subgt r1, r1, #1
    andgt r1, r5, r1
    addgt r0, r1, r0, lsl r4
    ldmgtia sp!, {r4, r5, r6, pc}
    sub r3, r1, #1
    and r2, r6, r3
    and r1, r5, r3
    add r1, r2, r1
    mov r2, r1, asr #1
    orr r1, r6, r5
    add r2, r2, r0, lsl r4
    and r0, r3, r1
    add r0, r2, r0, asr #2
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02061498::func_0206212c()
{
    ldr r12, =func_02062084
    cmp r2, #0
    rsblt r2, r2, #0
    cmp r1, #0
    rsblt r1, r1, #0
    bx r12
}

asm void UnkClass_02061498::func_02062148()
{
    stmdb sp!, {r3, lr}
    ldr r12, [r1, #4]
    ldr r3, [r2, #4]
    subs r12, r12, r3
    ldr r3, [r1]
    ldr r1, [r2]
    rsbmi r12, r12, #0
    subs r1, r3, r1
    rsbmi r1, r1, #0
    mov r2, r12
    bl func_02062084
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02061498::func_02062178()
{
    ldr r12, =func_02062184
    bx r12
}

asm void UnkClass_02061498::func_02062184()
{
    bx lr
}

asm void UnkClass_02061498::func_02062188()
{
    ldr r1, [r1, #0xe8]
    ldr r2, =data_020c4920
    ldr r12, =func_02062148
    bx r12
}

asm void UnkClass_02061498::func_020621a0()
{
    ldr r1, [r1, #0xe8]
    ldr r2, [r2, #0xe8]
    ldr r12, =func_02062148
    bx r12
}
