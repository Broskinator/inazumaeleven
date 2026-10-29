#include "ov068/Unk_ov068_0216ffa0.hpp"

extern "C" void func_ov068_0216ffa0(void);
extern "C" void func_ov068_02170108(void);
extern "C" void func_ov068_021701b4(void);
extern "C" void func_ov068_021702d8(void);
extern "C" void func_ov068_021703bc(void);
extern "C" void func_ov068_0217049c(void);
extern "C" void func_ov068_02170610(void);
extern "C" void func_ov068_02170650(void);
extern "C" void func_ov068_021706e8(void);
extern "C" void func_ov068_02170780(void);
extern "C" void func_ov068_02170820(void);
extern "C" void func_ov068_021708ac(void);
extern "C" void func_ov068_02170908(void);
extern "C" void func_ov068_02170968(void);
extern "C" void func_ov068_021709b0(void);
extern "C" void func_ov068_02170a00(void);
extern "C" void func_ov068_02170a50(void);
extern "C" void func_ov068_02170ab8(void);
extern "C" void func_ov068_02170b1c(void);
extern "C" void func_ov068_02170db8(void);
extern "C" void func_ov068_02170e0c(void);
extern "C" void func_ov068_02170e44(void);
extern "C" void func_ov068_02170ea4(void);
extern "C" void func_ov068_021712ac(void);
extern "C" void func_ov068_021712c0(void);
extern "C" void func_ov068_02171338(void);
extern "C" void func_ov068_0217136c(void);
extern "C" void func_ov068_02171454(void);
extern "C" void func_ov068_021714e8(void);
extern "C" void func_ov068_02171628(void);
extern "C" void func_ov068_0217166c(void);
extern "C" void func_ov068_02171708(void);
extern "C" void func_ov068_0217171c(void);

extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov068_02171720[];
extern "C" char data_ov068_02171728[];
extern "C" char data_ov068_02171740[];
extern "C" char data_ov068_021718cc[];
extern "C" char data_ov068_021718e4[];
extern "C" char data_ov068_021718fc[];
extern "C" char data_ov068_02171914[];
extern "C" char data_ov068_0217192c[];
extern "C" char data_ov068_02171944[];
extern "C" char data_ov068_0217195c[];
extern "C" char data_ov068_02171974[];
extern "C" char data_ov068_0217198c[];
extern "C" char data_ov068_021719a4[];
extern "C" char data_ov068_021719c8[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN11FileManager6CancelEPvi(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003608(void);
extern "C" void func_02003a68(void);
extern "C" void func_02003b48(void);
extern "C" void func_0200919c(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021322d8(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132614(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_021330b4(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_02134024(void);
extern "C" void func_ov015_021340c0(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_0213447c(void);
extern "C" void func_ov015_02134504(void);
extern "C" void func_ov015_02134554(void);
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02135e10(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b870(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" asm void func_ov068_0216ffa0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r2, =data_ov068_02171720
    mov r5, r0
    ldrh r4, [r2]
    ldrh r3, [r2, #2]
    ldrh r0, [r2, #4]
    strh r4, [sp]
    strh r3, [sp, #2]
    strh r0, [sp, #4]
    cmp r1, #0
    add r3, sp, #0
    mov r4, #1
    addeq sp, sp, #8
    mov r2, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #8]
    cmp r0, #0
    cmpne r0, #1
    cmpne r0, #2
    beq @L_02170004
    sub r0, r0, #4
    cmp r0, #1
    bhi @L_02170018
@L_02170004:
    add sp, sp, #8
    str r4, [r5, #0x108]
    str r1, [r5, #0x10c]
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02170018:
    ldr r0, [r5, #0x14]
    cmp r0, #0
    beq @L_02170030
    ldr r0, [r5, #0x18]
    cmp r0, #0
    bne @L_0217009c
@L_02170030:
    str r4, [r5, #0x14]
    str r1, [r5, #0x18]
    ldrsb r3, [r1]
    add r0, sp, #0
    sub r3, r3, #1
    mov r3, r3, lsl #1
    ldrh r0, [r0, r3]
    strh r0, [r5, #0x1c]
    ldrb r0, [r1, #0x354]
    tst r0, #2
    movne r0, #5
    moveq r0, #0
    strh r0, [r5, #0x1e]
    strb r2, [r5, #0x20]
    ldrsb r2, [r1, #1]
    add r0, r1, #0x200
    mov r1, #7
    strb r2, [r5, #0x21]
    ldrsb r2, [r0, #0x4a]
    mov r0, #4
    strb r2, [r5, #0x22]
    str r1, [r5, #8]
    bl func_ov015_02132614
    mov r0, #1
    add sp, sp, #8
    strb r0, [r5, #0x10]
    ldmia sp!, {r3, r4, r5, pc}
@L_0217009c:
    str r4, [r5, #0x14]
    str r1, [r5, #0x18]
    ldrsb r0, [r1]
    sub r0, r0, #1
    mov r0, r0, lsl #1
    ldrh r0, [r3, r0]
    strh r0, [r5, #0x1c]
    ldrb r0, [r1, #0x354]
    tst r0, #2
    movne r0, #5
    moveq r0, r2
    strh r0, [r5, #0x1e]
    strb r2, [r5, #0x20]
    ldrsb r2, [r1, #1]
    add r1, r1, #0x200
    mov r0, r5
    strb r2, [r5, #0x21]
    ldrsb r1, [r1, #0x4a]
    strb r1, [r5, #0x22]
    bl func_ov068_02171338
    mov r0, r5
    mov r1, r4
    bl func_ov068_0217136c
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_02170108(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_02170140
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_02170140:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_02170164
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_02170164:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_0217019c
@L_02170184:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_02170184
@L_0217019c:
    ldr r1, [r4, #4]
    mov r2, r5, lsl #5
    mov r0, #0
    bl func_0200919c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_021701b4(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r12, [r4, #0x60]
    cmp r12, #0
    beq @L_02170218
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r3, #0
    str r3, [sp, #8]
    mov r0, #0x11
    str r0, [sp, #0xc]
    mov r0, #0x20
    str r0, [sp, #0x10]
    mov r0, #7
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r2, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r2
    mov r2, r1
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170218:
    ldr r12, [r4, #0x6c]
    cmp r12, #0
    beq @L_0217026c
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r3, #0
    str r3, [sp, #8]
    str r1, [sp, #0xc]
    mov r0, #0x14
    str r0, [sp, #0x10]
    mov r0, #0xf
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr r2, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r2
    mov r2, r1
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0217026c:
    ldr r4, [r4, #0x78]
    cmp r4, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #0x16
    str r0, [sp, #8]
    mov r0, #6
    str r0, [sp, #0xc]
    mov r0, #0xa
    str r0, [sp, #0x10]
    mov r0, #0x12
    mov r2, #0
    str r0, [sp, #0x14]
    mov r0, #2
    str r0, [sp, #0x18]
    ldr r3, [r4, #0xc]
    ldr r0, =data_020c9660
    add r4, r4, r3
    mov r3, r2
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_021702d8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r6, r0
    ldr r3, [r6, #0x90]
    mov r5, r1
    mov r4, r2
    cmp r3, #0
    beq @L_0217034c
    mov r1, #1
    str r1, [sp]
    mov r0, r5, lsl #0x18
    mov r2, r4, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #8
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #7
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0217034c:
    ldr r6, [r6, #0x84]
    cmp r6, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #1
    str r1, [sp]
    mov r0, r5, lsl #0x18
    mov r2, r4, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #8
    str r0, [sp, #0x10]
    mov r2, #0
    str r0, [sp, #0x14]
    mov r0, #6
    str r0, [sp, #0x18]
    ldr r3, [r6, #0xc]
    ldr r0, =data_020c9660
    add r4, r6, r3
    mov r3, r2
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov068_021703bc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r6, r0
    ldr r3, [r6, #0xb4]
    mov r5, r1
    mov r4, r2
    cmp r3, #0
    beq @L_02170430
    mov r1, #1
    str r1, [sp]
    mov r0, r5, lsl #0x18
    mov r2, r4, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #8
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #9
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170430:
    ldr r3, [r6, #0xa8]
    cmp r3, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #1
    str r1, [sp]
    mov r0, r5, lsl #0x18
    mov r2, r4, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #8
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, [r3, #0xc]
    mov r2, #0
    add r4, r3, r0
    ldr r0, =data_020c9660
    mov r3, r2
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov068_0217049c(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr lr, [r4, #0x30]
    cmp lr, #0
    beq @L_02170500
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #8
    str r0, [sp, #8]
    mov r0, #3
    str r0, [sp, #0xc]
    ldrh r2, [r4, #0x38]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r12, [r4, #0x3a]
    mov r2, r1
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170500:
    ldrb r0, [r4, #0x20]
    cmp r0, #0
    ldrne r12, [r4, #0xcc]
    cmpne r12, #0
    beq @L_02170554
    mov r1, #1
    str r1, [sp]
    mov r2, #0
    stmib sp, {r1, r2}
    str r2, [sp, #0xc]
    mov r0, #4
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    mov r0, #0xa
    str r0, [sp, #0x18]
    ldr r3, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r3
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170554:
    ldr lr, [r4, #0x24]
    cmp lr, #0
    beq @L_021705a8
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #4
    mov r2, #0
    str r0, [sp, #8]
    str r2, [sp, #0xc]
    ldrh r12, [r4, #0x2c]
    ldr r0, =data_020c9660
    mov r3, r2
    and r12, r12, #0xff
    str r12, [sp, #0x10]
    ldrh r12, [r4, #0x2e]
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r2, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021705a8:
    ldrh r0, [r4, #0x1e]
    cmp r0, #0
    ldrne lr, [r4, #0x3c]
    cmpne lr, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r1, #1
    mov r2, #0
    str r1, [sp]
    stmib sp, {r1, r2}
    mov r0, #0x12
    str r0, [sp, #0xc]
    ldrh r12, [r4, #0x44]
    ldr r0, =data_020c9660
    mov r3, r2
    and r12, r12, #0xff
    str r12, [sp, #0x10]
    ldrh r4, [r4, #0x46]
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170610(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrh r1, [r4, #0x1c]
    cmp r1, #0
    beq @L_02170630
    mov r1, #0
    mov r2, #9
    bl func_ov068_021702d8
@L_02170630:
    ldrh r0, [r4, #0x1e]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    mov r1, #0x18
    mov r2, #0x10
    bl func_ov068_021703bc
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170650(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r4, r0
    mov r5, #3
    mov r3, r5
    add r1, r4, #0x24
    mov r2, #0x18
    bl func_ov068_02170108
    ldr r1, [r4, #0x28]
    cmp r1, #0
    ldrne r12, [r4, #0x18]
    cmpne r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, pc}
    str r5, [sp]
    str r5, [sp, #4]
    mov r2, #1
    str r2, [sp, #8]
    mov r0, #0
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    str r2, [sp, #0x18]
    str r2, [sp, #0x1c]
    ldrh r2, [r4, #0x2c]
    ldrh r3, [r4, #0x2e]
    add r0, r12, #2
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    ldrh r2, [r4, #0x2c]
    ldrh r1, [r4, #0x2e]
    ldr r0, [r4, #0x28]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_021706e8(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    add r1, r4, #0x30
    mov r2, #0x18
    mov r3, #0xe
    bl func_ov068_02170108
    ldr r1, [r4, #0x34]
    cmp r1, #0
    ldrne r12, [r4, #0x18]
    cmpne r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r3, #1
    str r3, [sp]
    str r3, [sp, #4]
    str r3, [sp, #8]
    str r3, [sp, #0xc]
    mov r2, #0
    str r2, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldrh r2, [r4, #0x38]
    ldrh r3, [r4, #0x3a]
    add r0, r12, #0x44
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    ldrh r2, [r4, #0x38]
    ldrh r1, [r4, #0x3a]
    ldr r0, [r4, #0x34]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170780(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    add r1, r4, #0x3c
    mov r2, #0x19
    mov r3, #7
    bl func_ov068_02170108
    ldr r1, [r4, #0x40]
    cmp r1, #0
    ldrne r12, [r4, #0x18]
    cmpne r12, #0
    ldrneh r0, [r4, #0x1e]
    cmpne r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r2, #1
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    str r2, [sp, #0xc]
    mov r0, #4
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    mov r0, #0
    str r0, [sp, #0x18]
    str r2, [sp, #0x1c]
    ldrh r2, [r4, #0x44]
    ldrh r3, [r4, #0x46]
    add r0, r12, #0x24c
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    ldrh r2, [r4, #0x44]
    ldrh r1, [r4, #0x46]
    ldr r0, [r4, #0x40]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170820(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x10]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, #0
    strb r0, [r4, #0x10]
    cmp r1, #1
    beq @L_02170850
    cmp r1, #2
    beq @L_02170880
    ldmia sp!, {r4, pc}
@L_02170850:
    ldr r0, [r4, #0x14]
    cmp r0, #1
    beq @L_02170864
    cmp r0, #2
    ldmneia sp!, {r4, pc}
@L_02170864:
    mov r0, r4
    bl func_ov068_02170650
    mov r0, r4
    bl func_ov068_021706e8
    mov r0, r4
    bl func_ov068_02170780
    ldmia sp!, {r4, pc}
@L_02170880:
    ldr r0, [r4, #0x14]
    cmp r0, #1
    cmpne r0, #2
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov068_02170650
    mov r0, r4
    bl func_ov068_021706e8
    mov r0, r4
    bl func_ov068_02170780
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_021708ac(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #1
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0
    bl func_ov015_0213b870
    ldr r0, [r4, #0x14]
    cmp r0, #0
    beq @L_021708e4
    cmp r0, #1
    cmpne r0, #2
    beq @L_021708f0
    ldmia sp!, {r4, pc}
@L_021708e4:
    mov r0, r4
    bl func_ov068_021701b4
    ldmia sp!, {r4, pc}
@L_021708f0:
    mov r0, r4
    bl func_ov068_02170610
    mov r0, r4
    bl func_ov068_0217049c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170908(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r12, #0xc
    mla r0, r1, r12, r0
    ldr r4, [r0, #0x48]
    mov r6, r2
    cmp r4, #0
    mov r5, r3
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r4, #0xc]
    ldr r1, [r4, #0x10]
    add r0, r4, r0
    add r2, r6, #1
    bl func_ov015_02132984
    ldrb r1, [sp, #0x10]
    mov r6, r0
    cmp r1, #0
    beq @L_02170960
    mov r0, r4
    mov r2, r5
    mov r1, #1
    bl func_ov015_021322b0
@L_02170960:
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov068_02170968(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0xc
    mul r3, r1, r3
    add r1, r0, #0x24
    ldr r0, [r1, r3]
    add r1, r1, r3
    cmp r0, #0
    beq @L_021709a8
    ldrh r12, [r1, #8]
    ldrh r1, [r1, #0xa]
    add r2, r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r2, r0
@L_021709a8:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov068_021709b0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x24
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_021709f8
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0xa]
    mov r1, r4
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl func_02003a68
    ldrh r1, [r5, #8]
    ldrh r0, [r5, #0xa]
    mul r0, r1, r0
    add r4, r4, r0, lsl #5
@L_021709f8:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_02170a00(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x24
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02170a48
    ldrh r3, [r5, #8]
    ldrh r2, [r5, #0xa]
    mov r1, r4
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl func_02003b48
    ldrh r1, [r5, #8]
    ldrh r0, [r5, #0xa]
    mul r0, r1, r0
    add r4, r4, r0, lsl #5
@L_02170a48:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_02170a50(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0xc
    mul r7, r1, r4
    add r6, r0, #0x48
    ldr r8, [r6, r7]
    ldr r9, [sp, #0x20]
    mov r4, r2
    mov r5, r3
    cmp r8, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r5]
    mov r0, r8
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r5]
    mov r5, #1
    ldr r1, [r6, r7]
    ldr r2, [r9]
    mov r0, r5
    bl func_ov015_02132b7c
    str r0, [r9]
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov068_02170ab8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0x48
    ldr r6, [r4, r5]
    ldr r7, [sp, #0x20]
    mov r9, r2
    mov r8, r3
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8]
    mov r0, r6
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r8]
    ldr r1, [r4, r5]
    ldr r2, [r7]
    mov r0, #2
    bl func_ov015_02132b7c
    str r0, [r7]
    mov r0, r6
    mov r2, r9
    mov r1, #1
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov068_02170b1c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r6, #0
    mov r3, #1
    mov r4, r0
    mov r1, r6
    str r3, [sp]
    sub r2, r6, #1
    mov r5, r3
    bl func_ov068_02170908
    ldr r1, [r4, #0x48]
    mov r0, r6
    mov r2, r6
    bl func_ov015_02132b7c
    ldr r3, [r4, #0x48]
    cmp r3, #0
    beq @L_02170b74
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r6
    add r0, r3, r0
    bl func_02003608
@L_02170b74:
    bl G2S_GetBG1CharPtr
    mov r6, #0x20
    mov r7, #0
    mov r1, r0
    mov r0, r7
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r7, [sp, #0x10]
    str r6, [sp, #8]
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r7
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r7, [sp, #0xc]
    str r6, [sp, #4]
    ldr r0, [r4, #0x14]
    cmp r0, #0
    beq @L_02170be8
    cmp r0, #1
    cmpne r0, #2
    beq @L_02170c44
    b @L_02170dac
@L_02170be8:
    add r5, sp, #0x10
    mov r7, #2
    mov r6, #4
    add r8, sp, #8
    mov r0, r4
    mov r1, r7
    mov r2, r6
    mov r3, r5
    str r8, [sp]
    bl func_ov068_02170a50
    mov r1, #3
    mov r0, r4
    mov r2, r1
    mov r3, r5
    str r8, [sp]
    bl func_ov068_02170a50
    add r5, sp, #4
    add r3, sp, #0xc
    mov r0, r4
    mov r1, r6
    mov r2, r7
    str r5, [sp]
    b @L_02170da8
@L_02170c44:
    ldr r2, [sp, #0x10]
    mov r0, r4
    mov r1, r5
    bl func_ov068_02170968
    str r0, [sp, #0x10]
    ldr r2, [sp, #8]
    mov r0, r4
    mov r1, r5
    bl func_ov068_021709b0
    str r0, [sp, #8]
    ldr r0, [r4, #0x90]
    cmp r0, #0
    beq @L_02170ca0
    ldr r1, [sp, #0x10]
    mov r2, #7
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [sp, #0x10]
    ldr r1, [r4, #0x90]
    ldr r2, [sp, #8]
    mov r0, r5
    bl func_ov015_02132b7c
    str r0, [sp, #8]
@L_02170ca0:
    ldr r0, [r4, #0x9c]
    cmp r0, #0
    beq @L_02170cb8
    mov r1, #1
    mov r2, #7
    bl func_ov015_021322d8
@L_02170cb8:
    ldr r0, [r4, #0xb4]
    cmp r0, #0
    beq @L_02170cec
    ldr r1, [sp, #0x10]
    mov r2, #9
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [sp, #0x10]
    ldr r1, [r4, #0xb4]
    ldr r2, [sp, #8]
    mov r0, #1
    bl func_ov015_02132b7c
    str r0, [sp, #8]
@L_02170cec:
    ldr r0, [r4, #0xc0]
    cmp r0, #0
    beq @L_02170d04
    mov r1, #1
    mov r2, #9
    bl func_ov015_021322d8
@L_02170d04:
    mov r5, #0
    ldr r2, [sp, #0xc]
    mov r0, r4
    mov r1, r5
    bl func_ov068_02170968
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r0, r4
    mov r1, r5
    bl func_ov068_02170a00
    mov r5, #2
    str r0, [sp, #4]
    ldr r2, [sp, #0xc]
    mov r0, r4
    mov r1, r5
    bl func_ov068_02170968
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r1, r5
    mov r0, r4
    bl func_ov068_02170a00
    add r5, sp, #0xc
    str r0, [sp, #4]
    add r6, sp, #4
    mov r0, r4
    mov r1, #0xb
    mov r2, #0xa
    mov r3, r5
    str r6, [sp]
    bl func_ov068_02170ab8
    mov r0, r4
    mov r1, #5
    mov r2, #6
    mov r3, r5
    str r6, [sp]
    bl func_ov068_02170ab8
    mov r1, #8
    str r6, [sp]
    mov r0, r4
    mov r3, r5
    mov r2, r1
@L_02170da8:
    bl func_ov068_02170ab8
@L_02170dac:
    bl func_ov015_02132240
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov068_02170db8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0xd8
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r0, =data_ov068_021718cc
    add r1, r4, #0xd8
    bl func_ov015_02133f94
    ldr r0, =data_ov068_021718e4
    add r1, r4, #0xe4
    bl func_ov015_02133f94
    ldr r0, =data_ov068_021718fc
    add r1, r4, #0xf0
    bl func_ov015_02133f94
    mov r0, #1
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02170e0c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r0, r4, #0xd8
    mov r1, #4
    bl func_ov015_02134198
    add r5, r4, #0xd8
    mov r6, #0
    mov r4, #0xc
@L_02170e2c:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #4
    blt @L_02170e2c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov068_02170e44(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x54]
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r0, #0x14]
    ldr r7, =data_ov068_02171740
    cmp r1, #0
    ldrne r7, =data_ov068_02171728
    ldr r1, [r7]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x48
    mov r4, #0xc
@L_02170e78:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02170e78
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov068_02170ea4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x16c
    mov r5, r0
    ldrh r1, [r5, #0x1c]
    add r4, sp, #8
    cmp r1, #0
    beq @L_02171098
    add r6, sp, #0x10c
    ldr r0, =data_020e88a0
    mov r2, r6
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    add r3, sp, #0x10
    mov r2, #0x10
@L_02170ed8:
    ldrb r0, [r6, #1]
    ldrb r1, [r6], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02170ed8
    add r6, sp, #0x12c
    add r3, sp, #0x30
    mov r2, #0x10
@L_02170efc:
    ldrb r0, [r6, #1]
    ldrb r1, [r6], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02170efc
    add r0, sp, #0x108
    ldrb r2, [sp, #0x14c]
    ldrh r11, [r0, #0x46]
    ldrh r10, [r0, #0x48]
    ldrh r9, [r0, #0x4a]
    ldrh r8, [r0, #0x4c]
    ldrh r7, [r0, #0x4e]
    ldrh r6, [r0, #0x50]
    ldrh r3, [r0, #0x52]
    ldrb r1, [sp, #0x14d]
    strb r2, [sp, #0x50]
    ldrh r2, [r0, #0x54]
    strb r1, [sp, #0x51]
    strh r11, [sp, #0x52]
    strh r10, [sp, #0x54]
    strh r9, [sp, #0x56]
    strh r8, [sp, #0x58]
    ldrh r8, [r0, #0x5a]
    ldrb r1, [sp, #0x15e]
    ldrb r11, [sp, #0x15f]
    strh r7, [sp, #0x5a]
    ldrh r7, [r0, #0x5c]
    ldrb r10, [sp, #0x160]
    ldrb r9, [sp, #0x161]
    strh r6, [sp, #0x5c]
    strh r3, [sp, #0x5e]
    strh r2, [sp, #0x60]
    strb r1, [sp, #0x62]
    strb r11, [sp, #0x63]
    ldrh r0, [r0, #0x62]
    ldrb r6, [sp, #0x166]
    ldrb r3, [sp, #0x167]
    ldrb r2, [sp, #0x168]
    ldrb r1, [sp, #0x169]
    strb r10, [sp, #0x64]
    strb r9, [sp, #0x65]
    strh r8, [sp, #0x66]
    strh r7, [sp, #0x68]
    strb r6, [sp, #0x6a]
    strb r3, [sp, #0x6b]
    strb r2, [sp, #0x6c]
    strb r1, [sp, #0x6d]
    strh r0, [sp, #0x6e]
    ldr r0, [r5, #0xd8]
    cmp r0, #0
    beq @L_02171004
    str r4, [sp]
    ldrb r2, [r5, #0x21]
    add r1, sp, #0x10
    add r3, sp, #0xc
    bl func_ov015_0213447c
    cmp r0, #0
    beq @L_02171004
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_02171914
    add r1, r5, #0x84
    bl func_ov015_02134024
@L_02171004:
    ldr r0, [r5, #0xe4]
    cmp r0, #0
    beq @L_02171050
    add r1, sp, #0xc
    stmia sp, {r1, r4}
    add r1, sp, #0x108
    ldrh r2, [r1, #0x54]
    add r1, sp, #0x10
    mov r3, #0
    bl func_ov015_02134504
    cmp r0, #0
    beq @L_02171050
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_0217192c
    add r1, r5, #0x90
    bl func_ov015_02134024
@L_02171050:
    ldr r0, [r5, #0xf0]
    cmp r0, #0
    beq @L_02171098
    str r4, [sp]
    add r1, sp, #0x108
    mov r6, #0
    ldrh r1, [r1, #0x54]
    add r3, sp, #0xc
    mov r2, r6
    bl func_ov015_02134554
    cmp r0, #0
    beq @L_02171098
    str r6, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_02171944
    add r1, r5, #0x9c
    bl func_ov015_02134024
@L_02171098:
    ldrh r1, [r5, #0x1e]
    cmp r1, #0
    addeq sp, sp, #0x16c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r6, sp, #0x10c
    ldr r0, =data_020e88a0
    mov r2, r6
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    add r3, sp, #0x10
    mov r2, #0x10
@L_021710c0:
    ldrb r0, [r6, #1]
    ldrb r1, [r6], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021710c0
    add r6, sp, #0x12c
    add r3, sp, #0x30
    mov r2, #0x10
@L_021710e4:
    ldrb r0, [r6, #1]
    ldrb r1, [r6], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021710e4
    add r11, sp, #0x108
    ldrb r8, [sp, #0x14c]
    ldrb r7, [sp, #0x14d]
    ldrh r6, [r11, #0x46]
    ldrh lr, [r11, #0x48]
    ldrh r12, [r11, #0x4a]
    ldrh r3, [r11, #0x4c]
    ldrh r2, [r11, #0x4e]
    ldrh r1, [r11, #0x50]
    ldrh r0, [r11, #0x52]
    ldrh r10, [r11, #0x54]
    ldrb r9, [sp, #0x15e]
    strb r8, [sp, #0x50]
    strb r7, [sp, #0x51]
    strh r6, [sp, #0x52]
    strh lr, [sp, #0x54]
    ldrh lr, [r11, #0x5a]
    ldrb r8, [sp, #0x15f]
    ldrb r7, [sp, #0x160]
    strh r12, [sp, #0x56]
    ldrh r12, [r11, #0x5c]
    ldrb r6, [sp, #0x161]
    strh r3, [sp, #0x58]
    strh r2, [sp, #0x5a]
    strh r1, [sp, #0x5c]
    strh r0, [sp, #0x5e]
    strh r10, [sp, #0x60]
    ldrh r10, [r11, #0x62]
    ldrb r3, [sp, #0x166]
    ldrb r2, [sp, #0x167]
    ldrb r1, [sp, #0x168]
    ldrb r0, [sp, #0x169]
    strb r9, [sp, #0x62]
    strb r8, [sp, #0x63]
    strb r7, [sp, #0x64]
    strb r6, [sp, #0x65]
    strh lr, [sp, #0x66]
    strh r12, [sp, #0x68]
    strb r3, [sp, #0x6a]
    strb r2, [sp, #0x6b]
    strb r1, [sp, #0x6c]
    strh r10, [sp, #0x6e]
    strb r0, [sp, #0x6d]
    ldr r0, [r5, #0xd8]
    cmp r0, #0
    beq @L_021711ec
    str r4, [sp]
    ldrb r2, [r5, #0x22]
    add r1, sp, #0x10
    add r3, sp, #0xc
    bl func_ov015_0213447c
    cmp r0, #0
    beq @L_021711ec
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_0217195c
    add r1, r5, #0xa8
    bl func_ov015_02134024
@L_021711ec:
    ldr r0, [r5, #0xe4]
    cmp r0, #0
    beq @L_02171238
    add r1, sp, #0xc
    stmia sp, {r1, r4}
    add r1, sp, #0x108
    ldrh r2, [r1, #0x54]
    add r1, sp, #0x10
    mov r3, #0
    bl func_ov015_02134504
    cmp r0, #0
    beq @L_02171238
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_02171974
    add r1, r5, #0xb4
    bl func_ov015_02134024
@L_02171238:
    ldr r0, [r5, #0xf0]
    cmp r0, #0
    addeq sp, sp, #0x16c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r4, [sp]
    add r1, sp, #0x108
    mov r4, #0
    ldrh r1, [r1, #0x54]
    add r3, sp, #0xc
    mov r2, r4
    bl func_ov015_02134554
    cmp r0, #0
    addeq sp, sp, #0x16c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r4, [sp]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_ov068_0217198c
    add r1, r5, #0xc0
    bl func_ov015_02134024
    add sp, sp, #0x16c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov068_021712ac(void)
{
    ldr r12, =func_ov015_02134118
    add r0, r0, #0x48
    mov r1, #0xc
    bx r12
}

extern "C" asm void func_ov068_021712c0(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0xc
    mul r2, r1, r2
    add r0, r0, #0x48
    ldr r1, [r0, r2]
    add r4, r0, r2
    cmp r1, #0
    ldrneb r0, [r4, #9]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r0, [r4, #8]
    cmp r0, #0
    beq @L_02171300
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    b @L_02171318
@L_02171300:
    ldr r0, =data_020c47b4
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02171318
    mov r2, #1
    bl _ZN11FileManager6CancelEPvi
@L_02171318:
    mov r0, #0
    str r0, [r4]
    str r0, [r4, #4]
    strb r0, [r4, #8]
    strb r0, [r4, #9]
    strb r0, [r4, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02171338(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x48
    mov r1, #0xc
    bl func_ov015_02134198
    mov r4, #0
@L_02171350:
    mov r0, r5
    mov r1, r4
    bl func_ov068_021712c0
    add r4, r4, #1
    cmp r4, #0xc
    blt @L_02171350
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov068_0217136c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    str r1, [r4, #0xc]
    cmp r1, #1
    beq @L_0217138c
    cmp r1, #2
    beq @L_02171418
    b @L_02171438
@L_0217138c:
    mov r7, #0
    mov r1, r7
    add r0, r4, #0x48
    mov r2, #0x90
    bl MI_CpuFill8
    ldr r5, =data_020d2d20
    mov r6, #0x800
    mov r0, r7
    mov r1, r5
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    ldr r5, =data_020d2520
    mov r0, r7
    mov r1, r5
    mov r2, r6
    bl MIi_CpuClearFast
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    ldr r0, [r4, #0x14]
    cmp r0, #0
    beq @L_02171400
    cmp r0, #1
    cmpne r0, #2
    beq @L_02171408
    b @L_02171414
@L_02171400:
    ldr r0, =data_ov068_021719a4
    b @L_0217140c
@L_02171408:
    ldr r0, =data_ov068_021719c8
@L_0217140c:
    add r1, r4, #0x54
    bl func_ov015_02133f94
@L_02171414:
    b @L_02171430
@L_02171418:
    ldr r0, [r4, #0x14]
    cmp r0, #1
    cmpne r0, #2
    bne @L_02171430
    mov r0, r4
    bl func_ov068_02170ea4
@L_02171430:
    mov r0, #1
    strb r0, [r4, #0x10]
@L_02171438:
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov068_02171454(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #4]
    mov r5, #1
    ldr r2, [r0]
    mov r1, r5
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, #6
    bl func_ov015_02135440
    mov r4, #0
    mov r1, r4
    add r0, r6, #0x24
    mov r2, #0x24
    str r4, [r6, #8]
    str r4, [r6, #0x108]
    str r4, [r6, #0x10c]
    bl MI_CpuFill8
    add r0, r6, #0x48
    mov r1, r4
    mov r2, #0x90
    bl MI_CpuFill8
    strb r4, [r6, #0x10]
    str r4, [r6, #0x14]
    str r4, [r6, #0x18]
    strh r4, [r6, #0x1c]
    strh r4, [r6, #0x1e]
    strb r4, [r6, #0x21]
    strb r4, [r6, #0x22]
    strb r4, [r6, #0x20]
    mov r0, r6
    bl func_ov068_02170db8
    mov r1, r5
    ldr r0, =data_020c9660
    bl func_ov015_0213b364
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov068_021714e8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x108]
    cmp r1, #0
    movne r2, #0
    ldrne r1, [r4, #0x10c]
    strne r2, [r4, #0x108]
    cmpne r1, #0
    beq @L_02171518
    ldr r2, [r0]
    ldr r2, [r2, #0x60]
    blx r2
@L_02171518:
    ldr r0, [r4, #8]
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02171548
    b @L_02171574
    ldmia sp!, {r4, pc}
    b @L_021715cc
    ldmia sp!, {r4, pc}
    b @L_021715e4
    b @L_021715f4
@L_02171548:
    add r0, r4, #0xd8
    mov r1, #4
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov068_02171338
    mov r0, r4
    mov r1, #1
    bl func_ov068_0217136c
    ldmia sp!, {r4, pc}
@L_02171574:
    ldr r1, [r4, #0xc]
    mov r0, r4
    bl func_ov068_02170820
    mov r0, r4
    bl func_ov068_021712ac
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_021715a8
    cmp r0, #2
    beq @L_021715b8
    ldmia sp!, {r4, pc}
@L_021715a8:
    mov r0, r4
    mov r1, #2
    bl func_ov068_0217136c
    ldmia sp!, {r4, pc}
@L_021715b8:
    mov r0, r4
    bl func_ov068_02170e44
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_021715cc:
    mov r0, r4
    bl func_ov068_021708ac
    mov r0, #4
    bl func_ov015_02132568
    mov r0, #6
    str r0, [r4, #8]
@L_021715e4:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, pc}
@L_021715f4:
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov068_02171338
    mov r0, r4
    mov r1, #1
    bl func_ov068_0217136c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_02171628(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    beq @L_02171648
    cmp r1, #6
    beq @L_02171658
    ldmia sp!, {r4, pc}
@L_02171648:
    bl func_ov068_02170b1c
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02171658:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_0217166c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, r0
    bl func_ov068_02171338
    mov r0, r4
    bl func_ov068_02170e0c
    mov r9, #0
    ldr r8, =data_020c47b4
    mov r7, r9
    mov r6, r9
    mov r5, #0xc
@L_02171694:
    mla r10, r9, r5, r4
    ldr r1, [r10, #0x24]
    cmp r1, #0
    beq @L_021716b0
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    str r7, [r10, #0x24]
@L_021716b0:
    ldr r1, [r10, #0x28]
    cmp r1, #0
    beq @L_021716c8
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    str r6, [r10, #0x28]
@L_021716c8:
    add r9, r9, #1
    cmp r9, #3
    blt @L_02171694
    mov r5, #1
    ldr r0, =data_020c9660
    mov r1, r5
    bl func_ov015_0213b3fc
    bl func_ov015_02135e10
    ldr r0, [r4, #4]
    mov r1, r5
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov068_02171708(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov068_0217171c(void)
{
    bx lr
}
