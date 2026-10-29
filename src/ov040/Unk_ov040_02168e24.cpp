#include "ov040/Unk_ov040_02168e24.hpp"

extern "C" void func_ov040_02168e24(void);
extern "C" void func_ov040_02168f20(void);
extern "C" void func_ov040_02169088(void);
extern "C" void func_ov040_02169174(void);
extern "C" void func_ov040_021691c4(void);
extern "C" void func_ov040_021692a4(void);
extern "C" void func_ov040_021692cc(void);

extern "C" char data_020c47b4[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4ac8[];
extern "C" char data_020c9660[];
extern "C" char data_020e88a0[];
extern "C" void G2_GetBG1ScrPtr(void);
extern "C" void G2_GetBG2ScrPtr(void);
extern "C" void G2_GetBG3ScrPtr(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN17UnkClass_020621b413func_0206a964Ei(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZN8TextFontD1Ev(void);
extern "C" void _ZdlPv(void);
extern "C" void func_0209e258(void);
extern "C" void func_0209e5cc(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" void func_ov015_02133e8c(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b478(void);
extern "C" void func_ov015_0213be90(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);
extern "C" void func_ov040_02165d60(void);
extern "C" void func_ov040_02165e64(void);
extern "C" void func_ov040_02165ef4(void);
extern "C" void func_ov040_02165f08(void);
extern "C" void func_ov040_02165f34(void);
extern "C" void func_ov040_02165f5c(void);
extern "C" void func_ov040_021662f4(void);
extern "C" void func_ov040_02166514(void);
extern "C" void func_ov040_021665fc(void);
extern "C" void func_ov040_02166794(void);
extern "C" void func_ov040_02166b70(void);
extern "C" void func_ov040_02166bfc(void);
extern "C" void func_ov040_02167378(void);
extern "C" void func_ov040_02167634(void);
extern "C" void func_ov040_02167834(void);

extern "C" asm void func_ov040_02168e24(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #0x34]
    mov r5, r1
    cmp r0, #4
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213be90
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrh r0, [r5, #4]
    cmp r0, #1
    bne @L_02168eb8
    ldrh r0, [r5, #6]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r4, #0x40]
    cmp r0, #0
    bne @L_02168e90
    mov r0, #1
    strb r0, [r4, #0x40]
    ldrh r1, [r5]
    ldrh r2, [r5, #2]
    mov r0, r4
    add r3, r4, #0x4c
    bl func_ov040_02166794
@L_02168e90:
    ldrh r1, [r5]
    mov r0, r4
    add r3, r4, #0x58
    str r1, [r4, #0x44]
    ldrh r2, [r5, #2]
    str r2, [r4, #0x48]
    bl func_ov040_02166794
    mov r0, r4
    bl func_ov040_02166b70
    ldmia sp!, {r3, r4, r5, pc}
@L_02168eb8:
    ldrb r0, [r4, #0x40]
    cmp r0, #0
    ldrne r0, [r4, #0x4c]
    cmpne r0, #0
    beq @L_02168ef8
    ldr r1, [r4, #0x44]
    ldr r2, [r4, #0x48]
    mov r0, r4
    add r3, r4, #0x58
    bl func_ov040_02166794
    ldr r1, [r4, #0x4c]
    ldr r0, [r4, #0x58]
    cmp r1, r0
    bne @L_02168ef8
    mov r0, r4
    bl func_ov040_02166bfc
@L_02168ef8:
    mov r0, #0
    str r0, [r4, #0x58]
    str r0, [r4, #0x5c]
    strh r0, [r4, #0x60]
    str r0, [r4, #0x4c]
    str r0, [r4, #0x50]
    strh r0, [r4, #0x54]
    strb r0, [r4, #0x40]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov040_02168f20(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r8, #0
    mov r4, r0
    sub r2, r8, #1
    mov r1, r8
    str r8, [r4, #0x34]
    str r8, [r4, #0x38]
    str r8, [r4, #0x3c]
    strb r8, [r4, #0x40]
    str r2, [r4, #0x44]
    str r2, [r4, #0x48]
    str r8, [r4, #0x70]
    strb r8, [r4, #0x78]
    str r8, [r4, #0x7c]
    strb r8, [r4, #0xa1]
    strb r8, [r4, #0xa2]
    str r8, [r4, #0xa4]
    str r8, [r4, #0x4c]
    str r8, [r4, #0x50]
    strh r8, [r4, #0x54]
    str r8, [r4, #0x58]
    str r8, [r4, #0x5c]
    strh r8, [r4, #0x60]
    str r8, [r4, #0x64]
    str r8, [r4, #0x68]
    strh r8, [r4, #0x6c]
    bl func_ov040_02166514
    ldr r7, =data_020c4ac8
    add r0, r4, #0x88
    mov r1, r7
    bl STD_CopyString
    ldr r6, =data_020c47b4
    mov r5, #1
    mov r0, r6
    mov r1, #0x6c0
    mov r2, r8
    mov r3, r5
    bl _ZN8GameHeap5AllocEiii
    mov r2, r8
    mov r3, r5
    str r0, [r4, #0x80]
    mov r0, r6
    mov r1, #0x6c
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #0x84]
    ldr r5, =data_020c4ab4
    ldr r0, [r5, #4]
    cmp r0, #3
    bne @L_02169010
    bl func_ov015_021319bc
    mov r1, r0
    ldr r0, =data_020e88a0
    bl _ZN17UnkClass_020621b413func_0206a964Ei
    mov r1, r0
    mov r0, r7
    bl STD_CopyString
    mov r0, r7
    bl STD_GetStringLength
    str r0, [r5, #8]
@L_02169010:
    ldr r7, =data_020c9660
    mov r6, #0
    mov r0, r7
    mov r1, r6
    bl func_ov015_0213b364
    bl G2_GetBG3ScrPtr
    mov r5, r0
    bl G2_GetBG1ScrPtr
    mov r2, r5
    str r6, [sp]
    mov r1, r6
    mov r3, r0
    mov r0, r7
    bl func_ov015_0213b478
    add r0, r4, #0xa8
    mov r1, #1
    bl func_ov015_02133e24
    add r0, r4, #0xa8
    mov r1, #0x1e
    mov r2, #7
    bl func_ov015_02133e50
    mov r0, r4
    bl func_ov040_02165d60
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov040_02169088(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r1, [r4, #0x34]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021690b8
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021690e8
    b @L_02169140
    b @L_02169140
@L_021690b8:
    bl func_ov040_02165ef4
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_ov040_02165e64
    mov r0, r4
    add r2, r4, #0x64
    mov r1, #0
    bl func_ov040_021665fc
    mov r0, #2
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_021690e8:
    ldr r6, =data_020c9660
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b3fc
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213b364
    mov r0, r4
    bl func_ov040_02167834
    mov r0, r4
    bl func_ov040_02167378
    mov r0, r6
    mov r1, r5
    bl func_ov015_0213bfcc
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    mov r0, #4
    str r0, [r4, #0x34]
    ldmia sp!, {r4, r5, r6, pc}
@L_02169140:
    ldr r0, [r4, #0xa4]
    add r0, r0, #1
    str r0, [r4, #0xa4]
    cmp r0, #0x3c
    movge r0, #0
    strge r0, [r4, #0xa4]
    mov r0, r4
    bl func_ov040_02167634
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov040_02169174(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x34]
    cmp r1, #2
    beq @L_02169198
    cmp r1, #4
    cmpne r1, #5
    beq @L_021691a8
    ldmia sp!, {r4, pc}
@L_02169198:
    bl func_ov040_02165f5c
    mov r0, #3
    str r0, [r4, #0x34]
    ldmia sp!, {r4, pc}
@L_021691a8:
    mov r0, r4
    bl func_ov040_021662f4
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_021691c4(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    add r0, r6, #0x2c
    bl func_0209e5cc
    bl G2_GetBG3ScrPtr
    mov r5, r0
    bl G2_GetBG1ScrPtr
    mov r4, r0
    bl G2_GetBG2ScrPtr
    mov r2, r5
    mov r3, r4
    str r0, [sp]
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b478
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b3fc
    ldr r1, [r6, #0x80]
    cmp r1, #0
    beq @L_02169230
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    str r4, [r6, #0x80]
@L_02169230:
    ldr r1, [r6, #0x84]
    cmp r1, #0
    beq @L_0216924c
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r6, #0x84]
@L_0216924c:
    mov r5, #1
    mov r1, r5
    add r0, r6, #0xa8
    bl func_ov015_02133e8c
    mov r0, r6
    bl func_ov040_02165f08
    mov r0, r6
    bl func_ov040_02165f34
    mov r4, #0x10
    mov r0, r5
    mov r1, r4
    bl func_ov015_02132c08
    mov r1, r4
    mov r0, #2
    bl func_ov015_02132c08
    mov r1, r4
    mov r0, #3
    bl func_ov015_02132c08
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov040_021692a4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x2c
    bl func_0209e258
    add r0, r4, #8
    bl _ZN8TextFontD1Ev
    mov r0, r4
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov040_021692cc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x2c
    bl func_0209e258
    add r0, r4, #8
    bl _ZN8TextFontD1Ev
    mov r0, r4
    ldmia sp!, {r4, pc}
}
