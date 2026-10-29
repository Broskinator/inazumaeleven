#include "ov071/Unk_ov071_0216ffa0.hpp"

extern "C" void func_ov071_0216ffa0(void);
extern "C" void func_ov071_0217009c(void);
extern "C" void func_ov071_02170148(void);
extern "C" void func_ov071_021701b8(void);
extern "C" void func_ov071_021703a0(void);
extern "C" void func_ov071_021704ac(void);
extern "C" void func_ov071_021704e0(void);
extern "C" void func_ov071_02170534(void);
extern "C" void func_ov071_02170594(void);
extern "C" void func_ov071_021705dc(void);
extern "C" void func_ov071_0217062c(void);
extern "C" void func_ov071_02170694(void);
extern "C" void func_ov071_021706f8(void);
extern "C" void func_ov071_02170888(void);
extern "C" void func_ov071_021708ac(void);
extern "C" void func_ov071_021708e4(void);
extern "C" void func_ov071_02170930(void);
extern "C" void func_ov071_02170944(void);
extern "C" void func_ov071_021709bc(void);
extern "C" void func_ov071_021709f0(void);
extern "C" void func_ov071_02170aac(void);
extern "C" void func_ov071_02170b2c(void);
extern "C" void func_ov071_02170c28(void);
extern "C" void func_ov071_02170c6c(void);
extern "C" void func_ov071_02170cec(void);
extern "C" void func_ov071_02170d00(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_ov071_02170d04[];
extern "C" char data_ov071_02170d34[];
extern "C" char data_ov071_02170f2c[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN11FileManager6CancelEPvi(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003608(void);
extern "C" void func_02003b48(void);
extern "C" void func_0200919c(void);
extern "C" void func_02017278(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132614(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133f94(void);
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

extern "C" asm void func_ov071_0216ffa0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    cmp r1, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #8]
    cmp r0, #0
    cmpne r0, #1
    cmpne r0, #2
    beq @L_0216ffd4
    sub r0, r0, #4
    cmp r0, #1
    bhi @L_0216ffdc
@L_0216ffd4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0216ffdc:
    ldr r2, [r4, #0x14]
    ldr r0, [r1]
    cmp r2, r0
    beq @L_02170030
    cmp r2, #2
    bhi @L_02170030
    ldr r0, [r1]
    mov r2, #7
    str r0, [r4, #0x14]
    ldr r3, [r1, #4]
    mov r0, #4
    str r3, [r4, #0x18]
    ldr r3, [r1, #8]
    str r3, [r4, #0x1c]
    ldrb r1, [r1, #0xc]
    strb r1, [r4, #0x20]
    str r2, [r4, #8]
    bl func_ov015_02132614
    mov r0, #1
    strb r0, [r4, #0x10]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170030:
    ldr r2, [r4, #0x18]
    ldr r0, [r1, #4]
    cmp r2, r0
    ldreq r2, [r4, #0x1c]
    ldreq r0, [r1, #8]
    cmpeq r2, r0
    ldreqb r2, [r4, #0x20]
    ldreqb r0, [r1, #0xc]
    cmpeq r2, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r2, [r1]
    mov r0, r4
    str r2, [r4, #0x14]
    ldr r2, [r1, #4]
    str r2, [r4, #0x18]
    ldr r2, [r1, #8]
    str r2, [r4, #0x1c]
    ldrb r1, [r1, #0xc]
    strb r1, [r4, #0x20]
    bl func_ov071_021709bc
    mov r5, #1
    mov r0, r4
    mov r1, r5
    bl func_ov071_021709f0
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_0217009c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_021700d4
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_021700d4:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_021700f8
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_021700f8:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_02170130
@L_02170118:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_02170118
@L_02170130:
    ldr r1, [r4, #4]
    mov r2, r5, lsl #5
    mov r0, #0
    bl func_0200919c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_02170148(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x20
    ldr r3, [r0, #0x48]
    cmp r3, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r0, #8
    str r0, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #6
    str r0, [sp, #0x14]
    mov r0, #2
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov071_021701b8(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r3, [r4, #0x48]
    cmp r3, #0
    beq @L_02170218
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    str r1, [sp, #8]
    mov r2, #2
    str r2, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #6
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170218:
    ldr r1, [r4, #0x18]
    mov r0, #0xc
    add r2, r1, #3
    mla r1, r2, r0, r4
    ldr r3, [r1, #0x30]
    cmp r3, #0
    beq @L_0217027c
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r2, #5
    str r2, [sp, #8]
    str r0, [sp, #0xc]
    mov r0, #0x16
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_0217027c:
    ldr r3, [r4, #0x9c]
    cmp r3, #0
    beq @L_021702d8
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #5
    str r0, [sp, #8]
    mov r0, #0x12
    str r0, [sp, #0xc]
    mov r0, #0x16
    str r0, [sp, #0x10]
    mov r0, #6
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r12, r3, r2
    mov r2, r1
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021702d8:
    ldrb r0, [r4, #0x20]
    cmp r0, #0
    ldrne r12, [r4, #0xa8]
    cmpne r12, #0
    beq @L_02170338
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #0xf
    str r0, [sp, #8]
    mov r0, #0x15
    str r0, [sp, #0xc]
    mov r0, #2
    str r0, [sp, #0x10]
    mov r2, #0
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr r3, [r12, #0xc]
    ldr r0, =data_020c9660
    add r12, r12, r3
    mov r3, r2
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170338:
    ldr r12, [r4, #0x24]
    cmp r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r1, #1
    str r1, [sp]
    str r1, [sp, #4]
    mov r0, #6
    str r0, [sp, #8]
    mov r0, #0x14
    str r0, [sp, #0xc]
    ldrh r3, [r4, #0x2c]
    mov r2, #0
    ldr r0, =data_020c9660
    and r3, r3, #0xff
    str r3, [sp, #0x10]
    ldrh r4, [r4, #0x2e]
    mov r3, r2
    and r4, r4, #0xff
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_021703a0(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xcc
    ldr r12, =data_ov071_02170d04
    add r6, sp, #0x1c
    mov r4, r0
    mov r5, r6
    ldmia r12!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r12!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1, r2, r3}
    stmia r6, {r0, r1, r2, r3}
    mov r0, r4
    add r1, r4, #0x24
    mov r2, #0x14
    mov r3, #2
    bl func_ov071_0217009c
    ldr r0, [r4, #0x28]
    cmp r0, #0
    addeq sp, sp, #0xcc
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #0x86
    bl func_0209d8b8
    ldr r2, [r4, #0x1c]
    ldr r1, [r4, #0x18]
    mov r6, r0
    add r0, r2, r1, lsl #1
    ldr r0, [r5, r0, lsl #2]
    bl func_0209d8b8
    add r5, sp, #0x4c
    mov r3, r0
    mov r0, r5
    mov r2, r6
    mov r1, #0x80
    bl func_02017278
    mov r0, #3
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    ldr r0, [r4, #0x28]
    mov r1, #0
    str r0, [sp, #8]
    ldrh r12, [r4, #0x2c]
    ldr r0, =data_020c46a8
    mov r3, r5
    mov r12, r12, lsl #3
    str r12, [sp, #0xc]
    ldrh r12, [r4, #0x2e]
    mov r2, r1
    mov r12, r12, lsl #3
    str r12, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r0]
    ldr r12, [r0]
    ldr r12, [r12, #8]
    blx r12
    ldrh r2, [r4, #0x2c]
    ldrh r1, [r4, #0x2e]
    ldr r0, [r4, #0x28]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0xcc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov071_021704ac(void)
{
    stmdb sp!, {r3, lr}
    ldrb r2, [r0, #0x10]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    mov r2, #0
    strb r2, [r0, #0x10]
    cmp r1, #1
    ldmneia sp!, {r3, pc}
    ldr r1, [r0, #0x14]
    cmp r1, #2
    ldmneia sp!, {r3, pc}
    bl func_ov071_021703a0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov071_021704e0(void)
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
    cmpne r0, #1
    beq @L_02170518
    cmp r0, #2
    beq @L_02170524
    ldmia sp!, {r4, pc}
@L_02170518:
    mov r0, r4
    bl func_ov071_02170148
    ldmia sp!, {r4, pc}
@L_02170524:
    mov r0, r4
    bl func_ov071_021701b8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_02170534(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r12, #0xc
    mla r0, r1, r12, r0
    ldr r4, [r0, #0x30]
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
    beq @L_0217058c
    mov r0, r4
    mov r2, r5
    mov r1, #1
    bl func_ov015_021322b0
@L_0217058c:
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov071_02170594(void)
{
    stmdb sp!, {r3, lr}
    mov r3, #0xc
    mul r3, r1, r3
    add r1, r0, #0x24
    ldr r0, [r1, r3]
    add r1, r1, r3
    cmp r0, #0
    beq @L_021705d4
    ldrh r12, [r1, #8]
    ldrh r1, [r1, #0xa]
    add r2, r2, #1
    mov r3, #0
    mul r1, r12, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r2, r0
@L_021705d4:
    mov r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov071_021705dc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x24
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02170624
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
@L_02170624:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_0217062c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0xc
    mul r7, r1, r4
    add r6, r0, #0x30
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

extern "C" asm void func_ov071_02170694(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0x30
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

extern "C" asm void func_ov071_021706f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r4, #0
    mov r3, #1
    mov r5, r0
    mov r1, r4
    str r3, [sp]
    sub r2, r4, #1
    bl func_ov071_02170534
    ldr r1, [r5, #0x30]
    mov r0, r4
    mov r2, r4
    bl func_ov015_02132b7c
    ldr r3, [r5, #0x30]
    cmp r3, #0
    beq @L_0217074c
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r4
    add r0, r3, r0
    bl func_02003608
@L_0217074c:
    bl G2S_GetBG1CharPtr
    mov r6, #0x20
    mov r4, #0
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r4, [sp, #0x10]
    str r6, [sp, #8]
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r6, [sp, #4]
    str r4, [sp, #0xc]
    ldr r0, [r5, #0x14]
    cmp r0, #0
    cmpne r0, #1
    beq @L_021707c0
    cmp r0, #2
    beq @L_021707e0
    b @L_0217087c
@L_021707c0:
    mov r1, #2
    add r4, sp, #8
    add r3, sp, #0x10
    mov r0, r5
    mov r2, r1
    str r4, [sp]
    bl func_ov071_0217062c
    b @L_0217087c
@L_021707e0:
    add r8, sp, #8
    add r7, sp, #0x10
    mov r1, #2
    mov r0, r5
    mov r2, r1
    mov r3, r7
    str r8, [sp]
    bl func_ov071_0217062c
    str r8, [sp]
    ldr r1, [r5, #0x18]
    mov r6, #3
    mov r0, r5
    mov r2, r6
    mov r3, r7
    add r1, r1, #3
    bl func_ov071_0217062c
    mov r0, r5
    mov r3, r7
    mov r1, #9
    mov r2, #4
    str r8, [sp]
    bl func_ov071_0217062c
    add r1, sp, #4
    str r1, [sp]
    mov r2, r6
    mov r0, r5
    mov r1, #0xa
    add r3, sp, #0xc
    bl func_ov071_02170694
    ldr r2, [sp, #0xc]
    mov r0, r5
    mov r1, r4
    bl func_ov071_02170594
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r1, r4
    mov r0, r5
    bl func_ov071_021705dc
    str r0, [sp, #4]
@L_0217087c:
    bl func_ov015_02132240
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov071_02170888(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0xb4
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    mov r0, #1
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_021708ac(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r0, r4, #0xb4
    mov r1, #4
    bl func_ov015_02134198
    add r5, r4, #0xb4
    mov r6, #0
    mov r4, #0xc
@L_021708cc:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #4
    blt @L_021708cc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov071_021708e4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x3c]
    cmp r6, #0
    ldrne r7, =data_ov071_02170d34
    ldrne r1, [r7]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x30
    mov r4, #0xc
@L_02170908:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02170908
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov071_02170930(void)
{
    ldr r12, =func_ov015_02134118
    add r0, r0, #0x30
    mov r1, #0xb
    bx r12
}

extern "C" asm void func_ov071_02170944(void)
{
    stmdb sp!, {r4, lr}
    mov r2, #0xc
    mul r2, r1, r2
    add r0, r0, #0x30
    ldr r1, [r0, r2]
    add r4, r0, r2
    cmp r1, #0
    ldrneb r0, [r4, #9]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r0, [r4, #8]
    cmp r0, #0
    beq @L_02170984
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    b @L_0217099c
@L_02170984:
    ldr r0, =data_020c47b4
    ldr r0, [r0]
    cmp r0, #0
    beq @L_0217099c
    mov r2, #1
    bl _ZN11FileManager6CancelEPvi
@L_0217099c:
    mov r0, #0
    str r0, [r4]
    str r0, [r4, #4]
    strb r0, [r4, #8]
    strb r0, [r4, #9]
    strb r0, [r4, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_021709bc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x30
    mov r1, #0xb
    bl func_ov015_02134198
    mov r4, #0
@L_021709d4:
    mov r0, r5
    mov r1, r4
    bl func_ov071_02170944
    add r4, r4, #1
    cmp r4, #0xb
    blt @L_021709d4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_021709f0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    str r1, [r4, #0xc]
    cmp r1, #1
    beq @L_02170a14
    cmp r1, #2
    moveq r0, #1
    streqb r0, [r4, #0x10]
    b @L_02170a94
@L_02170a14:
    mov r7, #0
    mov r1, r7
    add r0, r4, #0x30
    mov r2, #0x84
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
    cmpne r0, #1
    cmpne r0, #2
    bne @L_02170a8c
    ldr r0, =data_ov071_02170f2c
    add r1, r4, #0x3c
    bl func_ov015_02133f94
@L_02170a8c:
    mov r0, #1
    strb r0, [r4, #0x10]
@L_02170a94:
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov071_02170aac(void)
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
    mov r2, #0xc
    str r4, [r6, #8]
    bl MI_CpuFill8
    add r0, r6, #0x30
    mov r1, r4
    mov r2, #0x84
    bl MI_CpuFill8
    strb r4, [r6, #0x10]
    str r4, [r6, #0x14]
    str r4, [r6, #0x18]
    str r4, [r6, #0x1c]
    strb r4, [r6, #0x20]
    mov r0, r6
    bl func_ov071_02170888
    mov r1, r5
    ldr r0, =data_020c9660
    bl func_ov015_0213b364
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov071_02170b2c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02170b64
    b @L_02170b80
    ldmia sp!, {r4, pc}
    b @L_02170bd4
    ldmia sp!, {r4, pc}
    b @L_02170be8
    b @L_02170bf8
@L_02170b64:
    add r0, r4, #0xb4
    mov r1, #4
    bl func_ov015_02134118
    cmp r0, #0
    movne r0, #3
    strne r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170b80:
    ldr r1, [r4, #0xc]
    bl func_ov071_021704ac
    mov r0, r4
    bl func_ov071_02170930
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170bb0
    cmp r0, #2
    beq @L_02170bc0
    ldmia sp!, {r4, pc}
@L_02170bb0:
    mov r0, r4
    mov r1, #2
    bl func_ov071_021709f0
    ldmia sp!, {r4, pc}
@L_02170bc0:
    mov r0, r4
    bl func_ov071_021708e4
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170bd4:
    bl func_ov071_021704e0
    mov r0, #4
    bl func_ov015_02132568
    mov r0, #6
    str r0, [r4, #8]
@L_02170be8:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, pc}
@L_02170bf8:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov071_021709bc
    mov r0, r4
    mov r1, #1
    bl func_ov071_021709f0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_02170c28(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    beq @L_02170c48
    cmp r1, #6
    beq @L_02170c58
    ldmia sp!, {r4, pc}
@L_02170c48:
    bl func_ov071_021706f8
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170c58:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_02170c6c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov071_021709bc
    mov r0, r5
    bl func_ov071_021708ac
    ldr r1, [r5, #0x24]
    cmp r1, #0
    beq @L_02170c9c
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r5, #0x24]
@L_02170c9c:
    ldr r1, [r5, #0x28]
    cmp r1, #0
    beq @L_02170cb8
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r5, #0x28]
@L_02170cb8:
    mov r4, #1
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213b3fc
    bl func_ov015_02135e10
    ldr r0, [r5, #4]
    mov r1, r4
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_02170cec(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov071_02170d00(void)
{
    bx lr
}
