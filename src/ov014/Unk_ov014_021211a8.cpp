#include "ov014/Unk_ov014_021211a8.hpp"

extern "C" void func_ov014_021211a8(void);
extern "C" void func_ov014_02121240(void);
extern "C" void func_ov014_02121260(void);
extern "C" void func_ov014_021212d0(void);
extern "C" void func_ov014_02121370(void);
extern "C" void func_ov014_02121520(void);
extern "C" void func_ov014_021215e4(void);
extern "C" void func_ov014_02121700(void);
extern "C" void func_ov014_02121730(void);
extern "C" void func_ov014_021217cc(void);
extern "C" s32 func_ov014_02121808(void);
extern "C" void func_ov014_02121818(void);
extern "C" void func_ov014_02121938(void);
extern "C" void func_ov014_02121958(void);
extern "C" void func_ov014_021219f4(void);
extern "C" void func_ov014_02121a38(void);
extern "C" void func_ov014_02121a8c(void);
extern "C" void func_ov014_02121b34(void);
extern "C" void func_ov014_02121b9c(void);
extern "C" s32 func_ov014_02121ba8(void);
extern "C" void func_ov014_02121bb0(void);
extern "C" void func_ov014_02121c00(void);
extern "C" void func_ov014_02121c58(void);
extern "C" void func_ov014_02121cd0(void);
extern "C" void func_ov014_02121cdc(void);
extern "C" void func_ov014_02121d34(void);
extern "C" void func_ov014_02121dcc(void);
extern "C" void func_ov014_02121e98(void);
extern "C" void func_ov014_02121ec8(void);
extern "C" void func_ov014_02121f34(void);
extern "C" void func_ov014_02121f88(void);
extern "C" void func_ov014_02122040(void);
extern "C" void func_ov014_021221f0(void);
extern "C" void func_ov014_02122244(void);
extern "C" char *func_ov014_02122264(void);
extern "C" void func_ov014_02122270(void);
extern "C" void func_ov014_021222b4(void);
extern "C" void func_ov014_02122310(s32 arg0);
extern "C" void func_ov014_02122330(void);
extern "C" void func_ov014_02122448(void);
extern "C" void func_ov014_02122480(s32 arg0);
extern "C" void func_ov014_02122498(void);
extern "C" s32 func_ov014_021224d8(...);
extern "C" void func_ov014_02122510(s32 arg0, s32 arg1);
extern "C" void func_ov014_02122520(void);
extern "C" void func_ov014_02122568(void);
extern "C" void func_ov014_0212259c(void);
extern "C" void func_ov014_0212261c(void);
extern "C" void func_ov014_0212267c(void);
extern "C" void func_ov014_021227b4(void);
extern "C" void func_ov014_02122820(void);
extern "C" void func_ov014_02122928(void);
extern "C" void func_ov014_021229d4(void);
extern "C" void func_ov014_02122a40(void);
extern "C" void func_ov014_02122b28(void);
extern "C" void func_ov014_02122be0(void);
extern "C" void func_ov014_02122c58(void);
extern "C" void func_ov014_02122cac(void);
extern "C" void func_ov014_02122d20(void);
extern "C" void func_ov014_02122fbc(void);
extern "C" void func_ov014_02123244(void);
extern "C" void func_ov014_021232b8(void);
extern "C" void func_ov014_021234e0(void);
extern "C" void func_ov014_021235a0(void);
extern "C" void func_ov014_021236a8(void);
extern "C" void func_ov014_021237bc(void);
extern "C" void func_ov014_02123ab0(void);
extern "C" void func_ov014_02123bdc(void);
extern "C" void func_ov014_02123c1c(void);

extern "C" char data_ov014_021240a8[];
extern "C" char data_ov014_021240b0[];
extern "C" char data_ov014_021240d0[];
extern "C" char data_ov014_021240d4[];
extern "C" char data_ov014_0212d574[];
extern "C" char data_ov014_0212d57c[];
extern "C" char data_ov014_0212d588[];
extern "C" char data_ov014_0212d5ac[];
extern "C" char data_ov014_0212d5b4[];
extern "C" char data_ov014_0212d5b5[];
extern "C" void DC_InvalidateRange(void);
extern "C" void DC_StoreRange(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void MIi_CpuCopyFast(void);
extern "C" void OS_CancelAlarm(void);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" void OS_InitMutex(void);
extern "C" void OS_LockMutex(void);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" void OS_UnlockMutex(void);
extern "C" void OS_WakeupThread(void);
extern "C" void WMi_GetStatusAddress(void);
extern "C" void func_02007d68(void);
extern "C" void func_02009594(void);
extern "C" s32 func_020095c4(...);
extern "C" void func_020123ec(void);
extern "C" void func_02012640(void);
extern "C" void func_020131c0(void);
extern "C" void func_02013308(void);
extern "C" void func_020135e4(void);
extern "C" void func_0201366c(void);
extern "C" void func_0201372c(void);
extern "C" void func_02013994(void);
extern "C" void func_020142d4(void);
extern "C" void func_020143a4(void);
extern "C" void func_020151b4(void);
extern "C" void func_02015aa0(void);
extern "C" void func_0202273c(void);
extern "C" void func_02022948(void);

extern "C" asm void func_ov014_021211a8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_ov014_0212d574
    mov r4, r0
    ldr r1, [r1, #4]
    cmp r1, #0
    bne @L_021211d0
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_021211d0:
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #1
    beq @L_021211fc
    cmp r2, #3
    beq @L_02121214
    cmp r2, #4
    bne @L_02121208
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r3, r4, r5, pc}
@L_021211fc:
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121208:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_02121214:
    ldrb r0, [r1, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_0212122c
    bl func_ov014_021227b4
    mov r5, r0
@L_0212122c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121240(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    cmpne r1, #0
    bne @L_02121258
    bl func_ov014_021212d0
    ldmia sp!, {r3, pc}
@L_02121258:
    bl func_ov014_02121260
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_02121260(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl OS_DisableInterrupts
    ldr r1, =data_ov014_0212d574
    mov r4, r0
    ldr r1, [r1, #4]
    cmp r1, #0
    bne @L_02121294
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02121294:
    add r0, r1, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_021212bc
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov014_02122820
    mov r5, r0
@L_021212bc:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov014_021212d0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    ldr r5, =data_ov014_0212d574
    mov r4, r0
    ldr r1, [r5, #4]
    cmp r1, #0
    bne @L_021212f8
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_021212f8:
    add r1, r1, #0x1000
    ldrb r1, [r1, #0x2de]
    cmp r1, #3
    beq @L_02121344
    cmp r1, #6
    beq @L_0212131c
    cmp r1, #7
    beq @L_02121338
    b @L_02121350
@L_0212131c:
    mov r0, #7
    bl func_ov014_02121a8c
    ldr r0, [r5, #4]
    mov r1, #4
    add r0, r0, #0x1200
    strh r1, [r0, #0xda]
    b @L_0212135c
@L_02121338:
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r3, r4, r5, pc}
@L_02121344:
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121350:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0212135c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121370(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_ov014_02121808
    movs r5, r0
    bne @L_021213a4
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213a4:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #3
    beq @L_021213c8
    cmp r0, #8
    beq @L_021214c4
    cmp r0, #9
    beq @L_021214d4
    b @L_021214e4
@L_021213c8:
    cmp r8, #0
    bne @L_021213e0
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213e0:
    ldrh r0, [r8, #0x3c]
    cmp r0, #0
    beq @L_021213fc
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213fc:
    cmp r7, #0
    beq @L_02121494
    ldrb r1, [r7]
    cmp r1, #3
    bhi @L_0212141c
    ldrb r0, [r7, #1]
    cmp r0, #4
    bhs @L_0212142c
@L_0212141c:
    add r3, r5, #0x1000
    ldrb r0, [r3, #0x291]
    cmp r0, #0x40
    bls @L_0212143c
@L_0212142c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0212143c:
    strb r1, [r3, #0x290]
    ldrb r0, [r7]
    cmp r0, #0
    bne @L_0212145c
    add r0, r5, #0x1240
    mov r1, #0
    mov r2, #0x50
    b @L_021214a0
@L_0212145c:
    cmp r0, #3
    bhi @L_02121480
    ldrb r12, [r7, #1]
    add r0, r7, #2
    add r1, r5, #0x1240
    mov r2, #0x50
    strb r12, [r3, #0x291]
@L_02121478:
    bl MI_CpuCopy8
    b @L_021214a4
@L_02121480:
    ldrb r2, [r7, #1]
    add r0, r7, #2
    add r1, r5, #0x1240
    strb r2, [r3, #0x291]
    b @L_02121478
@L_02121494:
    add r0, r5, #0x1240
    mov r1, #0
    mov r2, #0x54
@L_021214a0:
    bl MI_CpuFill8
@L_021214a4:
    add r1, r5, #0x2e0
    mov r0, r8
    add r1, r1, #0x1000
    mov r2, #0xc0
    bl MI_CpuCopy8
    mov r0, r6
    bl func_ov014_02121730
    b @L_021214f4
@L_021214c4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214d4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214e4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214f4:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_02121510
    bl func_ov014_02122928
    mov r5, r0
@L_02121510:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov014_02121520(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl OS_DisableInterrupts
    ldr r6, =data_ov014_0212d574
    mov r4, r0
    ldr r1, [r6, #4]
    mov r5, #0
    cmp r1, #0
    bne @L_0212154c
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_0212154c:
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #3
    beq @L_02121578
    cmp r2, #9
    beq @L_02121590
    cmp r2, #0xa
    bne @L_02121584
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r4, r5, r6, pc}
@L_02121578:
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
@L_02121584:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_02121590:
    ldrb r0, [r1, #0x2dd]
    cmp r0, #1
    bne @L_021215b8
    mov r0, #0xa
    bl func_ov014_02121a8c
    ldr r0, [r6, #4]
    mov r1, #6
    add r0, r0, #0x1200
    strh r1, [r0, #0xda]
    b @L_021215d0
@L_021215b8:
    ldrb r0, [r1, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_021215d0
    bl func_ov014_021229d4
    mov r5, r0
@L_021215d0:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov014_021215e4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl OS_DisableInterrupts
    ldr r6, [pc, #0x108]
    mov r4, r0
    ldr r1, [r6, #4]
    mov r5, #0
    cmp r1, #0
    bne @L_02121610
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_02121610:
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #0xd
    addls pc, pc, r2, lsl #2
    b @L_0212169c
    dcd 0xea00001c
    dcd 0xea00000e
    dcd 0xea00001a
    dcd 0xea00001d
    dcd 0xea000018
    dcd 0xea000017
    dcd 0xea00000c
    dcd 0xea000015
    dcd 0xea000014
    dcd 0xea000017
    dcd 0xea000012
    dcd 0xea000011
    dcd 0xea000014
    dcd 0xeaffffff
    dcd 0xebfb9b61
    dcd 0xe3a00002
    dcd 0xe8bd8070
    dcd 0xebfb9b5e
    dcd 0xe1a00005
    dcd 0xe8bd8070
    dcd 0xe3a0000d
    dcd 0xeb000103
    dcd 0xe5961004
    dcd 0xe3a02009
    dcd 0xe2811c12
    dcd 0xe1a00004
    dcd 0xe1c12dba
    dcd 0xebfb9b54
    dcd 0xe3a00003
    dcd 0xe8bd8070
@L_0212169c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0xe5d102dd
    dcd 0xe3500001
    dcd 0x1a000006
    dcd 0xe3a0000d
    dcd 0xeb0000f2
    dcd 0xe5960004
    dcd 0xe3a01009
    dcd 0xe2800c12
    dcd 0xe1c01dba
    dcd 0xea000005
    dcd 0xe5d102df
    dcd 0xe3500001
    dcd 0x13a05007
    dcd 0x1a000001
    dcd 0xeb0004d5
    dcd 0xe1a05000
    dcd 0xe1a00004
    dcd 0xebfb9b3c
    dcd 0xe1a00005
    dcd 0xe8bd8070
    dcd data_ov014_0212d574
}

extern "C" asm void func_ov014_02121700(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    ldr r1, =data_ov014_0212d574
    mov r4, #0
    ldr r1, [r1, #4]
    cmp r1, #0
    addne r1, r1, #0x1000
    ldrneb r4, [r1, #0x2de]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02121730(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =data_ov014_0212d574
    mov r6, #0
    ldr r3, [r1, #4]
    add r1, r3, #0x1000
    cmp r3, #0
    ldr r4, [r1, #0x2d4]
    bne @L_02121764
    bl OS_RestoreInterrupts
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
@L_02121764:
    tst r5, #0x8000
    beq @L_02121784
    ldr r1, =0x3ffe
    orr r6, r6, #0xfe
    tst r5, r1
    orreq r5, r5, #0x82
    orr r6, r6, #0x3f00
    orreq r5, r5, #0xa000
@L_02121784:
    tst r5, #0x20000
    orrne r6, r6, #0x10000
    tst r5, #0x80000
    orrne r6, r6, #0x40000
    tst r5, #0x200000
    orrne r6, r6, #0x100000
    tst r5, #0x800000
    orrne r6, r6, #0x400000
    mvn r1, r6
    and r1, r4, r1
    orr r2, r5, r1
    add r1, r3, #0x1000
    str r2, [r1, #0x2d4]
    bl OS_RestoreInterrupts
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov014_021217cc(void)
{
    stmdb sp!, {r3, lr}
    bl func_ov014_02121808
    add r0, r0, #0x1000
    ldrb r1, [r0, #0x2de]
    cmp r1, #3
    blo @L_02121800
    cmp r1, #0xa
    bhi @L_02121800
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    bne @L_02121800
    bl func_ov014_02122be0
    ldmia sp!, {r3, pc}
@L_02121800:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov014_02121808(void)
{
    return *(s32 *)(data_ov014_0212d574 + 0x4);
}

extern "C" asm void func_ov014_02121818(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r4, r1
    bne @L_02121868
    ldr r1, =data_ov014_0212d574
    mov r3, #3
    ldr r0, [r1, #4]
    mov r2, #0
    add r0, r0, #0x1000
    str r3, [r0, #0x2c0]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2cc]
    b @L_02121920
@L_02121868:
    ldr r1, =data_ov014_0212d574
    ldr r2, [r5]
    ldr r0, [r1, #4]
    and r2, r2, #3
    add r0, r0, #0x1000
    str r2, [r0, #0x2c0]
    ldr r3, [r5, #4]
    ldr r0, [r5, #8]
    and r2, r3, #3
    rsb r2, r2, #4
    and r2, r2, #3
    add r2, r2, #0xc
    cmp r2, r0
    ldr r0, [r1, #4]
    bls @L_021218c0
    mov r2, #0
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    b @L_0212190c
@L_021218c0:
    add r2, r3, #3
    bic r2, r2, #3
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r2, [r5, #4]
    ldr r0, [r1, #4]
    and r2, r2, #3
    rsb r2, r2, #4
    ldr r3, [r5, #8]
    and r2, r2, #3
    sub r2, r3, r2
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    ldr r0, [r1, #4]
    mov r1, #0
    add r2, r0, #0x1000
    ldr r0, [r2, #0x2c4]
    ldr r2, [r2, #0x2c8]
    bl MI_CpuFill8
@L_0212190c:
    ldr r0, =data_ov014_0212d574
    ldr r1, [r5, #0xc]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    str r1, [r0, #0x2cc]
@L_02121920:
    ldr r0, =data_ov014_0212d574
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    str r4, [r0, #0x2d0]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121938(void)
{
    ldr r0, =data_ov014_0212d574
    ldr r1, =0xaaa082
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    str r1, [r0, #0x2d4]
    bx lr
}

extern "C" asm void func_ov014_02121958(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r5, =0x4ec4ec4f
    ldr r6, =data_ov014_0212d574
    mov r10, r0
    mov r8, #0
    mov r7, #1
    mov r4, #0xd
@L_02121974:
    add r2, r10, r8
    mov r0, r2, lsr #0x1f
    smull r1, r9, r5, r2
    add r9, r0, r9, asr #2
    smull r0, r1, r4, r9
    ldr r1, [r6, #4]
    sub r9, r2, r0
    add r0, r1, #0x1000
    ldr r1, [r0, #0x2d4]
    add r0, r9, #1
    tst r1, r7, lsl r0
    beq @L_021219b0
    bl func_ov014_021217cc
    tst r0, r7, lsl r9
    bne @L_021219bc
@L_021219b0:
    add r8, r8, #1
    cmp r8, #0xd
    blt @L_02121974
@L_021219bc:
    add r3, r10, r8
    ldr r2, =0x4ec4ec4f
    mov r0, r3, lsr #0x1f
    smull r1, r4, r2, r3
    add r4, r0, r4, asr #2
    mov r2, #0xd
    smull r0, r1, r2, r4
    sub r4, r3, r0
    add r0, r4, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov014_021219f4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r12, =data_ov014_0212d574
    mov r5, r0
    ldr r0, [r12, #4]
    mov r4, r1
    add r1, r0, #0x1200
    ldrsh r0, [r1, #0xda]
    mov r12, #0
    mov lr, r2
    strh r12, [r1, #0xda]
    str r3, [sp]
    mov r1, r5
    mov r2, r4
    mov r3, lr
    bl func_ov014_02121a38
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121a38(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x10
    ldr r12, =data_ov014_0212d574
    ldr r12, [r12, #4]
    add r12, r12, #0x1000
    ldr lr, [r12, #0x2d0]
    cmp lr, #0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, pc}
    ldr lr, [sp, #0x18]
    strh r0, [sp]
    str r2, [sp, #4]
    str r3, [sp, #8]
    str lr, [sp, #0xc]
    strh r1, [sp, #2]
    ldr r1, [r12, #0x2d0]
    add r0, sp, #0
    blx r1
    add sp, sp, #0x10
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_02121a8c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =data_ov014_0212d574
    mov r4, r0
    ldr r1, [r1, #4]
    add r0, r1, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #9
    bne @L_02121ac8
    cmp r5, #9
    beq @L_02121ac8
    add r0, r1, #0x294
    add r0, r0, #0x1000
    bl OS_CancelAlarm
@L_02121ac8:
    ldr r0, =data_ov014_0212d574
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldrb r1, [r0, #0x2de]
    cmp r1, #0xb
    strneb r5, [r0, #0x2de]
    cmp r5, #9
    bne @L_02121b1c
    ldr r5, =data_ov014_0212d574
    ldr r0, [r5, #4]
    add r0, r0, #0x294
    add r0, r0, #0x1000
    bl OS_CancelAlarm
    mov r2, #0
    str r2, [sp]
    ldr r0, [r5, #4]
    ldr r1, =0x22f5341
    add r0, r0, #0x294
    ldr r3, =func_ov014_02121b9c
    add r0, r0, #0x1000
    bl func_02007d68
@L_02121b1c:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121b34(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    ldr r5, =data_ov014_0212d574
    mov r4, r0
    ldr r0, [r5, #4]
    add r0, r0, #0x294
    add r0, r0, #0x1000
    bl OS_CancelAlarm
    ldr r1, [r5, #4]
    add r0, r1, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #9
    bne @L_02121b84
    add r0, r1, #0x294
    mov r2, #0
    ldr r1, =0x22f5341
    ldr r3, =func_ov014_02121b9c
    add r0, r0, #0x1000
    str r2, [sp]
    bl func_02007d68
@L_02121b84:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov014_02121b9c(void)
{
    func_ov014_02121b34();
}

extern "C" s32 func_ov014_02121ba8(void)
{
    return 1;
}

extern "C" asm void func_ov014_02121bb0(void)
{
    stmdb sp!, {r4, lr}
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_ov014_02121808
    cmp r0, #0
    bne @L_02121bd4
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
@L_02121bd4:
    add r1, r0, #0x1000
    ldr r0, [r1, #0x2c4]
    cmp r0, #0
    ldrne r2, [r1, #0x2c8]
    cmpne r2, #0
    ble @L_02121bf4
    mov r1, #0
    bl MI_CpuFill8
@L_02121bf4:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02121c00(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_ov014_02121808
    cmp r0, #0
    mov r5, #0
    bne @L_02121c2c
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
@L_02121c2c:
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2c4]
    cmp r1, #0
    beq @L_02121c48
    ldr r0, [r0, #0x2c8]
    cmp r0, #0xc
    ldrhi r5, [r1]
@L_02121c48:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121c58(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_ov014_02121808
    cmp r0, #0
    bne @L_02121c84
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121c84:
    add r1, r0, #0x1000
    cmp r5, #0
    ldrb r1, [r1, #0x2dc]
    mov r5, #1
    beq @L_02121cac
    cmp r1, #0
    moveq r5, #0
    add r0, r0, #0x1000
    mov r1, #1
    b @L_02121cbc
@L_02121cac:
    cmp r1, #0
    moveq r5, #0
    add r0, r0, #0x1000
    mov r1, #0
@L_02121cbc:
    strb r1, [r0, #0x2dc]
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov014_02121cd0(void)
{
    func_ov014_02121cdc();
}

extern "C" asm void func_ov014_02121cdc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    mov r5, r0
    bl func_ov014_02121808
    cmp r0, #0
    bne @L_02121d08
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121d08:
    mov r0, r4
    bl func_ov014_02121f34
    movs r4, r0
    mov r0, r5
    bne @L_02121d28
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121d28:
    bl OS_RestoreInterrupts
    add r0, r4, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121d34(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r4, r1
    bl func_ov014_02121808
    movs r6, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r6, #0x1000
    ldrb r1, [r0, #0x2dc]
    cmp r1, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    bne @L_02121d74
    ldrh r0, [r5, #0x3c]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02121d74:
    add r0, r5, #4
    bl func_ov014_02121ec8
    movs r7, r0
    bne @L_02121d8c
    bl func_ov014_02121dcc
    mov r7, r0
@L_02121d8c:
    cmp r7, #0
    addeq r0, r6, #0x1000
    ldreq r0, [r0, #0x2cc]
    cmpeq r0, #1
    bne @L_02121da8
    bl func_ov014_02121e98
    mov r7, r0
@L_02121da8:
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r5
    add r1, r7, #0x10
    bl func_ov014_02122040
    mov r0, r7
    strh r4, [r7, #2]
    bl func_ov014_02121f88
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov014_02121dcc(void)
{
    stmdb sp!, {r4, lr}
    bl func_ov014_02121808
    add r2, r0, #0x1000
    ldr r1, [r2, #0x2c4]
    mov r0, #0
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, [r2, #0x2c8]
    cmp r3, #0xc
    ldmlsia sp!, {r4, pc}
    ldr r2, =0x4ec4ec4f
    sub r3, r3, #0xc
    umull r2, r12, r3, r2
    movs r12, r12, lsr #6
    ldmeqia sp!, {r4, pc}
    ldr r2, [r1]
    cmp r12, r2
    ldmlsia sp!, {r4, pc}
    mov lr, r0
    cmp r12, #0
    bls @L_02121e48
    add r4, r1, #0xc
    mov r2, #0xd0
@L_02121e28:
    mul r0, lr, r2
    ldrb r3, [r4, r0]
    add r0, r4, r0
    cmp r3, #0
    beq @L_02121e48
    add lr, lr, #1
    cmp lr, r12
    blo @L_02121e28
@L_02121e48:
    cmp lr, r12
    ldmhsia sp!, {r4, pc}
    mov r2, #1
    strb r2, [r0]
    ldr r3, [r1]
    mov r2, #0
    str r3, [r0, #4]
    str r2, [r0, #0xc]
    ldr r2, [r1, #8]
    str r2, [r0, #8]
    str r0, [r1, #8]
    ldr r2, [r0, #8]
    cmp r2, #0
    strne r0, [r2, #0xc]
    streq r0, [r1, #4]
    ldr r2, [r1]
    add r2, r2, #1
    str r2, [r1]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02121e98(void)
{
    stmdb sp!, {r3, lr}
    bl func_ov014_02121808
    add r0, r0, #0x1000
    ldr r1, [r0, #0x2c4]
    cmp r1, #0
    beq @L_02121ec0
    ldr r0, [r0, #0x2c8]
    cmp r0, #0xc
    ldrhi r0, [r1, #4]
    ldmhiia sp!, {r3, pc}
@L_02121ec0:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_02121ec8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov014_02121808
    add r0, r0, #0x1000
    mov r4, #0
    cmp r5, #0
    ldr r1, [r0, #0x2c4]
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r1, #0
    beq @L_02121f2c
    ldr r0, [r0, #0x2c8]
    cmp r0, #0xc
    bls @L_02121f2c
    ldr r4, [r1, #4]
    cmp r4, #0
    beq @L_02121f2c
@L_02121f0c:
    mov r1, r5
    add r0, r4, #0x14
    bl func_ov014_02122510
    cmp r0, #0
    bne @L_02121f2c
    ldr r4, [r4, #0xc]
    cmp r4, #0
    bne @L_02121f0c
@L_02121f2c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02121f34(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov014_02121808
    add r1, r0, #0x1000
    ldr r2, [r1, #0x2c4]
    mov r0, #0
    cmp r2, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r1, #0x2c8]
    cmp r1, #0xc
    ldmlsia sp!, {r4, pc}
    ldr r0, [r2, #4]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
@L_02121f6c:
    ldr r1, [r0, #4]
    cmp r1, r4
    ldmeqia sp!, {r4, pc}
    ldr r0, [r0, #0xc]
    cmp r0, #0
    bne @L_02121f6c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02121f88(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov014_02121808
    add r1, r0, #0x1000
    ldr r0, [r1, #0x2c4]
    cmp r4, #0
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r1, #0x2c8]
    cmp r1, #0xc
    ldmlsia sp!, {r4, pc}
    ldr r3, [r0, #4]
    cmp r3, #0
    beq @L_02122000
@L_02121fc0:
    cmp r3, r4
    bne @L_02121ff4
    ldr r2, [r3, #8]
    ldr r1, [r3, #0xc]
    cmp r2, #0
    strne r1, [r2, #0xc]
    streq r1, [r0, #4]
    ldr r2, [r3, #0xc]
    ldr r1, [r3, #8]
    cmp r2, #0
    strne r1, [r2, #8]
    streq r1, [r0, #8]
    b @L_02122000
@L_02121ff4:
    ldr r3, [r3, #0xc]
    cmp r3, #0
    bne @L_02121fc0
@L_02122000:
    mov r1, #0
    str r1, [r4, #0xc]
    ldr r1, [r0, #8]
    str r1, [r4, #8]
    str r4, [r0, #8]
    ldr r1, [r4, #8]
    cmp r1, #0
    strne r4, [r1, #0xc]
    streq r4, [r0, #4]
    cmp r3, #0
    ldreq r1, [r0]
    streq r1, [r4, #4]
    ldreq r1, [r0]
    addeq r1, r1, #1
    streq r1, [r0]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02122040(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r11, r0
    mov r4, r1
    bl func_ov014_02121808
    mov r6, #0
    str r0, [sp]
    mov r0, r6
    mov r1, r4
    mov r2, #0xc0
    bl MIi_CpuClearFast
    mov r5, #0x40
    mov r0, r11
    mov r1, r4
    mov r2, r5
    bl MIi_CpuCopyFast
    ldr r0, [sp]
    strh r6, [r4, #0x3e]
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2df]
    ldr r1, =data_ov014_021240d0
    mov r7, #0
    cmp r0, #1
    moveq r0, #0x20
    streqh r0, [r4]
    strneh r5, [r4]
    ldrb r3, [r1]
    ldrb r2, [r1, #1]
    ldr r0, =data_ov014_021240d4
    strb r3, [sp, #9]
    strb r2, [sp, #0xa]
    ldrb r5, [r1, #2]
    ldrb r3, [r1, #3]
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    strb r5, [sp, #0xb]
    strb r2, [sp, #4]
    strb r3, [sp, #0xc]
    strb r1, [sp, #5]
    ldrb r1, [r0, #3]
    ldrb r2, [r0, #2]
    mov r8, r7
    strb r1, [sp, #7]
    strb r2, [sp, #6]
    ldrb r0, [r0, #4]
    add r5, r11, #0x40
    add r6, r4, #0x40
    strb r0, [sp, #8]
    ldrh r0, [r11, #0x3e]
    cmp r0, #0
    bls @L_021221b8
@L_0212210c:
    ldrb r0, [r5]
    ldrb r9, [r5, #1]
    cmp r0, #0x32
    cmpne r0, #0x2a
    cmpne r0, #0x2f
    cmpne r0, #7
    cmpne r0, #0x30
    bne @L_02122130
    b @L_02122168
@L_02122130:
    cmp r0, #0xdd
    bne @L_02122198
    add r1, sp, #9
    mov r2, #4
    add r0, r5, #2
    bl func_02009594
    cmp r0, #0
    beq @L_02122168
    add r1, sp, #4
    mov r2, #5
    add r0, r5, #2
    bl func_02009594
    cmp r0, #0
    bne @L_02122198
@L_02122168:
    add r10, r9, #2
    mov r0, r5
    mov r1, r6
    and r2, r10, #0xff
    bl func_020095c4
    ldrh r0, [r4, #0x3e]
    and r1, r10, #0xff
    add r1, r7, r1
    add r0, r0, #1
    add r6, r6, r10
    and r7, r1, #0xff
    strh r0, [r4, #0x3e]
@L_02122198:
    ldrh r1, [r11, #0x3e]
    add r0, r8, #1
    add r2, r9, #2
    add r5, r5, r2
    mov r0, r0, lsl #0x10
    cmp r1, r0, lsr #16
    mov r8, r0, lsr #0x10
    bhi @L_0212210c
@L_021221b8:
    ldr r0, [sp]
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    ldreqh r1, [r4]
    moveq r0, r7, lsl #0x10
    addeq r0, r1, r0, lsr #16
    ldrneh r0, [r4]
    addne r0, r0, r7
    strh r0, [r4]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov014_021221f0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov014_0212d57c
    ldrb r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #1
    mov r5, #0
    strb r0, [r4]
    ldr r0, =data_ov014_0212d5ac
    mov r1, r5
    mov r2, #6
    strh r5, [r4, #0x24]
    bl MI_CpuFill8
    str r5, [r4, #8]
    ldr r0, =data_ov014_0212d588
    str r5, [r4, #4]
    bl OS_InitMutex
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02122244(void)
{
    stmdb sp!, {r3, lr}
    ldr r12, =data_ov014_0212d57c
    ldr r12, [r12, #0x28]
    cmp r12, #0
    ldmeqia sp!, {r3, pc}
    blx r12
    ldmia sp!, {r3, pc}
}

extern "C" char *func_ov014_02122264(void)
{
    return data_ov014_0212d57c;
}

extern "C" asm void func_ov014_02122270(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    bl func_ov014_02121808
    mov r4, r0
    bl OS_DisableInterrupts
    cmp r4, #0
    beq @L_021222a8
    add r1, r4, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #9
    ldreqb r1, [r1, #0x2dd]
    cmpeq r1, #0
    addeq r1, r4, #0x2e4
    addeq r5, r1, #0x1000
@L_021222a8:
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_021222b4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #0
    mov r5, r0
    mov r4, r7
    bl func_ov014_02121808
    mov r6, r0
    bl OS_DisableInterrupts
    cmp r6, #0
    beq @L_021222fc
    add r1, r6, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #9
    ldreqb r1, [r1, #0x2dd]
    cmpeq r1, #0
    addeq r1, r6, #0x1200
    ldreqh r4, [r1, #0xea]
    addeq r1, r6, #0x2ec
    addeq r7, r1, #0x1000
@L_021222fc:
    bl OS_RestoreInterrupts
    cmp r5, #0
    strneh r4, [r5]
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov014_02122310(s32 arg0)
{
    s32 v0 = OS_DisableInterrupts(arg0);
    *(s32 *)(data_ov014_0212d57c + 0x28) = arg0;
    OS_RestoreInterrupts(v0, (s32)data_ov014_0212d57c);
}

extern "C" asm void func_ov014_02122330(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    bl OS_DisableInterrupts
    mov r5, r0
    bl func_ov014_02121808
    cmp r0, #0
    bne @L_02122370
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02122370:
    ldr r10, =data_ov014_0212d588
    mov r0, r10
    bl OS_LockMutex
    bl func_ov014_02121808
    movs r4, r0
    bne @L_021223a4
    mov r0, r10
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021223a4:
    add r0, r4, #0x1000
    ldrb r1, [r0, #0x2de]
    cmp r1, #9
    bne @L_021223c0
    ldrb r1, [r0, #0x2dd]
    cmp r1, #1
    bne @L_021223dc
@L_021223c0:
    ldr r0, =data_ov014_0212d588
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021223dc:
    ldr r1, [sp, #0x28]
    str r6, [sp]
    str r1, [sp, #4]
    ldrb r0, [r0, #0x2df]
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl func_ov014_02122498
    add r1, r4, #0x1000
    ldrb r1, [r1, #0x2df]
    cmp r1, #1
    bne @L_02122424
    mov r2, r0, lsl #0x10
    mov r0, r9
    mov r1, r4
    mov r2, r2, lsr #0x10
    mov r3, #0
    bl func_ov014_02122b28
@L_02122424:
    ldr r0, =data_ov014_0212d588
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, [sp, #0x28]
    add r0, r7, r0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov014_02122448(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #8]
    ldr r1, =0x1ff8000
    cmp r2, r1
    ldmneia sp!, {r3, pc}
    ldr r1, [r0, #0xc]
    subs r1, r1, #1
    str r1, [r0, #0xc]
    ldmneia sp!, {r3, pc}
    mov r1, #0
    str r1, [r0, #8]
    bl OS_WakeupThread
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov014_02122480(s32 arg0)
{
    func_020095c4(arg0, (s32)data_ov014_0212d5ac, 6);
}

extern "C" asm void func_ov014_02122498(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r3
    mov r0, r2
    mov r2, r5
    mov r6, r1
    ldr r4, [sp, #0x14]
    bl func_020095c4
    ldr r0, [sp, #0x10]
    cmp r0, #0
    ldrne r2, [sp, #0x14]
    cmpne r2, #0
    beq @L_021224d0
    add r1, r6, r5
    bl func_020095c4
@L_021224d0:
    add r0, r5, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov014_021224d8(...)
{
    stmdb sp!, {r3, lr}
    cmp r2, #0
    mov lr, #0
    bls @L_02122508
@L_021224e8:
    ldrb r12, [r0, lr]
    ldrb r3, [r1, lr]
    cmp r12, r3
    movne r0, #0
    ldmneia sp!, {r3, pc}
    add lr, lr, #1
    cmp lr, r2
    blo @L_021224e8
@L_02122508:
    mov r0, #1
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov014_02122510(s32 arg0, s32 arg1)
{
    func_ov014_021224d8(arg0, arg1, 6);
}

extern "C" asm void func_ov014_02122520(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    mov r4, r0
    bl func_ov014_02121808
    cmp r0, #0
    mov r5, #0
    beq @L_02122558
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #9
    bne @L_02122558
    bl func_ov014_0212259c
    bl func_ov014_02122568
    mov r5, r0
@L_02122558:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02122568(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov014_02121808
    cmp r4, #0x1c
    movhs r0, #3
    ldmhsia sp!, {r4, pc}
    cmp r4, #0x16
    movhs r0, #2
    ldmhsia sp!, {r4, pc}
    mov r0, #1
    cmp r4, #0x10
    movlo r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_0212259c(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov014_0212d5b4
    mov r0, #0
    ldrb r1, [r1]
    cmp r1, #0x10
    bls @L_021225e0
    ldr r2, =data_ov014_0212d5b5
    mov r3, r0
@L_021225bc:
    ldrb r1, [r2, r3]
    add r3, r3, #1
    cmp r3, #0x10
    add r0, r0, r1
    blt @L_021225bc
    mov r1, r0, asr #3
    add r0, r0, r1, lsr #28
    mov r0, r0, asr #4
    b @L_0212260c
@L_021225e0:
    cmp r1, #0
    beq @L_0212260c
    mov r12, r0
    ble @L_02122608
    ldr r3, =data_ov014_0212d5b5
@L_021225f4:
    ldrb r2, [r3, r12]
    add r12, r12, #1
    cmp r12, r1
    add r0, r0, r2
    blt @L_021225f4
@L_02122608:
    bl func_0202273c
@L_0212260c:
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_0212261c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov014_02121808
    ldr r2, =data_ov014_0212d5b4
    mov r0, r4, asr #2
    ldrb r12, [r2]
    tst r4, #2
    addeq r0, r0, #0x19
    mov r1, r12, lsr #0x1f
    and lr, r0, #0xff
    rsb r0, r1, r12, lsl #28
    ldr r3, =data_ov014_0212d5b5
    add r0, r1, r0, ror #28
    strb lr, [r3, r0]
    add r0, r12, #1
    cmp r12, #0x10
    movhs r1, r0, lsr #0x1f
    rsbhs r0, r1, r0, lsl #28
    addhs r0, r1, r0, ror #28
    addhs r0, r0, #0x10
    strb r0, [r2]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_0212267c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    bl func_ov014_02121808
    mov r5, r0
    add r0, r5, #0x1000
    ldr r1, [r0, #0x2c0]
    add r0, r5, #0x3a0
    mov r1, r1, lsl #0x10
    add r0, r0, #0x1000
    mov r1, r1, lsr #0x10
    bl func_020123ec
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_021226f0
    dcd 0xea000012
    dcd 0xea00000c
    dcd 0xea00000b
    dcd 0xea000002
    dcd 0xea000006
    dcd 0xea000008
    dcd 0xea000007
    dcd 0xe3a0000b
    dcd 0xebfffcec
    dcd 0xe28dd008
    dcd 0xe3a00007
    dcd 0xe8bd8038
    dcd 0xe28dd008
    dcd 0xe3a00005
    dcd 0xe8bd8038
@L_021226f0:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
    dcd 0xe59f00a0
    dcd 0xebfbc1c6
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe3a0000b
    dcd 0xebfffcdb
    dcd 0xe28dd008
    dcd 0xe3a00007
    dcd 0xe8bd8038
    dcd 0xe28d4000
    dcd 0xe1a00004
    dcd 0xebfb978b
    dcd 0xe1a00004
    dcd 0xebffff50
    dcd 0xe59f006c
    dcd 0xebfbc388
    dcd 0xe3500002
    dcd 0x0a000004
    dcd 0xe3500003
    dcd 0x0a00000d
    dcd 0xe3500008
    dcd 0x0a000006
    dcd 0xea00000a
    dcd 0xe3a00002
    dcd 0xebfffcc8
    dcd 0xe2850c12
    dcd 0xe3a01001
    dcd 0xe1c01dba
    dcd 0xea000009
    dcd 0xe3a0000c
    dcd 0xebfffcc2
    dcd 0xe28dd008
    dcd 0xe3a00001
    dcd 0xe8bd8038
    dcd 0xe3a0000b
    dcd 0xebfffcbd
    dcd 0xe28dd008
    dcd 0xe3a00007
    dcd 0xe8bd8038
    dcd 0xe3a00003
    dcd 0xe28dd008
    dcd 0xe8bd8038
    dcd func_ov014_02122cac
    dcd func_ov014_02122d20
}

extern "C" asm void func_ov014_021227b4(void)
{
    stmdb sp!, {r4, lr}
    bl func_ov014_02121808
    mov r4, r0
    ldr r0, =func_ov014_02122d20
    bl func_0201366c
    cmp r0, #2
    beq @L_021227e4
    cmp r0, #3
    beq @L_02122804
    cmp r0, #8
    beq @L_021227fc
    b @L_02122804
@L_021227e4:
    mov r0, #4
    bl func_ov014_02121a8c
    add r0, r4, #0x1200
    mov r1, #2
    strh r1, [r0, #0xda]
    b @L_02122814
@L_021227fc:
    mov r0, #4
    ldmia sp!, {r4, pc}
@L_02122804:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    ldmia sp!, {r4, pc}
@L_02122814:
    mov r0, #3
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02122820(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_ov014_02121808
    mov r4, r0
    add r0, r4, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #3
    beq @L_02122894
    cmp r0, #5
    beq @L_0212285c
    cmp r0, #6
    beq @L_02122874
    b @L_0212288c
@L_0212285c:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov014_02123ab0
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02122874:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov014_02123ab0
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212288c:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02122894:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_ov014_02123ab0
    add r1, r4, #0x2200
    add r0, r4, #0x2000
    ldrh r1, [r1, #0xa4]
    ldr r0, [r0, #0x2a0]
    bl DC_InvalidateRange
    add r2, r4, #0x2000
    ldr r0, [r2, #0x2e4]
    add r1, r4, #0x2a0
    add r3, r0, #1
    ldr r0, =func_ov014_02122fbc
    add r1, r1, #0x2000
    str r3, [r2, #0x2e4]
    bl func_02013994
    cmp r0, #2
    beq @L_021228f4
    cmp r0, #3
    beq @L_02122914
    cmp r0, #8
    beq @L_0212290c
    b @L_02122914
@L_021228f4:
    mov r0, #5
    bl func_ov014_02121a8c
    add r1, r4, #0x1200
    mov r0, #3
    strh r0, [r1, #0xda]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212290c:
    mov r0, #4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02122914:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov014_02122928(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    bl func_ov014_02121808
    mov r4, r0
    add r0, r4, #0x1000
    ldrb r0, [r0, #0x2de]
    mov r2, #0x50
    cmp r0, #3
    addeq r0, r4, #0x1300
    ldreqh r1, [r0, #0xe]
    orreq r1, r1, #3
    streqh r1, [r0, #0x10]
    ldr r1, =0xffff
    ldr r0, =func_ov014_02122d20
    mov r3, r1
    str r1, [sp]
    bl func_020151b4
    cmp r0, #2
    beq @L_02122988
    cmp r0, #3
    beq @L_021229ac
    cmp r0, #8
    beq @L_021229a0
    b @L_021229ac
@L_02122988:
    mov r0, #8
    bl func_ov014_02121a8c
    add r0, r4, #0x1200
    mov r1, #5
    strh r1, [r0, #0xda]
    b @L_021229c0
@L_021229a0:
    add sp, sp, #4
    mov r0, #4
    ldmia sp!, {r3, r4, pc}
@L_021229ac:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add sp, sp, #4
    mov r0, #7
    ldmia sp!, {r3, r4, pc}
@L_021229c0:
    mov r0, #3
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_ov014_021229d4(void)
{
    stmdb sp!, {r4, lr}
    bl func_ov014_02121808
    mov r4, r0
    ldr r0, =func_ov014_021236a8
    bl func_020143a4
    cmp r0, #2
    beq @L_02122a04
    cmp r0, #3
    beq @L_02122a24
    cmp r0, #8
    beq @L_02122a1c
    b @L_02122a24
@L_02122a04:
    mov r0, #0xa
    bl func_ov014_02121a8c
    add r0, r4, #0x1200
    mov r1, #6
    strh r1, [r0, #0xda]
    b @L_02122a34
@L_02122a1c:
    mov r0, #4
    ldmia sp!, {r4, pc}
@L_02122a24:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    ldmia sp!, {r4, pc}
@L_02122a34:
    mov r0, #3
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_02122a40(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl func_ov014_02121808
    mov r5, r0
    bl WMi_GetStatusAddress
    mov r4, r0
    mov r1, #2
    bl DC_InvalidateRange
    ldrh r0, [r4]
    cmp r0, #0
    beq @L_02122a7c
    cmp r0, #1
    beq @L_02122aa0
    cmp r0, #2
    beq @L_02122aac
    b @L_02122ab8
@L_02122a7c:
    bl func_02012640
    cmp r0, #0
    bne @L_02122acc
    mov r0, #1
    bl func_ov014_02121a8c
    add r1, r5, #0x1200
    mov r0, #0
    strh r0, [r1, #0xda]
    ldmia sp!, {r3, r4, r5, pc}
@L_02122aa0:
    ldr r0, =func_ov014_02122d20
    bl func_020135e4
    b @L_02122acc
@L_02122aac:
    ldr r0, =func_ov014_02122d20
    bl func_0201366c
    b @L_02122acc
@L_02122ab8:
    ldr r0, =func_ov014_021237bc
    add r1, r5, #0x1000
    mov r2, #1
    strb r2, [r1, #0x2dd]
    bl func_0201372c
@L_02122acc:
    cmp r0, #2
    beq @L_02122ae8
    cmp r0, #3
    beq @L_02122b08
    cmp r0, #8
    beq @L_02122b00
    b @L_02122b08
@L_02122ae8:
    mov r0, #0xd
    bl func_ov014_02121a8c
    add r0, r5, #0x1200
    mov r1, #9
    strh r1, [r0, #0xda]
    b @L_02122b18
@L_02122b00:
    mov r0, #4
    ldmia sp!, {r3, r4, r5, pc}
@L_02122b08:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_02122b18:
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02122b28(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r3
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl func_ov014_02122264
    mov r4, r0
    cmp r5, #0
    bne @L_02122b60
    ldr r0, [pc, #0x84]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    b @L_02122b74
@L_02122b60:
    ldr r0, [pc, #0x74]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    str r5, [r4, #0x2c]
@L_02122b74:
    bl func_020142d4
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02122ba8
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea000007
    dcd 0xea000004
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xea000000
    dcd 0xeaffffff
@L_02122ba8:
    mvn r0, #4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    dcd 0xe3550000
    dcd 0x1a000005
    dcd 0xe2840004
    dcd 0xebfb8d35
    dcd 0xe1d402b4
    dcd 0xe3500000
    dcd 0x13e00004
    dcd 0x18bd81f0
    dcd 0xe1a00006
    dcd 0xe8bd81f0
    dcd func_ov014_02123bdc
    dcd func_ov014_02123c1c
}

extern "C" asm void func_ov014_02122be0(void)
{
    stmdb sp!, {r3, lr}
    bl func_020131c0
    cmp r0, #0
    mov r3, #0x8000
    mov r2, #1
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    tst r0, #0x8000
    bne @L_02122c1c
@L_02122c04:
    mov r1, r3, asr #1
    orr r1, r1, #0x8000
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
    tst r3, r0
    beq @L_02122c04
@L_02122c1c:
    tst r0, #1
    bne @L_02122c3c
@L_02122c24:
    mov r1, r2, lsl #1
    orr r1, r1, #1
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    tst r2, r0
    beq @L_02122c24
@L_02122c3c:
    mov r0, r3, lsl #0x11
    mov r1, r2, lsr #1
    orr r0, r1, r0, lsr #16
    mvn r0, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_02122c58(void)
{
    stmdb sp!, {r3, lr}
    bl func_ov014_02121808
    add r1, r0, #0x1000
    ldrb r0, [r1, #0x2dd]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    mov r2, #1
    ldr r0, =func_ov014_021237bc
    strb r2, [r1, #0x2dd]
    bl func_0201372c
    cmp r0, #2
    ldmeqia sp!, {r3, pc}
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x248
    bl func_ov014_021219f4
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov014_02122cac(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    cmp r1, #8
    ldreqh r1, [r4, #4]
    cmpeq r1, #0x16
    ldreqh r1, [r4, #6]
    cmpeq r1, #0x25
    ldmneia sp!, {r4, pc}
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2de]
    sub r0, r0, #8
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, pc}
    dcd 0xea000003
    dcd 0xea000005
    dcd 0xea000006
    dcd 0xe8bd8010
    dcd 0xea000002
    dcd 0xe3a0000c
    dcd 0xebfffb60
    dcd 0xe8bd8010
    dcd 0xebffffd1
    dcd 0xe8bd8010
    dcd 0xe3a0000c
    dcd 0xebfffb5b
    dcd 0xe8bd8010
}

extern "C" asm void func_ov014_02122d20(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, #0x14
    bl func_ov014_02121808
    ldrh r1, [r6, #2]
    mov r4, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02122f7c
    dcd 0xea000003
    dcd 0xea00007c
    dcd 0xea000089
    dcd 0xea000088
    dcd 0xea000087
    dcd 0xe1d600b0
    dcd 0xe3500019
    dcd 0xca00000a
    dcd 0xaa000038
    dcd 0xe3500006
    dcd 0x908ff100
    dcd 0xea00004f
    dcd 0xea00004e
    dcd 0xea00004d
    dcd 0xea00004c
    dcd 0xea000009
    dcd 0xea00000b
    dcd 0xea00001f
    dcd 0xea000027
    dcd 0xe350001d
    dcd 0xca000001
    dcd 0x0a000027
    dcd 0xea000044
    dcd 0xe3500027
    dcd 0x0a00002f
    dcd 0xea000041
    dcd 0xe59f01fc
    dcd 0xebfbc21b
    dcd 0xea00003d
    dcd 0xebfbbe1f
    dcd 0xe3500000
    dcd 0x1a000008
    dcd 0xe3a00001
    dcd 0xebfffb2e
    dcd 0xe3a00000
    dcd 0xe1a01000
    dcd 0xe1a02000
    dcd 0xe3a03fa9
    dcd 0xebfffb03
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a0000b
    dcd 0xebfffb25
    dcd 0xe3a00007
    dcd 0xe3a01000
    dcd 0xe1a02001
    dcd 0xe2603fad
    dcd 0xebfffafa
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a00003
    dcd 0xebfffb1c
    dcd 0xe3a00000
    dcd 0xe1a01000
    dcd 0xe1a02000
    dcd 0xe3a03fad
    dcd 0xebfffaf1
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe59f0178
    dcd 0xebfbc1e9
    dcd 0xea00001c
    dcd 0xe59f016c
    dcd 0xe3a01000
    dcd 0xebfbc8c4
    dcd 0xea000018
    dcd 0xe2840a01
    dcd 0xe5d01290
    dcd 0xe5d02291
    dcd 0xe59f0150
    dcd 0xe2843d49
    dcd 0xebfbc867
    dcd 0xea000011
    dcd 0xe2840a01
    dcd 0xe59012d4
    dcd 0xe3a02001
    dcd 0xe2010703
    dcd 0xe3500703
    dcd 0xe2010803
    dcd 0x13a02000
    dcd 0xe3500803
    dcd 0xe1a00802
    dcd 0xe1a0c820
    dcd 0xe3a03001
    dcd 0xe2841e2e
    dcd 0xe59f0114
    dcd 0x03a03000
    dcd 0xe2811a01
    dcd 0xe3a02000
    dcd 0xe58dc000
    dcd 0xebfbc31c
    dcd 0xe1a05000
    dcd 0xe3550002
    dcd 0x028dd004
    dcd 0x08bd8078
    dcd 0xe3550003
    dcd 0x0a00000f
    dcd 0xe3550008
    dcd 0x1a00000d
    dcd 0xe3a0000c
    dcd 0xebfffaeb
    dcd 0xe2840c12
    dcd 0xe1d00dfa
    dcd 0xe3a02000
    dcd 0xe3a03e2f
    dcd 0xe3500005
    dcd 0x02840e2e
    dcd 0x02801a01
    dcd 0x13a01000
    dcd 0xe3a00001
    dcd 0xebfffabb
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a0000b
    dcd 0xebfffadd
    dcd 0xe2840c12
    dcd 0xe1d00dfa
    dcd 0xe3a02000
    dcd 0xe3500005
    dcd 0x02840e2e
    dcd 0x02801a01
    dcd 0xe3a00007
    dcd 0x13a01000
    dcd 0xe2603c03
    dcd 0xebfffaad
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a0000c
    dcd 0xebfffacf
    dcd 0xe2840c12
    dcd 0xe1d00dfa
    dcd 0xe3a02000
    dcd 0xe3500005
    dcd 0x02840e2e
    dcd 0x02801a01
    dcd 0xe3a00001
    dcd 0x13a01000
    dcd 0xe2603e32
    dcd 0xebfffa9f
    dcd 0xe28dd004
    dcd 0xe8bd8078
@L_02122f7c:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r4, #0x1200
    ldrsh r0, [r0, #0xda]
    mov r2, #0
    cmp r0, #5
    addeq r0, r4, #0x2e0
    addeq r1, r0, #0x1000
    mov r0, #7
    movne r1, #0
    rsb r3, r0, #0x330
    bl func_ov014_021219f4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
    dcd func_ov014_02122d20
    dcd func_ov014_021232b8
}

extern "C" asm void func_ov014_02122fbc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    mov r5, #0
    mov r6, #0x14
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    mov r8, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0212320c
    dcd 0xea000003
    dcd 0xea000085
    dcd 0xea000086
    dcd 0xea000085
    dcd 0xea000084
    dcd 0xe2880a01
    dcd 0xe5d002de
    dcd 0xe3500005
    dcd 0x1a000007
    dcd 0xe3a07006
    dcd 0xe1a00007
    dcd 0xebfffa9d
    dcd 0xe1a00005
    dcd 0xe1a01000
    dcd 0xe1a02000
    dcd 0xe2873d0d
    dcd 0xebfffa72
    dcd 0xe2880a01
    dcd 0xe5d002de
    dcd 0xe3500006
    dcd 0x0a000004
    dcd 0xe3500007
    dcd 0x0a000055
    dcd 0xe350000d
    dcd 0x0a000056
    dcd 0xea000057
    dcd 0xe2880c12
    dcd 0xe3a01007
    dcd 0xe1c01dba
    dcd 0xe1d400b8
    dcd 0xe3500005
    dcd 0x1a000018
    dcd 0xe2881c22
    dcd 0xe2880a02
    dcd 0xe1d11ab4
    dcd 0xe59002a0
    dcd 0xebfb8f2b
    dcd 0xe3a09000
    dcd 0xe3a07fd7
    dcd 0xe3a06007
    dcd 0xea00000c
@L_02123088:
    add r0, r4, r9, lsl #1
    add r2, r4, r9, lsl #2
    ldrh r1, [r0, #0x50]
    ldr r0, [r2, #0x10]
    bl func_ov014_02121d34
    str r7, [sp]
    add r0, r4, r9, lsl #2
    ldr r2, [r0, #0x10]
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl func_ov014_02121a38
    add r9, r9, #1
    ldrh r0, [r4, #0xe]
    cmp r9, r0
    blt @L_02123088
    add r0, r8, #0x1000
    ldr r1, [r0, #0x2d4]
    and r0, r1, #0xc00000
    cmp r0, #0xc00000
    bne @L_02123124
    ldr r0, [pc, #0x148]
    and r0, r1, r0
    bl func_02015aa0
    movs r1, r0
    beq @L_02123124
    add r0, r8, #0x2000
    ldr r0, [r0, #0x2e4]
    bl func_02022948
    cmp r1, #0
    bne @L_02123124
    ldr r0, [pc, #0x124]
    mov r1, #0
    str r0, [sp]
    add r0, r8, #0x2000
    ldr r2, [r0, #0x2e4]
    mov r3, r1
    mov r0, #8
    bl func_ov014_02121a38
@L_02123124:
    ldrh r0, [r4, #0xa]
    clz r0, r0
    rsb r0, r0, #0x20
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_ov014_02121958
    ldr r2, [pc, #0xf0]
    add r1, r8, #0x2200
    mov r0, r2, lsl r0
    mov r0, r0, asr #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    strh r0, [r1, #0xa6]
    add r1, r8, #0x2200
    add r0, r8, #0x2000
    ldrh r1, [r1, #0xa4]
    ldr r0, [r0, #0x2a0]
    bl DC_StoreRange
    add r0, r8, #0x2e4
    add r3, r0, #0x2000
    ldr r0, [r3]
    add r1, r8, #0x2a0
    add r2, r0, #1
    ldr r0, [pc, #0xb0]
    add r1, r1, #0x2000
    str r2, [r3]
    bl func_02013994
    mov r6, r0
    b @L_021231ac
    dcd 0xe59f009c
    dcd 0xebfbc250
    dcd 0xeafffffa
    dcd 0xebfffeab
    dcd 0xe8bd83f8
@L_021231ac:
    cmp r6, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r6, #3
    beq @L_021231e4
    cmp r6, #8
    bne @L_021231e4
    mov r0, #0xc
    bl func_ov014_02121a8c
    mov r0, #1
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x394
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021231e4:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r1, #0
    ldr r3, [pc, #0x48]
    mov r2, r1
    mov r0, #7
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    dcd 0xebfffe93
    dcd 0xe8bd83f8
@L_0212320c:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x3a8
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    dcd 0x00003ffe
    dcd 0x0000036a
    dcd 0x00000001
    dcd func_ov014_02122fbc
    dcd func_ov014_02123244
    dcd 0x0000039e
}

extern "C" asm void func_ov014_02123244(void)
{
    stmdb sp!, {r4, lr}
    ldrh r0, [r0, #2]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02123298
    dcd 0xea000003
    dcd 0xea00000b
    dcd 0xea00000c
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xe3a04003
    dcd 0xe1a00004
    dcd 0xebfffa04
    dcd 0xe3a00000
    dcd 0xe1a01000
    dcd 0xe1a02000
    dcd 0xe2643ff2
    dcd 0xebfff9d9
    dcd 0xe8bd8010
    dcd 0xebfffe70
    dcd 0xe8bd8010
@L_02123298:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    mov r1, #0
    mov r2, r1
    rsb r3, r0, #0x3dc
    bl func_ov014_021219f4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov014_021232b8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r6, #0
    bl func_ov014_02121808
    ldrh r1, [r5, #2]
    mov r4, r0
    cmp r1, #0xc
    addls pc, pc, r1, lsl #2
    b @L_021234b0
    dcd 0xea00000b
    dcd 0xea00006b
    dcd 0xea000071
    dcd 0xea000070
    dcd 0xea00006f
    dcd 0xea00006e
    dcd 0xea000069
    dcd 0xea00006c
    dcd 0xea00006b
    dcd 0xea00006a
    dcd 0xea000069
    dcd 0xea000064
    dcd 0xea000063
    dcd 0xe1d500b8
    dcd 0xe3500009
    dcd 0xca00000c
    dcd 0xe3500000
    dcd 0xa08ff100
    dcd 0xea000051
    dcd 0xea000050
    dcd 0xea00004f
    dcd 0xea00004e
    dcd 0xea00004d
    dcd 0xea00004c
    dcd 0xea00004b
    dcd 0xe8bd8070
    dcd 0xea00001b
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xe350001a
    dcd 0x08bd8070
    dcd 0xea000044
    dcd 0xe2840a01
    dcd 0xe5d002de
    dcd 0xe2400008
    dcd 0xe3500004
    dcd 0x908ff100
    dcd 0xe8bd8070
    dcd 0xea000005
    dcd 0xea000007
    dcd 0xea000001
    dcd 0xe8bd8070
    dcd 0xea000009
    dcd 0xe2840c22
    dcd 0xe1c06eb8
    dcd 0xe3a0000c
    dcd 0xebfff9bc
    dcd 0xe8bd8070
    dcd 0xe2840c22
    dcd 0xe1c06eb8
    dcd 0xe2840c12
    dcd 0xe3a01006
    dcd 0xe1c01dba
    dcd 0xebfffe28
    dcd 0xe8bd8070
    dcd 0xe2840a01
    dcd 0xe5d002de
    dcd 0xe350000c
    dcd 0x1a000003
    dcd 0xe3a00008
    dcd 0xebfff9ae
    dcd 0xebfffe20
    dcd 0xe8bd8070
    dcd 0xe1d550ba
    dcd 0xe3550001
    dcd 0x3a000020
    dcd 0xe59f00e8
    dcd 0xe1550000
    dcd 0x8a00001d
    dcd 0xe59f00e0
    dcd 0xe2843c22
    dcd 0xe2841c06
    dcd 0xe3a02e62
    dcd 0xe1c35eb8
    dcd 0xebfbc388
    dcd 0xe3500002
    dcd 0x08bd8070
    dcd 0xe3500003
    dcd 0x0a00000a
    dcd 0xe3500008
    dcd 0x1a000008
    dcd 0xe3a0000c
    dcd 0xebfff998
    dcd 0xe2840e2e
    dcd 0xe2801a01
    dcd 0xe3a00001
    dcd 0xe1a02006
    dcd 0xe3a03e43
    dcd 0xebfff96c
    dcd 0xe8bd8070
    dcd 0xe3a0000b
    dcd 0xebfff98f
    dcd 0xe2841e2e
    dcd 0xe3a00007
    dcd 0xe2811a01
    dcd 0xe2603d11
    dcd 0xe3a02000
    dcd 0xebfff963
    dcd 0xe8bd8070
    dcd 0xebfffdfa
    dcd 0xe8bd8070
    dcd 0xe3a0000b
    dcd 0xebfff984
    dcd 0xe2841e2e
    dcd 0xe3a00007
    dcd 0xe1d520b8
    dcd 0xe2811a01
    dcd 0xe2803d11
    dcd 0xebfff958
    dcd 0xe8bd8070
    dcd 0xe1d510be
    dcd 0xe2840c22
    dcd 0xe1c01eba
    dcd 0xe3a00008
    dcd 0xebfff978
    dcd 0xebfffdea
    dcd 0xe8bd8070
@L_021234b0:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r4, #0x2e0
    ldr r3, [pc, #0x18]
    add r1, r0, #0x1000
    mov r0, #7
    mov r2, #0
    bl func_ov014_021219f4
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0x000007d7
    dcd func_ov014_021235a0
    dcd 0x0000045e
}

extern "C" asm void func_ov014_021234e0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    mov r5, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02123574
    dcd 0xea000003
    dcd 0xea000016
    dcd 0xea000019
    dcd 0xea000014
    dcd 0xea000017
    dcd 0xe2850a01
    dcd 0xe5d002de
    dcd 0xe350000c
    dcd 0x1a000003
    dcd 0xe3a0000a
    dcd 0xebfff957
    dcd 0xebfffdc9
    dcd 0xe8bd8038
    dcd 0xe2851c22
    dcd 0xe3a04000
    dcd 0xe3a00003
    dcd 0xe1c14eb8
    dcd 0xebfff950
    dcd 0xe2851e2e
    dcd 0xe59f3044
    dcd 0xe1a00004
    dcd 0xe1a02004
    dcd 0xe2811a01
    dcd 0xebfff924
    dcd 0xe8bd8038
    dcd 0xe3a0000a
    dcd 0xebfff947
    dcd 0xebfffdb9
    dcd 0xe8bd8038
@L_02123574:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r5, #0x2e0
    ldr r3, [pc, #0x14]
    add r1, r0, #0x1000
    mov r0, #7
    mov r2, #0
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, pc}
    dcd 0x00000481
    dcd 0x00000493
}

extern "C" asm void func_ov014_021235a0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    mov r5, r0
    cmp r1, #0
    bne @L_0212367c
    ldrh r0, [r4, #4]
    cmp r0, #0xe
    beq @L_021235d4
    cmp r0, #0xf
    beq @L_0212361c
    b @L_02123658
@L_021235d4:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #0xc
    bne @L_021235f4
    mov r0, #8
    bl func_ov014_02121a8c
    bl func_ov014_02122c58
    ldmia sp!, {r3, r4, r5, pc}
@L_021235f4:
    mov r4, #9
    mov r0, r4
    bl func_ov014_02121a8c
    add r1, r5, #0x2e0
    mov r0, #0
    mov r2, r0
    add r1, r1, #0x1000
    rsb r3, r4, #0x4c0
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, pc}
@L_0212361c:
    ldr r0, [r4, #8]
    ldrh r0, [r0, #0xe]
    mov r0, r0, asr #8
    and r0, r0, #0xff
    bl func_ov014_0212261c
    ldr r0, [r4, #8]
    mov r1, #0x620
    bl DC_InvalidateRange
    ldr r2, [r4, #8]
    ldrh r3, [r2, #6]
    add r0, r2, #0x1e
    add r1, r2, #0x18
    add r2, r2, #0x2c
    bl func_ov014_02122244
    ldmia sp!, {r3, r4, r5, pc}
@L_02123658:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r5, #0x2e0
    add r1, r0, #0x1000
    ldrh r2, [r4, #4]
    ldr r3, =0x4c6
    mov r0, #7
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, pc}
@L_0212367c:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r5, #0x2e0
    ldr r3, =0x4d1
    add r1, r0, #0x1000
    mov r0, #7
    mov r2, #0
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_021236a8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    mov r5, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0212378c
    dcd 0xea000003
    dcd 0xea00002a
    dcd 0xea00002d
    dcd 0xea000028
    dcd 0xea00002b
    dcd 0xe2850a01
    dcd 0xe5d002de
    dcd 0xe350000c
    dcd 0x1a000003
    dcd 0xe3a0000a
    dcd 0xebfff8e5
    dcd 0xebfffd57
    dcd 0xe8bd8038
    dcd 0xe3a04000
    dcd 0xe59f00a8
    dcd 0xe1a01004
    dcd 0xebfbc139
    dcd 0xe3500002
    dcd 0x08bd8038
    dcd 0xe3500003
    dcd 0x0a00000a
    dcd 0xe3500008
    dcd 0x1a00000c
    dcd 0xe3a0000c
    dcd 0xebfff8d7
    dcd 0xe2850e2e
    dcd 0xe2801a01
    dcd 0xe59f3078
    dcd 0xe1a02004
    dcd 0xe3a00001
    dcd 0xebfff8ab
    dcd 0xe8bd8038
    dcd 0xe3a0000a
    dcd 0xebfff8ce
    dcd 0xebfffd40
    dcd 0xe8bd8038
    dcd 0xe3a0000b
    dcd 0xebfff8ca
    dcd 0xe2850e2e
    dcd 0xe2801a01
    dcd 0xe59f3048
    dcd 0xe1a02004
    dcd 0xe3a00007
    dcd 0xebfff89e
    dcd 0xe8bd8038
    dcd 0xe3a0000a
    dcd 0xebfff8c1
    dcd 0xebfffd33
    dcd 0xe8bd8038
@L_0212378c:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r1, r5, #0x2e0
    mov r0, #7
    add r1, r1, #0x1000
    rsb r3, r0, #0x520
    mov r2, #0
    bl func_ov014_021219f4
    ldmia sp!, {r3, r4, r5, pc}
    dcd func_ov014_021234e0
    dcd 0x000004fa
    dcd 0x00000506
}

extern "C" asm void func_ov014_021237bc(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r0
    mov r5, #3
    bl func_ov014_02121808
    ldrh r1, [r4, #2]
    mov r4, r0
    cmp r1, #0
    bne @L_02123a68
    add r1, r4, #0x1000
    mov r6, #0
    strb r6, [r1, #0x2dd]
    add r0, r4, #0x2200
    strh r6, [r0, #0xe8]
    ldrb r2, [r1, #0x2de]
    cmp r2, #0xd
    addls pc, pc, r2, lsl #2
    b @L_02123a40
    dcd 0xea00008d
    dcd 0xea00008c
    dcd 0xea00008b
    dcd 0xea00008a
    dcd 0xea000089
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea00000e
    dcd 0xea000016
    dcd 0xea000055
    dcd 0xea00005e
    dcd 0xea000082
    dcd 0xea000052
    dcd 0xea000065
    dcd 0xe1a00005
    dcd 0xebfff891
    dcd 0xe59f3240
    dcd 0xe1a01006
    dcd 0xe1a02006
    dcd 0xe3a00001
    dcd 0xebfff866
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe1a00005
    dcd 0xebfff888
    dcd 0xe59f3220
    dcd 0xe1a00006
    dcd 0xe1a01006
    dcd 0xe1a02006
    dcd 0xebfff85d
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe1d05eba
    dcd 0xe1c06eba
    dcd 0xe3550012
    dcd 0x1a000031
    dcd 0xe2840c13
    dcd 0xe1d021b0
    dcd 0xe2023024
    dcd 0xe3530024
    dcd 0x0a00002c
    dcd 0xe3822024
    dcd 0xe1c021b0
    dcd 0xe59112d4
    dcd 0xe3a03001
    dcd 0xe2010703
    dcd 0xe3500703
    dcd 0xe2010803
    dcd 0x03a06001
    dcd 0xe3500803
    dcd 0xe1a00806
    dcd 0xe1a06820
    dcd 0xe2841e2e
    dcd 0xe59f01b4
    dcd 0x03a03000
    dcd 0xe2811a01
    dcd 0xe3a02000
    dcd 0xe58d6000
    dcd 0xebfbc08d
    dcd 0xe3500002
    dcd 0x028dd004
    dcd 0x08bd8078
    dcd 0xe3500003
    dcd 0x0a00000b
    dcd 0xe3500008
    dcd 0x1a000009
    dcd 0xe3a0000c
    dcd 0xebfff85d
    dcd 0xe2840e2e
    dcd 0xe2801a01
    dcd 0xe59f3174
    dcd 0xe1a02005
    dcd 0xe3a00001
    dcd 0xebfff831
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a0000b
    dcd 0xebfff853
    dcd 0xe2840e2e
    dcd 0xe59f3154
    dcd 0xe1a02005
    dcd 0xe2801a01
    dcd 0xe3a00007
    dcd 0xebfff827
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a00003
    dcd 0xebfff849
    dcd 0xe2840e2e
    dcd 0xe2801a01
    dcd 0xe59f312c
    dcd 0xe1a02005
    dcd 0xe3a00001
    dcd 0xebfff81d
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe1a00005
    dcd 0xebfff83f
    dcd 0xe2841e2e
    dcd 0xe59f310c
    dcd 0xe1a00006
    dcd 0xe2811a01
    dcd 0xe3a02001
    dcd 0xebfff813
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe1a00005
    dcd 0xebfff835
    dcd 0xe2841e2e
    dcd 0xe1a00006
    dcd 0xe1a02006
    dcd 0xe2811a01
    dcd 0xe2853d16
    dcd 0xebfff809
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe59f00cc
    dcd 0xebfbbf23
    dcd 0xe3500002
    dcd 0x028dd004
    dcd 0x08bd8078
    dcd 0xe3500003
    dcd 0x0a00000a
    dcd 0xe3500008
    dcd 0x1a000008
    dcd 0xe3a0000c
    dcd 0xebfff822
    dcd 0xe3a00001
    dcd 0xe1a01006
    dcd 0xe1a02006
    dcd 0xe2803e59
    dcd 0xebfff7f7
    dcd 0xe28dd004
    dcd 0xe8bd8078
    dcd 0xe3a0000b
    dcd 0xebfff819
    dcd 0xe3a01000
    dcd 0xe59f307c
    dcd 0xe1a02001
    dcd 0xe3a00007
    dcd 0xebfff7ee
    dcd 0xe28dd004
    dcd 0xe8bd8078
@L_02123a40:
    mov r0, #0xb
    bl func_ov014_02121a8c
    add r0, r4, #0x1000
    ldrb r2, [r0, #0x2de]
    mov r0, #7
    mov r1, #0
    mov r3, #0x5a0
    bl func_ov014_021219f4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123a68:
    mov r0, #0xb
    bl func_ov014_02121a8c
    mov r0, #7
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x5a0
    bl func_ov014_021219f4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
    dcd 0x0000053c
    dcd 0x00000542
    dcd func_ov014_021232b8
    dcd 0x00000563
    dcd 0x0000056c
    dcd 0x00000574
    dcd 0x0000057c
    dcd func_ov014_02122d20
    dcd 0x0000059a
}

extern "C" asm void func_ov014_02123ab0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r2
    mov r7, r0
    mov r6, r1
    mov r4, #0
    bl func_ov014_02121808
    mov r5, r0
    mov r0, r8
    bl func_ov014_02121730
    add r1, r5, #0x600
    add r0, r5, #0x2000
    str r1, [r0, #0x2a0]
    add r1, r5, #0x2200
    mov r2, #0x400
    mov r0, r4
    strh r2, [r1, #0xa4]
    bl func_ov014_02121958
    mov r1, #1
    mov r0, r1, lsl r0
    mov r1, r0, asr #1
    add r0, r5, #0x2200
    strh r1, [r0, #0xa6]
    add r0, r5, #0x1200
    ldrh r0, [r0, #0xd8]
    cmp r0, #0
    bne @L_02123b1c
    bl func_02013308
@L_02123b1c:
    add r1, r5, #0x2200
    strh r0, [r1, #0xa8]
    add r0, r5, #0x1000
    ldr r0, [r0, #0x2d4]
    mov r1, #1
    and r0, r0, #0x300000
    cmp r0, #0x300000
    moveq r1, #0
    add r0, r5, #0x2200
    strh r1, [r0, #0xb0]
    cmp r7, #0
    add r1, r5, #0xaa
    mov r2, #6
    bne @L_02123b5c
    ldr r0, =data_ov014_021240a8
    b @L_02123b60
@L_02123b5c:
    mov r0, r7
@L_02123b60:
    add r1, r1, #0x2200
    bl MI_CpuCopy8
    cmp r6, #0
    ldrne r0, =data_ov014_021240b0
    add r1, r5, #0x2b4
    cmpne r6, r0
    mov r2, #0x20
    bne @L_02123b98
    ldr r0, =data_ov014_021240b0
    add r1, r1, #0x2000
    bl MI_CpuCopy8
    add r0, r5, #0x2200
    strh r4, [r0, #0xb2]
    b @L_02123bc8
@L_02123b98:
    mov r0, r6
    add r1, r1, #0x2000
    bl MI_CpuCopy8
    mov r1, #0
@L_02123ba8:
    ldrb r0, [r6, r1]
    cmp r0, #0
    beq @L_02123bc0
    add r1, r1, #1
    cmp r1, #0x20
    blt @L_02123ba8
@L_02123bc0:
    add r0, r5, #0x2200
    strh r1, [r0, #0xb2]
@L_02123bc8:
    add r0, r5, #0x2000
    str r4, [r0, #0x2e4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov014_02123bdc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov014_02122264
    ldrh r1, [r5]
    mov r4, r0
    cmp r1, #0x12
    ldmneia sp!, {r3, r4, r5, pc}
    ldrh r0, [r5, #2]
    strh r0, [r4, #0x24]
    ldrh r0, [r5, #2]
    cmp r0, #0
    bne @L_02123c10
    bl func_ov014_02121b34
@L_02123c10:
    add r0, r4, #4
    bl OS_WakeupThread
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov014_02123c1c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl func_ov014_02122264
    ldrh r1, [r5]
    mov r4, r0
    cmp r1, #0x12
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r0, [r5, #2]
    strh r0, [r4, #0x24]
    ldrh r0, [r5, #2]
    cmp r0, #0
    bne @L_02123c50
    bl func_ov014_02121b34
@L_02123c50:
    ldrh r0, [r4, #0x24]
    mov r5, #0
    cmp r0, #0
    beq @L_02123c64
    mvn r5, #4
@L_02123c64:
    ldr r6, [r4, #0x2c]
    mov r1, #0
    add r0, r4, #0xc
    str r1, [r4, #0x2c]
    bl func_ov014_02122448
    mov r0, r5
    blx r6
    ldmia sp!, {r4, r5, r6, pc}
}
