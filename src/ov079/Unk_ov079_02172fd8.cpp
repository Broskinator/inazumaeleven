#include "ov079/Unk_ov079_02172fd8.hpp"

extern "C" void func_ov079_02172fd8(void);
extern "C" void func_ov079_02173028(void);
extern "C" void func_ov079_0217308c(void);
extern "C" void func_ov079_021731f8(void);
extern "C" void func_ov079_021738b4(void);
extern "C" void func_ov079_02173988(void);
extern "C" void func_ov079_02173b10(void);
extern "C" void func_ov079_02173b54(void);
extern "C" void func_ov079_02173c7c(void);
extern "C" s32 func_ov079_02173c90(u8 *arg0);
extern "C" void func_ov079_02173c98(void);
extern "C" void func_ov079_02173c9c(void);
extern "C" void func_ov079_02173ca0(void);

extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" void DC_FlushRange(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003608(void);
extern "C" void func_020036e8(void);
extern "C" void func_020037c8(void);
extern "C" void func_02003988(void);
extern "C" void func_02003b48(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_021322d8(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02135440(void);
extern "C" void func_ov015_02135e10(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213c33c(void);
extern "C" void func_ov079_021701f4(void);
extern "C" void func_ov079_02170240(void);
extern "C" void func_ov079_021702a4(void);
extern "C" void func_ov079_021702dc(void);
extern "C" void func_ov079_02170708(void);
extern "C" void func_ov079_02170970(void);
extern "C" void func_ov079_021711dc(void);
extern "C" void func_ov079_02172d90(void);
extern "C" void func_ov079_02172f24(void);
extern "C" void func_ov079_02172f40(void);
extern "C" void func_ov079_02172f88(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov079_02172fd8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x58
    mov r0, #0xc
    mla r5, r1, r0, r3
    ldr r0, [r5, #4]
    mov r4, r2
    cmp r0, #0
    beq @L_02173020
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
@L_02173020:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov079_02173028(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0xb8
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

extern "C" asm void func_ov079_0217308c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, r1
    mov r4, r2
    mov r7, #4
    mov r6, r0
    mov r1, r7
    mov r2, r7
    mov r3, r5
    str r4, [sp]
    bl func_ov079_02173028
    mov r0, r6
    mov r2, r7
    mov r3, r5
    str r4, [sp]
    mov r1, #5
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r1, #6
    mov r2, r7
    mov r3, r5
    bl func_ov079_02173028
    ldr r0, [r6, #0x14]
    mov r2, r7
    cmp r0, #0xb
    mov r0, r6
    mov r3, r5
    bne @L_02173104
    mov r1, #7
    b @L_02173108
@L_02173104:
    mov r1, #0xf
@L_02173108:
    str r4, [sp]
    bl func_ov079_02173028
    mov r9, #0xb
    mov r8, #4
    mov r0, r6
    mov r1, r9
    mov r2, r8
    mov r3, r5
    str r4, [sp]
    bl func_ov079_02173028
    mov r7, #0xc
    mov r0, r6
    mov r1, r7
    mov r2, r8
    mov r3, r5
    str r4, [sp]
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r1, #0xe
    mov r2, r8
    mov r3, r5
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r1, #0x11
    mov r2, #9
    mov r3, r5
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r1, #0x12
    mov r2, #0xa
    mov r3, r5
    bl func_ov079_02173028
    mov r2, r9
    str r4, [sp]
    mov r0, r6
    mov r1, #0x13
    mov r3, r5
    bl func_ov079_02173028
    mov r2, r7
    str r4, [sp]
    mov r0, r6
    mov r1, #0x14
    mov r3, r5
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r1, #0x10
    mov r2, #0xf
    mov r3, r5
    bl func_ov079_02173028
    str r4, [sp]
    mov r0, r6
    mov r2, r8
    mov r3, r5
    mov r1, #0xd
    bl func_ov079_02173028
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov079_021731f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r9, r0
    ldr r8, [r9, #0xb8]
    mov r4, #7
    cmp r8, #0
    mov r5, #1
    mov r6, #0
    beq @L_0217326c
    ldr r0, [r8, #0xc]
    ldr r1, [r8, #0x10]
    mov r2, r6
    mov r3, r5
    add r0, r8, r0
    bl func_ov015_02132984
    mov r0, r8
    mov r1, r5
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r8, #0x14]
    ldr r2, [r8, #0x18]
    add r0, r8, r0
    mov r1, r6
    bl func_02003988
    ldr r0, [r8, #0xc]
    ldr r2, [r8, #0x10]
    mov r1, r6
    add r0, r8, r0
    bl func_02003608
@L_0217326c:
    bl G2S_GetBG1CharPtr
    mov r7, #0x20
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r7
    bl DC_FlushRange
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r6, [sp, #8]
    str r7, [sp, #4]
    ldr r8, [r9, #0xc4]
    cmp r8, #0
    beq @L_02173318
    ldr r0, [r8, #0xc]
    mov r10, #2
    ldr r1, [r8, #0x10]
    mov r3, r10
    add r0, r8, r0
    add r2, r6, #1
    bl func_ov015_02132984
    str r0, [sp, #8]
    mov r0, r8
    mov r2, r10
    mov r1, #1
    bl func_ov015_021322b0
    ldr r0, [r8, #0x14]
    ldr r1, [sp, #4]
    add r0, r8, r0
    ldr r2, [r8, #0x18]
    bl func_02003b48
    ldr r1, [sp, #4]
    ldr r0, [r8, #0x18]
    add r0, r1, r0
    str r0, [sp, #4]
@L_02173318:
    ldr r0, [r9, #0x14]
    cmp r0, #0xb
    addls pc, pc, r0, lsl #2
    b @L_021738a0
    b @L_02173358
    b @L_02173380
    b @L_021735b4
    b @L_021735b4
    b @L_021735b4
    b @L_021735b4
    b @L_021735b4
    b @L_021735b4
    b @L_02173380
    b @L_021736c8
    b @L_021733b4
    b @L_02173434
@L_02173358:
    mov r4, #0x800
    ldr r0, =data_020d2d20
    mov r1, r6
    mov r2, r4
    bl func_020036e8
    ldr r0, =data_020d2520
    mov r1, r6
    mov r2, r4
    bl func_020037c8
    b @L_021738a0
@L_02173380:
    ldr r0, =data_020d2520
    mov r1, #0
    mov r2, #0x800
    bl func_020037c8
    mov r4, #4
    mov r0, r9
    mov r1, r4
    mov r2, r6
    bl func_ov079_02172f40
    mov r0, r9
    mov r1, r4
    mov r2, r7
    b @L_021735ac
@L_021733b4:
    ldr r0, =data_020d2520
    mov r1, #0
    mov r2, #0x800
    bl func_020037c8
    mov r4, #4
    ldr r2, [sp, #8]
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172f40
    str r0, [sp, #8]
    ldr r2, [sp, #4]
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172fd8
    str r0, [sp, #4]
    ldr r8, [r9, #0xd0]
    cmp r8, #0
    beq @L_021738a0
    mov r4, #3
    mov r0, r8
    mov r2, r4
    add r1, r6, #1
    bl func_ov015_02132a04
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_ov015_021322b0
    ldr r1, [r9, #0xd0]
    mov r0, r5
    mov r2, r7
    bl func_ov015_02132b7c
    b @L_021738a0
@L_02173434:
    mov r8, #4
    add r4, sp, #8
    add r10, sp, #4
    mov r0, r9
    mov r1, r8
    mov r2, r8
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r2, r8
    mov r1, #5
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #6
    mov r2, r8
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #7
    mov r2, r8
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #0xe
    mov r2, r8
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #0xb
    mov r2, r8
    mov r3, r4
    str r10, [sp]
    bl func_ov079_02173028
    mov r3, r4
    mov r0, r9
    mov r1, #0xc
    mov r2, r8
    str r10, [sp]
    bl func_ov079_02173028
    mov r2, r6
    mov r0, r9
    mov r1, r8
    bl func_ov079_02172f40
    mov r4, r0
    mov r1, r8
    mov r2, r7
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r4
    mov r4, r0
    mov r0, r9
    mov r1, r6
    bl func_ov079_02172f40
    mov r2, r4
    mov r4, r0
    mov r1, r6
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r4
    mov r4, r0
    mov r0, r9
    mov r1, r5
    bl func_ov079_02172f40
    mov r2, r4
    mov r4, r0
    mov r1, r5
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r4
    mov r4, #2
    mov r5, r0
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172f40
    mov r1, r4
    mov r4, r0
    mov r2, r5
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r4
    mov r4, #3
    mov r5, r0
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172f40
    mov r0, r9
    mov r1, r4
    mov r2, r5
@L_021735ac:
    bl func_ov079_02172f88
    b @L_021738a0
@L_021735b4:
    mov r0, r9
    mov r1, r6
    mov r2, r6
    bl func_ov079_02172f40
    mov r5, r0
    mov r0, r9
    mov r1, r6
    mov r2, r7
    bl func_ov079_02172f88
    mov r4, #4
    mov r6, r0
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_ov079_02172f40
    mov r5, r0
    mov r0, r9
    mov r1, r4
    mov r2, r6
    bl func_ov079_02172f88
    mov r4, r0
    ldr r0, [r9, #0x1c0]
    cmp r0, #0
    beq @L_02173630
    add r1, r5, #1
    mov r2, #7
    bl func_ov015_02132a04
    ldr r1, [r9, #0x1c0]
    mov r2, r4
    mov r0, #1
    bl func_ov015_02132b7c
@L_02173630:
    ldr r0, [r9, #0x1cc]
    cmp r0, #0
    beq @L_02173648
    mov r1, #1
    mov r2, #7
    bl func_ov015_021322d8
@L_02173648:
    add r4, sp, #8
    mov r5, #5
    add r6, sp, #4
    mov r0, r9
    mov r2, r5
    mov r3, r4
    mov r1, #8
    str r6, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r2, r5
    mov r3, r4
    mov r1, #9
    str r6, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r2, r5
    mov r3, r4
    mov r1, #0xa
    str r6, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, r4
    mov r2, r6
    bl func_ov079_0217308c
    mov r0, r9
    mov r3, r4
    mov r1, #0x15
    mov r2, #6
    str r6, [sp]
    bl func_ov079_02173028
    b @L_021738a0
@L_021736c8:
    mov r0, r9
    mov r1, r6
    mov r2, r6
    bl func_ov079_02172f40
    mov r5, r0
    mov r0, r9
    mov r1, r6
    mov r2, r7
    bl func_ov079_02172f88
    mov r6, #5
    mov r7, r0
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl func_ov079_02172f40
    mov r5, r0
    mov r1, r6
    mov r2, r7
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r5
    mov r5, #6
    mov r6, r0
    mov r0, r9
    mov r1, r5
    bl func_ov079_02172f40
    mov r1, r5
    mov r5, r0
    mov r2, r6
    mov r0, r9
    bl func_ov079_02172f88
    mov r2, r5
    mov r5, r0
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172f40
    mov r6, r0
    mov r2, r5
    mov r0, r9
    mov r1, r4
    bl func_ov079_02172f88
    mov r5, r0
    ldr r0, [r9, #0x1c0]
    cmp r0, #0
    beq @L_02173798
    mov r2, r4
    add r1, r6, #1
    bl func_ov015_02132a04
    ldr r1, [r9, #0x1c0]
    mov r2, r5
    mov r0, #1
    bl func_ov015_02132b7c
@L_02173798:
    ldr r0, [r9, #0x1cc]
    cmp r0, #0
    beq @L_021737b0
    mov r1, #1
    mov r2, #7
    bl func_ov015_021322d8
@L_021737b0:
    add r4, sp, #8
    add r5, sp, #4
    mov r0, r9
    mov r3, r4
    mov r1, #0x15
    mov r2, #6
    str r5, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_ov079_0217308c
    mov r0, r9
    mov r3, r4
    mov r1, #0x19
    mov r2, #8
    str r5, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #0x1a
    mov r2, #0xd
    mov r3, r4
    str r5, [sp]
    bl func_ov079_02173028
    mov r6, #0xe
    mov r0, r9
    mov r1, #0x1b
    mov r2, r6
    mov r3, r4
    str r5, [sp]
    bl func_ov079_02173028
    mov r0, r9
    mov r1, #0x1c
    mov r2, r6
    mov r3, r4
    str r5, [sp]
    bl func_ov079_02173028
    mov r2, r6
    mov r0, r9
    mov r1, #0x1d
    mov r3, r4
    str r5, [sp]
    bl func_ov079_02173028
    mov r6, #0x1e
    mov r8, #8
    mov r7, #0xc
    b @L_02173898
@L_0217386c:
    mla r0, r6, r7, r9
    ldr r0, [r0, #0xb8]
    cmp r0, #0
    beq @L_02173894
    mov r0, r9
    mov r1, r6
    mov r2, r8
    mov r3, r4
    str r5, [sp]
    bl func_ov079_02173028
@L_02173894:
    add r6, r6, #1
@L_02173898:
    cmp r6, #0x23
    ble @L_0217386c
@L_021738a0:
    bl func_ov015_02132240
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov079_021738b4(void)
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
    add r0, r7, #0x58
    mov r2, #0x60
    bl MI_CpuFill8
    add r0, r7, #0xb8
    mov r1, r5
    mov r2, #0x1b0
    bl MI_CpuFill8
    ldr r0, =data_020c47b4
    mov r4, #0xfc
    mov r1, r4
    mov r2, r5
    mov r3, r6
    bl _ZN8GameHeap5AllocEiii
    sub r1, r4, #0xfd
    str r0, [r7, #0x34]
    strb r5, [r7, #0x11]
    str r5, [r7, #0x14]
    strh r5, [r7, #0x18]
    strh r5, [r7, #0x1a]
    strh r5, [r7, #0x1c]
    strh r1, [r7, #0x1e]
    str r1, [r7, #0x2c]
    strb r5, [r7, #0x20]
    strb r5, [r7, #0x21]
    strb r5, [r7, #0x23]
    str r5, [r7, #0x24]
    strb r5, [r7, #0x28]
    strb r5, [r7, #0x30]
    strb r5, [r7, #0x22]
    strb r5, [r7, #0x31]
    mov r0, r7
    bl func_ov079_02170240
    mov r1, r6
    ldr r0, =data_020c9660
    bl func_ov015_0213b364
    strb r5, [r7, #0x54]
    add r0, r7, #0x200
    strh r5, [r0, #0x98]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov079_02173988(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #8
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_021739c4
    ldmia sp!, {r4, pc}
    b @L_021739e0
    b @L_02173a40
    ldmia sp!, {r4, pc}
    b @L_02173ab8
    b @L_02173ac4
    b @L_02173af0
@L_021739c4:
    add r0, r4, #0x268
    mov r1, #4
    bl func_ov015_02134118
    cmp r0, #0
    movne r0, #2
    strne r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_021739e0:
    ldr r1, [r4, #0xc]
    bl func_ov079_021711dc
    add r0, r4, #0xb8
    mov r1, #0x24
    bl func_ov015_02134118
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02173a14
    cmp r0, #2
    beq @L_02173a24
    ldmia sp!, {r4, pc}
@L_02173a14:
    mov r0, r4
    mov r1, #2
    bl func_ov079_02170708
    ldmia sp!, {r4, pc}
@L_02173a24:
    mov r0, r4
    bl func_ov079_021702dc
    mov r0, r4
    bl func_ov079_021701f4
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02173a40:
    bl func_ov079_02172d90
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02173a9c
    ldr r2, =0x4001040
    ldr r1, =0xf0ff
    mov r0, #0xf
    strh r1, [r2]
    strh r0, [r2, #4]
    sub r1, r2, #0x40
    ldr r0, [r1]
    bic r0, r0, #0xe000
    orr r0, r0, #0x2000
    str r0, [r1]
    ldrh r0, [r2, #8]
    bic r0, r0, #0x3f
    orr r0, r0, #0xf
    strh r0, [r2, #8]
    ldrh r0, [r2, #0xa]
    bic r0, r0, #0x3f
    orr r0, r0, #0x2f
    strh r0, [r2, #0xa]
@L_02173a9c:
    ldrb r0, [r4, #0x54]
    cmp r0, #1
    beq @L_02173ab0
    mov r0, #3
    bl func_ov015_02132568
@L_02173ab0:
    mov r0, #6
    str r0, [r4, #8]
@L_02173ab8:
    mov r0, r4
    bl func_ov079_02172f24
    ldmia sp!, {r4, pc}
@L_02173ac4:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov079_02170970
    mov r0, r4
    mov r1, #1
    bl func_ov079_02170708
    ldmia sp!, {r4, pc}
@L_02173af0:
    bl func_ov079_02170970
    mov r0, r4
    mov r1, #1
    bl func_ov079_02170708
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov079_02173b10(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #5
    beq @L_02173b30
    cmp r1, #6
    beq @L_02173b40
    ldmia sp!, {r4, pc}
@L_02173b30:
    bl func_ov079_021731f8
    mov r0, #4
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02173b40:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov079_02173b54(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    bl func_ov079_02170970
    mov r0, r10
    bl func_ov079_021702a4
    ldr r0, =gGameState
    mov r9, #0
    ldrb r0, [r0, #0x1a]
    mov r4, #0xc
    ldr r8, =data_020c47b4
    cmp r0, #0
    ldrne r1, =0x4001000
    mov r7, r9
    ldrne r0, [r1]
    mov r6, r9
    bicne r0, r0, #0xe000
    strne r0, [r1]
    mov r5, r4
    mov r11, r4
    b @L_02173bec
@L_02173ba4:
    mla r0, r9, r5, r10
    ldr r1, [r0, #0x58]
    cmp r1, #0
    beq @L_02173bc4
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    mla r0, r9, r4, r10
    str r7, [r0, #0x58]
@L_02173bc4:
    mla r0, r9, r11, r10
    ldr r1, [r0, #0x5c]
    cmp r1, #0
    beq @L_02173be8
    mov r0, r8
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0xc
    mla r0, r9, r0, r10
    str r6, [r0, #0x5c]
@L_02173be8:
    add r9, r9, #1
@L_02173bec:
    cmp r9, #8
    blt @L_02173ba4
    ldr r1, [r10, #0x34]
    cmp r1, #0
    beq @L_02173c10
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r10, #0x34]
@L_02173c10:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213b3fc
    bl func_ov015_02135e10
    ldr r0, [r10, #4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    cmp r0, #0x10
    bgt @L_02173c38
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    b @L_02173c54
@L_02173c38:
    cmp r0, #0x5d
    bgt @L_02173c54
    cmp r0, #0x5a
    blt @L_02173c54
    cmpne r0, #0x5c
    cmpne r0, #0x5d
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02173c54:
    ldr r0, [r10, #4]
    mov r1, #1
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov079_02173c7c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov079_02173c90(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x8);
}

extern "C" void func_ov079_02173c98(void)
{
}

extern "C" void func_ov079_02173c9c(void)
{
}

extern "C" void func_ov079_02173ca0(void)
{
}
