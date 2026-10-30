#include "ov000/Unk_ov000_0211289c.hpp"

extern "C" void func_ov000_0211289c(void);
extern "C" void func_ov000_02112de8(void);
extern "C" void func_ov000_02113580(void);
extern "C" void func_ov000_0211367c(void);
extern "C" void func_ov000_02113744(void);
extern "C" void func_ov000_02113af0(void);
extern "C" void func_ov000_02113c14(void);
extern "C" void func_ov000_02113cd8(void);
extern "C" void func_ov000_02113e3c(void);
extern "C" void func_ov000_02113f5c(void);
extern "C" void func_ov000_021140e8(void);
extern "C" void func_ov000_02114250(void);
extern "C" void func_ov000_02114298(void);
extern "C" void func_ov000_02114338(void);
extern "C" void func_ov000_021143d8(void);
extern "C" void func_ov000_0211453c(void);
extern "C" void func_ov000_0211468c(void);
extern "C" void func_ov000_021148a8(void);
extern "C" void func_ov000_02114a8c(void);
extern "C" void func_ov000_02114c1c(void);
extern "C" void func_ov000_02114db4(void);
extern "C" void func_ov000_02114df8(void);

extern "C" char data_020c47b4[];
extern "C" char data_020cac9c[];
extern "C" char data_020cacc8[];
extern "C" char data_020cadf4[];
extern "C" char data_020caf20[];
extern "C" char data_020cb0a0[];
extern "C" char data_020e88a0[];
extern "C" char data_ov000_0211769c[];
extern "C" char data_ov000_021176d4[];
extern "C" char data_ov000_02118678[];
extern "C" void MI_CpuFill8(void);
extern "C" void STD_CompareString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void VEC_DotProduct(void);
extern "C" void _ZN17UnkClass_020621b413func_0206e1fcEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0206ea68Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a534Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207af84Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207e5fcEv(void);
extern "C" void _ZN17UnkClass_020621b413func_0207efd8Ev(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f07cEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001d80(void);
extern "C" void func_02001f08(void);
extern "C" void func_02001f38(void);
extern "C" void func_02001fa4(void);
extern "C" void func_02002084(void);
extern "C" void func_02002198(void);
extern "C" void func_020021f0(void);
extern "C" void func_0200919c(void);
extern "C" void func_02016d0c(void);
extern "C" void func_02016e10(void);
extern "C" void func_0202273c(void);
extern "C" void func_020816b0(void);
extern "C" void func_0208170c(void);
extern "C" void func_020817bc(void);
extern "C" void func_02081894(void);
extern "C" void func_02081a6c(void);
extern "C" void func_02081f28(void);
extern "C" void func_02081f50(void);
extern "C" void func_02084aec(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov000_021122b4(void);
extern "C" void func_ov000_0211233c(void);
extern "C" void func_ov000_02116308(void);
extern "C" void func_ov000_02116348(void);
extern "C" void func_ov000_02116958(void);
extern "C" void func_ov015_021309a4(void);
extern "C" void gGameState(void);

extern "C" asm void func_ov000_0211289c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x98
    mov r7, r2
    ldr r3, [r7, #0x18]
    mvn r2, #0
    str r3, [sp, #0x4c]
    str r2, [sp, #0x24]
    ldr r2, [r7, #0x1c]
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x24]
    str r2, [sp, #0x48]
    str r0, [sp, #0x44]
    ldrsb r0, [r7, #0xd]
    mov r8, r1
    bic r0, r0, #3
    strb r0, [r7, #0xd]
@L_021128dc:
    ldr r0, [sp, #0x18]
    mov r4, #0
    add r1, sp, #0x4c
    add r2, sp, #0x44
    mov r3, r8
    str r4, [sp, #0x20]
    bl func_ov000_0211233c
    ldr r1, [r8, #4]
    cmp r0, r1
    strge r0, [r8, #4]
    ldrgesb r0, [r7, #0xd]
    orrge r0, r0, #1
    strgeb r0, [r7, #0xd]
    bge @L_0211292c
    ldrsb r1, [r7, #0xd]
    tst r1, #0x10
    strne r0, [r8, #4]
    ldrnesb r0, [r7, #0xd]
    orrne r0, r0, #1
    strneb r0, [r7, #0xd]
@L_0211292c:
    ldr r0, [sp, #0x18]
    add r2, sp, #0x48
    mov r3, r8
    mov r1, #2
    bl func_ov000_0211367c
    cmp r0, #0
    beq @L_02112d6c
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x48]
    ldr r0, [r0, #8]
    mov r6, #0
    ldr r0, [r0, r1, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r0, #0
    ble @L_02112d6c
    mvn r0, #0
    add r4, sp, #0x74
    str r0, [sp, #0x3c]
@L_02112974:
    ldr r0, [sp, #0x3c]
    cmp r6, r0
    beq @L_02112d4c
    ldr r0, [sp, #0x18]
    mov r2, r6
    mov r3, r4
    bl func_ov000_021122b4
    add r0, sp, #0x80
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, sp, #0x8c
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, sp, #0x68
    ldmia r4, {r1, r2, r3}
    bl func_ov000_02113c14
    mov r5, r0
    ldr r0, [sp, #0x68]
    ldr r3, [sp, #0x70]
    str r0, [sp, #0x28]
    mov r2, r3, asr #0x1f
    mov r0, r0, asr #0x1f
    str r2, [sp, #0x30]
    str r0, [sp, #0x2c]
    ldr r9, [sp, #0x28]
    ldmia r8, {r10, r12}
    smull r9, r11, r10, r9
    adds r9, r9, #0x800
    ldr r2, [r7, #0x14]
    ldr r1, [sp, #0x6c]
    ldr r0, [r8, #8]
    adc r11, r11, #0
    mov r9, r9, lsr #0xc
    orr r9, r9, r11, lsl #20
    smull lr, r11, r12, r1
    add r2, r12, r2
    str r11, [sp, #0x40]
    smull r12, r11, r2, r1
    str r11, [sp, #0x38]
    smull r2, r11, r0, r3
    adds r2, r2, #0x800
    str r12, [sp, #0x34]
    adc r11, r11, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r11, lsl #20
    adds r11, lr, #0x800
    ldr r12, [sp, #0x40]
    mov r11, r11, lsr #0xc
    adc r12, r12, #0
    orr r11, r11, r12, lsl #20
    ldr r12, [sp, #0x34]
    add r11, r9, r11
    adds lr, r12, #0x800
    ldr r12, [sp, #0x38]
    add r11, r2, r11
    adc r12, r12, #0
    mov lr, lr, lsr #0xc
    orr lr, lr, r12, lsl #20
    add r9, r9, lr
    add r2, r2, r9
    sub r11, r11, r5
    sub r9, r2, r5
    muls r2, r11, r9
    bpl @L_02112be0
    ldr r12, [sp, #0x28]
    mov r2, r10, asr #0x1f
    umull r11, r9, r12, r10
    mla r9, r12, r2, r9
    ldr r2, [sp, #0x2c]
    mov lr, r0, asr #0x1f
    mla r9, r2, r10, r9
    adds r2, r11, #0x800
    adc r9, r9, #0
    mov r2, r2, lsr #0xc
    str r10, [sp, #0x5c]
    orr r2, r2, r9, lsl #20
    umull r10, r9, r3, r0
    mla r9, r3, lr, r9
    ldr r3, [sp, #0x30]
    mla r9, r3, r0, r9
    adds r3, r10, #0x800
    adc r0, r9, #0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
    add r0, r2, r3
    sub r0, r0, r5
    bl func_02001d60
    rsb r0, r0, #0
    str r0, [sp, #0x60]
    ldr r1, [r8, #8]
    mov r0, r4
    str r1, [sp, #0x64]
    ldr r1, [r7, #0x10]
    str r1, [sp]
    add r1, sp, #0x5c
    ldmia r1, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    beq @L_02112d4c
    add r0, sp, #0x5c
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0x68
    mov r0, r4
    ldmia r1, {r1, r2, r3}
    bl func_ov000_021140e8
    cmp r0, #0
    ble @L_02112b58
    ldr r1, [sp, #0x5c]
    mov r0, #1
    str r1, [r8]
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x60]
    str r0, [r8, #4]
    ldr r0, [sp, #0x64]
    str r0, [r8, #8]
    str r6, [sp, #0x44]
    b @L_02112d6c
@L_02112b58:
    ldr r1, [sp, #0x3c]
    sub r1, r1, r0
    mov r0, #0xc
    mla r0, r1, r0, r4
    ldr r1, [sp, #0x1c]
    add r5, r1, #2
    ldr r1, =0x55555556
    smull r3, r2, r1, r5
    add r1, r2, r5, lsr #31
    mov r2, #3
    smull r1, r3, r2, r1
    sub r2, r5, r1
    mov r1, #0xc
    mul r5, r2, r1
    str r2, [sp, #0x1c]
    add r1, r4, r5
    add r2, sp, #0x50
    bl func_02001f38
    add r0, r4, r5
    add r1, sp, #0x50
    mov r2, r8
    add r3, sp, #0x5c
    bl func_ov000_02113e3c
    ldr r2, [r7, #0x10]
    cmp r0, r2
    bge @L_02112d4c
    mov r0, r8
    add r1, sp, #0x5c
    mov r3, r8
    bl func_ov000_02114250
@L_02112bd0:
    mov r0, #1
    str r6, [sp, #0x24]
    str r0, [sp, #0x20]
    b @L_02112d6c
@L_02112be0:
    cmp r9, #0
    rsblt r9, r9, #0
    cmp r11, #0
    rsblt r11, r11, #0
    cmp r11, r9
    ldr r0, [r8]
    bgt @L_02112c14
    str r0, [sp, #0x5c]
    ldr r0, [r8, #4]
    str r0, [sp, #0x60]
    ldr r0, [r8, #8]
    str r0, [sp, #0x64]
    b @L_02112c34
@L_02112c14:
    str r0, [sp, #0x5c]
    ldr r1, [r8, #4]
    str r1, [sp, #0x60]
    ldr r0, [r8, #8]
    str r0, [sp, #0x64]
    ldr r0, [r7, #0x14]
    add r0, r1, r0
    str r0, [sp, #0x60]
@L_02112c34:
    ldr r1, [r7, #0x10]
    mov r0, r4
    str r1, [sp]
    add r1, sp, #0x5c
    ldmia r1, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    beq @L_02112d4c
    ldr r9, [sp, #0x70]
    ldr r0, [sp, #0x64]
    ldr r12, [sp, #0x68]
    smull r3, r2, r0, r9
    adds r3, r3, #0x800
    ldr r1, [sp, #0x5c]
    smull r0, r11, r9, r9
    mov r10, r3, lsr #0xc
    adc r2, r2, #0
    smull r9, r3, r1, r12
    adds r9, r9, #0x800
    orr r10, r10, r2, lsl #20
    smull r2, r1, r12, r12
    adc r3, r3, #0
    mov r9, r9, lsr #0xc
    orr r9, r9, r3, lsl #20
    ldr r3, [sp, #0x60]
    ldr r12, [sp, #0x6c]
    smull lr, r12, r3, r12
    adds r3, lr, #0x800
    adc r12, r12, #0
    adds r2, r2, #0x800
    mov r3, r3, lsr #0xc
    orr r3, r3, r12, lsl #20
    add r3, r9, r3
    add r3, r10, r3
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    adds r1, r0, #0x800
    adc r0, r11, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r5, r3, r5
    add r0, r2, r1
    bl func_02001d80
    mov r1, r0
    mov r0, r5
    bl func_02001d60
    rsb r2, r0, #0
    cmp r0, #0
    ldr r1, [r7, #0x10]
    movge r2, r0
    cmp r2, r1
    bge @L_02112d4c
    ldr r9, [sp, #0x68]
    ldr r3, [sp, #0x70]
    mov r2, #0
    add r5, sp, #0x50
    sub r4, r1, r0
    mov r0, r5
    mov r1, r5
    str r9, [sp, #0x50]
    str r3, [sp, #0x58]
    str r2, [sp, #0x54]
    bl func_02002084
    mov r0, r4
    mov r1, r5
    mov r2, r8
    mov r3, r8
    bl func_02002198
    b @L_02112bd0
@L_02112d4c:
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x48]
    ldr r0, [r0, #8]
    add r6, r6, #1
    ldr r0, [r0, r1, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r6, r0
    blt @L_02112974
@L_02112d6c:
    ldr r0, [sp, #0x20]
    cmp r0, #0
    bne @L_021128dc
    ldr r1, [sp, #0x4c]
    ldr r0, [sp, #0x24]
    str r1, [r7, #0x18]
    cmn r0, #1
    ldr r0, [sp, #0x48]
    str r0, [r7, #0x1c]
    ldr r0, [sp, #0x44]
    str r0, [r7, #0x20]
    ldr r0, [sp, #0x24]
    str r0, [r7, #0x24]
    ldr r0, [r8]
    str r0, [r7]
    ldr r0, [r8, #4]
    str r0, [r7, #4]
    ldr r0, [r8, #8]
    str r0, [r7, #8]
    ldrnesb r0, [r7, #0xd]
    orrne r0, r0, #2
    strneb r0, [r7, #0xd]
    ldr r0, [sp, #0x44]
    cmn r0, #1
    ldrnesb r0, [r7, #0xd]
    orrne r0, r0, #1
    strneb r0, [r7, #0xd]
    mov r0, #1
    add sp, sp, #0x98
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02112de8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xd4
    mov r4, r2
    ldr r3, [r4, #0x18]
    mvn r2, #0
    str r3, [sp, #0x88]
    str r2, [sp, #0x44]
    ldr r2, [r4, #0x1c]
    str r0, [sp, #0x70]
    str r2, [sp, #0x84]
    ldr r0, [sp, #0x44]
    ldrsb r2, [r4, #0xd]
    mov r5, r1
    str r0, [sp, #0x40]
    bic r1, r2, #3
    str r0, [sp, #0x38]
    strb r1, [r4, #0xd]
@L_02112e2c:
    mov r3, #0
    str r3, [sp, #0x3c]
    ldr r0, [sp, #0x70]
    add r2, sp, #0x88
    mov r1, #1
    mov r3, r5
    bl func_ov000_0211367c
    cmp r0, #0
    bne @L_02112fd8
    ldr r1, [sp, #0x88]
    ldr r0, [r4, #0x18]
    cmp r1, r0
    movne r0, #1
    subne r0, r0, #2
    strne r0, [sp, #0x44]
    ldr r0, [sp, #0x44]
    cmp r0, #0
    blt @L_02112edc
    add r6, sp, #0xb0
    ldr r0, [sp, #0x70]
    ldr r2, [sp, #0x44]
    mov r3, r6
    bl func_ov000_021122b4
    ldr r1, [r5]
    mov r2, r6
    str r1, [sp, #0x98]
    ldr r7, [r5, #4]
    add r0, sp, #0xa4
    str r7, [sp, #0x9c]
    ldr r6, [r5, #8]
    add r1, sp, #0x80
    str r6, [sp, #0xa0]
    ldr r6, [r4, #0x10]
    add r3, sp, #0x98
    add r7, r7, r6
    str r7, [sp, #0x9c]
    str r6, [sp]
    bl func_ov000_02113af0
    mov r7, r0
    cmp r7, #0
    ldrle r0, [sp, #0x44]
    strle r0, [sp, #0x38]
    mvnle r0, #0
    strle r0, [sp, #0x44]
@L_02112edc:
    ldr r0, [sp, #0x44]
    cmp r0, #0
    bge @L_02112f90
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x88]
    ldr r0, [r0, #8]
    mov r9, #0
    ldr r0, [r0, r1, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r0, #0
    ble @L_02112f90
    add r6, sp, #0xb0
@L_02112f0c:
    ldr r0, [sp, #0x38]
    cmp r0, r9
    beq @L_02112f70
    ldr r0, [sp, #0x70]
    mov r2, r9
    mov r3, r6
    bl func_ov000_021122b4
    ldr r1, [r5]
    add r0, sp, #0xa4
    str r1, [sp, #0x98]
    ldr r10, [r5, #4]
    add r1, sp, #0x80
    str r10, [sp, #0x9c]
    ldr r3, [r5, #8]
    mov r2, r6
    str r3, [sp, #0xa0]
    ldr r7, [r4, #0x10]
    add r3, sp, #0x98
    add r10, r10, r7
    str r10, [sp, #0x9c]
    str r7, [sp]
    bl func_ov000_02113af0
    movs r7, r0
    cmpne r7, #0
    bgt @L_02112f90
@L_02112f70:
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x88]
    ldr r0, [r0, #8]
    add r9, r9, #1
    ldr r0, [r0, r1, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r9, r0
    blt @L_02112f0c
@L_02112f90:
    cmp r7, #0
    ble @L_02112fd8
    ldr r0, [r4, #0x10]
    ldr r2, [sp, #0x80]
    add r1, sp, #0xa4
    sub r6, r0, r2
    add r2, sp, #0x98
    mov r3, r5
    str r6, [sp, #0x80]
    bl func_02002198
    ldr r1, [r5, #4]
    ldr r0, [r4, #0x10]
    str r9, [sp, #0x44]
    sub r0, r1, r0
    str r0, [r5, #4]
    mov r0, #1
    str r9, [sp, #0x38]
    str r0, [sp, #0x3c]
@L_02112fd8:
    ldr r0, [sp, #0x70]
    add r2, sp, #0x84
    mov r3, r5
    mov r1, #2
    bl func_ov000_0211367c
    cmp r0, #0
    bne @L_02113500
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x84]
    ldr r0, [r0, #8]
    ldr r3, [r4, #0x10]
    ldr r0, [r0, r1, lsl #2]
    ldr r2, [r4, #0x14]
    ldr r0, [r0, #0x2c]
    sub r2, r2, r3
    cmp r0, #0
    ldmia r5, {r0, r6}
    str r0, [sp, #0x20]
    add r0, r6, r3
    str r0, [sp, #0x30]
    add r0, r6, r2
    str r0, [sp, #0x28]
    ldr r0, [r5, #8]
    mov r9, #0
    str r0, [sp, #0x18]
    ble @L_02113500
    ldr r0, [sp, #0x30]
    add r6, sp, #0xb0
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x34]
    ldr r0, [sp, #0x20]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x18]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x28]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x2c]
    mvn r0, #0
    str r0, [sp, #0x6c]
@L_0211307c:
    ldr r0, [sp, #0x38]
    cmp r0, r9
    beq @L_021134e0
    ldr r0, [sp, #0x70]
    mov r2, r9
    mov r3, r6
    bl func_ov000_021122b4
    add r0, sp, #0xbc
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, sp, #0xc8
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, sp, #0xa4
    ldmia r6, {r1, r2, r3}
    bl func_ov000_02113c14
    ldr r2, [sp, #0xa4]
    ldr r10, [sp, #0x20]
    str r2, [sp, #0x4c]
    ldr r3, [sp, #0x4c]
    ldr r1, [sp, #0xa8]
    umull r11, r3, r10, r3
    mov r2, r1, asr #0x1f
    str r2, [sp, #0x48]
    ldr r2, [sp, #0x4c]
    adds r10, r11, #0x800
    mov r2, r2, asr #0x1f
    str r2, [sp, #0x50]
    ldr r2, [sp, #0xac]
    mov r11, r10, lsr #0xc
    mov r10, r2, asr #0x1f
    str r10, [sp, #0x54]
    ldr r12, [sp, #0x20]
    ldr r10, [sp, #0x50]
    ldr lr, [sp, #0x28]
    mla r3, r12, r10, r3
    ldr r12, [sp, #0x24]
    ldr r10, [sp, #0x4c]
    mla r3, r12, r10, r3
    adc r3, r3, #0
    ldr r10, [sp, #0x18]
    orr r11, r11, r3, lsl #20
    umull r12, r3, r10, r2
    adds r10, r12, #0x800
    mov r10, r10, lsr #0xc
    str r10, [sp, #0x74]
    ldr r12, [sp, #0x18]
    ldr r10, [sp, #0x54]
    mla r3, r12, r10, r3
    ldr r10, [sp, #0x1c]
    mla r3, r10, r2, r3
    adc r10, r3, #0
    ldr r3, [sp, #0x74]
    orr r3, r3, r10, lsl #20
    ldr r10, [sp, #0x30]
    str r3, [sp, #0x74]
    umull r12, r3, r10, r1
    adds r10, r12, #0x800
    mov r10, r10, lsr #0xc
    str r10, [sp, #0x58]
    ldr r12, [sp, #0x30]
    ldr r10, [sp, #0x48]
    mla r3, r12, r10, r3
    ldr r10, [sp, #0x34]
    mla r3, r10, r1, r3
    adc r10, r3, #0
    ldr r3, [sp, #0x58]
    orr r3, r3, r10, lsl #20
    str r3, [sp, #0x58]
    add r10, r11, r3
    ldr r3, [sp, #0x74]
    add r3, r3, r10
    umull r12, r10, lr, r1
    str r12, [sp, #0x78]
    ldr r12, [sp, #0x48]
    sub r3, r3, r0
    mla r10, lr, r12, r10
    str r10, [sp, #0x60]
    ldr r10, [sp, #0x78]
    ldr r12, [sp, #0x2c]
    adds r10, r10, #0x800
    mov r10, r10, lsr #0xc
    str r10, [sp, #0x5c]
    ldr r10, [sp, #0x60]
    str r3, [sp, #0x80]
    mla r10, r12, r1, r10
    str r10, [sp, #0x60]
    adc r12, r10, #0
    ldr r10, [sp, #0x5c]
    orr r10, r10, r12, lsl #20
    str r10, [sp, #0x5c]
    add r11, r11, r10
    ldr r10, [sp, #0x74]
    add r10, r10, r11
    sub r11, r10, r0
    muls r10, r3, r11
    bpl @L_0211338c
    ldr r10, [r5]
    ldr r11, [sp, #0x4c]
    mov r3, r10, asr #0x1f
    str r3, [sp, #0x7c]
    umull r12, r3, r11, r10
    str r12, [sp, #0x64]
    mov r12, r11
    ldr r11, [sp, #0x7c]
    str r10, [sp, #0x98]
    mla r3, r12, r11, r3
    ldr r11, [sp, #0x50]
    ldr lr, [r5, #8]
    mla r3, r11, r10, r3
    ldr r10, [sp, #0x64]
    mov r12, lr, asr #0x1f
    adds r10, r10, #0x800
    adc r3, r3, #0
    mov r11, r10, lsr #0xc
    orr r11, r11, r3, lsl #20
    umull r3, r10, r2, lr
    mla r10, r2, r12, r10
    ldr r2, [sp, #0x54]
    str r3, [sp, #0x68]
    mla r10, r2, lr, r10
    mov r2, r3
    adds r3, r2, #0x800
    adc r2, r10, #0
    mov r3, r3, lsr #0xc
    orr r3, r3, r2, lsl #20
    add r2, r11, r3
    sub r0, r2, r0
    bl func_02001d60
    rsb r0, r0, #0
    str r0, [sp, #0x9c]
    ldr r1, [r5, #8]
    mov r0, r6
    str r1, [sp, #0xa0]
    ldr r1, [r4, #0x10]
    str r1, [sp]
    add r1, sp, #0x98
    ldmia r1, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    beq @L_021134e0
    add r0, sp, #0x98
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0xa4
    mov r0, r6
    ldmia r1, {r1, r2, r3}
    bl func_ov000_021140e8
    mov r7, r0
    cmp r7, #0
    ble @L_0211330c
    ldr r0, [sp, #0x98]
    str r9, [sp, #0x40]
    str r0, [r5]
    ldr r1, [sp, #0x9c]
    mov r0, #1
    str r1, [r5, #4]
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0xa0]
    str r0, [r5, #8]
    b @L_02113500
@L_0211330c:
    ldr r0, [sp, #0x6c]
    add r3, r8, #2
    sub r7, r0, r7
    ldr r0, =0x55555556
    smull r1, r8, r0, r3
    add r8, r8, r3, lsr #31
    mov r0, #3
    smull r1, r2, r0, r8
    sub r8, r3, r1
    mov r0, #0xc
    mul r10, r8, r0
    mla r0, r7, r0, r6
    add r1, r6, r10
    add r2, sp, #0x8c
    bl func_02001f38
    add r0, r6, r10
    add r1, sp, #0x8c
    mov r2, r5
    add r3, sp, #0x98
    bl func_ov000_02113e3c
    ldr r2, [r4, #0x10]
    cmp r0, r2
    bge @L_021134e0
@L_02113368:
    mov r0, r5
    add r1, sp, #0x98
    mov r3, r5
    bl func_ov000_02114250
    str r9, [sp, #0x40]
    str r9, [sp, #0x38]
@L_02113380:
    mov r0, #1
    str r0, [sp, #0x3c]
    b @L_02113500
@L_0211338c:
    rsb r0, r11, #0
    cmp r11, #0
    movge r0, r11
    cmp r3, #0
    rsblt r3, r3, #0
    cmp r3, r0
    bgt @L_021133b8
    ldr r0, [sp, #0x20]
    str r0, [sp, #0x98]
    ldr r0, [sp, #0x30]
    b @L_021133c8
@L_021133b8:
    ldr r0, [sp, #0x20]
    str r11, [sp, #0x80]
    str r0, [sp, #0x98]
    ldr r0, [sp, #0x28]
@L_021133c8:
    str r0, [sp, #0x9c]
    ldr r0, [sp, #0x18]
    str r0, [sp, #0xa0]
    ldr r1, [r4, #0x10]
    mov r0, r6
    str r1, [sp]
    add r1, sp, #0x98
    ldmia r1, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    beq @L_021134e0
    ldr r1, [sp, #0x80]
    ldr r0, [r4, #0x10]
    rsb r2, r1, #0
    cmp r1, #0
    movge r2, r1
    cmp r2, r0
    bge @L_021134e0
    add r2, sp, #0x98
    rsb r0, r1, #0
    add r1, sp, #0xa4
    mov r3, r2
    bl func_02002198
    add r0, sp, #0x98
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, sp, #0xa4
    mov r0, r6
    ldmia r1, {r1, r2, r3}
    bl func_ov000_021140e8
    mov r7, r0
    cmp r7, #0
    ble @L_02113480
    ldr r0, [r4, #0x10]
    add r1, sp, #0xa4
    add r2, sp, #0x98
    mov r3, r5
    bl func_02002198
    ldr r1, [r5, #4]
    ldr r0, [r4, #0x10]
    str r9, [sp, #0x40]
    sub r0, r1, r0
    str r9, [sp, #0x38]
    str r0, [r5, #4]
    b @L_02113380
@L_02113480:
    ldr r0, [sp, #0x6c]
    add r3, r8, #2
    sub r7, r0, r7
    ldr r0, =0x55555556
    smull r1, r8, r0, r3
    add r8, r8, r3, lsr #31
    mov r0, #3
    smull r1, r2, r0, r8
    sub r8, r3, r1
    mov r0, #0xc
    mul r10, r8, r0
    mla r0, r7, r0, r6
    add r1, r6, r10
    add r2, sp, #0x8c
    bl func_02001f38
    add r0, r6, r10
    add r1, sp, #0x8c
    mov r2, r5
    add r3, sp, #0x98
    bl func_ov000_02113cd8
    ldr r2, [r4, #0x10]
    cmp r0, r2
    bge @L_021134e0
    b @L_02113368
@L_021134e0:
    ldr r0, [sp, #0x70]
    ldr r1, [sp, #0x84]
    ldr r0, [r0, #8]
    add r9, r9, #1
    ldr r0, [r0, r1, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r9, r0
    blt @L_0211307c
@L_02113500:
    ldr r0, [sp, #0x3c]
    cmp r0, #0
    bne @L_02112e2c
    ldr r0, [sp, #0x88]
    mvn r1, #0
    str r0, [r4, #0x18]
    ldr r0, [sp, #0x40]
    ldr r2, [sp, #0x84]
    cmp r0, r1
    ldr r0, [sp, #0x44]
    str r2, [r4, #0x1c]
    str r0, [r4, #0x20]
    ldr r0, [sp, #0x40]
    str r0, [r4, #0x24]
    ldr r0, [r5]
    str r0, [r4]
    ldr r0, [r5, #4]
    str r0, [r4, #4]
    ldr r0, [r5, #8]
    str r0, [r4, #8]
    ldrnesb r0, [r4, #0xd]
    orrne r0, r0, #2
    strneb r0, [r4, #0xd]
    ldr r0, [sp, #0x44]
    cmp r0, r1
    ldrnesb r0, [r4, #0xd]
    orrne r0, r0, #1
    strneb r0, [r4, #0xd]
    mov r0, #1
    add sp, sp, #0xd4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02113580(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r11, r2
    ldr r4, [r11]
    mov r9, r1
    str r4, [sp, #8]
    mov r2, r3
    ldr r2, [r2]
    ldr r8, [sp, #0x30]
    str r3, [sp]
    str r2, [sp, #4]
    mov r10, r0
    cmp r4, #0
    movlt r0, #0
    strlt r0, [sp, #8]
    add r2, sp, #8
    mov r0, r10
    mov r1, r9
    mov r3, r8
    bl func_ov000_0211367c
    ldr r7, [sp, #8]
    cmp r7, #0
    addlt sp, sp, #0xc
    mov r1, r7
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r4, r7
    mvnne r0, #0
    strne r0, [sp, #4]
    mvn r5, #0
    add r4, sp, #8
    add r6, sp, #4
@L_02113600:
    mov r0, r10
    mov r2, r6
    mov r3, r8
    bl func_ov000_02113744
    cmp r0, #0
    bne @L_02113648
    ldr r1, [sp, #8]
    mov r0, r10
    add r12, r1, #1
    mov r1, r9
    mov r2, r4
    mov r3, r8
    str r12, [sp, #8]
    str r5, [sp, #4]
    bl func_ov000_0211367c
    ldr r1, [sp, #8]
    cmp r7, r1
    bne @L_02113600
@L_02113648:
    ldr r0, [sp, #4]
    cmp r0, #0
    addlt sp, sp, #0xc
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #8]
    mov r0, #1
    str r1, [r11]
    ldr r2, [sp, #4]
    ldr r1, [sp]
    str r2, [r1]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0211367c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r2
    mov r5, r0
    ldr r0, [r9]
    mov r10, r1
    cmp r0, #0
    movle r0, #0
    str r0, [r9]
    ldr r1, [r5, #4]
    mov r8, r3
    ldr r1, [r1, #0xc]
    bl func_0202273c
    mov r7, r1
    str r7, [r9]
    ldr r0, [r5, #4]
    mov r4, #0
    ldr r6, [r0, #0xc]
    cmp r6, #0
    ble @L_02113730
    ldr r5, [r5, #8]
@L_021136cc:
    mov r0, r7
    mov r1, r6
    bl func_0202273c
    ldr r0, [r5, r1, lsl #2]
    ldr r1, [r0, #0x18]
    cmp r1, r10
    bne @L_02113720
    ldr r2, [r8]
    ldr r1, [r0]
    cmp r1, r2
    bgt @L_02113720
    ldr r1, [r0, #0xc]
    cmp r1, r2
    blt @L_02113720
    ldr r2, [r8, #8]
    ldr r1, [r0, #8]
    cmp r1, r2
    bgt @L_02113720
    ldr r0, [r0, #0x14]
    cmp r0, r2
    bge @L_02113730
@L_02113720:
    add r4, r4, #1
    cmp r4, r6
    add r7, r7, #1
    blt @L_021136cc
@L_02113730:
    cmp r4, r6
    moveq r0, #0
    strne r7, [r9]
    movne r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov000_02113744(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    str r2, [sp, #0xc]
    ldr r2, [r2]
    str r0, [sp, #4]
    str r2, [sp, #0x14]
    str r1, [sp, #8]
    mov r10, r3
    movs r0, r2
    mvn r7, #1
    bmi @L_02113884
@L_02113770:
    ldr r0, [sp, #4]
    ldr r2, [sp, #0x14]
    ldr r1, [r0, #8]
    ldr r0, [sp, #8]
    add r5, sp, #0x4c
    ldr r1, [r1, r0, lsl #2]
    ldr r0, [sp, #4]
    ldr r6, [r1, #0x34]
    mov r4, r2
    ldr r1, [sp, #8]
    mov r3, r5
    add r6, r6, r4, lsl #4
    bl func_ov000_021122b4
    ldr r0, [r10]
    mov r8, #0
    str r0, [sp, #0x28]
    ldr r0, [r10, #4]
    mov r9, #2
    str r0, [sp, #0x2c]
    ldr r0, [r10, #8]
    mov r11, #0xc
    str r0, [sp, #0x30]
@L_021137c8:
    add r0, r6, r9, lsl #1
    ldrsh r0, [r0, #6]
    cmp r7, r0
    beq @L_02113840
    mov r0, #0xc
    mul r4, r9, r0
    mla r0, r8, r11, r5
    add r1, r5, r4
    add r2, sp, #0x40
    bl func_02001f38
    add r1, r5, r4
    add r0, sp, #0x28
    add r2, sp, #0x34
    bl func_02001f38
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x34]
    ldr r2, [sp, #0x40]
    smull r3, r0, r1, r0
    adds r3, r3, #0x800
    adc r1, r0, #0
    mov r0, r3, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldr r1, [sp, #0x3c]
    smull r3, r1, r2, r1
    adds r2, r3, #0x800
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    subs r0, r0, r2
    bmi @L_02113850
@L_02113840:
    mov r9, r8
    add r8, r8, #1
    cmp r8, #3
    blt @L_021137c8
@L_02113850:
    cmp r8, #3
    ldreq r1, [sp, #0x14]
    ldreq r0, [sp, #0xc]
    addeq sp, sp, #0x70
    streq r1, [r0]
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r6, r9, lsl #1
    ldrsh r0, [r0, #6]
    ldr r7, [sp, #0x14]
    str r0, [sp, #0x14]
    cmp r0, #0
    bge @L_02113770
@L_02113884:
    ldr r0, [sp, #4]
    mov r8, #0
    ldr r1, [r0, #8]
    ldr r0, [sp, #8]
    ldr r1, [r1, r0, lsl #2]
    mvn r0, #0
    ldr r1, [r1, #0x2c]
    str r0, [sp, #0x10]
    mov r0, #0x80000000
    str r0, [sp, #0x18]
    cmp r1, #0
    ble @L_02113ab4
@L_021138b4:
    add r4, sp, #0x4c
    ldr r0, [sp, #4]
    ldr r1, [sp, #8]
    mov r2, r8
    mov r3, r4
    bl func_ov000_021122b4
    ldr r2, [r10]
    ldr r1, [sp, #0x50]
    str r2, [sp, #0x28]
    ldr r2, [r10, #4]
    mov r0, r4
    str r2, [sp, #0x2c]
    ldr r2, [r10, #8]
    str r1, [sp, #0x2c]
    str r2, [sp, #0x30]
    mov r1, #0
    str r1, [sp]
    add r1, sp, #0x28
    ldmia r1, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    beq @L_02113a94
    ldr r0, [sp, #0x10]
    ldr r3, [sp, #0x4c]
    cmp r0, r7
    ldr r0, [r10]
    ldr r1, [sp, #0x58]
    str r0, [sp, #0x28]
    ldr r0, [r10, #4]
    add r3, r3, r1
    str r0, [sp, #0x2c]
    ldr r4, [r10, #8]
    ldr r2, [sp, #0x54]
    ldr r1, [sp, #0x60]
    str r4, [sp, #0x30]
    add r2, r2, r1
    ldr r1, [sp, #0x64]
    str r0, [sp, #0x20]
    add r4, r1, r3
    ldr r3, [sp, #0x6c]
    ldr r1, =0x55555556
    add r2, r3, r2
    smull r0, r3, r1, r4
    add r3, r3, r4, lsr #31
    str r3, [sp, #0x1c]
    smull r0, r3, r1, r2
    add r3, r3, r2, lsr #31
    add r0, sp, #0x1c
    add r1, sp, #0x28
    add r2, sp, #0x34
    strne r8, [sp, #0x10]
    str r3, [sp, #0x24]
    bl func_02001f38
    ldr r0, [sp, #0x34]
    cmp r0, #0
    ldreq r0, [sp, #0x38]
    cmpeq r0, #0
    ldreq r0, [sp, #0x3c]
    cmpeq r0, #0
    beq @L_021139c8
    add r4, sp, #0x34
    mov r0, r4
    mov r1, r4
    bl func_02002084
    add r2, sp, #0x28
    mov r1, r4
    mov r0, #0x14
    mov r3, r2
    bl func_02002198
@L_021139c8:
    ldr r1, [sp, #0x50]
    ldr r0, [sp, #0x5c]
    ldr r2, [sp, #0x68]
    add r0, r1, r0
    ldr r1, =0x55555556
    add r2, r2, r0
    smull r0, r3, r1, r2
    add r3, r3, r2, lsr #31
    mov r11, #0xc
    str r3, [sp, #0x20]
    mov r9, #0
    mov r0, #2
    add r6, sp, #0x4c
    mov r4, r11
@L_02113a00:
    mul r5, r0, r11
    mla r0, r9, r4, r6
    add r1, r6, r5
    add r2, sp, #0x40
    bl func_02001f38
    add r1, r6, r5
    add r0, sp, #0x28
    add r2, sp, #0x34
    bl func_02001f38
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x34]
    ldr r2, [sp, #0x40]
    smull r3, r0, r1, r0
    adds r3, r3, #0x800
    adc r1, r0, #0
    mov r0, r3, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldr r1, [sp, #0x3c]
    smull r3, r1, r2, r1
    adds r2, r3, #0x800
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    subs r0, r0, r2
    bmi @L_02113a74
    mov r0, r9
    add r9, r9, #1
    cmp r9, #3
    blt @L_02113a00
@L_02113a74:
    cmp r9, #3
    bne @L_02113a94
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x18]
    cmp r1, r0
    ldrge r0, [sp, #0xc]
    strge r1, [sp, #0x18]
    strge r8, [r0]
@L_02113a94:
    ldr r0, [sp, #4]
    add r8, r8, #1
    ldr r1, [r0, #8]
    ldr r0, [sp, #8]
    ldr r0, [r1, r0, lsl #2]
    ldr r0, [r0, #0x2c]
    cmp r8, r0
    blt @L_021138b4
@L_02113ab4:
    ldr r0, [sp, #0x18]
    cmp r0, #0x80000000
    addne sp, sp, #0x70
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x10]
    cmp r0, #0
    strlt r7, [sp, #0x10]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0xc]
    str r1, [r0]
    mov r0, #0
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02113af0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    ldr r6, [sp, #0x30]
    mov r5, r2
    mov r7, r0
    str r6, [sp]
    mov r4, r3
    mov r6, r1
    mov r0, r5
    ldmia r4, {r1, r2, r3}
    bl func_ov000_02113f5c
    cmp r0, #0
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r5, #0xc
    mov r3, sp
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r5, #0x18
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r7
    ldmia r5, {r1, r2, r3}
    bl func_ov000_02113c14
    ldr r2, [r4, #8]
    ldr r1, [r7, #8]
    ldr r3, [r4]
    smull r12, r1, r2, r1
    adds r2, r12, #0x800
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    ldr r1, [r7]
    ldr r12, [r4, #4]
    smull lr, r1, r3, r1
    adds lr, lr, #0x800
    adc r3, r1, #0
    mov r1, lr, lsr #0xc
    orr r1, r1, r3, lsl #20
    ldr r3, [r7, #4]
    smull lr, r3, r12, r3
    adds r12, lr, #0x800
    adc r3, r3, #0
    mov r12, r12, lsr #0xc
    orr r12, r12, r3, lsl #20
    add r1, r1, r12
    add r1, r2, r1
    sub r12, r1, r0
    cmp r6, #0
    strne r12, [r6]
    rsb r1, r12, #0
    cmp r12, #0
    ldr r0, [sp, #0x30]
    movge r1, r12
    cmp r1, r0
    addge sp, sp, #0x18
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r7
    mov r2, r4
    mov r3, r4
    rsb r0, r12, #0
    bl func_02002198
    mov r3, sp
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    ldmia r7, {r1, r2, r3}
    bl func_ov000_021140e8
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_02113c14(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    add r7, sp, #0x34
    add r6, sp, #0xc
    mov r4, r0
    add r0, sp, #0x40
    mov r1, r7
    mov r2, r6
    bl func_02001f38
    add r5, sp, #0
    add r0, sp, #0x4c
    mov r1, r7
    mov r2, r5
    bl func_02001f38
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_02001fa4
    mov r0, r4
    mov r1, r4
    bl func_02002084
    ldr r1, [r4, #8]
    ldr r0, [sp, #0x3c]
    ldr r12, [r4]
    smull r2, r0, r1, r0
    adds r2, r2, #0x800
    adc r1, r0, #0
    mov r0, r2, lsr #0xc
    orr r0, r0, r1, lsl #20
    ldr r3, [sp, #0x34]
    ldr r2, [r4, #4]
    smull lr, r4, r12, r3
    ldr r1, [sp, #0x38]
    adds r12, lr, #0x800
    smull r3, r1, r2, r1
    adc r2, r4, #0
    mov r4, r12, lsr #0xc
    orr r4, r4, r2, lsl #20
    adds r2, r3, #0x800
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    add r1, r4, r2
    add r0, r0, r1
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_ov000_02113cd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    str r1, [sp]
    mov r6, r0
    mov r5, r2
    ldr r2, [sp]
    ldr r9, [r6, #8]
    ldr r8, [r5, #8]
    ldr r2, [r2, #8]
    ldr r7, [r6]
    ldr r4, [r5]
    sub r8, r9, r8
    sub r7, r7, r4
    smull r4, r8, r2, r8
    ldr r0, [r1, #4]
    adds r9, r4, #0x800
    ldr r1, [r1]
    ldr r10, [r6, #4]
    ldr r4, [r5, #4]
    smull lr, r11, r2, r2
    sub r2, r10, r4
    mov r4, r3
    adc r3, r8, #0
    smull r8, r7, r1, r7
    mov r10, r9, lsr #0xc
    adds r8, r8, #0x800
    orr r10, r10, r3, lsl #20
    smull r12, r3, r1, r1
    adc r1, r7, #0
    mov r9, r8, lsr #0xc
    smull r8, r7, r0, r2
    orr r9, r9, r1, lsl #20
    smull r2, r1, r0, r0
    adds r0, r8, #0x800
    adc r7, r7, #0
    mov r0, r0, lsr #0xc
    orr r0, r0, r7, lsl #20
    adds r7, lr, #0x800
    add r0, r9, r0
    adc r8, r11, #0
    mov r7, r7, lsr #0xc
    orr r7, r7, r8, lsl #20
    adds r8, r12, #0x800
    adc r3, r3, #0
    adds r2, r2, #0x800
    mov r8, r8, lsr #0xc
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r8, r8, r3, lsl #20
    orr r2, r2, r1, lsl #20
    add r1, r8, r2
    add r1, r7, r1
    add r0, r10, r0
    rsbs r1, r1, #0
    beq @L_02113db8
    bl func_02001d60
@L_02113db8:
    cmp r0, #0
    bgt @L_02113ddc
    ldr r0, [r6]
    str r0, [sp, #4]
    ldr r0, [r6, #4]
    str r0, [sp, #8]
    ldr r0, [r6, #8]
    str r0, [sp, #0xc]
    b @L_02113e08
@L_02113ddc:
    cmp r0, #0x1000
    blt @L_02113df8
    ldr r1, [sp]
    add r2, sp, #4
    mov r0, r6
    bl func_02001f08
    b @L_02113e08
@L_02113df8:
    ldr r1, [sp]
    add r3, sp, #4
    mov r2, r6
    bl func_02002198
@L_02113e08:
    cmp r4, #0
    beq @L_02113e28
    ldr r0, [sp, #4]
    str r0, [r4]
    ldr r0, [sp, #8]
    str r0, [r4, #4]
    ldr r0, [sp, #0xc]
    str r0, [r4, #8]
@L_02113e28:
    add r1, sp, #4
    mov r0, r5
    bl func_020021f0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02113e3c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r5, r2
    mov r6, r1
    ldr r4, [r6, #8]
    ldr r0, [r6]
    ldr r9, [r7]
    ldr r8, [r5]
    ldr r2, [r7, #8]
    ldr r1, [r5, #8]
    sub r8, r9, r8
    sub r1, r2, r1
    smull r8, r2, r0, r8
    adds r10, r8, #0x800
    smull r1, r8, r4, r1
    adc r9, r2, #0
    adds r1, r1, #0x800
    mov r10, r10, lsr #0xc
    smull r2, r12, r0, r0
    adc r0, r8, #0
    adds lr, r2, #0x800
    mov r8, r1, lsr #0xc
    smull r2, r1, r4, r4
    mov r4, r3
    orr r10, r10, r9, lsl #20
    orr r8, r8, r0, lsl #20
    add r0, r10, r8
    adc r3, r12, #0
    adds r2, r2, #0x800
    mov r8, lr, lsr #0xc
    adc r1, r1, #0
    mov r2, r2, lsr #0xc
    orr r8, r8, r3, lsl #20
    orr r2, r2, r1, lsl #20
    add r1, r8, r2
    rsbs r1, r1, #0
    beq @L_02113ed8
    bl func_02001d60
@L_02113ed8:
    cmp r0, #0
    bgt @L_02113efc
    ldr r0, [r7]
    str r0, [sp]
    ldr r0, [r7, #4]
    str r0, [sp, #4]
    ldr r0, [r7, #8]
    str r0, [sp, #8]
    b @L_02113f28
@L_02113efc:
    cmp r0, #0x1000
    blt @L_02113f18
    add r2, sp, #0
    mov r0, r7
    mov r1, r6
    bl func_02001f08
    b @L_02113f28
@L_02113f18:
    add r3, sp, #0
    mov r1, r6
    mov r2, r7
    bl func_02002198
@L_02113f28:
    cmp r4, #0
    beq @L_02113f48
    ldr r0, [sp]
    str r0, [r4]
    ldr r0, [sp, #4]
    str r0, [r4, #4]
    ldr r0, [sp, #8]
    str r0, [r4, #8]
@L_02113f48:
    add r1, sp, #0
    mov r0, r5
    bl func_020021f0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov000_02113f5c(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r3, [r0, #0xc]
    ldr r12, [r0]
    ldr r7, [sp, #0x38]
    cmp r12, r3
    ldr r2, [sp, #0x30]
    ldr r1, [sp, #0x34]
    ldr r8, [r0, #0x18]
    bgt @L_02113f90
    mov r5, r12
    cmp r12, r8
    b @L_02113f98
@L_02113f90:
    mov r5, r3
    cmp r3, r8
@L_02113f98:
    movgt r5, r8
    sub r5, r5, r7
    ldr lr, [r0, #0x10]
    ldr r4, [r0, #4]
    str r5, [sp]
    cmp r4, lr
    ldr r9, [r0, #0x1c]
    bgt @L_02113fc4
    mov r10, r4
    cmp r4, r9
    b @L_02113fcc
@L_02113fc4:
    mov r10, lr
    cmp lr, r9
@L_02113fcc:
    ldr r5, [r0, #0x14]
    movgt r10, r9
    ldr r6, [r0, #8]
    sub r11, r10, r7
    cmp r6, r5
    ldr r10, [r0, #0x20]
    bgt @L_02113ff4
    mov r0, r6
    cmp r6, r10
    b @L_02113ffc
@L_02113ff4:
    mov r0, r5
    cmp r5, r10
@L_02113ffc:
    movgt r0, r10
    sub r0, r0, r7
    cmp r12, r3
    blt @L_02114018
    cmp r12, r8
    movlt r12, r8
    b @L_02114024
@L_02114018:
    cmp r3, r8
    movlt r3, r8
    mov r12, r3
@L_02114024:
    cmp r4, lr
    add r3, r7, r12
    blt @L_0211403c
    cmp r4, r9
    movlt r4, r9
    b @L_02114048
@L_0211403c:
    cmp lr, r9
    movlt lr, r9
    mov r4, lr
@L_02114048:
    cmp r6, r5
    add r8, r7, r4
    blt @L_02114060
    cmp r6, r10
    movlt r6, r10
    b @L_0211406c
@L_02114060:
    cmp r5, r10
    movlt r5, r10
    mov r6, r5
@L_0211406c:
    ldr r5, [sp, #0x2c]
    ldr r4, [sp]
    add r6, r7, r6
    cmp r5, r4
    blt @L_02114088
    cmp r5, r3
    ble @L_02114098
@L_02114088:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_02114098:
    cmp r2, r11
    blt @L_021140a8
    cmp r2, r8
    ble @L_021140b8
@L_021140a8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_021140b8:
    cmp r1, r0
    blt @L_021140c8
    cmp r1, r6
    ble @L_021140d8
@L_021140c8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_021140d8:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_ov000_021140e8(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    ldr r1, [r10]
    ldr r0, [r10, #0xc]
    ldr r2, [r10, #0x18]
    add r0, r1, r0
    ldr r1, =0x55555556
    add r2, r2, r0
    smull r0, r3, r1, r2
    add r3, r3, r2, lsr #31
    str r3, [sp]
    ldr r2, [r10, #4]
    ldr r0, [r10, #0x10]
    ldr r3, [r10, #0x1c]
    add r0, r2, r0
    add r2, r3, r0
    smull r0, r3, r1, r2
    add r3, r3, r2, lsr #31
    str r3, [sp, #4]
    ldr r2, [r10, #8]
    ldr r0, [r10, #0x14]
    ldr r3, [r10, #0x20]
    add r0, r2, r0
    add r2, r3, r0
    smull r0, r3, r1, r2
    add r3, r3, r2, lsr #31
    add r0, sp, #0
    add r1, sp, #0x68
    add r2, sp, #0x18
    str r3, [sp, #8]
    bl func_02001f38
    ldr r0, [sp, #0x18]
    cmp r0, #0
    ldreq r0, [sp, #0x1c]
    cmpeq r0, #0
    ldreq r0, [sp, #0x20]
    cmpeq r0, #0
    addeq sp, sp, #0x30
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addeq sp, sp, #0x10
    bxeq lr
    add r8, sp, #0x18
    mov r0, r8
    mov r1, r8
    bl func_02002084
    add r2, sp, #0x68
    mov r1, r8
    mov r3, r2
    mov r0, #0x14
    bl func_02002198
    mov r11, #0xc
    mov r9, #0
    mov r0, #2
    add r6, sp, #0x24
    add r5, sp, #0xc
    mov r4, r11
@L_021141d4:
    mul r7, r0, r11
    mla r0, r9, r4, r10
    mov r2, r6
    add r1, r10, r7
    bl func_02001f38
    add r0, sp, #0x68
    add r1, r10, r7
    mov r2, r8
    bl func_02001f38
    mov r0, r6
    mov r1, r8
    mov r2, r5
    bl func_02001fa4
    add r0, sp, #0x5c
    mov r1, r5
    bl VEC_DotProduct
    cmp r0, #0
    blt @L_0211422c
    mov r0, r9
    add r9, r9, #1
    cmp r9, #3
    blt @L_021141d4
@L_0211422c:
    cmp r9, #3
    moveq r0, #1
    addne r0, r9, #1
    rsbne r0, r0, #0
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_ov000_02114250(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    add r4, sp, #0
    mov r6, r2
    mov r2, r4
    mov r7, r1
    mov r5, r3
    bl func_02001f38
    mov r0, r4
    mov r1, r4
    bl func_02002084
    add r0, r6, #1
    mov r1, r4
    mov r2, r7
    mov r3, r5
    bl func_02002198
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_02114298(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r5, r2
    cmpne r5, #0
    mov r4, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r4
    bl MI_CpuFill8
    mov r7, r4
    mov r12, #1
    mov r3, r4
    ldr r1, =gGameState
    b @L_02114324
@L_021142d4:
    mov lr, r3, lsl r7
    rsb r0, r7, #0x20
    orr lr, lr, r12, lsr r0
    ldr r2, [r1, #0x4e0]
    sub r0, r7, #0x20
    orr lr, lr, r12, lsl r0
    ldr r0, [r1, #0x4e4]
    and r2, r2, r12, lsl r7
    and r0, r0, lr
    cmp r0, #0
    cmpeq r2, #0
    movne r0, r12
    moveq r0, r3
    cmp r0, #0
    beq @L_02114320
    cmp r4, r5
    bge @L_0211432c
    strb r7, [r6, r4]
    add r4, r4, #1
@L_02114320:
    add r7, r7, #1
@L_02114324:
    cmp r7, #0x40
    blt @L_021142d4
@L_0211432c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_02114338(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r5, r2
    cmpne r5, #0
    mov r4, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r4
    bl MI_CpuFill8
    mov r7, r4
    mov r12, #1
    mov r3, r4
    ldr r1, =gGameState
    b @L_021143c4
@L_02114374:
    mov lr, r3, lsl r7
    rsb r0, r7, #0x20
    orr lr, lr, r12, lsr r0
    ldr r2, [r1, #0x4e8]
    sub r0, r7, #0x20
    orr lr, lr, r12, lsl r0
    ldr r0, [r1, #0x4ec]
    and r2, r2, r12, lsl r7
    and r0, r0, lr
    cmp r0, #0
    cmpeq r2, #0
    movne r0, r12
    moveq r0, r3
    cmp r0, #0
    beq @L_021143c0
    cmp r4, r5
    bge @L_021143cc
    strb r7, [r6, r4]
    add r4, r4, #1
@L_021143c0:
    add r7, r7, #1
@L_021143c4:
    cmp r7, #0x40
    blt @L_02114374
@L_021143cc:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov000_021143d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r0, #0
    mov r8, r2
    str r0, [sp]
    mov r9, r1
    ldr r1, [sp]
    mov r0, r8
    mov r2, #8
    bl MI_CpuFill8
    ldr r0, [r10, #0xbd4]
    cmp r0, #0
    bne @L_02114424
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    str r0, [sp]
@L_02114424:
    ldr r5, [r10, #0xbd4]
    mov r6, #0
    add r11, r10, #0x11800
    b @L_02114510
@L_02114434:
    ldrh r0, [r5, #0x2a]
    cmp r0, #0
    beq @L_02114508
    ldrb r0, [r5, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldreqb r0, [r5, #0x30]
    cmpeq r0, #1
    bne @L_02114508
    mov r0, r10
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0206ea68Ev
    movs r7, r0
    bmi @L_02114508
    ldrb r0, [r5, #0x31]
    tst r0, #0xc
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_021144ac
    ldrh r1, [r5, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206e1fcEv
    cmp r0, #0
    ldreqh r0, [r8, #4]
    addeq r0, r0, #1
    streqh r0, [r8, #4]
    beq @L_02114508
@L_021144ac:
    ldrh r1, [r5, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r4, r0
    ldr r0, =data_020cacc8
    mov r1, r4
    bl func_020817bc
    cmp r0, #0
    bne @L_021144e4
    ldr r0, =data_020cadf4
    mov r1, r4
    bl func_02081894
    cmp r0, #0
    beq @L_021144f0
@L_021144e4:
    ldrh r0, [r8]
    add r0, r0, #1
    strh r0, [r8]
@L_021144f0:
    ldrh r0, [r8, #2]
    add r0, r0, #1
    strh r0, [r8, #2]
    ldr r0, [r9, r7, lsl #2]
    add r0, r0, #1
    str r0, [r9, r7, lsl #2]
@L_02114508:
    add r6, r6, #1
    add r5, r5, #0x38
@L_02114510:
    ldrh r0, [r11, #0x42]
    cmp r6, r0
    blt @L_02114434
    ldr r0, [sp]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0211453c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r1, #0
    str r1, [sp]
    mov r10, r0
    mov r8, r2
    mov r0, r9
    mov r1, r1
    mov r2, #8
    ldr r11, =data_020caf20
    bl MI_CpuFill8
    ldr r0, [r10, #0xbd4]
    cmp r0, #0
    bne @L_0211458c
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    str r0, [sp]
@L_0211458c:
    ldr r5, [r10, #0xbd4]
    mov r6, #0
    add r4, r10, #0x11800
    b @L_02114664
@L_0211459c:
    ldrh r0, [r5, #0x2a]
    cmp r0, #0
    beq @L_0211465c
    ldrb r0, [r5, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldreqb r0, [r5, #0x30]
    cmpeq r0, #1
    bne @L_0211465c
    mov r0, r10
    mov r1, r5
    bl _ZN17UnkClass_020621b413func_0206ea68Ev
    movs r7, r0
    bmi @L_0211465c
    ldrb r0, [r5, #0x31]
    tst r0, #0xc
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02114614
    ldrh r1, [r5, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0206e1fcEv
    cmp r0, #0
    ldreqh r0, [r9, #4]
    addeq r0, r0, #1
    streqh r0, [r9, #4]
    beq @L_0211465c
@L_02114614:
    ldrh r1, [r5, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    mov r0, r11
    bl func_02081a6c
    cmp r0, #0
    beq @L_02114650
    ldrh r0, [r9]
    cmp r8, #0
    add r0, r0, #1
    strh r0, [r9]
    ldrne r0, [r8, r7, lsl #2]
    addne r0, r0, #1
    strne r0, [r8, r7, lsl #2]
@L_02114650:
    ldrh r0, [r9, #2]
    add r0, r0, #1
    strh r0, [r9, #2]
@L_0211465c:
    add r6, r6, #1
    add r5, r5, #0x38
@L_02114664:
    ldrh r0, [r4, #0x42]
    cmp r6, r0
    blt @L_0211459c
    ldr r0, [sp]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_0211468c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r0
    mov r0, #0
    str r0, [sp]
    mov r6, r3
    mov r8, r1
    mov r7, r2
    ldr r1, [sp]
    mov r0, r6
    mov r2, #8
    bl MI_CpuFill8
    ldr r0, [r9, #0xbd4]
    cmp r0, #0
    bne @L_021146dc
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    str r0, [sp]
@L_021146dc:
    ldr r4, [r9, #0xbd4]
    mov r5, #0
    add r11, r9, #0x11800
    b @L_0211487c
@L_021146ec:
    ldrh r0, [r4, #0x2a]
    cmp r0, #0
    beq @L_02114874
    ldrb r0, [r4, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    bne @L_02114874
    ldrb r0, [r4, #0x30]
    cmp r0, #1
    beq @L_02114874
    cmp r0, #0x32
    bhs @L_02114874
    cmp r8, #1
    bne @L_02114774
    cmp r0, #0xe
    addls pc, pc, r0, lsl #2
    b @L_02114874
    dcd 0xea00004d
    dcd 0xea00004c
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea000005
    dcd 0xea000004
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xea000000
    dcd 0xeaffffff
@L_02114774:
    cmp r8, #2
    bne @L_021147dc
    ldrb r0, [r4, #0x30]
    sub r0, r0, #0x1f
    cmp r0, #0x12
    addls pc, pc, r0, lsl #2
    b @L_02114874
    dcd 0xea000011
    dcd 0xea000010
    dcd 0xea00000f
    dcd 0xea000034
    dcd 0xea00000d
    dcd 0xea00000c
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea000005
    dcd 0xea000004
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xea000000
    dcd 0xeaffffff
@L_021147dc:
    ldrb r0, [r4, #0x31]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02114814
    ldrh r1, [r4, #0x2a]
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0206e1fcEv
    cmp r0, #0
    ldreqh r0, [r6, #4]
    addeq r0, r0, #1
    streqh r0, [r6, #4]
    beq @L_02114874
@L_02114814:
    ldrh r1, [r4, #0x2a]
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r10, r0
    ldr r0, [pc, #0x74]
    mov r1, r10
    bl func_020817bc
    cmp r0, #0
    bne @L_0211484c
    ldr r0, [pc, #0x64]
    mov r1, r10
    bl func_02081894
    cmp r0, #0
    beq @L_02114858
@L_0211484c:
    ldrh r0, [r6]
    add r0, r0, #1
    strh r0, [r6]
@L_02114858:
    ldrh r0, [r6, #2]
    add r0, r0, #1
    strh r0, [r6, #2]
    ldrb r1, [r4, #0x30]
    ldr r0, [r7, r1, lsl #2]
    add r0, r0, #1
    str r0, [r7, r1, lsl #2]
@L_02114874:
    add r5, r5, #1
    add r4, r4, #0x38
@L_0211487c:
    ldrh r0, [r11, #0x42]
    cmp r5, r0
    blt @L_021146ec
    ldr r0, [sp]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl _ZN17UnkClass_020621b413func_0207f07cEv
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_020cacc8
    dcd data_020cadf4
}

extern "C" asm void func_ov000_021148a8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    movs r9, r1
    mov r1, #0
    str r1, [sp, #8]
    movne r1, r2
    mov r10, r0
    cmpne r1, #0
    str r2, [sp]
    str r3, [sp, #4]
    addle sp, sp, #0x14
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0xbd4]
    cmp r1, #0
    bne @L_021148f4
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp, #8]
@L_021148f4:
    ldr r0, [sp]
    mov r1, #0xc
    mul r2, r0, r1
    mov r6, #0
    mov r0, r9
    mov r1, r6
    bl MI_CpuFill8
    add r0, r10, #0x11800
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x38]
    mov r7, r6
    mov r8, r6
    ldr r4, [r10, #0xbd4]
    str r0, [sp, #0xc]
    b @L_02114a54
@L_02114930:
    ldr r0, [sp]
    cmp r6, r0
    bge @L_02114a64
    ldrh r0, [r4, #0x2a]
    cmp r0, #0
    beq @L_02114a4c
    ldrb r0, [r4, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldreqb r0, [r4, #0x30]
    cmpeq r0, #1
    bne @L_02114a4c
    ldrb r0, [r4, #0x31]
    tst r0, #0xc
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_021149b4
    ldrh r1, [r4, #0x2a]
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    ldr r0, =data_020cacc8
    bl func_020817bc
    cmp r0, #0
    bne @L_021149b4
    mov r0, r10
    ldrh r1, [r4, #0x2a]
    bl _ZN17UnkClass_020621b413func_0206e1fcEv
    cmp r0, #0
    beq @L_02114a4c
@L_021149b4:
    mov r0, r10
    mov r1, r4
    bl _ZN17UnkClass_020621b413func_0206ea68Ev
    ldr r1, [sp, #4]
    cmp r1, r0
    bne @L_02114a4c
    ldr r0, [sp, #0xc]
    add r7, r7, #1
    cmp r7, r0
    ble @L_02114a4c
    mov r0, #0xc
    mul r2, r6, r0
    ldrh r1, [r4, #0x2a]
    add r5, r9, r2
    mov r0, r10
    strh r1, [r5, #4]
    ldr r1, [r4, #0x34]
    str r1, [r9, r2]
    ldrb r1, [r4, #0x2e]
    strb r1, [r5, #6]
    ldrh r1, [r4, #0x2a]
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r11, r0
    ldr r0, =data_020cacc8
    mov r1, r11
    bl func_020817bc
    cmp r0, #0
    ldrneb r0, [r5, #7]
    mov r1, r11
    orrne r0, r0, #1
    strneb r0, [r5, #7]
    ldr r0, =data_020cadf4
    bl func_02081894
    cmp r0, #0
    ldrneb r0, [r5, #7]
    add r6, r6, #1
    orrne r0, r0, #2
    strneb r0, [r5, #7]
@L_02114a4c:
    add r8, r8, #1
    add r4, r4, #0x38
@L_02114a54:
    ldr r0, [sp, #0x10]
    ldrh r0, [r0, #0x42]
    cmp r8, r0
    blt @L_02114930
@L_02114a64:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_02114a78
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02114a78:
    mov r0, r6
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02114a8c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    movs r10, r1
    mov r1, #0
    str r1, [sp, #8]
    movne r1, r2
    mov r11, r0
    cmpne r1, #0
    str r2, [sp]
    str r3, [sp, #4]
    addle sp, sp, #0x10
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r11, #0xbd4]
    cmp r1, #0
    bne @L_02114ad8
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp, #8]
@L_02114ad8:
    ldr r0, [sp]
    mov r1, #0xc
    mul r2, r0, r1
    mov r6, #0
    mov r0, r10
    mov r1, r6
    bl MI_CpuFill8
    add r0, r11, #0x11800
    mov r7, r6
    mov r9, r6
    ldr r4, [r11, #0xbd4]
    str r0, [sp, #0xc]
    b @L_02114be0
@L_02114b0c:
    ldr r0, [sp]
    cmp r6, r0
    bge @L_02114bf0
    ldrh r0, [r4, #0x2a]
    cmp r0, #0
    beq @L_02114bd8
    ldrb r0, [r4, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldreqb r0, [r4, #0x30]
    cmpeq r0, #1
    bne @L_02114bd8
    ldrh r1, [r4, #0x2a]
    mov r0, r11
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r8, r0
    ldr r0, =data_020caf20
    mov r1, r8
    bl func_02081a6c
    cmp r0, #0
    beq @L_02114bd8
    mov r0, #0xc
    mul r2, r6, r0
    ldrh r1, [r4, #0x2a]
    add r5, r10, r2
    ldr r0, [sp, #4]
    add r7, r7, #1
    strh r1, [r5, #4]
    cmp r7, r0
    ldr r0, [r4, #0x34]
    str r0, [r10, r2]
    ldrb r0, [r4, #0x2e]
    strb r0, [r5, #6]
    ble @L_02114bd8
    ldr r0, =data_020cacc8
    mov r1, r8
    bl func_020817bc
    cmp r0, #0
    ldrneb r0, [r5, #7]
    mov r1, r8
    orrne r0, r0, #1
    strneb r0, [r5, #7]
    ldr r0, =data_020cadf4
    bl func_02081894
    cmp r0, #0
    ldrneb r0, [r5, #7]
    add r6, r6, #1
    orrne r0, r0, #2
    strneb r0, [r5, #7]
@L_02114bd8:
    add r9, r9, #1
    add r4, r4, #0x38
@L_02114be0:
    ldr r0, [sp, #0xc]
    ldrh r0, [r0, #0x42]
    cmp r9, r0
    blt @L_02114b0c
@L_02114bf0:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_02114c04
    mov r0, r11
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02114c04:
    mov r0, r6
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02114c1c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    movs r9, r1
    mov r1, #0
    str r1, [sp, #8]
    movne r1, r2
    mov r10, r0
    cmpne r1, #0
    str r2, [sp]
    str r3, [sp, #4]
    addle sp, sp, #0x14
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0xbd4]
    cmp r1, #0
    bne @L_02114c68
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp, #8]
@L_02114c68:
    ldr r0, [sp]
    mov r1, #0xc
    mul r2, r0, r1
    mov r6, #0
    mov r0, r9
    mov r1, r6
    bl MI_CpuFill8
    add r0, r10, #0x11800
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x38]
    mov r7, r6
    mov r8, r6
    ldr r4, [r10, #0xbd4]
    str r0, [sp, #0xc]
    b @L_02114d78
@L_02114ca4:
    ldr r0, [sp]
    cmp r6, r0
    bge @L_02114d88
    ldrh r0, [r4, #0x2a]
    cmp r0, #0
    beq @L_02114d70
    ldrb r0, [r4, #0x31]
    tst r0, #2
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    bne @L_02114d70
    ldrh r0, [r4, #0x2a]
    ldr r1, =0x449
    cmp r0, r1
    beq @L_02114d70
    ldrb r2, [r4, #0x30]
    ldr r1, [sp, #4]
    cmp r2, r1
    bne @L_02114d70
    ldr r1, [sp, #0xc]
    add r7, r7, #1
    cmp r7, r1
    ble @L_02114d70
    mov r1, #0xc
    mul r2, r6, r1
    add r5, r9, r2
    strh r0, [r5, #4]
    ldr r1, [r4, #0x34]
    mov r0, r10
    str r1, [r9, r2]
    ldrb r1, [r4, #0x2e]
    strb r1, [r5, #6]
    ldrh r1, [r4, #0x2a]
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r11, r0
    ldr r0, =data_020cacc8
    mov r1, r11
    bl func_020817bc
    cmp r0, #0
    ldrneb r0, [r5, #7]
    mov r1, r11
    orrne r0, r0, #1
    strneb r0, [r5, #7]
    ldr r0, =data_020cadf4
    bl func_02081894
    cmp r0, #0
    ldrneb r0, [r5, #7]
    add r6, r6, #1
    orrne r0, r0, #2
    strneb r0, [r5, #7]
@L_02114d70:
    add r8, r8, #1
    add r4, r4, #0x38
@L_02114d78:
    ldr r0, [sp, #0x10]
    ldrh r0, [r0, #0x42]
    cmp r8, r0
    blt @L_02114ca4
@L_02114d88:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_02114d9c
    mov r0, r10
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02114d9c:
    mov r0, r6
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov000_02114db4(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0x14
    ldr r3, =data_020cac9c
    ldrb r12, [r3, #0x20]
    str r12, [sp]
    ldrb r12, [r3, #0x22]
    str r12, [sp, #4]
    ldrb r12, [r3, #0x21]
    str r12, [sp, #8]
    ldrb r12, [r3, #0x25]
    str r12, [sp, #0xc]
    ldrb r12, [r3, #0x23]
    str r12, [sp, #0x10]
    bl func_ov000_02114df8
    add sp, sp, #0x14
    ldmia sp!, {pc}
}

extern "C" asm void func_ov000_02114df8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x294
    sub sp, sp, #0x400
    mov r4, #0
    str r4, [sp, #0x30]
    str r0, [sp]
    str r1, [sp, #4]
    str r2, [sp, #8]
    mov r10, r3
    bl _ZN17UnkClass_020621b413func_0207e5fcEv
    ldr r1, [sp, #0x30]
    str r0, [sp, #0x40]
    ldr r0, [sp, #0x30]
    sub r1, r1, #1
    str r0, [sp, #0x2c]
    mov r0, r1
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x30]
    str r1, [sp, #0x28]
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x30]
    str r0, [sp, #0x1c]
    ldr r0, [sp, #0x30]
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x30]
    str r0, [sp, #0x14]
    ldr r0, [sp, #4]
    cmp r0, #0
    ldrne r0, [sp, #8]
    cmpne r0, #0
    addle sp, sp, #0x294
    addle sp, sp, #0x400
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    ldr r0, [r0, #0xbd4]
    cmp r0, #0
    bne @L_02114ea0
    ldr r0, [sp]
    bl _ZN17UnkClass_020621b413func_0207efd8Ev
    mov r0, #1
    str r0, [sp, #0x30]
@L_02114ea0:
    mov r0, #0
    str r0, [sp, #0xc]
    add r0, sp, #0x500
    ldr r1, [sp, #0xc]
    add r0, r0, #0x71
    mov r2, #0x21
    bl MI_CpuFill8
    add r0, sp, #0x500
    mov r4, #0x18
    ldr r1, [sp, #0xc]
    add r0, r0, #0x38
    mov r2, r4
    bl MI_CpuFill8
    ldr r1, [sp, #0xc]
    mov r2, r4
    add r0, sp, #0x520
    bl MI_CpuFill8
    ldr r3, [sp, #8]
    mov r2, #0xc
    mul r2, r3, r2
    ldr r0, [sp, #4]
    ldr r1, [sp, #0xc]
    bl MI_CpuFill8
    cmp r10, #0
    ldrnesb r0, [r10]
    cmpne r0, #0
    beq @L_02115048
    ldr r9, [sp, #0xc]
    ldr r4, [pc, #0xf88]
    add r3, sp, #0x4b0
    mov r2, #0x1c
@L_02114f1c:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02114f1c
    add r3, sp, #0x400
    ldr r4, [pc, #0xf60]
    add r3, r3, #0xe8
    mov r2, #0x1c
@L_02114f48:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02114f48
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bgt @L_02114f7c
    mov r0, r10
    bl STD_GetStringLength
    str r0, [sp, #0xc]
@L_02114f7c:
    mov r8, #0
    add r4, sp, #0x500
    add r5, sp, #0x400
    add r6, sp, #0x4b0
    mov r11, r8
    mov r7, #1
    add r4, r4, #0x71
    add r5, r5, #0xe8
    b @L_0211501c
@L_02114fa0:
    ldrsb r1, [r10, r8]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02114fb8
    cmp r0, #0x9f
    bls @L_02114fc8
@L_02114fb8:
    cmp r0, #0xe0
    blo @L_02114fd0
    cmp r0, #0xfc
    bhi @L_02114fd0
@L_02114fc8:
    mov r0, r7
    b @L_02114fd4
@L_02114fd0:
    mov r0, r11
@L_02114fd4:
    cmp r0, #0
    bne @L_02115004
    mov r0, r6
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r6
    ldrnesb r0, [r5, r0]
    addne r9, r9, #1
    strneb r0, [r4, r8]
    ldreqsb r0, [r10, r8]
    streqb r0, [r4, r8]
    b @L_02115018
@L_02115004:
    ldrsb r0, [r10, r8]
    strb r0, [r4, r8]
    add r8, r8, #1
    ldrsb r0, [r10, r8]
    strb r0, [r4, r8]
@L_02115018:
    add r8, r8, #1
@L_0211501c:
    ldr r0, [sp, #0xc]
    cmp r8, r0
    blt @L_02114fa0
    ldrb r2, [sp, #0x572]
    ldrb r1, [sp, #0x571]
    mov r0, r10
    add r1, r1, r2, lsl #8
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r1, [sp, #0xc]
    bl STD_GetStringLength
@L_02115048:
    ldr r0, [sp]
    mov r4, #0xc
    add r0, r0, #0x11800
    ldrh r2, [r0, #0x42]
    ldr r0, [pc, #0xe48]
    mov r3, #1
    mul r1, r2, r4
    mov r2, #0
    str r2, [sp, #0x3c]
    bl _ZN8GameHeap5AllocEiii
    str r0, [sp, #0x44]
    cmp r0, #0
    ldreq r0, [sp, #0x3c]
    addeq sp, sp, #0x294
    addeq sp, sp, #0x400
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    ldr r1, [sp, #0x44]
    add r0, r0, #0x11800
    ldrh r3, [r0, #0x42]
    ldr r0, [sp, #0x3c]
    mul r2, r3, r4
    bl func_0200919c
    ldr r0, [sp]
    ldr r6, [r0, #0xbd4]
    ldr r0, [sp, #0x3c]
    str r0, [sp, #0x38]
    b @L_02116104
@L_021150b8:
    mov r0, #0
    str r0, [sp, #0x34]
    ldrh r0, [r6, #0x2a]
    cmp r0, #0
    beq @L_021160f4
    ldrb r0, [r6, #0x30]
    cmp r0, #1
    bne @L_021160f4
    ldrb r0, [r6, #0x31]
    tst r0, #4
    movne r0, #1
    ldreq r0, [sp, #0x34]
    cmp r0, #0
    ldrne r0, [sp, #0x28]
    addne r0, r0, #1
    strne r0, [sp, #0x28]
    bne @L_0211511c
    ldrb r0, [r6, #0x31]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrne r0, [sp, #0x24]
    addne r0, r0, #1
    strne r0, [sp, #0x24]
@L_0211511c:
    ldrh r2, [r6, #0x2a]
    mov r8, #0
    ldr r0, [sp]
    mov r1, r8
    bl _ZN17UnkClass_020621b413func_0207af84Ev
    cmp r0, #0
    bne @L_021160f4
    ldrb r1, [r6, #0x2c]
    cmp r1, #0xc9
    cmpne r1, #0xff
    beq @L_021160f4
    ldr r0, [sp]
    bl func_ov000_02116308
    str r0, [sp, #0x10]
    cmp r0, #1
    beq @L_021160f4
    add r0, sp, #0x550
    mov r1, r8
    mov r2, #0x21
    bl MI_CpuFill8
    ldr r0, [sp, #0xc]
    cmp r0, #0
    ldrb r0, [r6, #0x2c]
    beq @L_02115f3c
    cmp r0, #0xd4
    bne @L_021153f4
    ldrh r2, [r6, #0x2a]
    ldr r0, [pc, #0xd1c]
    ldr r1, [pc, #0xd1c]
    and r2, r2, r0
    cmp r2, r1
    cmpne r2, #0x3f4
    addne r0, r1, #0x19c
    cmpne r2, r0
    beq @L_021151b0
    cmp r2, #0x3a8
    bne @L_021152c8
@L_021151b0:
    mov r8, #0
    ldr r7, [pc, #0xcf8]
    ldr r4, [pc, #0xce0]
    mov r10, r8
    add r3, sp, #0x440
    mov r2, #0x1c
@L_021151c8:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021151c8
    add r3, sp, #0x400
    ldr r4, [pc, #0xcb4]
    add r3, r3, #0x78
    mov r2, #0x1c
@L_021151f4:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021151f4
    cmp r8, #0
    bgt @L_02115224
    mov r0, r7
    bl STD_GetStringLength
    mov r8, r0
@L_02115224:
    add r4, sp, #0x500
    add r11, sp, #0x400
    mov r9, #0
    add r5, sp, #0x440
    add r4, r4, #0x92
    add r11, r11, #0x78
    b @L_021152bc
@L_02115240:
    ldrsb r1, [r7, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115258
    cmp r0, #0x9f
    bls @L_02115268
@L_02115258:
    cmp r0, #0xe0
    blo @L_02115270
    cmp r0, #0xfc
    bhi @L_02115270
@L_02115268:
    mov r0, #1
    b @L_02115274
@L_02115270:
    mov r0, #0
@L_02115274:
    cmp r0, #0
    bne @L_021152a4
    mov r0, r5
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r5
    ldrnesb r0, [r11, r0]
    addne r10, r10, #1
    strneb r0, [r4, r9]
    ldreqsb r0, [r7, r9]
    streqb r0, [r4, r9]
    b @L_021152b8
@L_021152a4:
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
@L_021152b8:
    add r9, r9, #1
@L_021152bc:
    cmp r9, r8
    blt @L_02115240
    b @L_021153e0
@L_021152c8:
    sub r0, r1, #0x130
    bl func_0209d8b8
    ldr r4, [pc, #0xbc8]
    mov r7, r0
    mov r10, r8
    add r3, sp, #0x3d0
    mov r2, #0x1c
@L_021152e4:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021152e4
    add r3, sp, #0x400
    ldr r4, [pc, #0xb98]
    add r3, r3, #8
    mov r2, #0x1c
@L_02115310:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115310
    cmp r8, #0
    bgt @L_02115340
    mov r0, r7
    bl STD_GetStringLength
    mov r8, r0
@L_02115340:
    add r4, sp, #0x500
    add r11, sp, #0x400
    mov r9, #0
    add r5, sp, #0x3d0
    add r4, r4, #0x92
    add r11, r11, #8
    b @L_021153d8
@L_0211535c:
    ldrsb r1, [r7, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115374
    cmp r0, #0x9f
    bls @L_02115384
@L_02115374:
    cmp r0, #0xe0
    blo @L_0211538c
    cmp r0, #0xfc
    bhi @L_0211538c
@L_02115384:
    mov r0, #1
    b @L_02115390
@L_0211538c:
    mov r0, #0
@L_02115390:
    cmp r0, #0
    bne @L_021153c0
    mov r0, r5
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r5
    ldrnesb r0, [r11, r0]
    addne r10, r10, #1
    strneb r0, [r4, r9]
    ldreqsb r0, [r7, r9]
    streqb r0, [r4, r9]
    b @L_021153d4
@L_021153c0:
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
@L_021153d4:
    add r9, r9, #1
@L_021153d8:
    cmp r9, r8
    blt @L_0211535c
@L_021153e0:
    add r0, sp, #0x500
    add r1, sp, #0x500
    add r0, r0, #0x71
    add r1, r1, #0x92
    b @L_02115e24
@L_021153f4:
    cmp r0, #0xd7
    bne @L_02115418
    ldrh r1, [r6, #0x2a]
    add r2, sp, #0x500
    ldr r0, [sp]
    add r2, r2, #0x71
    bl func_ov000_02116348
    cmp r0, #1
    b @L_02115e2c
@L_02115418:
    mov r9, r8
    b @L_02115440
@L_02115420:
    add r0, r6, r8
    ldrb r0, [r0, #0x10]
    cmp r0, #0x20
    add r0, r8, #1
    cmpeq r9, #0
    mov r0, r0, lsl #0x10
    moveq r9, r8
    mov r8, r0, lsr #0x10
@L_02115440:
    add r0, r6, r8
    ldrb r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02115458
    cmp r8, #0x18
    blo @L_02115420
@L_02115458:
    add r10, r9, #1
    add r4, sp, #0x500
    sub r5, r8, r10
    add r4, r4, #0x38
    mov r7, #0
    mov r8, #0x18
    mov r0, r4
    mov r1, r7
    mov r2, r8
    bl MI_CpuFill8
    mov r2, r8
    add r8, sp, #0x520
    mov r1, r7
    mov r0, r8
    bl MI_CpuFill8
    mov r0, r4
    mov r2, r10
    add r1, r6, #0x10
    bl func_02016d0c
    cmp r9, #0
    beq @L_021155cc
    mov r1, r10
    add r3, r6, #0x10
    mov r0, r8
    add r2, r5, #1
    add r1, r3, r1
    bl func_02016d0c
    ldr r4, [pc, #0x9d4]
    mov r9, #2
    add r3, sp, #0x360
    mov r2, #0x1c
@L_021154d4:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021154d4
    ldr r4, [pc, #0x9ac]
    add r3, sp, #0x398
    mov r2, #0x1c
@L_021154fc:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021154fc
    cmp r9, #0
    bgt @L_0211552c
    add r0, sp, #0x520
    bl STD_GetStringLength
    mov r9, r0
@L_0211552c:
    mov r10, #0
    add r5, sp, #0x360
    add r8, sp, #0x520
    add r4, sp, #0x4e
    add r11, sp, #0x398
    b @L_021155c0
@L_02115544:
    ldrsb r1, [r8, r10]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_0211555c
    cmp r0, #0x9f
    bls @L_0211556c
@L_0211555c:
    cmp r0, #0xe0
    blo @L_02115574
    cmp r0, #0xfc
    bhi @L_02115574
@L_0211556c:
    mov r0, #1
    b @L_02115578
@L_02115574:
    mov r0, #0
@L_02115578:
    cmp r0, #0
    bne @L_021155a8
    mov r0, r5
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r5
    ldrnesb r0, [r11, r0]
    addne r7, r7, #1
    strneb r0, [r4, r10]
    ldreqsb r0, [r8, r10]
    streqb r0, [r4, r10]
    b @L_021155bc
@L_021155a8:
    ldrsb r0, [r8, r10]
    strb r0, [r4, r10]
    add r10, r10, #1
    ldrsb r0, [r8, r10]
    strb r0, [r4, r10]
@L_021155bc:
    add r10, r10, #1
@L_021155c0:
    cmp r10, r9
    blt @L_02115544
    ldrh r7, [sp, #0x4e]
@L_021155cc:
    ldr r4, [pc, #0x8cc]
    mov r10, #2
    mov r8, #0
    add r3, sp, #0x328
    mov r2, #0x1c
@L_021155e0:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021155e0
    ldr r4, [pc, #0x8a0]
    add r3, sp, #0x2f0
    mov r2, #0x1c
@L_02115608:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115608
    cmp r10, #0
    bgt @L_02115638
    add r0, r6, #0x10
    bl STD_GetStringLength
    mov r10, r0
@L_02115638:
    mov r9, #0
    add r5, sp, #0x328
    add r4, sp, #0x4c
    add r11, sp, #0x2f0
    b @L_021156d8
@L_0211564c:
    add r0, r6, r9
    ldrsb r1, [r0, #0x10]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115668
    cmp r0, #0x9f
    bls @L_02115678
@L_02115668:
    cmp r0, #0xe0
    blo @L_02115680
    cmp r0, #0xfc
    bhi @L_02115680
@L_02115678:
    mov r0, #1
    b @L_02115684
@L_02115680:
    mov r0, #0
@L_02115684:
    cmp r0, #0
    bne @L_021156b8
    mov r0, r5
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r5
    ldrnesb r0, [r11, r0]
    addne r8, r8, #1
    strneb r0, [r4, r9]
    addeq r0, r6, r9
    ldreqsb r0, [r0, #0x10]
    streqb r0, [r4, r9]
    b @L_021156d4
@L_021156b8:
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
    add r9, r9, #1
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
@L_021156d4:
    add r9, r9, #1
@L_021156d8:
    cmp r9, r10
    blt @L_0211564c
    ldrh r1, [sp, #0x4c]
    ldr r0, [sp, #0xc]
    cmp r0, r1
    bne @L_0211581c
    mov r8, #0
    ldr r4, [pc, #0x7a4]
    mov r10, r8
    add r3, sp, #0x280
    mov r2, #0x1c
@L_02115704:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115704
    ldr r4, [pc, #0x77c]
    add r3, sp, #0x2b8
    mov r2, #0x1c
@L_0211572c:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0211572c
    cmp r8, #0
    bgt @L_02115760
    add r0, sp, #0x500
    add r0, r0, #0x38
    bl STD_GetStringLength
    mov r8, r0
@L_02115760:
    add r5, sp, #0x500
    mov r9, #0
    add r11, sp, #0x280
    add r5, r5, #0x38
    add r4, sp, #0x550
    b @L_021157f8
@L_02115778:
    ldrsb r1, [r5, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115790
    cmp r0, #0x9f
    bls @L_021157a0
@L_02115790:
    cmp r0, #0xe0
    blo @L_021157a8
    cmp r0, #0xfc
    bhi @L_021157a8
@L_021157a0:
    mov r0, #1
    b @L_021157ac
@L_021157a8:
    mov r0, #0
@L_021157ac:
    cmp r0, #0
    bne @L_021157e0
    mov r0, r11
    bl func_02016e10
    cmp r0, #0
    ldreqsb r0, [r5, r9]
    streqb r0, [r4, r9]
    beq @L_021157f4
    sub r1, r0, r11
    add r0, sp, #0x2b8
    ldrsb r0, [r0, r1]
    add r10, r10, #1
    b @L_021157f0
@L_021157e0:
    ldrsb r0, [r5, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r5, r9]
@L_021157f0:
    strb r0, [r4, r9]
@L_021157f4:
    add r9, r9, #1
@L_021157f8:
    cmp r9, r8
    blt @L_02115778
    add r0, sp, #0x500
    add r0, r0, #0x71
    add r1, sp, #0x550
    bl STD_CompareString
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x34]
@L_0211581c:
    ldr r0, [sp, #0x34]
    cmp r0, #0
    ldreq r0, [sp, #0xc]
    cmpeq r7, r0
    bne @L_02115964
    mov r8, #0
    add r0, sp, #0x550
    mov r1, r8
    mov r2, #0x21
    bl MI_CpuFill8
    ldr r4, [pc, #0x654]
    mov r10, r8
    add r3, sp, #0x210
    mov r2, #0x1c
@L_02115854:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115854
    ldr r4, [pc, #0x62c]
    add r3, sp, #0x248
    mov r2, #0x1c
@L_0211587c:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0211587c
    cmp r8, #0
    bgt @L_021158ac
    add r0, sp, #0x520
    bl STD_GetStringLength
    mov r8, r0
@L_021158ac:
    mov r9, #0
    add r5, sp, #0x210
    add r7, sp, #0x520
    add r4, sp, #0x550
    add r11, sp, #0x248
    b @L_02115940
@L_021158c4:
    ldrsb r1, [r7, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_021158dc
    cmp r0, #0x9f
    bls @L_021158ec
@L_021158dc:
    cmp r0, #0xe0
    blo @L_021158f4
    cmp r0, #0xfc
    bhi @L_021158f4
@L_021158ec:
    mov r0, #1
    b @L_021158f8
@L_021158f4:
    mov r0, #0
@L_021158f8:
    cmp r0, #0
    bne @L_02115928
    mov r0, r5
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r5
    ldrnesb r0, [r11, r0]
    addne r10, r10, #1
    strneb r0, [r4, r9]
    ldreqsb r0, [r7, r9]
    streqb r0, [r4, r9]
    b @L_0211593c
@L_02115928:
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r7, r9]
    strb r0, [r4, r9]
@L_0211593c:
    add r9, r9, #1
@L_02115940:
    cmp r9, r8
    blt @L_021158c4
    add r0, sp, #0x500
    add r0, r0, #0x71
    add r1, sp, #0x550
    bl STD_CompareString
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x34]
@L_02115964:
    ldr r0, [sp, #0x34]
    cmp r0, #0
    bne @L_02115bdc
    ldr r4, [pc, #0x528]
    mov r10, #2
    mov r8, #0
    add r3, sp, #0x1d8
    mov r2, #0x1c
@L_02115984:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115984
    ldr r4, [pc, #0x4fc]
    add r3, sp, #0x1a0
    mov r2, #0x1c
@L_021159ac:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_021159ac
    cmp r10, #0
    bgt @L_021159dc
    add r0, r6, #0x10
    bl STD_GetStringLength
    mov r10, r0
@L_021159dc:
    mov r9, #0
    add r7, sp, #0x1d8
    mov r11, #1
    add r4, sp, #0x4a
    add r5, sp, #0x1a0
    b @L_02115a80
@L_021159f4:
    add r0, r6, r9
    ldrsb r1, [r0, #0x10]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115a10
    cmp r0, #0x9f
    bls @L_02115a20
@L_02115a10:
    cmp r0, #0xe0
    blo @L_02115a28
    cmp r0, #0xfc
    bhi @L_02115a28
@L_02115a20:
    mov r0, r11
    b @L_02115a2c
@L_02115a28:
    mov r0, #0
@L_02115a2c:
    cmp r0, #0
    bne @L_02115a60
    mov r0, r7
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r7
    ldrnesb r0, [r5, r0]
    addne r8, r8, #1
    strneb r0, [r4, r9]
    addeq r0, r6, r9
    ldreqsb r0, [r0, #0x10]
    streqb r0, [r4, r9]
    b @L_02115a7c
@L_02115a60:
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
    add r9, r9, #1
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
@L_02115a7c:
    add r9, r9, #1
@L_02115a80:
    cmp r9, r10
    blt @L_021159f4
    ldrh r1, [sp, #0x4a]
    ldr r0, [sp, #0xc]
    cmp r0, r1
    bne @L_02115bdc
    mov r8, #0
    add r0, sp, #0x550
    mov r1, r8
    mov r2, #0x21
    bl MI_CpuFill8
    ldr r4, [pc, #0x3ec]
    mov r10, r8
    add r3, sp, #0x130
    mov r2, #0x1c
@L_02115abc:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115abc
    ldr r4, [pc, #0x3c4]
    add r3, sp, #0x168
    mov r2, #0x1c
@L_02115ae4:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115ae4
    cmp r8, #0
    bgt @L_02115b14
    add r0, r6, #0x10
    bl STD_GetStringLength
    mov r8, r0
@L_02115b14:
    mov r9, #0
    add r7, sp, #0x130
    mov r11, #1
    add r4, sp, #0x550
    add r5, sp, #0x168
    b @L_02115bb8
@L_02115b2c:
    add r0, r6, r9
    ldrsb r1, [r0, #0x10]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115b48
    cmp r0, #0x9f
    bls @L_02115b58
@L_02115b48:
    cmp r0, #0xe0
    blo @L_02115b60
    cmp r0, #0xfc
    bhi @L_02115b60
@L_02115b58:
    mov r0, r11
    b @L_02115b64
@L_02115b60:
    mov r0, #0
@L_02115b64:
    cmp r0, #0
    bne @L_02115b98
    mov r0, r7
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r7
    ldrnesb r0, [r5, r0]
    addne r10, r10, #1
    strneb r0, [r4, r9]
    addeq r0, r6, r9
    ldreqsb r0, [r0, #0x10]
    streqb r0, [r4, r9]
    b @L_02115bb4
@L_02115b98:
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
    add r9, r9, #1
    add r0, r6, r9
    ldrsb r0, [r0, #0x10]
    strb r0, [r4, r9]
@L_02115bb4:
    add r9, r9, #1
@L_02115bb8:
    cmp r9, r8
    blt @L_02115b2c
    add r0, sp, #0x500
    add r0, r0, #0x71
    add r1, sp, #0x550
    bl STD_CompareString
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x34]
@L_02115bdc:
    ldr r0, [sp, #0x34]
    cmp r0, #0
    bne @L_02115e34
    ldr r4, [pc, #0x2b0]
    mov r10, #2
    mov r8, #0
    add r3, sp, #0xf8
    mov r2, #0x1c
@L_02115bfc:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115bfc
    ldr r4, [pc, #0x284]
    add r3, sp, #0xc0
    mov r2, #0x1c
@L_02115c24:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115c24
    cmp r10, #0
    bgt @L_02115c54
    mov r0, r6
    bl STD_GetStringLength
    mov r10, r0
@L_02115c54:
    mov r9, #0
    add r7, sp, #0xf8
    mov r11, #1
    add r4, sp, #0x48
    add r5, sp, #0xc0
    b @L_02115ce8
@L_02115c6c:
    ldrsb r1, [r6, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115c84
    cmp r0, #0x9f
    bls @L_02115c94
@L_02115c84:
    cmp r0, #0xe0
    blo @L_02115c9c
    cmp r0, #0xfc
    bhi @L_02115c9c
@L_02115c94:
    mov r0, r11
    b @L_02115ca0
@L_02115c9c:
    mov r0, #0
@L_02115ca0:
    cmp r0, #0
    bne @L_02115cd0
    mov r0, r7
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r7
    ldrnesb r0, [r5, r0]
    addne r8, r8, #1
    strneb r0, [r4, r9]
    ldreqsb r0, [r6, r9]
    streqb r0, [r4, r9]
    b @L_02115ce4
@L_02115cd0:
    ldrsb r0, [r6, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r6, r9]
    strb r0, [r4, r9]
@L_02115ce4:
    add r9, r9, #1
@L_02115ce8:
    cmp r9, r10
    blt @L_02115c6c
    ldrh r1, [sp, #0x48]
    ldr r0, [sp, #0xc]
    cmp r0, r1
    bne @L_02115e34
    mov r8, #0
    add r0, sp, #0x550
    mov r1, r8
    mov r2, #0x21
    bl MI_CpuFill8
    ldr r4, [pc, #0x184]
    mov r10, r8
    add r3, sp, #0x50
    mov r2, #0x1c
@L_02115d24:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115d24
    ldr r4, [pc, #0x15c]
    add r3, sp, #0x88
    mov r2, #0x1c
@L_02115d4c:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    add r4, r4, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02115d4c
    cmp r8, #0
    bgt @L_02115d7c
    mov r0, r6
    bl STD_GetStringLength
    mov r8, r0
@L_02115d7c:
    mov r9, #0
    add r7, sp, #0x50
    mov r11, #1
    add r4, sp, #0x550
    add r5, sp, #0x88
    b @L_02115e10
@L_02115d94:
    ldrsb r1, [r6, r9]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02115dac
    cmp r0, #0x9f
    bls @L_02115dbc
@L_02115dac:
    cmp r0, #0xe0
    blo @L_02115dc4
    cmp r0, #0xfc
    bhi @L_02115dc4
@L_02115dbc:
    mov r0, r11
    b @L_02115dc8
@L_02115dc4:
    mov r0, #0
@L_02115dc8:
    cmp r0, #0
    bne @L_02115df8
    mov r0, r7
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r7
    ldrnesb r0, [r5, r0]
    addne r10, r10, #1
    strneb r0, [r4, r9]
    ldreqsb r0, [r6, r9]
    streqb r0, [r4, r9]
    b @L_02115e0c
@L_02115df8:
    ldrsb r0, [r6, r9]
    strb r0, [r4, r9]
    add r9, r9, #1
    ldrsb r0, [r6, r9]
    strb r0, [r4, r9]
@L_02115e0c:
    add r9, r9, #1
@L_02115e10:
    cmp r9, r8
    blt @L_02115d94
    add r0, sp, #0x500
    add r0, r0, #0x71
    add r1, sp, #0x550
@L_02115e24:
    bl STD_CompareString
    cmp r0, #0
@L_02115e2c:
    moveq r0, #1
    streq r0, [sp, #0x34]
@L_02115e34:
    ldr r0, [sp, #0x34]
    cmp r0, #0
    beq @L_021160f4
    ldrb r0, [r6, #0x31]
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02115e70
    ldr r0, [pc, #0x58]
    ldr r1, [sp, #0x28]
    bl func_02081f28
    cmp r0, #0
    beq @L_021160f4
    b @L_02115fa8
@L_02115e70:
    ldrb r0, [r6, #0x31]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02115ebc
    ldr r0, [pc, #0x28]
    ldr r1, [sp, #0x24]
    bl func_02081f50
    cmp r0, #0
    beq @L_021160f4
    b @L_02115fa8
    dcd data_ov000_021176d4
    dcd data_ov000_0211769c
    dcd data_020c47b4
    dcd 0x00000fff
    dcd 0x0000028e
    dcd data_ov000_02118678
    dcd data_020cb0a0
@L_02115ebc:
    ldrb r1, [r6, #0x2c]
    ldr r0, [sp, #0x40]
    cmp r0, r1
    bge @L_02115f28
    cmp r1, #0xd4
    cmpne r1, #0xd7
    beq @L_02115f28
    cmp r1, #0xdd
    blo @L_02115ee8
    cmp r1, #0xe6
    bls @L_02115f28
@L_02115ee8:
    ldr r0, [sp, #0x10]
    cmp r0, #2
    beq @L_02115f28
    ldrb r1, [r6, #0x2c]
    cmp r1, #0xca
    blo @L_02115f14
    ldr r0, [pc, #0x3f4]
    ldrb r0, [r0, #0x4f6]
    add r0, r0, #0xc8
    cmp r1, r0
    ble @L_02115f28
@L_02115f14:
    ldr r0, [sp, #0x1c]
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x20]
    b @L_021160f4
@L_02115f28:
    mov r0, #0
    str r0, [sp, #0x20]
    mov r0, #1
    str r0, [sp, #0x1c]
    b @L_02115fa8
@L_02115f3c:
    cmp r0, #0xdd
    blo @L_02115f4c
    cmp r0, #0xe6
    bls @L_02115f68
@L_02115f4c:
    ldr r0, [sp, #0x10]
    cmp r0, #2
    beq @L_02115f68
    ldrb r1, [r6, #0x2c]
    ldr r0, [sp, #0x40]
    cmp r0, r1
    blt @L_021160f4
@L_02115f68:
    ldrb r0, [r6, #0x2c]
    cmp r0, #0xca
    blo @L_02115f7c
    cmp r0, #0xd4
    bls @L_021160f4
@L_02115f7c:
    ldrb r0, [r6, #0x2c]
    cmp r0, #0xd7
    beq @L_021160f4
    ldrb r0, [r6, #0x31]
    tst r0, #0xc
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_021160f4
    mov r0, #1
    str r0, [sp, #0x34]
@L_02115fa8:
    ldr r1, [sp, #0x6b8]
    cmp r1, #0
    beq @L_02115fc0
    ldrb r0, [r6, #0x2d]
    cmp r0, r1
    bne @L_021160f4
@L_02115fc0:
    ldr r1, [sp, #0x6bc]
    cmp r1, #0
    beq @L_02115fd8
    ldrb r0, [r6, #0x2e]
    cmp r0, r1
    bne @L_021160f4
@L_02115fd8:
    ldr r1, [sp, #0x6c0]
    cmp r1, #0
    beq @L_02115ff0
    ldrb r0, [r6, #0x2f]
    cmp r0, r1
    bne @L_021160f4
@L_02115ff0:
    ldr r1, [sp, #0x6c8]
    cmp r1, #0
    beq @L_02116008
    ldrb r0, [r6, #0x30]
    cmp r0, r1
    bne @L_021160f4
@L_02116008:
    ldr r1, [sp, #0x6c4]
    cmp r1, #0
    beq @L_02116020
    ldrb r0, [r6, #0x28]
    cmp r0, r1
    bne @L_021160f4
@L_02116020:
    ldrh r1, [r6, #0x2a]
    ldr r0, [sp]
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    ldr r0, [sp]
    add r0, r0, #0x184
    add r0, r0, #0x400
    bl func_0208170c
    cmp r0, #0
    bne @L_021160f4
    ldrb r0, [r6, #0x2c]
    cmp r0, #0xdd
    blo @L_02116094
    cmp r0, #0xe6
    bhi @L_02116094
    ldr r4, [pc, #0x29c]
    ldr r0, [pc, #0x29c]
    ldrh r1, [r6, #0x2a]
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    mov r0, r4
    bl func_020817bc
    cmp r0, #0
    bne @L_02116094
    ldr r0, [sp, #0x14]
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x18]
    b @L_021160f4
@L_02116094:
    ldr r0, [sp, #0x34]
    cmp r0, #0
    mov r0, #0
    str r0, [sp, #0x18]
    mov r0, #1
    str r0, [sp, #0x14]
    beq @L_021160f4
    ldr r0, [sp, #0x3c]
    mov r1, #0xc
    mul r3, r0, r1
    ldr r0, [sp, #0x44]
    ldrh r4, [r6, #0x2a]
    add r2, r0, r3
    ldr r0, [sp, #0x3c]
    strh r4, [r2, #4]
    add r0, r0, #1
    str r0, [sp, #0x3c]
    ldr r1, [r6, #0x34]
    ldr r0, [sp, #0x44]
    str r1, [r0, r3]
    ldrb r0, [r6, #0x2e]
    strb r0, [r2, #6]
    ldrb r0, [r6, #0x2c]
    strb r0, [r2, #8]
@L_021160f4:
    ldr r0, [sp, #0x38]
    add r6, r6, #0x38
    add r0, r0, #1
    str r0, [sp, #0x38]
@L_02116104:
    ldr r0, [sp]
    add r0, r0, #0x11800
    ldrh r1, [r0, #0x42]
    ldr r0, [sp, #0x38]
    cmp r0, r1
    blt @L_021150b8
    ldr r1, [sp, #0x3c]
    ldr r0, [sp, #8]
    mov r4, #0xc
    cmp r1, r0
    movle r0, r1
    strle r0, [sp, #8]
    movle r0, #1
    strle r0, [sp, #0x2c]
    mov r0, #0
    str r0, [sp, #0x38]
    mov r5, r4
    mov r6, r4
    mov r7, r4
    b @L_021161fc
@L_02116154:
    ldr r0, [sp, #0x3c]
    cmp r0, #0
    beq @L_0211620c
    bl func_ov015_021309a4
    mul r1, r0, r6
    add r2, r0, #1
    ldr r0, [sp, #0x44]
    ldr r8, [r0, r1]
    add r1, r0, r1
    ldr r0, [sp, #0x38]
    mul r3, r0, r7
    ldr r0, [sp, #4]
    str r8, [r0, r3]
    add r0, r0, r3
    ldrh r8, [r1, #4]
    ldr r3, [sp, #0x3c]
    strh r8, [r0, #4]
    ldrb r8, [r1, #6]
    sub r3, r3, r2
    cmp r3, #0
    strb r8, [r0, #6]
    ldrb r8, [r1, #7]
    strb r8, [r0, #7]
    ldrb r8, [r1, #8]
    strb r8, [r0, #8]
    ldrb r9, [r1, #9]
    ldrb r8, [r1, #0xa]
    strb r9, [r0, #9]
    strb r8, [r0, #0xa]
    ldrb r8, [r1, #0xb]
    strb r8, [r0, #0xb]
    ble @L_021161e4
    ldr r0, [sp, #0x44]
    mla r0, r2, r4, r0
    mul r2, r3, r5
    bl func_02084aec
@L_021161e4:
    ldr r0, [sp, #0x3c]
    sub r0, r0, #1
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x38]
    add r0, r0, #1
    str r0, [sp, #0x38]
@L_021161fc:
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #8]
    cmp r1, r0
    blt @L_02116154
@L_0211620c:
    ldr r0, [sp, #0x2c]
    mov r4, #0xc
    cmp r0, #0
    bne @L_02116274
    mov r0, #0
    str r0, [sp, #0x38]
    ldr r0, [sp]
    add r5, r0, #0x184
    b @L_02116260
@L_02116230:
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #4]
    mla r0, r1, r4, r0
    ldrh r1, [r0, #4]
    ldr r0, [sp]
    bl _ZN17UnkClass_020621b413func_0207a534Ev
    mov r1, r0
    add r0, r5, #0x400
    bl func_020816b0
    ldr r0, [sp, #0x38]
    add r0, r0, #1
    str r0, [sp, #0x38]
@L_02116260:
    ldr r1, [sp, #0x38]
    ldr r0, [sp, #8]
    cmp r1, r0
    blt @L_02116230
    b @L_0211627c
@L_02116274:
    ldr r0, [sp]
    bl func_ov000_02116958
@L_0211627c:
    ldr r0, [sp, #0x30]
    mov r4, #1
    cmp r0, #0
    beq @L_02116294
    ldr r0, [sp]
    bl _ZN17UnkClass_020621b413func_0207f07cEv
@L_02116294:
    ldr r0, [pc, #-0x3f4]
    ldr r1, [sp, #0x44]
    bl _ZN8GameHeap4FreeEPv
    ldr r0, [pc, #0x54]
    strb r4, [r0, #0x5e0]
    ldr r0, [sp, #0x20]
    cmp r0, #0
    ldreq r0, [sp, #0x18]
    cmpeq r0, #0
    ldreq r0, [sp, #8]
    addeq sp, sp, #0x294
    addeq sp, sp, #0x400
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x20]
    cmp r0, #0
    addne sp, sp, #0x294
    addne sp, sp, #0x400
    mvnne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x18]
    cmp r0, #0
    mvnne r0, #1
    moveq r0, #0
    add sp, sp, #0x294
    add sp, sp, #0x400
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd gGameState
    dcd data_020cacc8
    dcd data_020e88a0
}
