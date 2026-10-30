#include "ov077/Unk_ov077_0216ffa0.hpp"

extern "C" s32 func_ov077_0216ffa0(...);
extern "C" s32 func_ov077_0217003c(...);
extern "C" s32 func_ov077_0217006c(...);
extern "C" s32 func_ov077_02170094(...);
extern "C" void func_ov077_02170148(void);
extern "C" void func_ov077_0217025c(u8 *arg0);
extern "C" void func_ov077_02170270(u8 *arg0);
extern "C" void func_ov077_021702b4(void);
extern "C" void func_ov077_02170320(s32 arg0);
extern "C" s32 func_ov077_02170340(s32 arg0);
extern "C" void func_ov077_02170354(void);

extern "C" char data_020c4850[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4b32[];
extern "C" char data_020c4b52[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_020d3520[];
extern "C" char data_ov077_0217044c[];
extern "C" char data_ov077_02170458[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003988(void);
extern "C" void func_02003b48(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void sprintf(void);

extern "C" asm s32 func_ov077_0216ffa0(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x80
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x10
    mov r2, #0x18
    bl MI_CpuFill8
    ldr r0, =data_020c4ab4
    ldrsb r0, [r0, #0x7e]
    cmp r0, #0
    movne r4, #1
    strb r4, [r5, #0xc]
    tst r4, #0xff
    add r4, sp, #0
    beq @L_0216fffc
    ldr r1, =data_ov077_0217044c
    ldr r2, =data_020c4b32
    mov r0, r4
    bl sprintf
    mov r0, r4
    add r1, r5, #0x10
    b @L_02170014
@L_0216fffc:
    ldr r1, =data_ov077_02170458
    ldr r2, =data_020c4b52
    mov r0, r4
    bl sprintf
    mov r0, r4
    add r1, r5, #0x1c
@L_02170014:
    bl func_ov015_02133f94
    mov r0, #1
    str r0, [r5, #8]
    add sp, sp, #0x80
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov077_0217003c(...)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    ldrb r0, [r1, #0xc]
    cmp r0, #0
    ldrne r2, [r1, #0x10]
    cmpne r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4b52
    add r1, r1, #0x1c
    bl func_ov015_021340c0
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov077_0217006c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x10
    mov r4, #0xc
@L_0217007c:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #2
    blt @L_0217007c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov077_02170094(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, [r0, #0x1c]
    cmp r5, #0
    beq @L_021700d0
    ldr r0, [r5, #0xc]
    mov r4, #1
    ldr r1, [r5, #0x10]
    mov r3, r4
    add r0, r5, r0
    mov r2, #0
    bl func_ov015_02132984
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl func_ov015_021322b0
@L_021700d0:
    ldr r4, =data_020d3520
    mov r6, #0
    mov r5, #0x800
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    ldr r4, =data_020d2d20
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    mov r0, r6
    ldr r4, =data_020d2520
    mov r2, r5
    mov r1, r4
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov077_02170148(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl G2S_GetBG0CharPtr
    mov r4, #0x20
    mov r5, #0
    mov r1, r0
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r4
    bl DC_FlushRange
    ldr r4, [r6, #0x1c]
    cmp r4, #0
    beq @L_021701ac
    ldr r0, [r4, #0x14]
    ldr r2, [r4, #0x18]
    mov r1, r5
    add r0, r4, r0
    bl func_02003988
    ldr r0, [r4, #0xc]
    ldr r2, [r4, #0x10]
    mov r1, r5
    add r0, r4, r0
    b @L_021701b8
@L_021701ac:
    ldr r0, =data_020d3520
    mov r1, r5
    mov r2, #0x800
@L_021701b8:
    bl func_02003608
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
    mov r4, #0x800
    ldr r0, =data_020d2d20
    mov r1, r6
    mov r2, r4
    bl func_020036e8
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    mov r2, r4
    ldr r0, =data_020d2520
    mov r1, r6
    bl func_020037c8
    mov r1, r6
    ldr r0, =data_020c4850
    ldr r3, [r0]
    ldr r0, [r3, #0x14]
    ldr r2, [r3, #0x18]
    add r0, r3, r0
    bl func_02003b48
    bl func_ov015_02132240
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov077_0217025c(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    func_ov077_0216ffa0((s32)arg0, 0);
}

extern "C" void func_ov077_02170270(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x8) != 1)
        return;
    s32 v0 = func_ov015_02134118((arg0 + 0x10), 2);
    if (v0 == 0)
        return;
    func_ov077_0217003c((s32)arg0);
    func_ov077_02170094((s32)arg0);
    *(s32 *)(arg0 + 0x8) = 2;
}

extern "C" asm void func_ov077_021702b4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_021702d4
    cmp r1, #3
    beq @L_021702f4
    ldmia sp!, {r3, r4, r5, pc}
@L_021702d4:
    bl func_ov077_02170148
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
@L_021702f4:
    ldr r5, =data_020d2520
    mov r4, #0x800
    mov r0, r5
    mov r1, r4
    bl DC_FlushRange
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl func_020037c8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov077_02170320(s32 arg0)
{
    func_ov015_02134198((arg0 + 0x10), 2);
    func_ov077_0217006c(arg0);
}

extern "C" s32 func_ov077_02170340(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov077_02170354(void)
{
}
