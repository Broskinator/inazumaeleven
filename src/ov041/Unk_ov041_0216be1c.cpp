#include "ov041/Unk_ov041_0216be1c.hpp"

extern "C" void func_ov041_0216be1c(void);
extern "C" s32 func_ov041_0216bf48(s32 arg0);
extern "C" void func_ov041_0216bf5c(void);

extern "C" char g3DPlaneCtrl[];
extern "C" char data_ov041_0216c01c[];
extern "C" char data_ov041_0216c034[];
extern "C" s32 _ZdlPv(...);
extern "C" void C3DPlaneCtrl_SetFlag(void);
extern "C" void C3DPlaneCtrl_ClearFlag(void);

extern "C" asm void func_ov041_0216be1c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x4c
    add r6, r0, #0x3000
    ldr r0, [r6, #0x11c]
    ldr r9, =data_ov041_0216c01c
    ldr r10, [r6, #0x120]
    ldr r12, [r6, #0x118]
    movs lr, r2
    mov r5, r1
    mov r4, r3
    str r0, [sp, #0x38]
    ldmia r9!, {r0, r1, r2, r3}
    add r7, sp, #0x1c
    str r12, [sp, #0x34]
    mov r12, r7
    stmia r7!, {r0, r1, r2, r3}
    ldmia r9, {r0, r1}
    ldr r9, =data_ov041_0216c034
    stmia r7, {r0, r1}
    add r8, sp, #4
    mov r7, r8
    ldmia r9!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    ldmia r9, {r0, r1}
    str r10, [sp, #0x3c]
    str r10, [sp, #0x40]
    str r10, [sp, #0x44]
    str r10, [sp, #0x48]
    mov lr, #3
    stmia r8, {r0, r1}
    bne @L_0216bebc
    ldr r0, =g3DPlaneCtrl
    add r1, sp, #0x34
    ldr r0, [r0]
    ldr r1, [r1, r5, lsl #2]
    mov r2, lr
    mov r3, #2
    bl C3DPlaneCtrl_ClearFlag
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216bebc:
    ldrh r0, [r4, #8]
    ldr r1, [r6, #0x350]
    cmp r1, r0
    bne @L_0216bf18
    ldr r0, [r12, r5, lsl #2]
    cmp r1, r0
    addlt sp, sp, #0x4c
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r7, r5, lsl #2]
    cmp r1, r0
    addgt sp, sp, #0x4c
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r2, #1
    add r1, sp, #0x34
    str r2, [sp]
    ldr r0, =g3DPlaneCtrl
    ldr r1, [r1, r5, lsl #2]
    ldr r0, [r0]
    mov r2, lr
    mov r3, #2
    bl C3DPlaneCtrl_SetFlag
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0216bf18:
    ldr r0, =g3DPlaneCtrl
    add r1, sp, #0x34
    ldr r0, [r0]
    ldr r1, [r1, r5, lsl #2]
    mov r2, lr
    mov r3, #2
    bl C3DPlaneCtrl_ClearFlag
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov041_0216bf48(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov041_0216bf5c(void)
{
}
