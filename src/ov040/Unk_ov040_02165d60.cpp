#include "ov040/Unk_ov040_02165d60.hpp"

extern "C" void func_ov040_02165d60(void);
extern "C" void func_ov040_02165e64(void);
extern "C" void func_ov040_02165ef4(s32 arg0);
extern "C" void func_ov040_02165f08(s32 arg0);
extern "C" void func_ov040_02165f1c(void);
extern "C" void func_ov040_02165f34(void);
extern "C" void func_ov040_02165f5c(void);
extern "C" void func_ov040_021662f4(void);
extern "C" void func_ov040_02166384(void);
extern "C" void func_ov040_021663d0(void);
extern "C" void func_ov040_021663fc(void);
extern "C" void func_ov040_02166498(void);
extern "C" void func_ov040_02166514(void);
extern "C" void func_ov040_02166584(void);
extern "C" void func_ov040_021665fc(void);
extern "C" void func_ov040_0216661c(void);
extern "C" void func_ov040_0216669c(void);
extern "C" void func_ov040_021666b4(void);
extern "C" void func_ov040_02166734(void);
extern "C" void func_ov040_02166794(void);
extern "C" void func_ov040_0216687c(void);
extern "C" void func_ov040_02166b70(void);
extern "C" void func_ov040_02166bfc(void);
extern "C" void func_ov040_02166d94(void);
extern "C" void func_ov040_02166e2c(void);
extern "C" void func_ov040_02166e58(void);
extern "C" void func_ov040_02166ecc(void);
extern "C" void func_ov040_02166fc8(void);
extern "C" void func_ov040_02167378(void);
extern "C" void func_ov040_02167554(void);
extern "C" void func_ov040_02167634(void);
extern "C" void func_ov040_02167834(void);
extern "C" void func_ov040_021679ec(void);
extern "C" void func_ov040_02167fb4(void);
extern "C" void func_ov040_02168388(void);
extern "C" void func_ov040_021686b8(void);
extern "C" void func_ov040_021689e8(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c4814[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac8[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_020d3d20[];
extern "C" char data_ov040_021692ec[];
extern "C" char data_ov040_021692f4[];
extern "C" char data_ov040_02169300[];
extern "C" char data_ov040_02169318[];
extern "C" char data_ov040_02169344[];
extern "C" char data_ov040_02169650[];
extern "C" char data_ov040_02169670[];
extern "C" char data_ov040_0216968c[];
extern "C" char data_ov040_021696b0[];
extern "C" char data_ov040_021696d4[];
extern "C" char data_ov040_021696f8[];
extern "C" char data_ov040_0216971c[];
extern "C" char data_ov040_02169740[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void STD_ConcatenateString(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e0ccEi(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZN8TextFont16SetUseGlyphWidthEh(void);
extern "C" void _ZN8TextFont7SetFontEPvmh(void);
extern "C" void func_02003758(void);
extern "C" void func_020039f8(void);
extern "C" void func_02003ad8(void);
extern "C" void func_02003bb8(void);
extern "C" void func_0209b7b0(void);
extern "C" void func_0209d668(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_0209e25c(void);
extern "C" void func_0209e298(void);
extern "C" void func_0209e360(void);
extern "C" void func_ov015_02132224(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_021330b4(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b540(void);
extern "C" void func_ov015_0213b6ac(void);
extern "C" void func_ov015_0213b990(void);
extern "C" void func_ov015_0213ba04(void);
extern "C" void func_ov015_0213ba78(void);
extern "C" void func_ov015_0213bcfc(void);
extern "C" void func_ov015_0213be1c(void);
extern "C" void func_ov015_0213be90(void);
extern "C" void func_ov015_0213beb0(void);
extern "C" void func_ov015_0213c3dc(void);

extern "C" asm void func_ov040_02165d60(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    add r0, r4, #0xbc
    mov r1, #0
    mov r2, #0x150
    bl MI_CpuFill8
    ldr r0, =data_ov040_02169650
    add r1, r4, #0xbc
    bl func_ov015_02133f94
    ldr r0, =data_ov040_02169670
    add r1, r4, #0xc8
    bl func_ov015_02133f94
    ldr r0, =data_ov040_0216968c
    add r1, r4, #0xd4
    bl func_ov015_02133f94
    ldr r0, =data_ov040_021696b0
    add r1, r4, #0xe0
    bl func_ov015_02133f94
    ldr r0, =data_020c4ab4
    ldr r0, [r0, #4]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02165ddc
    b @L_02165ddc
    b @L_02165dcc
    b @L_02165dd4
    b @L_02165dd4
@L_02165dcc:
    ldr r0, =data_ov040_021696d4
    b @L_02165de0
@L_02165dd4:
    ldr r0, =data_ov040_021696f8
    b @L_02165de0
@L_02165ddc:
    ldr r0, =data_ov040_0216971c
@L_02165de0:
    add r1, r4, #0xec
    bl func_ov015_02133f94
    ldr r1, [r4, #0x80]
    cmp r1, #0
    beq @L_02165e10
    mov r5, #0x6c0
    mov r2, r5
    mov r0, #0
    bl MIi_CpuClearFast
    ldr r0, [r4, #0x80]
    mov r1, r5
    bl DC_FlushRange
@L_02165e10:
    ldr r0, [r4, #0x84]
    cmp r0, #0
    beq @L_02165e38
    mov r2, #0
@L_02165e20:
    ldr r1, [r4, #0x84]
    mov r0, r2, lsl #1
    strh r2, [r1, r0]
    add r2, r2, #1
    cmp r2, #0x36
    blt @L_02165e20
@L_02165e38:
    mov r0, #1
    str r0, [r4, #0x34]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov040_02165e64(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r8, =data_ov040_02169344
    mov r4, r0
    ldr r0, [r8]
    ldr r7, [r4, #0xbc]
    cmp r0, #0
    beq @L_02165ea4
    add r6, r4, #0xbc
    mov r5, #0xc
@L_02165e88:
    ldr r3, [r8, #4]
    mov r2, r7
    mla r1, r3, r5, r6
    bl func_ov015_021340c0
    ldr r0, [r8, #8]!
    cmp r0, #0
    bne @L_02165e88
@L_02165ea4:
    mov r5, #0
    ldr r1, [r4, #0xc8]
    mov r2, r5
    mov r3, r5
    add r0, r4, #8
    bl _ZN8TextFont7SetFontEPvmh
    mov r1, r5
    add r0, r4, #8
    bl _ZN8TextFont16SetUseGlyphWidthEh
    ldr r0, [r4, #0x200]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r0, r4, #0x2c
    bl func_0209e25c
    ldr r1, [r4, #0x200]
    ldr r2, [r4, #0x204]
    add r0, r4, #0x2c
    bl func_0209e298
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov040_02165ef4(s32 arg0)
{
    func_ov015_02134118((arg0 + 0xBC), 0x1C);
}

extern "C" void func_ov040_02165f08(s32 arg0)
{
    func_ov015_02134198((arg0 + 0xBC), 0x1C);
}

extern "C" asm void func_ov040_02165f1c(void)
{
    add r2, r0, #0xbc
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =func_ov015_02134208
    bx r12
}

extern "C" asm void func_ov040_02165f34(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
@L_02165f40:
    mov r0, r5
    mov r1, r4
    bl func_ov040_02165f1c
    add r4, r4, #1
    cmp r4, #0x1c
    blt @L_02165f40
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov040_02165f5c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x58
    mov r10, r0
    bl G2_GetBG3CharPtr
    mov r7, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r7
    bl DC_FlushRange
    ldr r9, =data_ov040_02169300
    add r4, sp, #0x40
    mov r5, r4
    ldmia r9!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r9, {r0, r1}
    stmia r4, {r0, r1}
    mov r8, r6
    mov r4, #3
    mov r11, #0xc
@L_02165fb8:
    ldr r1, [r5, r8, lsl #2]
    mla r0, r1, r11, r10
    ldr r9, [r0, #0xbc]
    cmp r9, #0
    beq @L_02166014
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r4
    add r0, r9, r0
    add r2, r6, #1
    bl func_ov015_02132984
    mov r6, r0
    mov r0, r9
    mov r1, #0
    mov r2, r4
    bl func_ov015_021322b0
    ldr r0, [r9, #0x14]
    ldr r2, [r9, #0x18]
    mov r1, r7
    add r0, r9, r0
    bl func_02003bb8
    ldr r0, [r9, #0x18]
    add r7, r7, r0
@L_02166014:
    add r8, r8, #1
    cmp r8, #6
    blo @L_02165fb8
    ldr r0, [r10, #0x84]
    cmp r0, #0
    beq @L_02166040
    add r2, r6, #1
    mov r1, #0x6c
    mov r3, #0
    bl func_ov015_02132984
    mov r6, r0
@L_02166040:
    ldr r0, [r10, #0x80]
    cmp r0, #0
    beq @L_02166060
    mov r1, r7
    mov r2, #0x6c0
    str r7, [r10, #0x7c]
    bl func_02003bb8
    add r7, r7, #0x6c0
@L_02166060:
    ldr r0, [r10, #0xa8]
    cmp r0, #0
    ldrne r0, [r10, #0xac]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_021660a4
    ldrh r3, [r10, #0xb4]
    ldrh r1, [r10, #0xb6]
    ldr r0, [r10, #0xa8]
    add r2, r6, #1
    mul r1, r3, r1
    mov r1, r1, lsl #1
    mov r3, #0
    str r7, [r10, #0xb0]
    bl func_ov015_02132984
@L_021660a4:
    bl G2_GetBG1CharPtr
    mov r8, #0x20
    mov r7, #0
    mov r1, r0
    mov r0, r7
    mov r2, r8
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r8
    bl DC_FlushRange
    ldr r9, =data_ov040_02169318
    add r4, sp, #0x14
    mov r5, r4
    ldmia r9!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r9!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r9, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    mov r6, r7
    mov r11, #2
    mov r4, r7
@L_021660fc:
    ldr r1, [r5, r6, lsl #2]
    mov r0, #0xc
    mla r0, r1, r0, r10
    ldr r9, [r0, #0xbc]
    cmp r9, #0
    beq @L_0216615c
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r11
    add r0, r9, r0
    add r2, r7, #1
    bl func_ov015_02132984
    mov r7, r0
    mov r0, r9
    mov r1, r4
    mov r2, r11
    bl func_ov015_021322b0
    ldr r0, [r9, #0x14]
    mov r1, r8
    add r0, r9, r0
    ldr r2, [r9, #0x18]
    bl func_020039f8
    ldr r0, [r9, #0x18]
    add r8, r8, r0
@L_0216615c:
    add r6, r6, #1
    cmp r6, #0xb
    blo @L_021660fc
    ldr r0, =data_ov040_021692f4
    add r11, sp, #8
    ldmia r0, {r0, r1, r2}
    stmia r11, {r0, r1, r2}
    mov r6, #0
    mov r5, #2
@L_02166180:
    ldr r1, [r11, r6, lsl #2]
    mov r0, #0xc
    mla r0, r1, r0, r10
    ldr r9, [r0, #0xbc]
    cmp r9, #0
    beq @L_021661e0
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r5
    add r0, r9, r0
    add r2, r7, #1
    bl func_ov015_02132984
    mov r7, r0
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r9, #0x14]
    mov r1, r8
    add r0, r9, r0
    ldr r2, [r9, #0x18]
    bl func_020039f8
    ldr r0, [r9, #0x18]
    add r8, r8, r0
@L_021661e0:
    add r6, r6, #1
    cmp r6, #3
    blo @L_02166180
    ldr r0, =data_ov040_021692ec
    add r11, sp, #0
    ldr r1, [r0]
    ldr r0, [r0, #4]
    str r1, [sp]
    str r0, [sp, #4]
    mov r6, #0
    mov r5, #4
@L_0216620c:
    ldr r1, [r11, r6, lsl #2]
    mov r0, #0xc
    mla r0, r1, r0, r10
    ldr r9, [r0, #0xbc]
    cmp r9, #0
    beq @L_0216626c
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r5
    add r0, r9, r0
    add r2, r7, #1
    bl func_ov015_02132984
    mov r7, r0
    mov r0, r9
    mov r1, r4
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r9, #0x14]
    mov r1, r8
    add r0, r9, r0
    ldr r2, [r9, #0x18]
    bl func_020039f8
    ldr r0, [r9, #0x18]
    add r8, r8, r0
@L_0216626c:
    add r6, r6, #1
    cmp r6, #2
    blo @L_0216620c
    ldr r6, [r10, #0xec]
    cmp r6, #0
    beq @L_021662d8
    mov r5, #1
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_ov015_021322b0
    ldr r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    mov r2, r4
    mov r3, r5
    add r0, r6, r0
    bl func_ov015_02132984
    ldr r0, [r6, #0x14]
    ldr r2, [r6, #0x18]
    mov r1, r4
    add r0, r6, r0
    bl func_02003ad8
    ldr r0, [r6, #0xc]
    ldr r2, [r6, #0x10]
    add r0, r6, r0
    mov r1, r4
    bl func_02003758
@L_021662d8:
    bl func_ov015_02132224
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov040_021662f4(void)
{
    stmdb sp!, {r3, lr}
    mov r3, r0
    ldr r0, [r3, #0x38]
    cmp r0, #0
    bne @L_02166334
    ldrb r0, [r3, #0x78]
    cmp r0, #0
    ldrne r0, [r3, #0x80]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    mov r12, #0
    ldr r1, [r3, #0x7c]
    mov r2, #0x6c0
    strb r12, [r3, #0x78]
    bl func_02003bb8
    ldmia sp!, {r3, pc}
@L_02166334:
    ldr r0, [r3, #0xa8]
    cmp r0, #0
    ldrne r0, [r3, #0xac]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [r3, #0xb8]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [r3, #0xb4]
    ldrh r1, [r3, #0xb6]
    mov lr, #0
    ldr r0, [r3, #0xac]
    mul r12, r2, r1
    ldr r1, [r3, #0xb0]
    mov r2, r12, lsl #5
    strb lr, [r3, #0xb8]
    bl func_02003bb8
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov040_02166384(void)
{
    cmp r1, #0
    moveq r0, #0
    bxeq lr
    ldrb r0, [r1]
    cmp r0, #0x81
    blo @L_021663a4
    cmp r0, #0x9f
    bls @L_021663b4
@L_021663a4:
    cmp r0, #0xe0
    blo @L_021663bc
    cmp r0, #0xfc
    bhi @L_021663bc
@L_021663b4:
    mov r0, #1
    b @L_021663c0
@L_021663bc:
    mov r0, #0
@L_021663c0:
    cmp r0, #0
    moveq r0, #1
    movne r0, #2
    bx lr
}

extern "C" asm void func_ov040_021663d0(void)
{
    cmp r2, #0
    moveq r0, #0
    bxeq lr
    cmp r2, #1
    ldreqb r0, [r1]
    ldrneb r2, [r1, #1]
    ldrneb r0, [r1]
    orrne r0, r0, r2, lsl #8
    movne r0, r0, lsl #0x10
    movne r0, r0, lsr #0x10
    bx lr
}

extern "C" asm void func_ov040_021663fc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r8, r1
    mov r9, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_ov040_02166498
    cmp r0, #3
    movhi r0, #1
    ldmhiia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8
    mov r4, #0
    bl STD_GetStringLength
    mov r5, r0
    mov r6, r4
    cmp r5, #0
    ble @L_0216647c
@L_0216643c:
    mov r0, r9
    add r1, r8, r6
    bl func_ov040_02166384
    mov r7, r0
    mov r0, r9
    mov r2, r7
    add r1, r8, r6
    bl func_ov040_021663d0
    cmp r0, #0x20
    addeq r4, r4, #1
    cmp r7, #1
    subgt r0, r7, #1
    addgt r6, r6, r0
    add r6, r6, #1
    cmp r6, r5
    blt @L_0216643c
@L_0216647c:
    cmp r4, r5
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, r8
    add r0, r9, #0x2c
    bl func_0209e360
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov040_02166498(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r1
    mov r5, r0
    mov r0, r4
    mov r6, #0
    bl STD_GetStringLength
    mov r7, r0
    mov r8, r6
    cmp r7, #0
    ble @L_0216650c
@L_021664c0:
    mov r0, r5
    add r1, r4, r8
    bl func_ov040_02166384
    mov r9, r0
    mov r0, r5
    mov r2, r9
    add r1, r4, r8
    bl func_ov040_021663d0
    cmp r0, #0x30
    blo @L_021664f4
    cmp r0, #0x39
    addls r0, r6, #1
    andls r6, r0, #0xff
@L_021664f4:
    cmp r9, #1
    subgt r0, r9, #1
    addgt r8, r8, r0
    add r8, r8, #1
    cmp r8, r7
    blt @L_021664c0
@L_0216650c:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov040_02166514(void)
{
    stmdb sp!, {r3, lr}
    str r1, [r0, #0x74]
    cmp r1, #1
    beq @L_02166538
    cmp r1, #2
    beq @L_02166550
    cmp r1, #3
    beq @L_02166568
    ldmia sp!, {r3, pc}
@L_02166538:
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0xc
    mov r3, #0xb
    bl func_ov015_0213be1c
    ldmia sp!, {r3, pc}
@L_02166550:
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0xf
    mov r3, #0xe
    bl func_ov015_0213be1c
    ldmia sp!, {r3, pc}
@L_02166568:
    mov r1, #0
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0x1f
    bl func_ov015_0213be1c
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov040_02166584(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x70]
    mov r2, #0xc
    add r3, lr, #2
    mla r12, r3, r2, r0
    ldr r2, [r12, #0xc0]
    ldr r0, =0xcccccccd
    cmp r1, #0
    umull r0, r3, r2, r0
    ldr r2, [r12, #0xbc]
    mov r0, #0
    ldmltia sp!, {r3, pc}
    cmp r1, r3, lsr #4
    ldmhsia sp!, {r3, pc}
    ldr r0, =data_020c4ab4
    ldr r0, [r0, #4]
    cmp r0, #2
    bne @L_021665e8
    cmp lr, #1
    cmpeq r1, #0x38
    moveq r1, #0x37
    beq @L_021665e8
    cmp lr, #0
    cmpeq r1, #0x33
    moveq r1, #0x32
@L_021665e8:
    mov r0, #0x14
    mla r0, r1, r0, r2
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov040_021665fc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r2
    bl func_ov040_0216661c
    mov r1, #1
    stmia r4, {r1, r5}
    strh r0, [r4, #8]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov040_0216661c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov040_02166584
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r1, [r4, #0xa1]
    cmp r1, #1
    beq @L_02166650
    ldrb r1, [r4, #0xa2]
    cmp r1, #1
    addeq r0, r0, #4
    addne r0, r0, #2
@L_02166650:
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r1, [r0]
    cmp r1, #0x81
    blo @L_02166670
    cmp r1, #0x9f
    bls @L_02166680
@L_02166670:
    cmp r1, #0xe0
    blo @L_02166688
    cmp r1, #0xfc
    bhi @L_02166688
@L_02166680:
    mov r1, #1
    b @L_0216668c
@L_02166688:
    mov r1, #0
@L_0216668c:
    cmp r1, #0
    ldreqb r0, [r0]
    ldrneh r0, [r0]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_0216669c(void)
{
    stmdb sp!, {r3, lr}
    bl func_ov040_02166584
    cmp r0, #0
    moveq r0, #8
    ldrneh r0, [r0, #6]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov040_021666b4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, [r0, #0x70]
    mov r3, #0xc
    add r4, r4, #2
    mla r5, r4, r3, r0
    ldr r4, [r5, #0xc0]
    ldr r12, =0xcccccccd
    sub r0, r3, #0xd
    umull r12, r3, r4, r12
    ldr r7, [r5, #0xbc]
    mov r8, #0
    movs r3, r3, lsr #4
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r12, #0x14
@L_021666ec:
    mla lr, r8, r12, r7
    ldrh r6, [lr, #8]
    ldrh r4, [lr, #0xc]
    ldrh r5, [lr, #0xa]
    ldrh lr, [lr, #0xe]
    add r4, r6, r4
    cmp r6, r1
    cmplt r1, r4
    add lr, r5, lr
    cmplt r5, r2
    cmplt r2, lr
    movlt r0, r8
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    add r8, r8, #1
    cmp r8, r3
    blo @L_021666ec
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov040_02166734(void)
{
    stmdb sp!, {r4, lr}
    ldr r3, [r0, #0x70]
    mov r2, #0xc
    add r3, r3, #2
    mla lr, r3, r2, r0
    ldr r12, [lr, #0xc0]
    ldr r3, =0xcccccccd
    sub r0, r2, #0xd
    umull r2, r4, r12, r3
    ldr r12, [lr, #0xbc]
    movs r4, r4, lsr #4
    mov lr, #0
    ldmeqia sp!, {r4, pc}
    mov r2, #0x14
@L_0216676c:
    mla r3, lr, r2, r12
    ldrh r3, [r3, #6]
    cmp r1, r3
    moveq r0, lr
    ldmeqia sp!, {r4, pc}
    add lr, lr, #1
    cmp lr, r4
    blo @L_0216676c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_02166794(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r4, r2
    mov r5, r3
    ldr r0, =data_020c9660
    mov r2, r6
    mov r3, r4
    mov r1, #0
    bl func_ov015_0213c3dc
    ldr r1, [r7, #0x38]
    cmp r1, #1
    bne @L_021667f0
    cmp r6, #0x68
    blt @L_021667ec
    cmp r6, #0x98
    bge @L_021667ec
    cmp r4, #0x68
    blt @L_021667ec
    cmp r4, #0x80
    movlt r0, #0x1f
    blt @L_021667f0
@L_021667ec:
    mov r0, #0
@L_021667f0:
    cmp r0, #1
    cmpne r0, #2
    cmpne r0, #3
    cmpne r0, #4
    cmpne r0, #5
    cmpne r0, #6
    cmpne r0, #7
    cmpne r0, #8
    cmpne r0, #9
    beq @L_02166824
    sub r1, r0, #0x10
    cmp r1, #7
    bhi @L_02166870
@L_02166824:
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl func_ov040_021666b4
    mov r4, r0
    cmn r4, #1
    moveq r0, #0
    streq r0, [r5]
    streq r0, [r5, #4]
    streqh r0, [r5, #8]
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r4
    bl func_ov040_0216661c
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_ov040_021665fc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166870:
    str r0, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov040_0216687c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r0
    ldr r1, [r7, #0x68]
    mov r5, #0
    bl func_ov040_0216669c
    ldr r8, =data_020c4ab4
    mov r6, r0
    ldr r0, [r8, #8]
    cmp r0, #0xb
    blt @L_021668d0
    cmp r6, #1
    cmpne r6, #2
    cmpne r6, #3
    cmpne r6, #4
    beq @L_021668d0
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021668d0:
    cmp r6, #8
    addls pc, pc, r6, lsl #2
    b @L_02166b10
    b @L_02166a4c
    b @L_02166900
    b @L_02166938
    b @L_02166970
    b @L_021669c0
    b @L_02166b10
    b @L_02166b10
    b @L_02166a4c
    b @L_02166b10
@L_02166900:
    mov r4, #1
    ldr r0, =data_020c5e40
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r0, [r7, #0xa1]
    mov r1, #1
    strb r5, [r7, #0xa2]
    cmp r0, #0
    movne r4, #0
    cmp r4, #0
    moveq r1, #0
    mov r0, r7
    strb r1, [r7, #0xa1]
    b @L_021669b8
@L_02166938:
    mov r4, #1
    ldr r0, =data_020c5e40
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r0, [r7, #0xa2]
    mov r1, #1
    strb r5, [r7, #0xa1]
    cmp r0, #0
    movne r4, #0
    cmp r4, #0
    moveq r1, #0
    mov r0, r7
    strb r1, [r7, #0xa2]
    b @L_021669b8
@L_02166970:
    mov r4, #1
    ldr r0, =data_020c5e40
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r7, #0x70]
    mov r1, #3
    cmp r0, #0
    movne r4, r5
    mov r0, r7
    strb r5, [r7, #0xa2]
    strb r5, [r7, #0xa1]
    str r4, [r7, #0x70]
    bl func_ov040_02166734
    mov r1, r0
    mov r0, r7
    add r2, r7, #0x64
    bl func_ov040_021665fc
    mov r0, r7
@L_021669b8:
    bl func_ov040_02166fc8
    b @L_02166b10
@L_021669c0:
    cmp r0, #0
    ble @L_02166a3c
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r8, #8]
    cmp r0, #1
    ble @L_02166a20
    ldr r4, =data_020c4ac8
    sub r1, r0, #2
    mov r0, r7
    add r1, r4, r1
    bl func_ov040_02166384
    cmp r0, #2
    bne @L_02166a20
    ldr r0, [r8, #8]
    sub r0, r0, #1
    str r0, [r8, #8]
    strb r5, [r4, r0]
    ldr r0, [r8, #8]
    sub r0, r0, #1
    str r0, [r8, #8]
    strb r5, [r4, r0]
    b @L_02166a34
@L_02166a20:
    ldr r1, [r8, #8]
    ldr r0, =data_020c4ac8
    sub r1, r1, #1
    str r1, [r8, #8]
    strb r5, [r0, r1]
@L_02166a34:
    mov r0, r7
    bl func_ov040_02167378
@L_02166a3c:
    ldrb r0, [r7, #0xa2]
    cmp r0, #0
    beq @L_02166b10
    b @L_02166af4
@L_02166a4c:
    cmp r0, #0xb
    bge @L_02166ae8
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldrh r3, [r7, #0x6c]
    add r1, sp, #0
    mov r0, r7
    mov r2, r3, asr #8
    strb r3, [sp]
    strb r2, [sp, #1]
    strb r5, [sp, #2]
    bl func_ov040_02166384
    cmp r0, #2
    bne @L_02166ac0
    ldr r1, [r8, #8]
    ldr r3, =data_020c4ac8
    add r0, r1, #1
    str r0, [r8, #8]
    ldrh r0, [r7, #0x6c]
    strb r0, [r3, r1]
    ldr r2, [r8, #8]
    mov r0, r0, asr #8
    add r1, r2, #1
    str r1, [r8, #8]
    strb r0, [r3, r2]
    ldr r0, [r8, #8]
    strb r5, [r3, r0]
    b @L_02166ae0
@L_02166ac0:
    ldr r2, [r8, #8]
    ldr r1, =data_020c4ac8
    add r0, r2, #1
    str r0, [r8, #8]
    ldrh r0, [r7, #0x6c]
    strb r0, [r1, r2]
    ldr r0, [r8, #8]
    strb r5, [r1, r0]
@L_02166ae0:
    mov r0, r7
    bl func_ov040_02167378
@L_02166ae8:
    ldrb r0, [r7, #0xa2]
    cmp r0, #0
    beq @L_02166b10
@L_02166af4:
    mov r0, r7
    strb r5, [r7, #0xa2]
    bl func_ov040_02166fc8
    ldr r1, [r7, #0x68]
    mov r0, r7
    add r2, r7, #0x64
    bl func_ov040_021665fc
@L_02166b10:
    ldr r0, [r8, #8]
    cmp r0, #0xb
    addlt sp, sp, #4
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r6, #1
    cmpne r6, #2
    cmpne r6, #3
    cmpne r6, #4
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r7
    mov r1, #5
    bl func_ov040_02166734
    mov r1, r0
    mov r0, r7
    add r2, r7, #0x64
    bl func_ov040_021665fc
    mov r0, #0xa
    str r0, [r7, #0x64]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov040_02166b70(void)
{
    ldr r2, [r0, #0x4c]
    cmp r2, #0xd
    bgt @L_02166b9c
    cmp r2, #0xa
    blt @L_02166b90
    cmpne r2, #0xd
    beq @L_02166be0
    bx lr
@L_02166b90:
    cmp r2, #1
    beq @L_02166ba8
    bx lr
@L_02166b9c:
    cmp r2, #0x1f
    beq @L_02166be0
    bx lr
@L_02166ba8:
    ldr r1, [r0, #0x64]
    cmp r1, r2
    bne @L_02166bc4
    ldr r2, [r0, #0x68]
    ldr r1, [r0, #0x50]
    cmp r2, r1
    bxeq lr
@L_02166bc4:
    ldrh r1, [r0, #0x54]
    ldr r3, [r0, #0x4c]
    ldr r2, [r0, #0x50]
    str r3, [r0, #0x64]
    str r2, [r0, #0x68]
    strh r1, [r0, #0x6c]
    bx lr
@L_02166be0:
    ldrh r1, [r0, #0x54]
    ldr r3, [r0, #0x4c]
    ldr r2, [r0, #0x50]
    str r3, [r0, #0x64]
    str r2, [r0, #0x68]
    strh r1, [r0, #0x6c]
    bx lr
}

extern "C" asm void func_ov040_02166bfc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x38]
    ldr r2, [r4, #0x4c]
    cmp r1, #0
    ldr r1, [r4, #0x64]
    bne @L_02166d0c
    cmp r1, r2
    beq @L_02166c48
    ldrh r2, [r4, #0x54]
    ldr r12, [r4, #0x4c]
    ldr r3, [r4, #0x50]
    ldr r0, =data_020c5e40
    mov r1, #8
    str r12, [r4, #0x64]
    str r3, [r4, #0x68]
    strh r2, [r4, #0x6c]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
@L_02166c48:
    cmp r2, #1
    beq @L_02166c64
    cmp r2, #0xa
    beq @L_02166cbc
    cmp r2, #0xd
    beq @L_02166d04
    ldmia sp!, {r4, pc}
@L_02166c64:
    ldr r2, [r4, #0x50]
    ldr r1, [r4, #0x68]
    cmp r2, r1
    beq @L_02166c9c
    ldrh r2, [r4, #0x54]
    ldr r12, [r4, #0x4c]
    ldr r3, [r4, #0x50]
    ldr r0, =data_020c5e40
    mov r1, #8
    str r12, [r4, #0x64]
    str r3, [r4, #0x68]
    strh r2, [r4, #0x6c]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
@L_02166c9c:
    ldr r1, [r4, #0x5c]
    cmp r2, r1
    ldreqh r2, [r4, #0x54]
    ldreqh r1, [r4, #0x60]
    cmpeq r2, r1
    ldmneia sp!, {r4, pc}
    bl func_ov040_0216687c
    ldmia sp!, {r4, pc}
@L_02166cbc:
    ldr r0, =data_020c4ac8
    bl STD_GetStringLength
    cmp r0, #0
    bgt @L_02166cdc
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
@L_02166cdc:
    ldr r0, =data_020c4ab4
    ldr r1, [r0, #8]
    cmp r1, #0
    bgt @L_02166cf8
    ldrb r0, [r0, #0x60]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
@L_02166cf8:
    mov r0, r4
    bl func_ov040_02166d94
    ldmia sp!, {r4, pc}
@L_02166d04:
    bl func_ov040_02166e58
    ldmia sp!, {r4, pc}
@L_02166d0c:
    cmp r1, r2
    beq @L_02166d3c
    ldrh r2, [r4, #0x54]
    ldr r12, [r4, #0x4c]
    ldr r3, [r4, #0x50]
    ldr r0, =data_020c5e40
    mov r1, #8
    str r12, [r4, #0x64]
    str r3, [r4, #0x68]
    strh r2, [r4, #0x6c]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
@L_02166d3c:
    cmp r2, #0x1f
    ldmneia sp!, {r4, pc}
    mov r2, #0
    mov r1, #3
    str r2, [r4, #0x3c]
    bl func_ov040_02166514
    mov r0, r4
    mov r1, #5
    bl func_ov040_02166734
    mov r1, r0
    mov r0, r4
    add r2, r4, #0x64
    bl func_ov040_021665fc
    mov r2, #0xa
    ldr r0, =data_020c5e40
    mov r1, #4
    str r2, [r4, #0x64]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_02166d94(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_020c4ab4
    mov r5, r0
    ldr r1, [r1, #4]
    mov r0, #0
    cmp r1, #0
    cmpne r1, #2
    cmpne r1, #3
    bne @L_02166dc4
    ldr r1, =data_020c4ac8
    mov r0, r5
    bl func_ov040_021663fc
@L_02166dc4:
    mov r4, #1
    cmp r0, #0
    mov r0, r5
    mov r1, r4
    beq @L_02166df0
    bl func_ov040_02166514
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    str r4, [r5, #0x3c]
    ldmia sp!, {r3, r4, r5, pc}
@L_02166df0:
    bl func_ov040_02166514
    ldr r0, =data_020c5e40
    mov r1, #6
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =data_020d3d20
    mov r2, r4
    mov r1, #0
    bl func_0209b7b0
    mov r0, r5
    bl func_ov040_02166e2c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov040_02166e2c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #5
    str r1, [r4, #0x34]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    ldr r0, [r4, #4]
    mov r1, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e0ccEi
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_02166e58(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020c4ab4
    mov r4, r0
    ldrb r0, [r1, #0x61]
    cmp r0, #0
    movne r0, #0
    strne r0, [r1, #8]
    strneb r0, [r1, #0x14]
    bne @L_02166e88
    ldr r0, =data_020c4ac8
    add r1, r4, #0x88
    bl STD_CopyString
@L_02166e88:
    mov r0, r4
    mov r1, #2
    bl func_ov040_02166514
    ldr r0, =data_020c5e40
    mov r1, #4
    bl _ZN12SoundManager9PlaySoundEi
    mov r1, #0
    ldr r0, =data_020d3d20
    mov r2, r1
    bl func_0209b7b0
    mov r0, r4
    bl func_ov040_02166e2c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_02166ecc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =data_020c9660
    mov r4, #0
    mov r6, r1
    mov r0, r5
    mov r1, r4
    mov r2, #1
    bl func_ov015_0213ba78
    sub r0, r6, #0xb
    cmp r0, #0x12
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02166f48
    b @L_02166f48
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02166f6c
    b @L_02166f6c
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02166f90
    b @L_02166f90
    b @L_02166f90
    b @L_02166f90
    b @L_02166f90
    b @L_02166f90
@L_02166f48:
    mov r0, r5
    mov r1, r4
    mov r2, #0xd
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_ov015_0213ba04
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f6c:
    mov r0, r5
    mov r1, r4
    mov r2, #0xa
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_ov015_0213ba04
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f90:
    mov r0, r5
    mov r1, r4
    mov r2, #0xa
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0xd
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_ov015_0213ba04
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov040_02166fc8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0x70]
    cmp r0, #1
    bne @L_021670d8
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0x15
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #9
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x10
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x11
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x12
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x13
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x14
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #1
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #2
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #3
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #5
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #7
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #4
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #6
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #8
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, pc}
@L_021670d8:
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0x14
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x15
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #9
    bl func_ov015_0213b990
    ldrb r0, [r6, #0xa2]
    cmp r0, #0
    beq @L_021671e8
    mov r0, r5
    mov r1, r4
    mov r2, #0x10
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x13
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #4
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #6
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #8
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #2
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x11
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x12
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #3
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #5
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #7
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #1
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, pc}
@L_021671e8:
    ldrb r0, [r6, #0xa1]
    mov r1, r4
    cmp r0, #0
    mov r0, r5
    beq @L_021672b8
    mov r2, #0x11
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x12
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #3
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #5
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #7
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #2
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x10
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x13
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #4
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #6
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #8
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #1
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, pc}
@L_021672b8:
    mov r2, #0x10
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x12
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #3
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #5
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #7
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #1
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0x11
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0x13
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #4
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #6
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #8
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #2
    bl func_ov015_0213b990
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov040_02167378(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x3c
    mov r6, r0
    ldr r0, [r6, #0x38]
    cmp r0, #0
    bne @L_0216746c
    ldr r1, [r6, #0x80]
    cmp r1, #0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r5, #0
    mov r0, r5
    mov r2, #0x6c0
    bl MIi_CpuClearFast
    add r4, sp, #0x20
    mov r1, r5
    mov r0, r4
    mov r2, #0x1b
    bl MI_CpuFill8
    ldr r1, =data_020c4ac8
    mov r0, r4
    bl STD_CopyString
    ldr r0, =data_020c4ab4
    ldr r0, [r0, #8]
    cmp r0, #0xb
    bge @L_021673f8
    ldr r0, [r6, #0xa4]
    cmp r0, #0x1e
    blt @L_021673f8
    ldr r1, =data_ov040_02169740
    mov r0, r4
    bl STD_ConcatenateString
@L_021673f8:
    mov r5, #1
    mov r4, #0
    mov r1, r5
    mov r2, r4
    add r0, r6, #8
    bl _ZN8TextFont10SetSpacingEii
    mov r0, #3
    stmia sp, {r0, r4}
    ldr r1, [r6, #0x80]
    mov r0, #0x90
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    str r4, [sp, #0x18]
    add r0, r6, #8
    ldr r12, [r0]
    add r3, sp, #0x20
    ldr r12, [r12, #8]
    mov r1, r4
    mov r2, r4
    blx r12
    ldr r0, [r6, #0x80]
    mov r1, #0x6c0
    bl DC_FlushRange
    add sp, sp, #0x3c
    strb r5, [r6, #0x78]
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0216746c:
    add r0, r6, #0xa8
    bl func_ov015_02133dc8
    ldr r0, =data_020c46a8
    mov r1, #1
    ldr r0, [r0]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    bl func_0209d668
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_021674ac
    b @L_021674ac
    b @L_021674b4
    b @L_021674b8
    b @L_021674bc
    b @L_021674c0
@L_021674ac:
    mov r5, #0x10
    b @L_021674c4
@L_021674b4:
    b @L_021674c0
@L_021674b8:
    b @L_021674ac
@L_021674bc:
    b @L_021674ac
@L_021674c0:
    mov r5, #0x18
@L_021674c4:
    mov r0, #0x10c
    bl func_0209d8b8
    mov r1, #3
    str r1, [sp]
    str r1, [sp, #4]
    mov r1, #2
    str r1, [sp, #8]
    mov r4, #1
    str r4, [sp, #0xc]
    mov r1, #0
    str r1, [sp, #0x10]
    str r5, [sp, #0x14]
    str r4, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldrh r2, [r6, #0xb4]
    ldrh r3, [r6, #0xb6]
    ldr r1, [r6, #0xac]
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    ldr r0, =data_020c46a8
    ldr r0, [r0]
    bl _ZN8TextFont12ResetSpacingEv
    ldrh r2, [r6, #0xb4]
    ldrh r1, [r6, #0xb6]
    ldr r0, [r6, #0xac]
    strb r4, [r6, #0xb8]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov040_02167554(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0x38]
    cmp r0, #0
    bne @L_021675b4
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0xa
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0xd
    bl func_ov015_0213ba04
    mov r0, r5
    mov r1, r4
    mov r2, #0xb
    bl func_ov015_0213b990
    mov r0, r5
    mov r1, r4
    mov r2, #0xe
    bl func_ov015_0213b990
    b @L_021675c4
@L_021675b4:
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0x1f
    bl func_ov015_0213b990
@L_021675c4:
    ldr r1, [r6, #0x4c]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x58]
    cmp r1, r0
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x64]
    cmp r0, #0xa
    beq @L_021675fc
    cmp r0, #0xd
    beq @L_0216760c
    cmp r0, #0x1f
    beq @L_0216761c
    ldmia sp!, {r4, r5, r6, pc}
@L_021675fc:
    mov r0, r6
    mov r1, #0xb
    bl func_ov040_02166ecc
    ldmia sp!, {r4, r5, r6, pc}
@L_0216760c:
    mov r0, r6
    mov r1, #0xe
    bl func_ov040_02166ecc
    ldmia sp!, {r4, r5, r6, pc}
@L_0216761c:
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0x1f
    bl func_ov015_0213ba04
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov040_02167634(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r0
    ldr r1, [r7, #0x38]
    ldr r0, [r7, #0x3c]
    ldr r5, =data_020c9660
    cmp r1, r0
    mov r4, #0
    beq @L_021676a4
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213be90
    cmp r0, #0
    bne @L_021676a4
    ldr r2, [r7, #0x3c]
    mov r0, r5
    mov r1, r4
    str r2, [r7, #0x38]
    bl func_ov015_0213b3fc
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b364
    mov r0, r7
    bl func_ov040_02167834
    mov r0, r7
    bl func_ov040_02167378
    mov r0, r7
    bl func_ov040_02166fc8
@L_021676a4:
    ldr r0, [r7, #0x38]
    cmp r0, #0
    bne @L_021677f0
    ldr r0, [r7, #0x64]
    cmp r0, #0xd
    bgt @L_021676e0
    cmp r0, #0xa
    blt @L_021676d4
    beq @L_021677bc
    cmp r0, #0xd
    beq @L_021677cc
    b @L_021677e8
@L_021676d4:
    cmp r0, #1
    beq @L_021676ec
    b @L_021677e8
@L_021676e0:
    cmp r0, #0x1f
    beq @L_021677d8
    b @L_021677e8
@L_021676ec:
    ldr r1, [r7, #0x68]
    mov r0, r7
    bl func_ov040_02166584
    mov r5, #0
    mov r6, r5
    cmp r0, #0
    beq @L_02167730
    ldrh r1, [r0, #8]
    ldrh r0, [r0, #0xa]
    mov r1, r1, lsr #3
    mov r0, r0, lsr #3
    sub r2, r1, #1
    sub r1, r0, #1
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r5, r0, asr #0x10
    mov r6, r1, asr #0x10
@L_02167730:
    ldr r1, [r7, #0x68]
    mov r0, r7
    bl func_ov040_0216669c
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    b @L_021677e8
    b @L_02167768
    b @L_02167794
    b @L_0216779c
    b @L_021677a4
    b @L_021677ac
    b @L_021677e8
    b @L_021677e8
    b @L_021677b4
@L_02167768:
    mov r8, #0x18
@L_0216776c:
    mov r0, r7
    mov r1, r8
    bl func_ov040_02166ecc
    ldr r0, =data_020c9660
    mov r2, r8
    mov r3, r5
    mov r1, #0
    str r6, [sp]
    bl func_ov015_0213bcfc
    b @L_021677e8
@L_02167794:
    mov r8, #0x19
    b @L_0216776c
@L_0216779c:
    mov r8, #0x1a
    b @L_0216776c
@L_021677a4:
    mov r8, #0x1b
    b @L_0216776c
@L_021677ac:
    mov r8, #0x1c
    b @L_0216776c
@L_021677b4:
    mov r8, #0x1d
    b @L_0216776c
@L_021677bc:
    mov r0, r7
    mov r1, #0xc
@L_021677c4:
    bl func_ov040_02166ecc
    b @L_021677e8
@L_021677cc:
    mov r0, r7
    mov r1, #0xf
    b @L_021677c4
@L_021677d8:
    ldr r0, =data_020c9660
    mov r1, #0
    mov r2, #0x1f
    bl func_ov015_0213ba04
@L_021677e8:
    mov r0, r7
    bl func_ov040_02167378
@L_021677f0:
    ldr r0, =data_020c9660
    mov r1, r4
    bl func_ov015_0213beb0
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r0, [r7, #0x74]
    cmp r0, #0
    beq @L_02167820
    mov r0, r7
    mov r1, r4
    bl func_ov040_02166514
@L_02167820:
    mov r0, r7
    bl func_ov040_02167554
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov040_02167834(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x38
    mov r4, r0
    ldr r1, [r4, #0x38]
    mov r5, #1
    cmp r1, #0
    mov r8, #0
    bne @L_0216787c
    bl func_ov040_021679ec
    ldr r0, =data_020c4ab4
    mov r1, r5
    ldr r0, [r0, #4]
    cmp r0, #2
    movne r1, r8
    mov r0, r4
    bl func_ov040_021686b8
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0216787c:
    ldr r2, [r4, #0x1e8]
    cmp r2, #0
    beq @L_021678ec
    ldr r0, [r2, #0xc]
    mov r1, r8
    add r7, r2, r0
    mov r2, r5
    mov r6, #7
    mov r3, #0x1e
    mov r0, #0xa
    strh r6, [sp, #0x22]
    strh r0, [sp, #0x26]
    strh r2, [sp, #0x20]
    strh r3, [sp, #0x24]
    strh r1, [sp, #0x28]
    strh r1, [sp, #0x2a]
    strh r1, [sp, #0x2c]
    strh r1, [sp, #0x2e]
    strb r1, [sp, #0x30]
    str r7, [sp, #0x34]
    mov r6, #2
    add r0, sp, #0x20
    str r6, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_021678ec:
    ldr r1, [r4, #0x1f4]
    cmp r1, #0
    beq @L_02167978
    ldr r0, [r1, #0xc]
    mov r2, #0xd
    add r3, r1, r0
    mov r1, #6
    mov r0, #3
    strh r1, [sp, #0x24]
    strh r0, [sp, #0x26]
    strh r2, [sp, #0x20]
    strh r2, [sp, #0x22]
    strh r8, [sp, #0x28]
    strh r8, [sp, #0x2a]
    strh r8, [sp, #0x2c]
    strh r8, [sp, #0x2e]
    strb r8, [sp, #0x30]
    str r3, [sp, #0x34]
    mov r1, #2
    str r1, [sp]
    add r0, sp, #0x20
    stmib sp, {r0, r8}
    ldr r7, =data_020c9660
    mov r6, #0x1f
    str r8, [sp, #0xc]
    mov r0, r7
    mov r1, r8
    mov r3, r6
    mov r2, #1
    str r8, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r7
    mov r1, r8
    mov r2, r6
    bl func_ov015_0213b990
@L_02167978:
    ldr r6, [r4, #0xa8]
    mov r1, #0
    cmp r6, #0
    ldrne r0, [r4, #0xac]
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #0x20
    str r0, [sp]
    mov r0, #2
    stmib sp, {r0, r5}
    mov r2, #7
    mov r1, #0
    str r2, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r1
    str r6, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov040_021679ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r2, [r10, #0xf8]
    mov r11, #4
    cmp r2, #0
    mov r5, #8
    mov r4, #2
    mov r8, #3
    add r7, sp, #0x14
    mov r6, #0
    beq @L_02167a78
    ldr r0, [r2, #0xc]
    mov r1, r6
    add r9, r2, r0
    mov r2, #1
    mov r3, #0x1e
    mov r0, #0x11
    strh r3, [sp, #0x18]
    strh r0, [sp, #0x1a]
    strh r8, [sp, #0x16]
    strh r2, [sp, #0x14]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x24]
    str r9, [sp, #0x28]
    stmia sp, {r1, r7}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r3, #0x21
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167a78:
    ldr r1, [r10, #0x104]
    cmp r1, #0
    beq @L_02167b58
    ldr r0, [r1, #0xc]
    mov r2, #1
    add r9, r1, r0
    mov r0, #5
    strh r0, [sp, #0x14]
    mov r0, #0xa
    strh r0, [sp, #0x16]
    mov r0, #0x18
    strh r0, [sp, #0x18]
    mov r0, #6
    strh r0, [sp, #0x1a]
    mov r0, #0xc0
    strh r0, [sp, #0x20]
    mov r0, #0x30
    strh r0, [sp, #0x22]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r3, r2
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #5
    strh r0, [sp, #0x14]
    mov r0, #0xa
    strh r0, [sp, #0x16]
    mov r0, #0x18
    strh r0, [sp, #0x18]
    mov r0, #6
    strh r0, [sp, #0x1a]
    mov r0, #0xc0
    strh r0, [sp, #0x20]
    mov r0, #0x30
    strh r0, [sp, #0x22]
    add r0, r9, #0x120
    str r0, [sp, #0x28]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r1, r6
    mov r3, #2
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167b58:
    ldr r1, [r10, #0x110]
    cmp r1, #0
    beq @L_02167c28
    ldr r0, [r1, #0xc]
    mov r2, #1
    add r9, r1, r0
    mov r0, #4
    strh r0, [sp, #0x14]
    mov r0, #0x18
    strh r0, [sp, #0x18]
    mov r0, #0xc0
    strh r0, [sp, #0x20]
    mov r0, #0x10
    strh r0, [sp, #0x22]
    strh r5, [sp, #0x16]
    strh r4, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r3, #3
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r1, #4
    mov r0, #0x18
    strh r0, [sp, #0x18]
    mov r0, #0xc0
    strh r0, [sp, #0x20]
    mov r0, #0x10
    strh r0, [sp, #0x22]
    add r0, r9, #0x60
    str r0, [sp, #0x28]
    strh r5, [sp, #0x16]
    strh r4, [sp, #0x1a]
    strh r1, [sp, #0x14]
    mov r3, r1
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r1, r6
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167c28:
    ldr r1, [r10, #0x11c]
    cmp r1, #0
    beq @L_02167cf8
    ldr r0, [r1, #0xc]
    mov r2, #1
    add r9, r1, r0
    mov r0, #0x18
    strh r0, [sp, #0x14]
    mov r0, #0xc
    strh r0, [sp, #0x16]
    mov r0, #0x20
    strh r0, [sp, #0x20]
    mov r0, #0x10
    strh r0, [sp, #0x22]
    strh r11, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r3, #5
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x18
    strh r0, [sp, #0x14]
    mov r0, #0xc
    strh r0, [sp, #0x16]
    mov r0, #0x20
    strh r0, [sp, #0x20]
    mov r0, #0x10
    strh r0, [sp, #0x22]
    add r0, r9, #0x10
    str r0, [sp, #0x28]
    strh r11, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r1, r6
    mov r3, #6
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167cf8:
    ldr r1, [r10, #0x128]
    cmp r1, #0
    beq @L_02167dbc
    ldr r0, [r1, #0xc]
    mov r11, #0x10
    add r9, r1, r0
    mov r0, #0x19
    strh r0, [sp, #0x14]
    mov r0, #0xe
    strh r0, [sp, #0x16]
    strh r4, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strh r11, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    mov r3, #7
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x19
    strh r0, [sp, #0x14]
    mov r0, #0xe
    strh r0, [sp, #0x16]
    add r0, r9, #8
    str r0, [sp, #0x28]
    strh r4, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strh r11, [sp, #0x22]
    strb r6, [sp, #0x24]
    stmia sp, {r6, r7}
    str r6, [sp, #8]
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r1, r6
    mov r3, #8
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167dbc:
    ldr r2, [r10, #0x134]
    cmp r2, #0
    beq @L_02167e28
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r4, r2, r0
    mov r3, #0x1a
    mov r2, #0xd0
    mov r0, #0x40
    strh r3, [sp, #0x18]
    strh r2, [sp, #0x20]
    strh r0, [sp, #0x22]
    strh r8, [sp, #0x14]
    strh r5, [sp, #0x16]
    strh r5, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strb r1, [sp, #0x24]
    str r4, [sp, #0x28]
    stmia sp, {r1, r7}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #9
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_02167e28:
    ldr r0, [r10, #0x70]
    cmp r0, #0
    bne @L_02167eb0
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #9
    bl func_ov015_0213b990
    ldrb r0, [r10, #0xa2]
    cmp r0, #0
    beq @L_02167e60
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    b @L_02167e6c
@L_02167e60:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #2
@L_02167e6c:
    bl func_ov015_0213b990
    ldrb r0, [r10, #0xa1]
    cmp r0, #0
    beq @L_02167eac
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #3
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #5
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #7
    b @L_02167f2c
@L_02167eac:
    b @L_02167f00
@L_02167eb0:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #2
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #3
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #5
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #7
    bl func_ov015_0213b990
@L_02167f00:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #4
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #6
    bl func_ov015_0213b990
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #8
@L_02167f2c:
    bl func_ov015_0213b990
    mov r0, r10
    mov r4, #4
    bl func_ov040_02167fb4
    mov r0, r10
    bl func_ov040_02168388
    ldr r3, [r10, #0x84]
    cmp r3, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r1, #0
    mov r2, #0xa
    mov r0, #0x12
    strh r2, [sp, #0x14]
    strh r0, [sp, #0x18]
    str r3, [sp, #0x28]
    strh r4, [sp, #0x16]
    strh r8, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x24]
    stmia sp, {r1, r7}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0x21
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov040_02167fb4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r1, [r10, #0x1ac]
    add r4, sp, #0x14
    cmp r1, #0
    mov r6, #0
    mov r5, #0x10
    mov r8, #2
    beq @L_021680c0
    ldr r0, [r1, #0xc]
    mov r7, #0xc
    add r9, r1, r0
    mov r11, #4
    mov r0, #0x20
    strh r0, [sp, #0x20]
    strh r8, [sp, #0x14]
    strh r7, [sp, #0x16]
    strh r11, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    mov r3, r5
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x20
    strh r0, [sp, #0x20]
    add r0, r9, #0x10
    strh r7, [sp, #0x16]
    str r0, [sp, #0x28]
    mov r7, #0x11
    strh r11, [sp, #0x18]
    strh r8, [sp, #0x14]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    str r6, [sp, #0x10]
    mov r1, r6
    mov r3, r7
    bl func_ov015_0213b540
    ldrb r0, [r10, #0xa1]
    cmp r0, #0
    beq @L_021680b0
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r5
    b @L_021680bc
@L_021680b0:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r7
@L_021680bc:
    bl func_ov015_0213b990
@L_021680c0:
    ldr r1, [r10, #0x1b8]
    cmp r1, #0
    beq @L_021681b0
    ldr r0, [r1, #0xc]
    mov r7, #0xe
    add r9, r1, r0
    mov r11, #5
    mov r0, #0x28
    strh r0, [sp, #0x20]
    strh r8, [sp, #0x14]
    strh r7, [sp, #0x16]
    strh r11, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    mov r3, #0x12
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x28
    strh r0, [sp, #0x20]
    add r0, r9, #0x14
    strh r7, [sp, #0x16]
    str r0, [sp, #0x28]
    mov r7, #0x13
    strh r11, [sp, #0x18]
    strh r5, [sp, #0x22]
    strh r8, [sp, #0x14]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    str r6, [sp, #0x10]
    mov r1, r6
    mov r3, r7
    bl func_ov015_0213b540
    ldrb r0, [r10, #0xa2]
    cmp r0, #0
    beq @L_021681a0
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #0x12
    b @L_021681ac
@L_021681a0:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r7
@L_021681ac:
    bl func_ov015_0213b990
@L_021681b0:
    ldr r1, [r10, #0x1c4]
    cmp r1, #0
    beq @L_021682a0
    ldr r0, [r1, #0xc]
    mov r7, #3
    add r9, r1, r0
    mov r11, #4
    mov r0, #0x20
    strh r0, [sp, #0x20]
    strh r7, [sp, #0x14]
    strh r5, [sp, #0x16]
    strh r11, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    mov r3, #0x14
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x20
    strh r0, [sp, #0x20]
    add r0, r9, #0x10
    strh r7, [sp, #0x14]
    str r0, [sp, #0x28]
    mov r7, #0x15
    strh r11, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r5, [sp, #0x16]
    strh r5, [sp, #0x22]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strb r6, [sp, #0x24]
    str r6, [sp]
    stmib sp, {r4, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    str r6, [sp, #0x10]
    mov r1, r6
    mov r3, r7
    bl func_ov015_0213b540
    ldr r0, [r10, #0x70]
    cmp r0, #0
    bne @L_02168290
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, r7
    b @L_0216829c
@L_02168290:
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #0x14
@L_0216829c:
    bl func_ov015_0213b990
@L_021682a0:
    ldr r2, [r10, #0x1d0]
    cmp r2, #0
    beq @L_0216830c
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r6, r2, r0
    mov r3, #0xa
    mov r2, #0xc
    mov r0, #0x60
    strh r3, [sp, #0x14]
    strh r2, [sp, #0x18]
    strh r0, [sp, #0x20]
    strh r5, [sp, #0x16]
    strh r8, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r1, [sp, #0x24]
    str r6, [sp, #0x28]
    stmia sp, {r1, r4}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0x16
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_0216830c:
    ldr r2, [r10, #0x1dc]
    cmp r2, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r6, r2, r0
    mov r3, #0x19
    mov r2, #4
    mov r0, #0x20
    strh r3, [sp, #0x14]
    strh r2, [sp, #0x18]
    strh r0, [sp, #0x20]
    strh r5, [sp, #0x16]
    strh r8, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r5, [sp, #0x22]
    strb r1, [sp, #0x24]
    str r6, [sp, #0x28]
    stmia sp, {r1, r4}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0x17
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov040_02168388(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r1, [r10, #0x68]
    mov r4, #0
    mov r7, #4
    mov r6, #1
    add r5, sp, #0x14
    ldr r11, =data_020c9660
    bl func_ov040_02166584
    mov r8, r4
    mov r9, r8
    cmp r0, #0
    beq @L_021683e8
    ldrh r1, [r0, #8]
    ldrh r0, [r0, #0xa]
    mov r1, r1, lsr #3
    mov r0, r0, lsr #3
    sub r2, r1, #1
    sub r1, r0, #1
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r8, r0, asr #0x10
    mov r9, r1, asr #0x10
@L_021683e8:
    ldr r2, [r10, #0x140]
    cmp r2, #0
    beq @L_0216844c
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r0, r2, r0
    str r0, [sp, #0x28]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r7, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r1, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0x18
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
@L_0216844c:
    ldr r1, [r10, #0x14c]
    cmp r1, #0
    beq @L_021684c4
    ldr r0, [r1, #0xc]
    mov r2, r4
    add r1, r1, r0
    mov r0, #6
    strh r0, [sp, #0x18]
    str r1, [sp, #0x28]
    strh r7, [sp, #0x1a]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r11
    mov r1, r4
    mov r3, #0x19
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r4
    mov r2, #0x19
    bl func_ov015_0213b990
@L_021684c4:
    ldr r1, [r10, #0x158]
    cmp r1, #0
    beq @L_0216853c
    ldr r0, [r1, #0xc]
    mov r2, r4
    add r1, r1, r0
    mov r0, #7
    strh r0, [sp, #0x18]
    str r1, [sp, #0x28]
    strh r7, [sp, #0x1a]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r11
    mov r1, r4
    mov r3, #0x1a
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r4
    mov r2, #0x1a
    bl func_ov015_0213b990
@L_0216853c:
    ldr r1, [r10, #0x164]
    cmp r1, #0
    beq @L_021685b4
    ldr r0, [r1, #0xc]
    mov r2, r4
    add r1, r1, r0
    mov r0, #7
    strh r0, [sp, #0x18]
    str r1, [sp, #0x28]
    strh r7, [sp, #0x1a]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r11
    mov r1, r4
    mov r3, #0x1b
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r4
    mov r2, #0x1b
    bl func_ov015_0213b990
@L_021685b4:
    ldr r1, [r10, #0x170]
    cmp r1, #0
    beq @L_0216862c
    ldr r0, [r1, #0xc]
    mov r2, r4
    add r1, r1, r0
    mov r0, #6
    strh r0, [sp, #0x18]
    str r1, [sp, #0x28]
    strh r7, [sp, #0x1a]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r11
    mov r1, r4
    mov r3, #0x1c
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r4
    mov r2, #0x1c
    bl func_ov015_0213b990
@L_0216862c:
    ldr r1, [r10, #0x17c]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r10, #0x1d
    add r1, r1, r0
    mov r0, #0xe
    strh r0, [sp, #0x18]
    str r1, [sp, #0x28]
    strh r8, [sp, #0x14]
    strh r9, [sp, #0x16]
    strh r7, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    str r4, [sp, #0xc]
    mov r0, r11
    mov r1, r4
    mov r2, r4
    mov r3, r10
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r11
    mov r1, r4
    mov r2, r10
    bl func_ov015_0213b990
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov040_021686b8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    movs r5, r1
    mov r10, r0
    movne r0, #0xc
    moveq r0, #5
    ldr r1, [r10, #0x188]
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r6, r0, asr #0x10
    beq @L_021687c4
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r9, r1, r0
    mov r7, #0xa
    mov r0, #0x50
    mov r8, #0x13
    mov r11, #4
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    strh r6, [sp, #0x14]
    strh r8, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r9, [sp, #0x28]
    mov r0, #1
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r7
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    cmp r5, #0
    bne @L_021687c4
    mov r0, #0x11
    strh r0, [sp, #0x14]
    mov r0, #0x50
    add r1, r9, #0x50
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    strh r8, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    mov r0, #1
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #0xd
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
@L_021687c4:
    ldr r1, [r10, #0x194]
    cmp r1, #0
    beq @L_021688d4
    ldr r0, [r1, #0xc]
    mov r4, #0
    add r9, r1, r0
    mov r0, #0x50
    mov r8, #0x13
    mov r7, #0xa
    mov r11, #4
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    strh r6, [sp, #0x14]
    strh r8, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r9, [sp, #0x28]
    mov r0, #1
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #0xb
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, #0xb
    mov r1, r4
    bl func_ov015_0213b990
    cmp r5, #0
    bne @L_021688d4
    mov r0, #0x11
    strh r0, [sp, #0x14]
    mov r0, #0x50
    add r1, r9, #0x50
    strh r0, [sp, #0x20]
    mov r0, #0x20
    strh r8, [sp, #0x16]
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    mov r8, #0xe
    strh r7, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strb r4, [sp, #0x24]
    mov r0, #1
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r8
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r8
    bl func_ov015_0213b990
@L_021688d4:
    ldr r1, [r10, #0x1a0]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r7, #0
    add r4, r1, r0
    mov r10, #0x13
    mov r9, #0xa
    mov r8, #4
    mov r11, #0x50
    mov r0, #0x20
    strh r6, [sp, #0x14]
    strh r0, [sp, #0x22]
    strh r10, [sp, #0x16]
    strh r9, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r7, [sp, #0x1c]
    strh r7, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strb r7, [sp, #0x24]
    str r4, [sp, #0x28]
    add r6, sp, #0x14
    mov r0, #1
    stmia sp, {r0, r6, r7}
    str r7, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r7
    mov r2, #1
    mov r3, #0xc
    str r7, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, #0xc
    mov r1, r7
    bl func_ov015_0213b990
    cmp r5, #0
    addne sp, sp, #0x2c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x11
    add r1, r4, #0x50
    strh r0, [sp, #0x14]
    mov r0, #0x20
    strh r0, [sp, #0x22]
    str r1, [sp, #0x28]
    mov r4, #0xf
    strh r10, [sp, #0x16]
    strh r9, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r7, [sp, #0x1c]
    strh r7, [sp, #0x1e]
    strh r11, [sp, #0x20]
    strb r7, [sp, #0x24]
    mov r0, #1
    stmia sp, {r0, r6, r7}
    str r7, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r7
    mov r2, #1
    mov r3, r4
    str r7, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r7
    mov r2, r4
    bl func_ov015_0213b990
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov040_021689e8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r0, [r9, #0x34]
    mov r8, r1
    cmp r0, #4
    ldreqb r0, [r9, #0x40]
    mov r6, #0
    mov r4, #0xa
    cmpeq r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c9660
    mov r1, r6
    bl func_ov015_0213be90
    cmp r0, #0
    ldreq r1, [r9, #0x38]
    ldreq r0, [r9, #0x3c]
    cmpeq r1, r0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c4814
    cmp r1, #0
    ldrh r0, [r0]
    orr r0, r0, r8
    mov r0, r0, lsl #0x10
    mov r10, r0, lsr #0x10
    bne @L_02168dc8
    ldr r1, [r9, #0x68]
    mov r0, r9
    bl func_ov040_02166584
    mov r5, r0
    tst r10, #0x80
    ldr r7, [r9, #0x68]
    beq @L_02168ae0
    sub r0, r6, #1
    cmp r7, r0
    cmpne r5, #0
    beq @L_02168ab4
    ldrb r1, [r5, #0x11]
    mov r0, r9
    add r2, r9, #0x64
    bl func_ov040_021665fc
    ldrb r1, [r5, #0x11]
    mov r0, r9
    bl func_ov040_0216669c
    cmp r0, #5
    beq @L_02168aac
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r9, #0x64]
    b @L_02168ac4
@L_02168aac:
    str r4, [r9, #0x64]
    b @L_02168ac4
@L_02168ab4:
    mov r0, r9
    add r2, r9, #0x64
    mov r1, #0
    bl func_ov040_021665fc
@L_02168ac4:
    ldr r0, [r9, #0x68]
    cmp r7, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168ae0:
    tst r10, #0x40
    beq @L_02168b78
    sub r0, r6, #1
    cmp r7, r0
    cmpne r5, #0
    beq @L_02168b4c
    ldrb r1, [r5, #0x10]
    mov r0, r9
    add r2, r9, #0x64
    bl func_ov040_021665fc
    ldrb r1, [r5, #0x10]
    mov r0, r9
    bl func_ov040_0216669c
    cmp r0, #5
    beq @L_02168b28
    cmp r0, #6
    beq @L_02168b30
    b @L_02168b5c
@L_02168b28:
    str r4, [r9, #0x64]
    b @L_02168b5c
@L_02168b30:
    ldr r0, =data_020c4ab4
    ldr r0, [r0, #4]
    cmp r0, #2
    movne r0, #0xd
    strne r0, [r9, #0x64]
    streq r4, [r9, #0x64]
    b @L_02168b5c
@L_02168b4c:
    mov r0, r9
    add r2, r9, #0x64
    mov r1, #0
    bl func_ov040_021665fc
@L_02168b5c:
    ldr r0, [r9, #0x68]
    cmp r7, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168b78:
    tst r10, #0x20
    beq @L_02168c28
    sub r0, r6, #1
    cmp r7, r0
    cmpne r5, #0
    beq @L_02168bfc
    ldr r0, =data_020c4ab4
    ldrb r1, [r5, #0x13]
    ldr r0, [r0, #4]
    cmp r0, #2
    mov r0, r9
    beq @L_02168bdc
    add r2, r9, #0x64
    bl func_ov040_021665fc
    ldrb r1, [r5, #0x13]
    mov r0, r9
    bl func_ov040_0216669c
    cmp r0, #5
    beq @L_02168bd4
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r9, #0x64]
    b @L_02168c0c
@L_02168bd4:
    str r4, [r9, #0x64]
    b @L_02168c0c
@L_02168bdc:
    bl func_ov040_0216669c
    cmp r0, #5
    cmpne r0, #6
    beq @L_02168c0c
    ldrb r1, [r5, #0x13]
    mov r0, r9
    add r2, r9, #0x64
    b @L_02168c08
@L_02168bfc:
    mov r0, r9
    add r2, r9, #0x64
    mov r1, #0
@L_02168c08:
    bl func_ov040_021665fc
@L_02168c0c:
    ldr r0, [r9, #0x68]
    cmp r7, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168c28:
    tst r10, #0x10
    beq @L_02168cd8
    sub r0, r6, #1
    cmp r7, r0
    cmpne r5, #0
    beq @L_02168cac
    ldr r0, =data_020c4ab4
    ldrb r1, [r5, #0x12]
    ldr r0, [r0, #4]
    cmp r0, #2
    mov r0, r9
    beq @L_02168c8c
    add r2, r9, #0x64
    bl func_ov040_021665fc
    ldrb r1, [r5, #0x12]
    mov r0, r9
    bl func_ov040_0216669c
    cmp r0, #5
    beq @L_02168c84
    cmp r0, #6
    moveq r0, #0xd
    streq r0, [r9, #0x64]
    b @L_02168cbc
@L_02168c84:
    str r4, [r9, #0x64]
    b @L_02168cbc
@L_02168c8c:
    bl func_ov040_0216669c
    cmp r0, #5
    cmpne r0, #6
    beq @L_02168cbc
    ldrb r1, [r5, #0x12]
    mov r0, r9
    add r2, r9, #0x64
    b @L_02168cb8
@L_02168cac:
    mov r0, r9
    add r2, r9, #0x64
    mov r1, #0
@L_02168cb8:
    bl func_ov040_021665fc
@L_02168cbc:
    ldr r0, [r9, #0x68]
    cmp r7, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168cd8:
    tst r8, #1
    beq @L_02168d60
    ldr r0, [r9, #0x64]
    cmp r0, #1
    beq @L_02168d00
    cmp r0, #0xa
    beq @L_02168d0c
    cmp r0, #0xd
    beq @L_02168d54
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d00:
    mov r0, r9
    bl func_ov040_0216687c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d0c:
    ldr r0, =data_020c4ac8
    bl STD_GetStringLength
    cmp r0, #0
    bgt @L_02168d2c
    ldr r0, =data_020c5e40
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d2c:
    ldr r0, =data_020c4ab4
    ldr r1, [r0, #8]
    cmp r1, #0
    bgt @L_02168d48
    ldrb r0, [r0, #0x60]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d48:
    mov r0, r9
    bl func_ov040_02166d94
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d54:
    mov r0, r9
    bl func_ov040_02166e58
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d60:
    tst r8, #2
    beq @L_02168d90
    mov r0, r9
    mov r1, #4
    bl func_ov040_02166734
    str r0, [r9, #0x68]
    mov r0, r9
    bl func_ov040_0216687c
    mov r0, r7, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [r9, #0x68]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168d90:
    tst r8, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r9
    mov r1, #5
    bl func_ov040_02166734
    mov r1, r0
    mov r0, r9
    add r2, r9, #0x64
    bl func_ov040_021665fc
    str r4, [r9, #0x64]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02168dc8:
    tst r8, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r9
    mov r1, #3
    str r6, [r9, #0x3c]
    bl func_ov040_02166514
    mov r0, r9
    mov r1, #5
    bl func_ov040_02166734
    mov r1, r0
    mov r0, r9
    add r2, r9, #0x64
    bl func_ov040_021665fc
    ldr r0, =data_020c5e40
    mov r1, #4
    str r4, [r9, #0x64]
    bl _ZN12SoundManager9PlaySoundEi
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
