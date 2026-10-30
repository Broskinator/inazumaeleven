#include "ov038/Unk_ov038_02168e24.hpp"

extern "C" void func_ov038_02168e24(u8 *arg0);
extern "C" void func_ov038_02168e40(void);
extern "C" void func_ov038_02168ed4(void);
extern "C" void func_ov038_02168f28(void);
extern "C" void func_ov038_02168f94(s32 arg0);
extern "C" void func_ov038_02168fb0(void);
extern "C" void func_ov038_02169034(void);
extern "C" void func_ov038_0216947c(void);
extern "C" void func_ov038_02169498(void);
extern "C" void func_ov038_02169504(void);
extern "C" void func_ov038_02169668(void);
extern "C" void func_ov038_02169780(void);
extern "C" void func_ov038_02169794(void);
extern "C" void func_ov038_021697a8(void);
extern "C" void func_ov038_021697bc(u8 *arg0);
extern "C" void func_ov038_021697e4(void);
extern "C" void func_ov038_02169918(u8 *arg0);
extern "C" void func_ov038_02169954(void);
extern "C" void func_ov038_021699e4(void);
extern "C" void func_ov038_02169a44(void);
extern "C" void func_ov038_02169aec(u8 *arg0);
extern "C" void func_ov038_02169b50(void);
extern "C" void func_ov038_02169c10(void);
extern "C" void func_ov038_02169c80(void);
extern "C" void func_ov038_02169db8(void);
extern "C" void func_ov038_0216a0a4(void);
extern "C" void func_ov038_0216a11c(void);
extern "C" void func_ov038_0216a1e0(void);
extern "C" void func_ov038_0216a268(void);
extern "C" void func_ov038_0216a360(void);
extern "C" void func_ov038_0216a3bc(void);
extern "C" void func_ov038_0216a498(void);
extern "C" s32 func_ov038_0216a604(s32 arg0);
extern "C" void func_ov038_0216a618(void);

extern "C" char data_020c46c4[];
extern "C" char data_020c46c8[];
extern "C" char data_020c46cc[];
extern "C" char data_020c46d4[];
extern "C" char data_020c5e40[];
extern "C" char data_020e88a0[];
extern "C" char data_ov038_0216a624[];
extern "C" char data_ov038_0216a634[];
extern "C" char data_ov038_0216a644[];
extern "C" char data_ov038_0216a678[];
extern "C" char data_ov038_0216a6a8[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" void _ZN17UnkClass_020621b413func_0206dfa4Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_02076848Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207b28cEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0207b780Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207bdf8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207bee8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207d244Ev(void);
extern "C" void _ZN9EntryPool4SwapEii(void);
extern "C" void _ZN9EntryPool6RemoveEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_0202273c(void);
extern "C" void func_02081398(void);
extern "C" void func_020823a0(void);
extern "C" void func_02084e08(void);
extern "C" void func_02085228(void);
extern "C" void func_020859c0(void);
extern "C" void func_02085b4c(void);
extern "C" void func_02085ba4(void);
extern "C" void func_02085bfc(void);
extern "C" void func_02085d88(void);
extern "C" void func_02085e30(void);
extern "C" void func_02085ec0(void);
extern "C" void func_02086164(void);
extern "C" void func_0208620c(void);
extern "C" void func_020864f4(void);
extern "C" void func_020864fc(void);
extern "C" void func_02087464(void);
extern "C" void func_02087500(void);
extern "C" void func_020877e0(void);
extern "C" void func_020878ac(void);
extern "C" void func_020879e4(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_0209342c(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" s32 func_02093928(...);
extern "C" void func_020939c8(void);
extern "C" void func_02097b3c(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_02162140(void);
extern "C" void func_ov015_02162f70(void);
extern "C" void func_ov038_0216638c(void);
extern "C" void func_ov038_02166518(void);
extern "C" void func_ov038_02166bd8(void);
extern "C" void func_ov038_021672fc(void);
extern "C" void func_ov038_02167470(void);
extern "C" void func_ov038_02167530(void);
extern "C" void gEntryPool(void);

extern "C" void func_ov038_02168e24(u8 *arg0)
{
    *(s32 *)(arg0 + 0x9BC) = 1;
    _ZN12SoundManager9PlaySoundEi((s32)data_020c5e40, 1);
}

extern "C" asm void func_ov038_02168e40(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #0x9c0]
    ldr r1, [r0, #0x86c]
    add r3, r2, #1
    str r3, [r0, #0x9c0]
    cmp r3, #3
    mov r2, #2
    mov r12, #0
    bge @L_02168e78
    ldr r0, =data_020c46d4
    mov r3, r2
    ldr r0, [r0]
    bl func_02093928
    ldmia sp!, {r3, pc}
@L_02168e78:
    cmp r3, #6
    bge @L_02168e9c
    mov r3, #1
    str r3, [sp]
    ldr r0, =data_020c46d4
    mov r3, r2
    ldr r0, [r0]
    bl func_0209386c
    ldmia sp!, {r3, pc}
@L_02168e9c:
    cmp r3, #9
    bge @L_02168eb8
    ldr r0, =data_020c46d4
    mov r3, r2
    ldr r0, [r0]
    bl func_02093928
    ldmia sp!, {r3, pc}
@L_02168eb8:
    ldmneia sp!, {r3, pc}
    mov r1, r12
    str r12, [r0, #0x9bc]
    str r12, [r0, #0x9c0]
    bl func_ov038_02166bd8
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov038_02168ed4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020c46d4
    ldr r6, [r0, #0x86c]
    mov r5, #2
    mov r7, r1
    ldr r0, [r4]
    mov r1, r6
    mov r2, r5
    mov r3, r5
    bl func_02093928
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r6
    mov r2, r5
    mov r3, r5
    bl func_0209386c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov038_02168f28(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldr r1, [r0, #0x86c]
    mov r3, #2
    bne @L_02168f50
    ldr r0, =data_020c46d4
    mov r2, r3
    ldr r0, [r0]
    bl func_02093928
    ldmia sp!, {r3, pc}
@L_02168f50:
    ldrh r2, [r2, #8]
    ldr r0, [r0, #0x9c4]
    cmp r0, r2
    bne @L_02168f7c
    mov r2, #1
    str r2, [sp]
    ldr r0, =data_020c46d4
    mov r2, r3
    ldr r0, [r0]
    bl func_0209386c
    ldmia sp!, {r3, pc}
@L_02168f7c:
    ldr r0, =data_020c46d4
    mov r2, r3
    ldr r0, [r0]
    bl func_02093928
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov038_02168f94(s32 arg0)
{
    MI_CpuFill8(((arg0 + 0x94) + 0x800), 0, 0x80);
}

extern "C" asm void func_ov038_02168fb0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, #0
    mov r6, r0
    mov r4, r5
    mov r8, r5
    ldr r7, =data_020c46d4
    b @L_02169010
@L_02168fcc:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x894]
    cmp r1, #0
    beq @L_02168fec
    ldr r0, [r7]
    bl func_02092270
    add r0, r6, r5, lsl #2
    str r4, [r0, #0x894]
@L_02168fec:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x8d4]
    cmp r1, #0
    beq @L_0216900c
    ldr r0, [r7]
    bl func_02097b3c
    add r0, r6, r5, lsl #2
    str r8, [r0, #0x8d4]
@L_0216900c:
    add r5, r5, #1
@L_02169010:
    cmp r5, #0x10
    blt @L_02168fcc
    ldr r0, =data_020c46c4
    mov r1, #0xa
    ldr r0, [r0]
    bl func_ov015_02162140
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov038_02169034(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r6, #0
    mov r9, r0
    str r6, [sp, #0x44]
    mov r0, #0xf
    str r6, [sp, #0x14]
    str r0, [sp, #0x18]
    b @L_0216945c
@L_02169058:
    ldr r0, [sp, #0x14]
    mov r1, #0x78
    mul r1, r0, r1
    mov r0, r1
    add r0, r0, #0x14
    mov r0, r0, lsl #0x10
    str r0, [sp, #0x40]
    mov r0, r1
    add r0, r0, #0xb
    str r0, [sp, #0x1c]
    mov r0, r1
    add r0, r0, #0x33
    str r0, [sp, #0x24]
    add r0, r9, #0x40
    str r0, [sp, #0x28]
    mov r0, r1
    mov r8, #0
    add r10, r0, #0x70
    mov r0, r8
    add r0, r0, #3
    str r0, [sp, #0x34]
    mov r0, r8
    add r0, r0, #2
    str r0, [sp, #0x30]
    mov r0, r8
    add r0, r0, #1
    str r0, [sp, #0x2c]
    mov r0, r1
    add r0, r0, #0x78
    mov r11, #0x190
    str r0, [sp, #0x38]
    mov r0, r11, lsl #0x10
    str r1, [sp, #0x20]
    str r0, [sp, #0x3c]
    b @L_02169448
@L_021690e4:
    mov r0, #0
    str r0, [sp, #0x48]
    ldr r0, [sp, #0x14]
    add r4, r8, r0, lsl #3
    mov r0, #0x3c
    mla r0, r4, r0, r9
    ldrb r0, [r0, #0x7a]
    cmp r0, #1
    bne @L_021693f0
    add r0, r9, r4, lsl #2
    ldr r0, [r0, #0x894]
    cmp r0, #0
    bne @L_02169450
    ldr r0, =data_020c46d4
    mov r1, #6
    ldr r0, [r0]
    mov r2, #1
    bl func_020920c4
    add r1, r9, r4, lsl #2
    str r0, [r1, #0x894]
    mov r5, r0
    mov r0, #0x3c
    mla r0, r4, r0, r9
    ldrh r0, [r0, #0x68]
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02169180
    b @L_02169180
    b @L_02169164
    b @L_0216916c
    b @L_02169174
    b @L_0216917c
@L_02169164:
    mov r6, #3
    b @L_02169180
@L_0216916c:
    mov r6, #2
    b @L_02169180
@L_02169174:
    mov r6, #1
    b @L_02169180
@L_0216917c:
    mov r6, #0
@L_02169180:
    mov r0, #0xe
    str r0, [sp, #0x44]
    mov r0, r8, lsl #4
    add r7, r0, #0x20
    mov r0, #0x3c
    mla r0, r4, r0, r9
    ldrb r0, [r0, #0x79]
    mov r1, r5
    add r2, sp, #0x48
    cmp r0, #1
    addeq r6, r6, #4
    ldr r0, [sp, #0x1c]
    str r6, [sp]
    stmib sp, {r0, r7}
    str r11, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    ldr r3, [sp, #0x44]
    mov r0, r9
    bl func_ov038_02167470
    ldr r1, [sp, #0x48]
    mov r0, r9
    add r1, r1, #1
    str r1, [sp, #0x48]
    mov r1, #0x3c
    mla r1, r4, r1, r9
    ldrh r1, [r1, #0x66]
    bl func_ov038_021672fc
    str r0, [sp, #0x44]
    and r3, r0, #0xff
    mov r0, r8, lsl #4
    add r7, r0, #0x18
    ldr r0, =data_020c46d4
    ldr r2, [sp, #0x48]
    ldr r0, [r0]
    mov r1, r5
    bl func_02093188
    mov r0, #0
    str r0, [sp]
    ldr r0, =data_020c46d4
    ldr r2, [sp, #0x48]
    ldr r0, [r0]
    mov r1, r5
    mov r3, #0
    bl func_020939c8
    mov r0, r7, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r0, =data_020c46d4
    ldr r3, [sp, #0x40]
    ldr r0, [r0]
    ldr r2, [sp, #0x48]
    mov r1, r5
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r0, =data_020c46d4
    ldr r3, [sp, #0x3c]
    ldr r0, [r0]
    ldr r2, [sp, #0x48]
    mov r1, r5
    mov r3, r3, lsr #0x10
    bl func_02093368
    add r0, sp, #0x44
    str r0, [sp]
    ldr r0, [sp, #0x24]
    ldr r1, [sp, #0x28]
    mov r2, #0x3c
    mla r1, r4, r2, r1
    str r0, [sp, #4]
    mov r0, r8, lsl #4
    add r0, r0, #0x23
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    mov r0, r9
    mov r2, r5
    add r3, sp, #0x48
    bl func_ov038_02167530
    ldr r1, [sp, #0x44]
    add r0, r9, r4, lsl #2
    str r1, [r0, #0x8d4]
    mov r1, #0x3c
    mov r0, #0xf
    str r0, [sp, #0x44]
    mla r1, r4, r1, r9
    ldr r1, [r1, #0x74]
    mov r0, r8, lsl #4
    add r0, r0, #0x20
    tst r1, #0x400
    beq @L_021692ec
    mov r1, #0
    b @L_02169318
@L_021692ec:
    tst r1, #0x80
    beq @L_021692fc
    ldr r1, [sp, #0x2c]
    b @L_02169318
@L_021692fc:
    tst r1, #0x20
    beq @L_0216930c
    ldr r1, [sp, #0x30]
    b @L_02169318
@L_0216930c:
    tst r1, #0x1000
    beq @L_02169340
    ldr r1, [sp, #0x34]
@L_02169318:
    stmia sp, {r1, r10}
    str r0, [sp, #8]
    str r11, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    ldr r3, [sp, #0x44]
    mov r0, r9
    mov r1, r5
    add r2, sp, #0x48
    bl func_ov038_02167470
@L_02169340:
    mov r0, #0x10
    str r0, [sp, #0x44]
    mov r0, #0x3c
    mla r0, r4, r0, r9
    mov r1, r8, lsl #4
    add r7, r1, #0x28
    ldr r0, [r0, #0x60]
    ldr r1, =0x66666667
    smull r2, r6, r1, r0
    mov r1, r0, lsr #0x1f
    add r6, r1, r6, asr #2
    mov r1, #0xa
    smull r2, r3, r1, r6
    sub r6, r0, r2
    ldr r0, [sp, #0x38]
    str r6, [sp]
    stmib sp, {r0, r7}
    str r11, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    ldr r3, [sp, #0x44]
    mov r0, r9
    mov r1, r5
    add r2, sp, #0x48
    bl func_ov038_02167470
    mov r0, #0x3c
    mla r0, r4, r0, r9
    ldr r3, [r0, #0x60]
    cmp r3, #0xa
    blt @L_021693f0
    ldr r0, =0x66666667
    mov r1, r5
    smull r2, r6, r0, r3
    mov r0, r3, lsr #0x1f
    add r6, r0, r6, asr #2
    stmia sp, {r6, r10}
    str r7, [sp, #8]
    str r11, [sp, #0xc]
    mov r0, #1
    str r0, [sp, #0x10]
    ldr r3, [sp, #0x44]
    mov r0, r9
    add r2, sp, #0x48
    bl func_ov038_02167470
@L_021693f0:
    mov r0, r8, lsl #4
    add r0, r0, #0x20
    str r0, [sp]
    mov r0, #0x78
    str r0, [sp, #4]
    mov r0, #0x10
    str r0, [sp, #8]
    mov r0, #0x64
    str r0, [sp, #0xc]
    ldr r0, =data_020c46c4
    ldr r3, [sp, #0x20]
    ldr r0, [r0]
    ldr r2, [sp, #0x18]
    mov r1, #0xa
    add r3, r3, #8
    bl func_ov015_02162f70
    ldr r0, [sp, #0x18]
    add r8, r8, #1
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x18]
@L_02169448:
    cmp r8, #8
    blt @L_021690e4
@L_02169450:
    ldr r0, [sp, #0x14]
    add r0, r0, #1
    str r0, [sp, #0x14]
@L_0216945c:
    ldr r0, [sp, #0x14]
    cmp r0, #2
    blt @L_02169058
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_0216947c(void)
{
    add r0, r0, #0x920
    mov r2, #0x24
    mla r0, r1, r2, r0
    ldr r12, =MI_CpuFill8
    mov r1, #0
    bx r12
}

extern "C" asm void func_ov038_02169498(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    ldr r1, =data_020c46d4
    mov r4, #1
    mov r5, r0
    ldr r0, [r1]
    mov r1, r4
    mov r2, r4
    bl func_020920c4
    mov r2, #0
    mov r1, r0
    str r2, [sp, #0x14]
    str r1, [r5, #0x848]
    str r2, [sp]
    mov r3, #8
    str r3, [sp, #4]
    mov r0, #0x20
    str r0, [sp, #8]
    rsb r0, r4, #0x190
    str r0, [sp, #0xc]
    add r2, sp, #0x14
    mov r0, r5
    str r4, [sp, #0x10]
    bl func_ov038_02167470
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov038_02169504(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r3, #0x24
    mul r3, r1, r3
    ldr r4, =data_ov038_0216a634
    add r7, r0, #0x920
    ldr r11, [r4, #4]
    ldr r5, [r7, r3]
    mov r4, r2
    str r2, [r7, r3]
    mov r6, r5, asr #2
    add r2, r5, r6, lsr #29
    mov r6, r4, asr #2
    str r11, [sp, #0x1c]
    mov r7, r5, lsr #0x1f
    add r12, r4, r6, lsr #29
    rsb r6, r7, r5, lsl #29
    add r8, r7, r6, ror #29
    mov r9, r8, lsl #4
    add r10, r9, #0x20
    mov r8, r5, lsl #4
    mov r6, r4, lsr #0x1f
    rsb r5, r6, r4, lsl #29
    add r9, r8, #0x60
    ldr r7, =data_ov038_0216a644
    add r5, r6, r5, ror #29
    ldr r8, [r7, #4]
    mov r5, r5, lsl #4
    add r7, r5, #0x20
    mov r4, r4, lsl #4
    add r6, r4, #0x60
    str r9, [sp, #0x14]
    add r4, r0, #0x128
    add r5, r0, #0x12c
    mov r2, r2, asr #3
    mov r11, #0x78
    str r10, [sp, #0x10]
    mul r10, r2, r11
    mov r2, r12, asr #3
    mul r11, r2, r11
    add r2, r11, #8
    add r10, r10, #8
    str r10, [sp, #0x18]
    str r2, [sp, #8]
    add r11, sp, #0x18
    str r8, [sp, #0xc]
    ldr r8, [r11, r1, lsl #2]
    add r2, sp, #8
    add lr, r0, #0x124
    add r9, r0, r3
    mov r10, #1
    str r10, [r9, #0x93c]
    add r10, lr, #0x800
    add r12, sp, #0x10
    str r7, [sp]
    ldr r7, [r12, r1, lsl #2]
    add r11, sp, #0
    str r6, [sp, #4]
    ldr r2, [r2, r1, lsl #2]
    str r8, [r10, r3]
    add r4, r4, #0x800
    ldr r1, [r11, r1, lsl #2]
    str r7, [r4, r3]
    add r5, r5, #0x800
    str r2, [r5, r3]
    add r0, r0, #0x930
    str r1, [r0, r3]
    ldr r5, [r5, r3]
    ldr r1, [r10, r3]
    ldr r2, =0x55555556
    sub r5, r5, r1
    smull r1, r6, r2, r5
    add r6, r6, r5, lsr #31
    str r6, [r9, #0x934]
    ldr r5, [r0, r3]
    ldr r1, [r4, r3]
    ldr r0, =data_020c5e40
    sub r3, r5, r1
    smull r1, r4, r2, r3
    add r4, r4, r3, lsr #31
    mov r1, #8
    str r4, [r9, #0x938]
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_02169668(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    mov r2, r1
    mov r1, #0x24
    mul r4, r2, r1
    ldr r3, =data_ov038_0216a624
    add r1, r0, #0x940
    add lr, r0, r4
    ldr r9, [r1, r4]
    ldr r8, [r0, #0x848]
    ldr r7, [r0, #0x85c]
    ldr r6, [r3]
    ldr r5, [r3, #4]
    ldr r12, [lr, #0x924]
    ldr r3, [lr, #0x928]
    add r9, r9, #1
    str r9, [r1, r4]
    ldr r1, [lr, #0x934]
    ldr r10, [lr, #0x940]
    ldr r9, [lr, #0x938]
    mla r4, r1, r10, r12
    cmp r1, #0
    mla r3, r9, r10, r3
    str r8, [sp, #0xc]
    str r7, [sp, #0x10]
    str r6, [sp, #4]
    str r5, [sp, #8]
    ldr r1, [lr, #0x92c]
    bge @L_021696e8
    cmp r4, r1
    movlt r4, r1
    b @L_021696f0
@L_021696e8:
    cmp r4, r1
    movgt r4, r1
@L_021696f0:
    mov r1, #0x24
    mla r5, r2, r1, r0
    ldr r1, [r5, #0x938]
    cmp r1, #0
    ldr r1, [r5, #0x930]
    bge @L_02169714
    cmp r3, r1
    movlt r3, r1
    b @L_0216971c
@L_02169714:
    cmp r3, r1
    movgt r3, r1
@L_0216971c:
    mov r1, #0x24
    mla r1, r2, r1, r0
    ldr r0, [r1, #0x92c]
    add r5, sp, #4
    cmp r4, r0
    ldreq r0, [r1, #0x930]
    cmpeq r3, r0
    moveq r0, #0
    streq r0, [r1, #0x93c]
    streq r0, [r1, #0x940]
    mov r0, r3, lsl #0x10
    mov r6, r0, asr #0x10
    add r1, sp, #0xc
    mov r3, r4, lsl #0x10
    ldr r1, [r1, r2, lsl #2]
    ldr r0, =data_020c46d4
    str r6, [sp]
    ldr r0, [r0]
    ldr r2, [r5, r2, lsl #2]
    mov r3, r3, asr #0x10
    bl func_02093524
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov038_02169780(void)
{
    ldr r2, [r0, #0x920]
    mov r1, #0x3c
    mla r0, r2, r1, r0
    ldrh r0, [r0, #0x64]
    bx lr
}

extern "C" asm void func_ov038_02169794(void)
{
    ldr r2, [r0, #0x920]
    mov r1, #0x3c
    mla r0, r2, r1, r0
    ldr r0, [r0, #0x74]
    bx lr
}

extern "C" asm void func_ov038_021697a8(void)
{
    ldr r1, [r0, #0x920]
    add r2, r0, #0x40
    mov r0, #0x3c
    mla r0, r1, r0, r2
    bx lr
}

extern "C" void func_ov038_021697bc(u8 *arg0)
{
    MI_CpuFill8(((arg0 + 0x18C) + 0x800), 0, 0x28);
    *(s32 *)(arg0 + 0x9B4) = 0;
}

extern "C" asm void func_ov038_021697e4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r10, r0
    ldr r1, [r10, #0x868]
    cmp r1, #0
    addne sp, sp, #0x18
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, #3
    str r1, [sp, #0x14]
    mov r1, #0x60
    str r1, [sp]
    mov r1, #0xa8
    str r1, [sp, #4]
    mov r1, #0xc
    mov r7, #0
    str r1, [sp, #8]
    mov r4, #0x64
    mov r8, #8
    str r4, [sp, #0xc]
    mov r11, #1
    str r11, [sp, #0x10]
    ldr r2, [sp, #0x14]
    mov r1, r8
    mov r3, r7
    bl func_ov038_0216638c
    ldr r0, =data_020c46d4
    mov r2, r11
    ldr r0, [r0]
    mov r1, #4
    bl func_020920c4
    mov r6, r0
    str r6, [r10, #0x868]
    str r7, [sp, #0x14]
    stmia sp, {r7, r8}
    mov r5, #0x20
    add r4, r4, #0xfa
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    str r7, [sp, #0x10]
    mov r0, r10
    mov r1, r6
    mov r3, #9
    add r2, sp, #0x14
    bl func_ov038_02167470
    stmia sp, {r7, r8}
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r6
    add r2, sp, #0x14
    mov r3, r11
    str r7, [sp, #0x10]
    bl func_ov038_02167470
    add r9, r7, #1
    str r9, [sp]
    str r8, [sp, #4]
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r6
    add r2, sp, #0x14
    mov r3, r11
    str r7, [sp, #0x10]
    bl func_ov038_02167470
    add r0, r9, #1
    stmia sp, {r0, r8}
    str r5, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r10
    mov r1, r6
    add r2, sp, #0x14
    mov r3, r11
    str r7, [sp, #0x10]
    bl func_ov038_02167470
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov038_02169918(u8 *arg0)
{
    MI_CpuFill8(((arg0 + 0x18C) + 0x800), 0, 0x14);
    func_02093928(*(s32 *)(data_020c46d4), *(s32 *)(arg0 + 0x868), 1, 2);
}

extern "C" asm void func_ov038_02169954(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov038_021699e4
    cmp r0, #1
    bne @L_021699c4
    ldr r3, [r5, #0x920]
    mov r4, #1
    mov r0, r3, asr #2
    add r0, r3, r0, lsr #29
    mov r1, r0, asr #3
    mov r0, #0x78
    mul r2, r1, r0
    mov r1, r3, lsr #0x1f
    rsb r0, r1, r3, lsl #29
    add r0, r1, r0, ror #29
    mov r0, r0, lsl #4
    add r12, r2, #8
    add r2, r0, #0x20
    mov r0, r5
    mov r1, r4
    str r4, [r5, #0x998]
    str r12, [r5, #0x990]
    str r2, [r5, #0x994]
    str r3, [r5, #0x98c]
    bl func_ov038_02166bd8
    ldr r0, =data_020c5e40
    mov r1, r4
    b @L_021699cc
@L_021699c4:
    ldr r0, =data_020c5e40
    mov r1, #9
@L_021699cc:
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, #0xc
    bl func_ov038_02166518
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov038_021699e4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov038_02169780
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov038_02169794
    tst r0, #0x400
    mov r0, r4
    beq @L_02169a20
    mov r1, #5
    bl func_ov038_02166bd8
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_02169a20:
    bl func_ov038_02169794
    tst r0, #0x20
    movne r0, #0
    ldmneia sp!, {r4, pc}
    ldr r0, [r4, #0x920]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov038_02169a44(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    ldr r0, [r7, #0x99c]
    mov r4, #0xf
    ldr r9, [r7, #0x994]
    ldr r8, [r7, #0x990]
    mov r1, r4
    add r0, r0, #1
    ldr r5, [r7, #0x868]
    mov r6, #1
    bl func_0202273c
    mov r3, r8, lsl #0x10
    mov r0, r9, lsl #0x10
    str r1, [r7, #0x99c]
    mov r0, r0, asr #0x10
    ldr r8, =data_020c46d4
    str r0, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, r3, asr #0x10
    bl func_02093524
    str r6, [sp]
    ldr r0, [r8]
    mov r1, r5
    mov r2, r6
    mov r3, #2
    bl func_0209386c
    ldr r1, [r7, #0x99c]
    add r0, r4, r4, lsr #31
    cmp r1, r0, asr #1
    rsbgt r0, r1, #0
    addgt r1, r0, r4
    add r3, r1, r1, lsl #1
    ldr r0, =data_020c46d4
    mov r1, r5
    ldr r0, [r0]
    mov r2, r6
    and r3, r3, #0xff
    bl func_0209342c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_ov038_02169aec(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0x9A0), 0, 0x14);
    func_02093928(*(s32 *)(data_020c46d4), *(s32 *)(arg0 + 0x868), 1, 2);
    func_02093928(*(s32 *)(data_020c46d4), *(s32 *)(arg0 + 0x868), 2, 2);
    func_02093928(*(s32 *)(data_020c46d4), *(s32 *)(arg0 + 0x868), 3, 2);
}

extern "C" asm void func_ov038_02169b50(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    mov r5, r0
    bl func_ov038_02169c10
    cmp r0, #1
    bne @L_02169be8
    ldr r0, =data_ov038_0216a678
    add r12, sp, #0
    ldmia r0, {r0, r1, r2, r3}
    stmia r12, {r0, r1, r2, r3}
    ldr r0, [r5, #0x920]
    mov r2, #0x78
    mov r1, r0, asr #2
    add r1, r0, r1, lsr #29
    mov r1, r1, asr #3
    mul r3, r1, r2
    mov r2, r0, lsr #0x1f
    rsb r1, r2, r0, lsl #29
    add r1, r2, r1, ror #29
    mov r2, r1, lsl #4
    mov r1, r0, asr #1
    add r3, r3, #8
    mov r4, #1
    add r2, r2, #0x20
    add r1, r0, r1, lsr #30
    str r0, [r5, #0x9a0]
    mov r0, r1, asr #2
    str r4, [r5, #0x9ac]
    str r3, [r5, #0x9a4]
    str r2, [r5, #0x9a8]
    ldr r2, [r12, r0, lsl #2]
    mov r0, r5
    mov r1, #2
    str r2, [r5, #0x9b4]
    bl func_ov038_02166bd8
    ldr r0, =data_020c5e40
    mov r1, r4
    b @L_02169bf0
@L_02169be8:
    ldr r0, =data_020c5e40
    mov r1, #9
@L_02169bf0:
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r5
    mov r1, #0xc
    bl func_ov038_02166518
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov038_02169c10(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov038_02169780
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov038_02169794
    tst r0, #0x400
    mov r0, r4
    beq @L_02169c4c
    mov r1, #5
    bl func_ov038_02166bd8
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_02169c4c:
    bl func_ov038_02169794
    tst r0, #0x20
    movne r0, #0
    ldmneia sp!, {r4, pc}
    ldr r1, [r4, #0x920]
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0x98c]
    cmp r0, r1
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov038_02169c80(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, r0
    ldr r0, [r5, #0x9b0]
    mov r7, #0xb
    add r4, r7, #1
    ldr r10, [r5, #0x9a8]
    add r0, r0, #1
    add r1, r4, #1
    ldr r6, [r5, #0x9a4]
    ldr r9, [r5, #0x868]
    ldr r8, [r5, #0x9b4]
    mov r11, #0
    bl func_0202273c
    mov r0, r10, lsl #0x10
    mov r10, r1
    mov r2, r0, asr #0x10
    mov r0, r6, lsl #0x10
    str r10, [r5, #0x9b0]
    str r2, [sp]
    ldr r6, =data_020c46d4
    mov r3, r0, asr #0x10
    ldr r0, [r6]
    mov r1, r9
    add r2, r8, #2
    bl func_02093524
    cmp r10, #2
    bgt @L_02169d0c
    mov r0, #1
    str r0, [sp]
    ldr r0, [r6]
    mov r1, r9
    mov r3, #2
    add r2, r8, #2
    bl func_0209386c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169d0c:
    cmp r10, #5
    bgt @L_02169d2c
    ldr r0, [r6]
    mov r1, r9
    mov r3, #2
    add r2, r8, #2
    bl func_02093928
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169d2c:
    cmp r10, #8
    bgt @L_02169d54
    mov r0, #1
    str r0, [sp]
    ldr r0, [r6]
    mov r1, r9
    mov r3, #2
    add r2, r8, #2
    bl func_0209386c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169d54:
    cmp r10, r7
    bgt @L_02169d74
    ldr r0, [r6]
    mov r1, r9
    mov r3, #2
    add r2, r8, #2
    bl func_02093928
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169d74:
    cmp r10, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    bl func_ov038_02169db8
    mov r0, r5
    bl func_ov038_02168fb0
    mov r0, r5
    bl func_ov038_02169034
    mov r0, r5
    mov r1, r11
    bl func_ov038_02166bd8
    mov r0, r5
    bl func_ov038_02169918
    mov r0, r5
    bl func_ov038_02169aec
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_02169db8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x5c
    mov r10, r0
    ldr r1, [r10, #0x98c]
    mov r5, #0x3c
    ldr r0, [r10, #0x9a0]
    mul r9, r1, r5
    mul r8, r0, r5
    add r0, r10, #0x78
    str r0, [sp]
    ldr r1, [sp]
    add r11, sp, #0x20
    add r3, r10, r8
    ldrb r6, [r1, r9]
    mov r0, r11
    mov r2, r5
    mov r1, #0
    ldrb r7, [r3, #0x78]
    bl MI_CpuFill8
    add r4, r10, #0x40
    mov r1, r11
    add r0, r4, r9
    mov r2, r5
    bl MI_CpuCopy8
    cmp r6, #1
    bne @L_02169f5c
    cmp r7, #1
    bne @L_02169e54
    mov r6, r4
    mov r2, r5
    add r0, r6, r8
    add r1, r4, r9
    bl MI_CpuCopy8
    mov r0, r11
    mov r2, r5
    add r1, r6, r8
    bl MI_CpuCopy8
    add sp, sp, #0x5c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169e54:
    mov r5, r4
    mov r6, #0x20
    mov r2, r6
    add r0, r5, r8
    add r1, r4, r9
    bl MI_CpuCopy8
    add r0, r10, #0x60
    str r0, [sp, #4]
    ldr r0, [r0, r8]
    add r3, r10, r9
    str r0, [r3, #0x60]
    add r0, r10, #0x64
    ldrh r2, [r0, r8]
    add r7, r10, #0x66
    add r1, r5, r8
    strh r2, [r3, #0x64]
    ldrh r4, [r7, r8]
    mov r2, r6
    add r6, r10, #0x68
    strh r4, [r3, #0x66]
    ldrh r12, [r6, r8]
    str r0, [sp, #8]
    mov r0, r11
    strh r12, [r3, #0x68]
    add r5, r10, #0x6c
    ldr lr, [r5, r8]
    add r12, r10, #0x79
    add r4, r10, #0x74
    add r11, r10, #0x78
    str lr, [r3, #0x6c]
    str r12, [sp, #0xc]
    ldr r12, [r4, r8]
    add r10, r10, #0x7a
    str r12, [r3, #0x74]
    ldrb lr, [r11, r8]
    ldr r12, [sp]
    strb lr, [r12, r9]
    ldr r9, [sp, #0xc]
    ldrb r9, [r9, r8]
    strb r9, [r3, #0x79]
    ldrb r9, [r10, r8]
    strb r9, [r3, #0x7a]
    bl MI_CpuCopy8
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #4]
    str r1, [r0, r8]
    ldrh r1, [sp, #0x44]
    ldr r0, [sp, #8]
    strh r1, [r0, r8]
    ldrh r0, [sp, #0x46]
    strh r0, [r7, r8]
    ldrh r0, [sp, #0x48]
    strh r0, [r6, r8]
    ldr r0, [sp, #0x4c]
    str r0, [r5, r8]
    ldr r0, [sp, #0x54]
    str r0, [r4, r8]
    ldrb r0, [sp, #0x58]
    strb r0, [r11, r8]
    ldrb r1, [sp, #0x59]
    ldr r0, [sp, #0xc]
    strb r1, [r0, r8]
    ldrb r0, [sp, #0x5a]
    add sp, sp, #0x5c
    strb r0, [r10, r8]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02169f5c:
    cmp r7, #1
    bne @L_0216a078
    mov r5, r4
    mov r6, #0x20
    mov r2, r6
    add r0, r5, r8
    add r1, r4, r9
    bl MI_CpuCopy8
    add r0, r10, #0x60
    str r0, [sp, #0x10]
    ldr r0, [r0, r8]
    add r3, r10, r9
    str r0, [r3, #0x60]
    add r0, r10, #0x64
    ldrh r2, [r0, r8]
    add r7, r10, #0x66
    add r1, r5, r8
    strh r2, [r3, #0x64]
    ldrh r4, [r7, r8]
    mov r2, r6
    str r0, [sp, #0x14]
    strh r4, [r3, #0x66]
    add r6, r10, #0x68
    ldrh r12, [r6, r8]
    mov r0, r11
    add r11, r10, #0x78
    str r11, [sp, #0x1c]
    add r11, r10, #0x79
    add r5, r10, #0x6c
    strh r12, [r3, #0x68]
    ldr r12, [r5, r8]
    add r4, r10, #0x74
    str r12, [r3, #0x6c]
    str r11, [sp, #0x18]
    ldr r11, [r4, r8]
    add r10, r10, #0x7a
    str r11, [r3, #0x74]
    ldr r11, [sp, #0x1c]
    ldrb r12, [r11, r8]
    ldr r11, [sp]
    strb r12, [r11, r9]
    ldr r9, [sp, #0x18]
    ldrb r9, [r9, r8]
    strb r9, [r3, #0x79]
    ldrb r9, [r10, r8]
    strb r9, [r3, #0x7a]
    bl MI_CpuCopy8
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #0x10]
    str r1, [r0, r8]
    ldrh r1, [sp, #0x44]
    ldr r0, [sp, #0x14]
    strh r1, [r0, r8]
    ldrh r0, [sp, #0x46]
    strh r0, [r7, r8]
    ldrh r0, [sp, #0x48]
    strh r0, [r6, r8]
    ldr r0, [sp, #0x4c]
    str r0, [r5, r8]
    ldr r0, [sp, #0x54]
    str r0, [r4, r8]
    ldrb r1, [sp, #0x58]
    ldr r0, [sp, #0x1c]
    strb r1, [r0, r8]
    ldrb r1, [sp, #0x59]
    ldr r0, [sp, #0x18]
    strb r1, [r0, r8]
    ldrb r0, [sp, #0x5a]
    add sp, sp, #0x5c
    strb r0, [r10, r8]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0216a078:
    mov r6, r4
    mov r2, r5
    add r0, r6, r8
    add r1, r4, r9
    bl MI_CpuCopy8
    mov r0, r11
    mov r2, r5
    add r1, r6, r8
    bl MI_CpuCopy8
    add sp, sp, #0x5c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_0216a0a4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    bl func_ov038_0216a11c
    mov r0, r6
    bl func_ov038_0216a1e0
    mov r0, r6
    bl func_ov038_0216a268
    mov r0, r6
    bl func_ov038_0216a360
    mov r0, r6
    bl func_ov038_0216a3bc
    ldr r0, [r6, #0x7cc]
    mov r5, #0
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020e88a0
    mov r7, r5
@L_0216a0e8:
    ldr r1, [r6, #0x7c8]
    mov r0, r4
    ldr r1, [r1, r5, lsl #2]
    mov r2, r7
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_020823a0
    ldr r0, [r6, #0x7cc]
    add r5, r5, #1
    cmp r5, r0
    blt @L_0216a0e8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov038_0216a11c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, #0
    mov r10, r0
    mov r7, r9
    mov r11, #1
    ldr r5, =data_020c46cc
    ldr r4, =data_020c46c8
    b @L_0216a1c4
@L_0216a13c:
    mov r0, #0x3c
    mla r0, r9, r0, r10
    add r0, r0, #0x400
    ldrh r8, [r0, #0x24]
    cmp r8, #0
    beq @L_0216a1c0
    ldr r0, =data_020e88a0
    mov r1, r7
    mov r2, r8
    bl _ZN17UnkClass_020621b413func_0207bdf8Ev
    ldr r0, [r5]
    mov r1, r8
    mov r2, r7
    bl func_02085d88
    mov r6, r0
    ldr r0, [r5]
    mov r1, r6
    mov r2, r11
    bl func_0208620c
    ldr r0, [r5]
    mov r1, r6
    bl func_02085b4c
    ldr r0, [r4]
    mov r1, r8
    mov r2, r7
    bl func_02087464
    mov r1, r0
    ldr r0, [r4]
    mov r2, r11
    bl func_020877e0
    ldr r0, [r4]
    mov r1, r11
    bl func_020879e4
@L_0216a1c0:
    add r9, r9, #1
@L_0216a1c4:
    ldr r0, [r10, #0x7c0]
    cmp r9, r0
    blt @L_0216a13c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_0216a1e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x40
    ldr r5, =data_ov038_0216a6a8
    add r4, sp, #0
    ldmia r5!, {r0, r1, r2, r3}
    mov r7, r4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r8, #0
    ldr r6, =data_020e88a0
    mov r4, #1
    mov r5, r8
@L_0216a224:
    ldr r2, [r7, r8, lsl #2]
    mov r0, r6
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0207d244Ev
    movs r2, r0
    beq @L_0216a24c
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl _ZN17UnkClass_020621b413func_0207bee8Ev
@L_0216a24c:
    add r8, r8, #1
    cmp r8, #0x10
    blt @L_0216a224
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov038_0216a268(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, #0
    ldr r5, =gEntryPool
    mov r4, r0
    mov r8, r10
    mov r6, r10
    mov r11, r10
@L_0216a284:
    mov r0, #0x3c
    mla r0, r8, r0, r4
    ldrh r7, [r0, #0x64]
    cmp r7, #0
    beq @L_0216a328
    mov r9, r6
@L_0216a29c:
    mov r0, r9
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216a2d0
    ldrh r0, [r0, #0x42]
    cmp r7, r0
    bne @L_0216a2d0
    mov r0, r5
    mov r1, r9
    mov r2, r10
    bl _ZN9EntryPool4SwapEii
    add r10, r10, #1
    b @L_0216a2dc
@L_0216a2d0:
    add r9, r9, #1
    cmp r9, #0x10
    blt @L_0216a29c
@L_0216a2dc:
    cmp r9, #0x10
    blt @L_0216a328
    mov r9, r11
@L_0216a2e8:
    add r0, r9, #0x20
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216a31c
    ldrh r0, [r0, #0x42]
    cmp r7, r0
    bne @L_0216a31c
    mov r0, r5
    mov r2, r10
    add r1, r9, #0x20
    bl _ZN9EntryPool4SwapEii
    add r10, r10, #1
    b @L_0216a328
@L_0216a31c:
    add r9, r9, #1
    cmp r9, #0x64
    blt @L_0216a2e8
@L_0216a328:
    add r8, r8, #1
    cmp r8, #0x10
    blt @L_0216a284
    cmp r10, #0x10
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =gEntryPool
@L_0216a340:
    mov r0, r4
    mov r1, r10
    bl _ZN9EntryPool6RemoveEi
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_0216a340
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_0216a360(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, #0
    ldr r5, =data_020e88a0
    mov r9, r0
    mov r7, #0x10
    mov r6, r8
    mov r4, #0x3c
@L_0216a37c:
    mla r0, r8, r4, r9
    ldrh r2, [r0, #0x64]
    cmp r2, #0
    beq @L_0216a3a8
    ldr r3, [r0, #0x6c]
    mov r0, r5
    cmp r3, #0
    moveq r3, r7
    mov r1, r6
    str r6, [sp]
    bl _ZN17UnkClass_020621b413func_0207b28cEv
@L_0216a3a8:
    add r8, r8, #1
    cmp r8, #0x10
    blt @L_0216a37c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov038_0216a3bc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldr r0, =data_020e88a0
    mov r7, #0
    bl _ZN17UnkClass_020621b413func_02076848Ev
    mov r8, r0
    cmp r8, #0
    ble @L_0216a3e8
    cmp r8, #5
    blt @L_0216a3ec
@L_0216a3e8:
    mov r8, #4
@L_0216a3ec:
    cmp r8, #0
    mov r9, #0
    addle sp, sp, #0xc
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020e88a0
    mov r11, r9
@L_0216a404:
    mov r0, #0x3c
    mla r0, r9, r0, r10
    ldrh r5, [r0, #0x64]
    cmp r5, #0
    beq @L_0216a480
    ldr r6, [r0, #0x70]
    cmp r6, #0
    bne @L_0216a43c
    bl func_ov015_021319bc
    mov r1, r0
    mov r0, r4
    mov r2, #2
    bl _ZN17UnkClass_020621b413func_0206dfa4Ev
    mov r6, r0
@L_0216a43c:
    str r11, [sp]
    str r11, [sp, #4]
    mov r0, r4
    mov r1, r11
    mov r2, r5
    add r3, r7, #1
    str r6, [sp, #8]
    bl _ZN17UnkClass_020621b413func_0207b780Ev
    mov r0, r5
    mov r1, r11
    bl func_ov015_02130b14
    mov r1, r6
    bl func_02081398
    mov r1, r5
    mov r0, r10
    bl func_ov038_0216a498
    add r7, r7, #1
@L_0216a480:
    cmp r7, r8
    add r9, r9, #1
    blt @L_0216a404
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov038_0216a498(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x98
    mov r10, r1
    mov r0, r10
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    mov r9, #0x32
    ldrneh r8, [r0, #0x6e]
    bne @L_0216a4e0
    ldr r0, =data_020e88a0
    add r2, sp, #0x38
    mov r1, r10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    cmp r0, #0
    addeq sp, sp, #0x98
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r8, [sp, #0x88]
@L_0216a4e0:
    ldr r4, =data_020c46cc
    str r9, [sp]
    mov r7, #0
    ldr r0, [r4]
    mov r1, r10
    mov r2, r7
    mov r3, r8
    bl func_020859c0
    mov r6, r0
    ldr r0, [r4]
    mov r1, r6
    sub r2, r7, #1
    bl func_02086164
    ldr r0, [r4]
    mov r1, r6
    bl func_02085ba4
    mov r5, #1
    mov r1, r5
    bl func_02084e08
    ldr r0, [r4]
    bl func_020864f4
    mov r1, r6
    bl func_02085228
    mov r2, r0
    ldr r1, [r4]
    add r0, sp, #0x20
    bl func_020864fc
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x24]
    ldr r1, [sp, #0x28]
    str r2, [sp, #0x30]
    str r7, [sp]
    stmib sp, {r2, r7}
    str r5, [sp, #0xc]
    str r5, [sp, #0x10]
    str r1, [sp, #0x34]
    ldr r1, [r4]
    add r0, sp, #0x14
    mov r2, r6
    str r3, [sp, #0x2c]
    bl func_02085ec0
    ldr r2, [sp, #0x34]
    ldr r0, [r4]
    mov r2, r2, lsl #0x10
    mov r1, r6
    mov r2, r2, lsr #0x10
    bl func_02085e30
    ldr r0, [r4]
    mov r1, r6
    bl func_02085bfc
    ldr r4, =data_020c46c8
    str r9, [sp]
    mov r6, r0
    ldr r0, [r4]
    mov r1, r10
    mov r2, r8
    mov r3, r7
    bl func_020878ac
    str r8, [sp]
    stmib sp, {r7, r9}
    ldr r0, [r4]
    mov r1, r6
    mov r2, r10
    mov r3, r7
    bl func_02087500
    ldr r0, [r4]
    mov r1, r5
    bl func_020879e4
    add sp, sp, #0x98
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov038_0216a604(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov038_0216a618(void)
{
}
