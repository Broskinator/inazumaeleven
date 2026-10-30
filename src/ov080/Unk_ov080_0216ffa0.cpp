#include "ov080/Unk_ov080_0216ffa0.hpp"

extern "C" void func_ov080_0216ffa0(void);
extern "C" void func_ov080_021700a8(void);
extern "C" void func_ov080_021700ac(void);
extern "C" void func_ov080_021700d0(void);
extern "C" void func_ov080_02170108(void);
extern "C" void func_ov080_0217015c(void);
extern "C" void func_ov080_021701c8(void);
extern "C" void func_ov080_02170290(void);
extern "C" void func_ov080_021702c8(void);
extern "C" void func_ov080_02170374(void);
extern "C" void func_ov080_02170504(void);
extern "C" void func_ov080_021708b4(void);
extern "C" void func_ov080_02170954(void);
extern "C" void func_ov080_021709d8(void);
extern "C" void func_ov080_02170abc(void);
extern "C" void func_ov080_02170b94(void);
extern "C" void func_ov080_02170cbc(void);
extern "C" void func_ov080_02170e80(void);
extern "C" void func_ov080_0217102c(void);
extern "C" void func_ov080_0217109c(void);
extern "C" void func_ov080_02171124(void);
extern "C" void func_ov080_02171184(void);
extern "C" void func_ov080_0217119c(void);
extern "C" void func_ov080_021711e4(void);
extern "C" void func_ov080_02171234(void);
extern "C" void func_ov080_02171284(void);
extern "C" void func_ov080_021712e8(void);
extern "C" void func_ov080_02171550(void);
extern "C" void func_ov080_02171638(void);
extern "C" void func_ov080_02171738(void);
extern "C" void func_ov080_0217177c(void);
extern "C" void func_ov080_02171834(void);
extern "C" void func_ov080_02171848(void);
extern "C" void func_ov080_0217184c(void);
extern "C" void func_ov080_02171850(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020e88a0[];
extern "C" char data_ov080_02171854[];
extern "C" char data_ov080_02171870[];
extern "C" char data_ov080_02171890[];
extern "C" char data_ov080_021719fc[];
extern "C" char data_ov080_02171a14[];
extern "C" char data_ov080_02171a34[];
extern "C" char data_ov080_02171a38[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void STD_ConcatenateString(void);
extern "C" void _ZN17UnkClass_020621b413func_020768fcEm(void);
extern "C" void _ZN17UnkClass_020621b413func_02076c08Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_020777e4Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02077e78Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02078450Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02078474Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02078d84Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f7ccEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003988(void);
extern "C" void func_02003a68(void);
extern "C" void func_02003b48(void);
extern "C" void func_0200919c(void);
extern "C" void func_020808c4(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
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
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02135e10(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b870(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" asm void func_ov080_0216ffa0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    cmp r1, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #8]
    cmp r0, #0
    cmpne r0, #1
    beq @L_0216ffd0
    sub r0, r0, #3
    cmp r0, #2
    bhi @L_0216ffd8
@L_0216ffd0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0216ffd8:
    ldr r2, [r4, #0x14]
    ldr r0, [r1]
    cmp r2, r0
    beq @L_02170034
    cmp r2, #2
    bhi @L_02170034
    ldr r0, [r1]
    mov r2, #7
    str r0, [r4, #0x14]
    ldrh r3, [r1, #4]
    mov r0, #4
    strh r3, [r4, #0x18]
    ldrh r3, [r1, #6]
    strh r3, [r4, #0x1a]
    ldrh r3, [r1, #8]
    strh r3, [r4, #0x1c]
    ldrh r1, [r1, #0xa]
    strh r1, [r4, #0x1e]
    str r2, [r4, #8]
    bl func_ov015_02132614
    mov r0, #1
    strb r0, [r4, #0x11]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170034:
    ldrh r2, [r4, #0x1c]
    ldrh r0, [r1, #8]
    cmp r2, r0
    ldreqh r2, [r4, #0x1a]
    ldreqh r0, [r1, #6]
    cmpeq r2, r0
    ldreqh r2, [r4, #0x1e]
    ldreqh r0, [r1, #0xa]
    cmpeq r2, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r2, [r1]
    mov r0, r4
    str r2, [r4, #0x14]
    ldrh r2, [r1, #4]
    strh r2, [r4, #0x18]
    ldrh r2, [r1, #6]
    strh r2, [r4, #0x1a]
    ldrh r2, [r1, #8]
    strh r2, [r4, #0x1c]
    ldrh r1, [r1, #0xa]
    strh r1, [r4, #0x1e]
    bl func_ov080_02170290
    mov r5, #1
    mov r0, r4
    mov r1, r5
    bl func_ov080_021701c8
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov080_021700a8(void)
{
}

extern "C" asm void func_ov080_021700ac(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x1d4
    mov r1, #0
    mov r2, #0x24
    bl MI_CpuFill8
    mov r0, #1
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov080_021700d0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r0, r4, #0x1d4
    mov r1, #3
    bl func_ov015_02134198
    add r5, r4, #0x1d4
    mov r6, #0
    mov r4, #0xc
@L_021700f0:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #3
    blt @L_021700f0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov080_02170108(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x150]
    cmp r6, #0
    ldrne r1, =data_ov080_02171870
    ldrne r7, =data_ov080_02171890
    ldrne r1, [r1, #0x20]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x144
    mov r4, #0xc
@L_02170130:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02170130
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_0217015c(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4, #0x14]
    cmp r0, #1
    beq @L_02170180
    cmp r0, #2
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, pc}
@L_02170180:
    ldrh r1, [r4, #0x1c]
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020768fcEm
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    mov r1, #0
    str r1, [sp]
    ldrh r2, [r0, #0x2e]
    ldr r0, =data_ov080_021719fc
    add r1, r4, #0x1b0
    mov r2, r2, lsl #5
    mov r3, #0xa0
    bl func_ov015_02134024
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov080_021701c8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    str r1, [r4, #0xc]
    cmp r1, #1
    beq @L_021701ec
    cmp r1, #2
    moveq r0, #1
    streqb r0, [r4, #0x11]
    b @L_02170278
@L_021701ec:
    mov r7, #0
    mov r1, r7
    add r0, r4, #0x144
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
    beq @L_02170270
    cmp r0, #1
    cmpne r0, #2
    bne @L_02170270
    ldr r0, =data_ov080_02171a14
    add r1, r4, #0x150
    bl func_ov015_02133f94
    mov r0, r4
    bl func_ov080_0217015c
@L_02170270:
    mov r0, #1
    strb r0, [r4, #0x11]
@L_02170278:
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_02170290(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r0, r4, #0x144
    mov r1, #0xc
    bl func_ov015_02134198
    add r5, r4, #0x144
    mov r6, #0
    mov r4, #0xc
@L_021702b0:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0xc
    blt @L_021702b0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov080_021702c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_02170300
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_02170300:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_02170324
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_02170324:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_0217035c
@L_02170344:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_02170344
@L_0217035c:
    ldr r1, [r4, #4]
    mov r2, r5, lsl #5
    mov r0, #0
    bl func_0200919c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov080_02170374(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x2c
    mov r7, r0
    ldr r6, =data_020e88a0
    ldrh r1, [r7, #0x1c]
    mov r2, #0
    mov r0, r6
    str r2, [r7, #0x110]
    add r5, r7, #0x138
    bl _ZN17UnkClass_020621b413func_020768fcEm
    movs r4, r0
    beq @L_02170450
    bl _ZN17UnkClass_020621b413func_02078450Ev
    cmp r0, #0
    beq @L_02170450
    add r2, sp, #0x1c
    mov r0, r6
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_02077e78Ev
    cmp r0, #0
    bne @L_02170450
    ldrsb r0, [sp, #0x20]
    cmp r0, #0
    movne r0, #1
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x21]
    cmp r0, #0
    movne r0, #2
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x22]
    cmp r0, #0
    movne r0, #3
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x23]
    cmp r0, #0
    movne r0, #4
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x24]
    cmp r0, #0
    movne r0, #5
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x25]
    cmp r0, #0
    movne r0, #6
    strne r0, [r7, #0x110]
    bne @L_02170450
    ldrsb r0, [sp, #0x26]
    cmp r0, #0
    movne r0, #7
    strne r0, [r7, #0x110]
@L_02170450:
    mov r4, #2
    mov r0, r7
    mov r1, r5
    mov r3, r4
    mov r2, #0x18
    bl func_ov080_021702c8
    ldr r6, [r5, #4]
    cmp r6, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r1, [r7, #0x110]
    ldr r0, =data_ov080_02171870
    ldr r0, [r0, r1, lsl #2]
    bl func_0209d8b8
    mov r1, #3
    str r1, [sp]
    mov r1, #1
    stmib sp, {r1, r6}
    ldrh r2, [r5, #8]
    mov r3, r0
    mov r1, #0
    mov r2, r2, lsl #3
    str r2, [sp, #0xc]
    ldrh r7, [r5, #0xa]
    ldr r6, =data_020c46a8
    mov r2, r4
    mov r0, r7, lsl #3
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r6]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    ldrh r2, [r5, #8]
    ldrh r1, [r5, #0xa]
    ldr r0, [r5, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_02170504(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x9c
    mov r9, r0
    ldr r5, =data_020e88a0
    ldrh r1, [r9, #0x1c]
    mov r0, r5
    mov r11, #0
    mov r4, #1
    bl _ZN17UnkClass_020621b413func_020768fcEm
    ldr r1, [r9, #0x20]
    mov r6, r11
    mov r8, r0
    mov r0, r6
    mov r2, #0xfc0
    bl MIi_CpuClearFast
@L_02170540:
    ldrh r0, [r9, #0x1a]
    mov r1, r11
    add r0, r6, r0, lsl #4
    add r0, r9, r0, lsl #1
    ldrh r0, [r0, #0x24]
    bl func_ov015_02130b14
    ldr r2, [r9, #0x20]
    mov r1, #0xfc
    mla r7, r6, r1, r2
    cmp r0, #0
    beq @L_021706b8
    mov r1, r7
    mov r2, #0xfc
    bl MI_CpuCopy8
    cmp r8, #0
    beq @L_021706b8
    ldrb r0, [r8, #0x21]
    sub r0, r0, #0x16
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_021706b8
    b @L_021705a4
    b @L_021705bc
    b @L_021705d0
    b @L_021705d0
@L_021705a4:
    mov r1, r7
    str r4, [sp]
    mov r0, r5
    ldrh r2, [r9, #0x1c]
    mov r3, r11
    b @L_021706b4
@L_021705bc:
    mov r1, r7
    mov r0, r5
    ldrh r2, [r9, #0x1c]
    bl _ZN17UnkClass_020621b413func_02076c08Ev
    b @L_021706b8
@L_021705d0:
    ldrh r1, [r7, #0x72]
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_020768fcEm
    mov r10, r0
    ldrh r1, [r7, #0x74]
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_020768fcEm
    ldrh r1, [r7, #0x72]
    cmp r1, #0
    ldreqh r2, [r7, #0x74]
    cmpeq r2, #0
    bne @L_02170614
    mov r1, r7
    str r4, [sp]
    mov r0, r5
    ldrh r2, [r9, #0x1c]
    b @L_021706b0
@L_02170614:
    cmp r1, #0
    beq @L_02170628
    ldrb r2, [r10, #0x21]
    cmp r2, #0x18
    beq @L_02170640
@L_02170628:
    ldrh r2, [r7, #0x74]
    cmp r2, #0
    beq @L_02170668
    ldrb r3, [r0, #0x21]
    cmp r3, #0x19
    bne @L_02170668
@L_02170640:
    ldrb r0, [r8, #0x21]
    mov r1, r7
    str r4, [sp]
    cmp r0, #0x18
    mov r0, r5
    ldrh r2, [r9, #0x1c]
    bne @L_02170660
    b @L_021706b0
@L_02170660:
    mov r3, #2
    b @L_021706b4
@L_02170668:
    cmp r1, #0
    beq @L_0217067c
    ldrb r1, [r10, #0x21]
    cmp r1, #0x19
    beq @L_02170690
@L_0217067c:
    cmp r2, #0
    beq @L_021706b8
    ldrb r0, [r0, #0x21]
    cmp r0, #0x18
    bne @L_021706b8
@L_02170690:
    ldrb r0, [r8, #0x21]
    mov r1, r7
    str r4, [sp]
    cmp r0, #0x18
    mov r0, r5
    ldrh r2, [r9, #0x1c]
    bne @L_021706b0
    b @L_02170660
@L_021706b0:
    mov r3, r4
@L_021706b4:
    bl _ZN17UnkClass_020621b413func_020777e4Ev
@L_021706b8:
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_02170540
    add r5, r9, #0x114
    mov r0, r9
    mov r1, r5
    mov r2, #9
    mov r3, #0x10
    bl func_ov080_021702c8
    ldr r0, [r5, #4]
    cmp r0, #0
    beq @L_021707ac
    mov r6, #0
    ldr r8, =data_ov080_02171a34
    strb r6, [sp, #0x1c]
    add r4, sp, #0x1c
    mov r7, #0xfc
@L_021706fc:
    ldr r1, [r9, #0x20]
    mov r0, r4
    mla r1, r6, r7, r1
    add r1, r1, #0x20
    bl STD_ConcatenateString
    mov r0, r4
    mov r1, r8
    bl STD_ConcatenateString
    add r6, r6, #1
    cmp r6, #8
    blt @L_021706fc
    ldr r6, =data_020c46a8
    mov r1, #1
    ldr r0, [r6]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    mov r0, #3
    str r0, [sp]
    mov r1, #0
    str r1, [sp, #4]
    ldr r0, [r5, #4]
    mov r3, r4
    str r0, [sp, #8]
    ldrh r0, [r5, #8]
    mov r2, #2
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r5, #0xa]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r6]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    ldr r0, [r6]
    bl _ZN8TextFont12ResetSpacingEv
    ldrh r2, [r5, #8]
    ldrh r1, [r5, #0xa]
    ldr r0, [r5, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
@L_021707ac:
    add r6, r9, #0x120
    mov r0, r9
    mov r1, r6
    mov r2, #9
    mov r3, #0x10
    bl func_ov080_021702c8
    ldr r0, [r6, #4]
    cmp r0, #0
    addeq sp, sp, #0x9c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    ldr r8, =data_ov080_02171a38
    strb r5, [sp, #0x1c]
    add r4, sp, #0x1c
    mov r7, #0xfc
@L_021707e8:
    ldr r1, [r9, #0x20]
    add r0, r5, #8
    mla r1, r0, r7, r1
    mov r0, r4
    add r1, r1, #0x20
    bl STD_ConcatenateString
    mov r0, r4
    mov r1, r8
    bl STD_ConcatenateString
    add r5, r5, #1
    cmp r5, #8
    blt @L_021707e8
    ldr r5, =data_020c46a8
    mov r1, #1
    ldr r0, [r5]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    mov r0, #3
    str r0, [sp]
    mov r1, #0
    str r1, [sp, #4]
    ldr r0, [r6, #4]
    mov r3, r4
    str r0, [sp, #8]
    ldrh r0, [r6, #8]
    mov r2, #2
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r6, #0xa]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r5]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    ldr r0, [r5]
    bl _ZN8TextFont12ResetSpacingEv
    ldrh r2, [r6, #8]
    ldrh r1, [r6, #0xa]
    ldr r0, [r6, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x9c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov080_021708b4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r5, r0
    add r3, r5, #0x114
    mov r2, #0xc
    mla r4, r1, r2, r3
    mov r1, r4
    mov r2, #0x1e
    mov r3, #6
    bl func_ov080_021702c8
    ldr r1, [r4, #4]
    cmp r1, #0
    ldrne r0, [r5, #0x1b0]
    cmpne r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r2, #3
    str r2, [sp]
    str r2, [sp, #4]
    mov r3, #1
    str r3, [sp, #8]
    str r3, [sp, #0xc]
    mov r2, #0
    str r2, [sp, #0x10]
    str r2, [sp, #0x14]
    str r2, [sp, #0x18]
    str r3, [sp, #0x1c]
    ldrh r2, [r4, #8]
    ldrh r3, [r4, #0xa]
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    ldrh r2, [r4, #8]
    ldrh r1, [r4, #0xa]
    ldr r0, [r4, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov080_02170954(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r0, [r5, #0x11]
    mov r4, r1
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r5, #0x18]
    mov r1, #0
    strb r1, [r5, #0x11]
    cmp r0, #0
    beq @L_02170984
    bl func_ov015_02130b14
@L_02170984:
    cmp r4, #1
    beq @L_02170998
    cmp r4, #2
    beq @L_021709b8
    ldmia sp!, {r3, r4, r5, pc}
@L_02170998:
    ldr r0, [r5, #0x14]
    cmp r0, #2
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl func_ov080_02170504
    mov r0, r5
    bl func_ov080_02170374
    ldmia sp!, {r3, r4, r5, pc}
@L_021709b8:
    ldr r0, [r5, #0x14]
    cmp r0, #1
    cmpne r0, #2
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, #2
    bl func_ov080_021708b4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov080_021709d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r5, [sp, #0x4c]
    mov r4, #0xc
    mla r0, r5, r4, r0
    ldr r4, [r0, #0x144]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x48]
    mov r7, #1
    cmp r9, r0
    movgt r9, r0
    ldr r0, [r4, #0xc]
    mov r5, #2
    add r8, r4, r0
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    mov r6, r0, asr #0x18
    mov r11, #3
@L_02170a30:
    smull r1, r2, r4, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    sub r2, r9, r1
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    str r7, [sp]
    add r9, r0, r9, asr #2
    mov r0, r10, lsl #0x18
    str r7, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r6, [sp, #0xc]
    str r7, [sp, #0x10]
    str r5, [sp, #0x14]
    add r2, r8, r2, lsl #2
    str r11, [sp, #0x18]
    str r2, [sp, #0x1c]
    mov r2, #0
    ldr r0, =data_020c9660
    mov r1, r7
    mov r3, r2
    bl func_ov015_0213b6ac
    sub r0, r10, #1
    mov r0, r0, lsl #0x10
    cmp r9, #0
    mov r10, r0, asr #0x10
    bgt @L_02170a30
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov080_02170abc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x20
    movs r5, r3
    moveq r12, #8
    mov r8, r0
    mov r7, r1
    mov r6, r2
    moveq r4, r12
    beq @L_02170af8
    cmp r5, #0
    movgt r12, #0
    movgt r4, #3
    movle r12, #4
    movle r4, r12
    rsble r5, r5, #0
@L_02170af8:
    ldr r3, [r8, #0x15c]
    cmp r3, #0
    beq @L_02170b5c
    mov r1, #1
    str r1, [sp]
    mov r0, r7, lsl #0x18
    mov r2, r6, lsl #0x18
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    str r0, [sp, #0xc]
    str r1, [sp, #0x10]
    mov r0, #2
    mov r2, #0
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr lr, [r3, #0xc]
    ldr r0, =data_020c9660
    add r3, r3, lr
    add r12, r12, r3
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170b5c:
    add r0, r7, #2
    ldr r2, =0x3e7
    mov r1, r0, lsl #0x10
    str r2, [sp]
    mov r0, r8
    mov r2, r6
    mov r3, r5
    mov r1, r1, asr #0x10
    str r4, [sp, #4]
    bl func_ov080_021709d8
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov080_02170b94(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr lr, [r4, #0x114]
    add r12, r4, #0x114
    cmp lr, #0
    beq @L_02170bf8
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r0, #2
    str r0, [sp, #0xc]
    ldrh r2, [r12, #8]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r12, [r12, #0xa]
    mov r2, r1
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170bf8:
    ldr lr, [r4, #0x120]
    add r12, r4, #0x120
    cmp lr, #0
    beq @L_02170c54
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #0x11
    str r0, [sp, #8]
    mov r0, #2
    str r0, [sp, #0xc]
    ldrh r2, [r12, #8]
    mov r3, #0
    ldr r0, =data_020c9660
    and r2, r2, #0xff
    str r2, [sp, #0x10]
    ldrh r12, [r12, #0xa]
    mov r2, r1
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170c54:
    ldr r12, [r4, #0x138]
    add lr, r4, #0x138
    cmp r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #4
    mov r2, #0
    str r0, [sp, #8]
    str r2, [sp, #0xc]
    ldrh r4, [lr, #8]
    ldr r0, =data_020c9660
    mov r3, r2
    and r4, r4, #0xff
    str r4, [sp, #0x10]
    ldrh r4, [lr, #0xa]
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov080_02170cbc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r5, =data_ov080_02171854
    add r4, sp, #0
    mov r10, r0
    mov r8, r4
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2}
    mov r11, #0
    stmia r4, {r0, r1, r2}
    mov r4, r11
    mov r9, r11
@L_02170cf0:
    ldrh r0, [r10, #0x1a]
    add r0, r9, r0, lsl #4
    add r0, r10, r0, lsl #1
    ldrh r0, [r0, #0x24]
    cmp r0, #0
    beq @L_02170d9c
    mov r2, #0xfc
    mov r1, r11
    mul r6, r9, r2
    ldr r7, [r10, #0x20]
    bl func_ov015_02130b14
    ldr r1, [r10, #0x110]
    mov r5, r0
    cmp r1, #1
    blt @L_02170d74
    cmp r1, #7
    bgt @L_02170d74
    add r0, r8, r1, lsl #2
    ldr r2, [r0, #-4]
    ldr r0, =data_020e88a0
    add r1, r7, r6
    mov r3, r11
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    ldr r2, [r10, #0x110]
    mov r1, r5
    add r2, r8, r2, lsl #2
    mov r5, r0
    ldr r0, =data_020e88a0
    ldr r2, [r2, #-4]
    mov r3, r11
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    sub r3, r5, r0
    b @L_02170d78
@L_02170d74:
    mov r3, r4
@L_02170d78:
    mov r0, r9, lsl #4
    add r1, r0, #0x10
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r2, r0, lsl #0xd
    mov r0, r10
    mov r1, #0xc
    mov r2, r2, asr #0x10
    bl func_ov080_02170abc
@L_02170d9c:
    add r9, r9, #1
    cmp r9, #8
    blt @L_02170cf0
    ldr r11, =data_020e88a0
    mov r9, #0
    add r5, sp, #0
@L_02170db4:
    ldrh r0, [r10, #0x1a]
    add r0, r9, r0, lsl #4
    add r0, r10, r0, lsl #1
    ldrh r0, [r0, #0x34]
    cmp r0, #0
    beq @L_02170e64
    add r3, r9, #8
    mov r2, #0xfc
    mov r1, r4
    mul r7, r3, r2
    ldr r8, [r10, #0x20]
    bl func_ov015_02130b14
    ldr r1, [r10, #0x110]
    mov r6, r0
    cmp r1, #1
    blt @L_02170e3c
    cmp r1, #7
    bgt @L_02170e3c
    add r0, r5, r1, lsl #2
    ldr r2, [r0, #-4]
    mov r0, r11
    mov r3, r4
    add r1, r8, r7
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    ldr r2, [r10, #0x110]
    mov r1, r6
    add r2, r5, r2, lsl #2
    ldr r2, [r2, #-4]
    mov r6, r0
    mov r0, r11
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    sub r3, r6, r0
    b @L_02170e40
@L_02170e3c:
    mov r3, r4
@L_02170e40:
    mov r0, r9, lsl #4
    add r1, r0, #0x10
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r2, r0, lsl #0xd
    mov r0, r10
    mov r1, #0x1c
    mov r2, r2, asr #0x10
    bl func_ov080_02170abc
@L_02170e64:
    add r9, r9, #1
    cmp r9, #8
    blt @L_02170db4
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov080_02170e80(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x20
    mov r6, r0
    mov r5, r1
    mov r4, #0
@L_02170e94:
    ldrh r0, [r6, #0x1a]
    add r0, r4, r0, lsl #4
    add r0, r6, r0, lsl #1
    ldrh r0, [r0, #0x24]
    cmp r0, #0
    beq @L_02170f4c
    mov r8, #0
    mov r1, r8
    bl func_ov015_02130b14
    mov r7, r0
@L_02170ebc:
    mov r0, r7
    mov r1, r8
    bl func_020808c4
    cmp r5, r0
    bne @L_02170f40
    ldr r3, [r6, #0x1c8]
    cmp r3, #0
    beq @L_02170f4c
    mov r0, r4, lsl #4
    add r2, r0, #0x10
    mov r0, r2, asr #2
    mov r1, #1
    str r1, [sp]
    add r0, r2, r0, lsr #29
    mov r0, r0, lsl #0x15
    str r1, [sp, #4]
    mov r2, #0xd
    str r2, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r2, #0
    str r1, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr r12, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r12
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    b @L_02170f4c
@L_02170f40:
    add r8, r8, #1
    cmp r8, #6
    blt @L_02170ebc
@L_02170f4c:
    add r4, r4, #1
    cmp r4, #8
    blt @L_02170e94
    mov r4, #0
@L_02170f5c:
    ldrh r0, [r6, #0x1a]
    add r0, r4, r0, lsl #4
    add r0, r6, r0, lsl #1
    ldrh r0, [r0, #0x34]
    cmp r0, #0
    beq @L_02171014
    mov r8, #0
    mov r1, r8
    bl func_ov015_02130b14
    mov r7, r0
@L_02170f84:
    mov r0, r7
    mov r1, r8
    bl func_020808c4
    cmp r5, r0
    bne @L_02171008
    ldr r3, [r6, #0x1c8]
    cmp r3, #0
    beq @L_02171014
    mov r0, r4, lsl #4
    add r2, r0, #0x10
    mov r0, r2, asr #2
    mov r1, #1
    str r1, [sp]
    add r0, r2, r0, lsr #29
    mov r0, r0, lsl #0x15
    str r1, [sp, #4]
    mov r2, #0x1d
    str r2, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r2, #0
    str r1, [sp, #0x10]
    mov r0, #2
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr r12, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r12
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    b @L_02171014
@L_02171008:
    add r8, r8, #1
    cmp r8, #6
    blt @L_02170f84
@L_02171014:
    add r4, r4, #1
    cmp r4, #8
    blt @L_02170f5c
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov080_0217102c(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x20
    ldr lr, [r0, #0x12c]
    add r12, r0, #0x12c
    cmp lr, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r0, #0x12
    str r0, [sp, #0xc]
    ldrh r3, [r12, #8]
    mov r2, #0
    ldr r0, =data_020c9660
    and r3, r3, #0xff
    str r3, [sp, #0x10]
    ldrh r12, [r12, #0xa]
    mov r3, r2
    and r12, r12, #0xff
    str r12, [sp, #0x14]
    str r2, [sp, #0x18]
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov080_0217109c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldrh r0, [r7, #0x18]
    mov r5, #0
    mov r6, r5
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r1, [r7, #0x1c]
    cmp r1, #0
    beq @L_021710e4
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_020768fcEm
    movs r5, r0
    ldrneb r6, [r5, #0x21]
@L_021710e4:
    mov r0, r7
    mov r1, r4
    bl func_ov080_02170b94
    cmp r6, #0xf
    beq @L_02171108
    mov r0, r7
    mov r1, r4
    bl func_ov080_02170cbc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02171108:
    mov r0, r5
    bl _ZN17UnkClass_020621b413func_02078474Ev
    mov r1, r0
    mov r0, r7
    bl func_ov080_02170e80
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_02171124(void)
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
    ldmeqia sp!, {r4, pc}
    cmp r0, #1
    beq @L_02171160
    cmp r0, #2
    beq @L_0217116c
    ldmia sp!, {r4, pc}
@L_02171160:
    mov r0, r4
    bl func_ov080_0217102c
    ldmia sp!, {r4, pc}
@L_0217116c:
    mov r0, r4
    bl func_ov080_0217109c
    mov r0, r4
    bl func_ov080_0217102c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov080_02171184(void)
{
    ldr r0, =data_020c9660
    ldr r12, =func_ov015_0213bfcc
    mov r1, #1
    bx r12
}

extern "C" asm void func_ov080_0217119c(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0xc
    mul r3, r1, r3
    add r1, r0, #0x114
    ldr r0, [r1, r3]
    add r1, r1, r3
    cmp r0, #0
    beq @L_021711dc
    ldrh r12, [r1, #8]
    ldrh r1, [r1, #0xa]
    add r2, r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r2, r0
@L_021711dc:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov080_021711e4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x114
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_0217122c
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
@L_0217122c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov080_02171234(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x114
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_0217127c
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
@L_0217127c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov080_02171284(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0x144
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

extern "C" asm void func_ov080_021712e8(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r7, [r4, #0x144]
    cmp r7, #0
    beq @L_02171358
    ldr r0, [r7, #0xc]
    mov r6, #0
    mov r5, #1
    ldr r1, [r7, #0x10]
    mov r2, r6
    mov r3, r5
    add r0, r7, r0
    bl func_ov015_02132984
    mov r0, r7
    mov r1, r5
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r7, #0x14]
    ldr r2, [r7, #0x18]
    mov r1, r6
    add r0, r7, r0
    bl func_02003988
    ldr r0, [r7, #0xc]
    ldr r2, [r7, #0x10]
    add r0, r7, r0
    mov r1, r6
    bl func_02003608
@L_02171358:
    bl G2S_GetBG1CharPtr
    mov r5, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r5
    bl DC_FlushRange
    str r6, [sp, #8]
    str r5, [sp, #4]
    ldr r0, [r4, #0x14]
    cmp r0, #0
    beq @L_021713c8
    cmp r0, #1
    beq @L_021713f0
    cmp r0, #2
    beq @L_02171430
    b @L_0217153c
@L_021713c8:
    mov r4, #0x800
    ldr r0, =data_020d2d20
    mov r1, r6
    mov r2, r4
    bl func_020036e8
    ldr r0, =data_020d2520
    mov r1, r6
    mov r2, r4
    bl func_020037c8
    b @L_0217153c
@L_021713f0:
    ldr r0, =data_020d2520
    mov r1, r6
    mov r2, #0x800
    bl func_020037c8
    mov r5, #2
    ldr r2, [sp, #8]
    mov r0, r4
    mov r1, r5
    bl func_ov080_0217119c
    str r0, [sp, #8]
    ldr r2, [sp, #4]
    mov r0, r4
    mov r1, r5
    bl func_ov080_02171234
    str r0, [sp, #4]
    b @L_0217153c
@L_02171430:
    mov r0, r4
    mov r1, r6
    mov r2, r6
    bl func_ov080_0217119c
    mov r7, r0
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl func_ov080_021711e4
    mov r5, #1
    mov r6, r0
    mov r0, r4
    mov r1, r5
    mov r2, r7
    bl func_ov080_0217119c
    mov r1, r5
    mov r2, r6
    mov r0, r4
    bl func_ov080_021711e4
    mov r5, #2
    ldr r2, [sp, #8]
    mov r0, r4
    mov r1, r5
    bl func_ov080_0217119c
    str r0, [sp, #8]
    ldr r2, [sp, #4]
    mov r0, r4
    mov r1, r5
    bl func_ov080_02171234
    mov r7, #3
    str r0, [sp, #4]
    ldr r2, [sp, #8]
    mov r0, r4
    mov r1, r7
    bl func_ov080_0217119c
    str r0, [sp, #8]
    ldr r2, [sp, #4]
    mov r0, r4
    mov r1, r7
    bl func_ov080_02171234
    mov r1, r5
    add r5, sp, #8
    str r0, [sp, #4]
    add r6, sp, #4
    mov r0, r4
    mov r2, r7
    mov r3, r5
    str r6, [sp]
    bl func_ov080_02171284
    mov r0, r4
    mov r1, r7
    mov r2, r7
    mov r3, r5
    str r6, [sp]
    bl func_ov080_02171284
    mov r0, r4
    mov r1, #4
    mov r2, r7
    mov r3, r5
    str r6, [sp]
    bl func_ov080_02171284
    mov r0, r4
    mov r2, r7
    mov r3, r5
    mov r1, #0xb
    str r6, [sp]
    bl func_ov080_02171284
@L_0217153c:
    bl func_ov015_02132240
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_02171550(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #4]
    mov r6, #1
    ldr r2, [r0]
    mov r1, r6
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, #6
    bl func_ov015_02135440
    mov r5, #0
    mov r1, r5
    add r0, r7, #0x114
    mov r2, #0x30
    bl MI_CpuFill8
    add r0, r7, #0x144
    mov r1, r5
    mov r2, #0x90
    bl MI_CpuFill8
    ldr r0, =data_020c47b4
    mov r4, #0xfc0
    mov r1, r4
    mov r2, r5
    mov r3, r6
    bl _ZN8GameHeap5AllocEiii
    mov r2, r4
    mov r1, r0
    str r1, [r7, #0x20]
    mov r0, r5
    bl MIi_CpuClearFast
    mov r0, r5
    add r1, r7, #0x24
    mov r2, #0xc8
    bl MIi_CpuClearFast
    bl func_ov015_021319bc
    str r5, [sp]
    mov r1, r0
    ldr r0, =data_020e88a0
    add r2, r7, #0x24
    mov r3, #0x64
    bl _ZN17UnkClass_020621b413func_02078d84Ev
    str r0, [r7, #0x10c]
    str r5, [r7, #0x110]
    strb r5, [r7, #0x11]
    str r5, [r7, #0x14]
    strh r5, [r7, #0x18]
    strh r5, [r7, #0x1a]
    strh r5, [r7, #0x1c]
    strh r5, [r7, #0x1e]
    mov r0, r7
    bl func_ov080_021700ac
    mov r1, r6
    ldr r0, =data_020c9660
    bl func_ov015_0213b364
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov080_02171638(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02171670
    ldmia sp!, {r4, pc}
    b @L_0217168c
    b @L_021716ec
    ldmia sp!, {r4, pc}
    b @L_02171700
    b @L_0217170c
@L_02171670:
    add r0, r4, #0x1d4
    mov r1, #3
    bl func_ov015_02134118
    cmp r0, #0
    movne r0, #2
    strne r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_0217168c:
    ldr r1, [r4, #0xc]
    bl func_ov080_02170954
    add r0, r4, #0x144
    mov r1, #0xc
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_021716c0
    cmp r0, #2
    beq @L_021716d0
    ldmia sp!, {r4, pc}
@L_021716c0:
    mov r0, r4
    mov r1, #2
    bl func_ov080_021701c8
    ldmia sp!, {r4, pc}
@L_021716d0:
    mov r0, r4
    bl func_ov080_02170108
    mov r0, r4
    bl func_ov080_021700a8
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_021716ec:
    bl func_ov080_02171124
    mov r0, #4
    bl func_ov015_02132568
    mov r0, #6
    str r0, [r4, #8]
@L_02171700:
    mov r0, r4
    bl func_ov080_02171184
    ldmia sp!, {r4, pc}
@L_0217170c:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov080_02170290
    mov r0, r4
    mov r1, #1
    bl func_ov080_021701c8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov080_02171738(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    beq @L_02171758
    cmp r1, #6
    beq @L_02171768
    ldmia sp!, {r4, pc}
@L_02171758:
    bl func_ov080_021712e8
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02171768:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov080_0217177c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, r0
    bl func_ov080_02170290
    mov r0, r4
    bl func_ov080_021700d0
    mov r9, #0
    ldr r8, =data_020c47b4
    mov r7, r9
    mov r6, r9
    mov r5, #0xc
@L_021717a4:
    mla r10, r9, r5, r4
    ldr r1, [r10, #0x114]
    cmp r1, #0
    beq @L_021717c0
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    str r7, [r10, #0x114]
@L_021717c0:
    ldr r1, [r10, #0x118]
    cmp r1, #0
    beq @L_021717d8
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    str r6, [r10, #0x118]
@L_021717d8:
    add r9, r9, #1
    cmp r9, #4
    blt @L_021717a4
    ldr r1, [r4, #0x20]
    cmp r1, #0
    beq @L_02171800
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0x20]
@L_02171800:
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

extern "C" asm void func_ov080_02171834(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov080_02171848(void)
{
}

extern "C" void func_ov080_0217184c(void)
{
}

extern "C" void func_ov080_02171850(void)
{
}
