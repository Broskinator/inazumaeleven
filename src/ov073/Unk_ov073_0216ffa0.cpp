#include "ov073/Unk_ov073_0216ffa0.hpp"

extern "C" void func_ov073_0216ffa0(s32 arg0);
extern "C" void func_ov073_0216ffcc(void);
extern "C" void func_ov073_0217001c(s32 arg0);
extern "C" void func_ov073_02170030(s32 arg0);
extern "C" void func_ov073_02170044(void);
extern "C" void func_ov073_0217005c(void);
extern "C" void func_ov073_02170084(void);
extern "C" void func_ov073_021700bc(void);
extern "C" void func_ov073_021700d8(void);
extern "C" void func_ov073_021701d4(void);
extern "C" void func_ov073_021702a8(void);
extern "C" void func_ov073_02170300(void);
extern "C" void func_ov073_021703fc(void);
extern "C" void func_ov073_02170550(void);
extern "C" void func_ov073_02170554(void);
extern "C" void func_ov073_02170558(void);
extern "C" void func_ov073_021705cc(void);
extern "C" void func_ov073_02170634(void);
extern "C" void func_ov073_0217067c(void);
extern "C" s32 func_ov073_021706cc(s32 arg0);
extern "C" void func_ov073_021706e0(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c9660[];
extern "C" char data_ov073_021706e4[];
extern "C" char data_ov073_021706e4_b[];
extern "C" char data_ov073_02170814[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_02003988(void);
extern "C" void func_02003b48(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" void func_ov015_02133e8c(void);
extern "C" s32 func_ov015_02133f94(...);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02135e10(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b870(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" void func_ov073_0216ffa0(s32 arg0)
{
    MI_CpuFill8((arg0 + 0x20), 0, 0x30);
    func_ov015_02133f94((s32)data_ov073_02170814, (arg0 + 0x20));
}

extern "C" asm void func_ov073_0216ffcc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_ov073_021706e4
    ldr r6, [r0, #0x20]
    ldr r1, [r1]
    ldr r7, =data_ov073_021706e4_b
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x20
    mov r4, #0xc
@L_0216fff0:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_0216fff0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov073_0217001c(s32 arg0)
{
    func_ov015_02134118((arg0 + 0x20), 4);
}

extern "C" void func_ov073_02170030(s32 arg0)
{
    func_ov015_02134198((arg0 + 0x20), 4);
}

extern "C" asm void func_ov073_02170044(void)
{
    add r2, r0, #0x20
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =func_ov015_02134208
    bx r12
}

extern "C" asm void func_ov073_0217005c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_02170068:
    mov r0, r5
    mov r1, r4
    bl func_ov073_02170044
    add r4, r4, #1
    cmp r4, #4
    blt @L_02170068
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov073_02170084(void)
{
    ldrsb r2, [r1]
    mov r0, #1
    cmp r2, #0
    bxeq lr
@L_02170094:
    ldrsb r2, [r1]
    cmp r2, #0xa
    bne @L_021700ac
    ldrsb r2, [r1, #1]
    cmp r2, #0
    addne r0, r0, #1
@L_021700ac:
    ldrsb r2, [r1, #1]!
    cmp r2, #0
    bne @L_02170094
    bx lr
}

extern "C" asm void func_ov073_021700bc(void)
{
    mov r3, #0xc
    mla r0, r1, r3, r0
    ldr r1, [r0, #0x20]
    ldr r12, =func_ov015_02132b7c
    mov r0, #1
    bx r12
}

extern "C" asm void func_ov073_021700d8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r6, [r5, #0x2c]
    mov r7, #1
    cmp r6, #0
    mov r4, #0
    beq @L_0217011c
    ldr r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    mov r2, r4
    mov r3, r7
    add r0, r6, r0
    bl func_ov015_02132984
    mov r0, r6
    mov r1, r7
    mov r2, r7
    bl func_ov015_021322b0
@L_0217011c:
    ldr r8, [r5, #0x38]
    cmp r8, #0
    beq @L_02170158
    ldr r0, [r8, #0xc]
    mov r6, #2
    ldr r1, [r8, #0x10]
    mov r2, r7
    mov r3, r6
    add r0, r8, r0
    bl func_ov015_02132984
    mov r4, r0
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl func_ov015_021322b0
@L_02170158:
    ldr r7, [r5, #0x44]
    cmp r7, #0
    beq @L_02170190
    ldr r0, [r7, #0xc]
    mov r6, #3
    ldr r1, [r7, #0x10]
    mov r3, r6
    add r0, r7, r0
    add r2, r4, #1
    bl func_ov015_02132984
    mov r0, r7
    mov r2, r6
    mov r1, #1
    bl func_ov015_021322b0
@L_02170190:
    ldr r0, [r5, #0xc]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r5, #0x10]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    beq @L_021701cc
    ldrh r4, [r5, #0x18]
    ldrh r1, [r5, #0x1a]
    mov r2, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
@L_021701cc:
    bl func_ov015_02132240
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov073_021701d4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r6, [r4, #0x2c]
    cmp r6, #0
    beq @L_02170214
    ldr r0, [r6, #0x14]
    mov r5, #0
    ldr r2, [r6, #0x18]
    mov r1, r5
    add r0, r6, r0
    bl func_02003988
    ldr r0, [r6, #0xc]
    ldr r2, [r6, #0x10]
    mov r1, r5
    add r0, r6, r0
    bl func_02003608
@L_02170214:
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
    mov r0, r4
    mov r1, #2
    mov r2, r5
    bl func_ov073_021700bc
    mov r2, r0
    mov r0, r4
    mov r1, #3
    bl func_ov073_021700bc
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r5
    bl DC_FlushRange
    ldr r0, [r4, #0xc]
    cmp r0, #0
    ldrne r0, [r4, #0x10]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #0x20
    strne r0, [r4, #0x14]
    bl func_ov015_02132240
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov073_021702a8(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    ldr r0, [lr, #0xc]
    cmp r0, #0
    ldrne r0, [lr, #0x10]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [lr, #0x1c]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [lr, #0x18]
    ldrh r1, [lr, #0x1a]
    mov r12, #0
    ldr r0, [lr, #0x10]
    mul r3, r2, r1
    ldr r1, [lr, #0x14]
    mov r2, r3, lsl #5
    strb r12, [lr, #0x1c]
    bl func_02003b48
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov073_02170300(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    ldr r6, =data_020c9660
    mov r5, #1
    mov r4, #0
    mov r7, r0
    mov r0, r6
    mov r1, r5
    mov r2, r5
    mov r3, r4
    bl func_ov015_0213b870
    ldr r2, [r7, #0x38]
    cmp r2, #0
    beq @L_02170384
    str r5, [sp]
    str r5, [sp, #4]
    str r5, [sp, #8]
    mov r1, #2
    str r1, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r1, [r2, #0xc]
    mov r0, r6
    add r1, r2, r1
    add r6, r1, #0x168
    mov r1, r5
    mov r2, r5
    mov r3, r4
    str r6, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170384:
    ldr r3, [r7, #0x44]
    cmp r3, #0
    beq @L_021703dc
    mov r0, #2
    mov r1, #1
    stmia sp, {r0, r1}
    str r0, [sp, #8]
    mov r0, #8
    str r0, [sp, #0xc]
    mov r0, #0x1c
    str r0, [sp, #0x10]
    mov r0, #9
    str r0, [sp, #0x14]
    mov r0, #3
    str r0, [sp, #0x18]
    ldr r2, [r3, #0xc]
    ldr r0, =data_020c9660
    add r4, r3, r2
    mov r2, r1
    mov r3, #0
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021703dc:
    mov r0, r7
    bl func_ov073_021703fc
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov073_021703fc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x20
    mov r8, r0
    ldr r0, =0x125
    bl func_0209d8b8
    ldr r12, [r8, #0xc]
    mov r7, r0
    cmp r12, #0
    ldrne r0, [r8, #0x10]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r6, #3
    mov r5, #1
    str r6, [sp]
    str r5, [sp, #4]
    mov r0, #4
    str r0, [sp, #8]
    mov r4, #0
    mov r0, #9
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    mov r0, #7
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, r4
    mov r3, r4
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add r0, r8, #0xc
    bl func_ov015_02133dc8
    mov r0, r8
    mov r1, r7
    bl func_ov073_02170084
    mov r7, #0xa
    smulbb r0, r0, r7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    rsb r0, r0, #0x1e
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    ldr r9, =data_020c46a8
    mov r1, r5
    ldr r0, [r9]
    mov r2, #8
    bl _ZN8TextFont10SetSpacingEii
    add r0, r7, #0x20c
    bl func_0209d8b8
    str r6, [sp]
    mov r2, r10
    str r5, [sp, #4]
    mov r3, r0
    ldr r0, [r8, #0x10]
    mov r1, r4
    str r0, [sp, #8]
    ldrh r0, [r8, #0x18]
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r8, #0x1a]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, [r9]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    strb r5, [r8, #0x1c]
    ldr r0, [r8, #0x10]
    ldrh r2, [r8, #0x18]
    ldrh r1, [r8, #0x1a]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov073_02170550(void)
{
}

extern "C" void func_ov073_02170554(void)
{
}

extern "C" asm void func_ov073_02170558(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x20
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r0, [r5, #4]
    mov r4, #1
    ldr r2, [r0]
    mov r1, r4
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, #6
    bl func_ov015_02135440
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213b364
    add r0, r5, #0xc
    mov r1, r4
    bl func_ov015_02133e24
    add r0, r5, #0xc
    mov r1, #0x18
    mov r2, #7
    bl func_ov015_02133e50
    mov r0, r5
    bl func_ov073_0216ffa0
    str r4, [r5, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov073_021705cc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #1
    beq @L_021705f4
    cmp r1, #3
    beq @L_0217061c
    cmp r1, #4
    beq @L_0217062c
    ldmia sp!, {r4, pc}
@L_021705f4:
    bl func_ov073_0217001c
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov073_0216ffcc
    mov r0, r4
    bl func_ov073_021700d8
    mov r0, #2
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_0217061c:
    bl func_ov073_02170300
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_0217062c:
    bl func_ov073_02170300
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov073_02170634(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_02170654
    cmp r1, #4
    beq @L_02170664
    ldmia sp!, {r4, pc}
@L_02170654:
    bl func_ov073_021701d4
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170664:
    bl func_ov073_021702a8
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov073_0217067c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov073_02170030
    mov r0, r5
    bl func_ov073_0217005c
    mov r4, #1
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213b3fc
    mov r1, r4
    add r0, r5, #0xc
    bl func_ov015_02133e8c
    bl func_ov015_02135e10
    ldr r0, [r5, #4]
    mov r1, r4
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov073_021706cc(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov073_021706e0(void)
{
}
