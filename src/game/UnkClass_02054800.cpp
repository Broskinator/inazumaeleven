#include "game/UnkClass_02054800.hpp"

extern "C" char data_020a6fc4[];
extern "C" char data_020a6fcc[];
extern "C" char data_020a6fd4[];
extern "C" char data_020a70bc[];
extern "C" char data_020ae4a4[];
extern "C" char data_020ae57c[];
extern "C" char data_020ae588[];
extern "C" char data_020ae5a0[];
extern "C" char data_020ae5a8[];
extern "C" char data_020ae5c0[];
extern "C" char data_020ae5d8[];
extern "C" char data_020ae5f0[];
extern "C" char data_020ae604[];
extern "C" char data_020ae618[];
extern "C" char data_020ae62c[];
extern "C" char data_020ae640[];
extern "C" char data_020ae654[];
extern "C" char data_020ae65c[];
extern "C" char data_020ae664[];
extern "C" char data_020ae66c[];
extern "C" char data_020ae674[];
extern "C" char data_020ae67c[];
extern "C" char data_020ae690[];
extern "C" char data_020ae698[];
extern "C" char data_020ae6a0[];
extern "C" char data_020ae6a8[];
extern "C" char data_020ae6b0[];
extern "C" char data_020ae6b8[];
extern "C" char data_020ae6c0[];
extern "C" char data_020ae6c4[];
extern "C" char data_020c4650[];
extern "C" char data_020c4660[];
extern "C" char data_020c4670[];
extern "C" char data_020c4674[];
extern "C" char data_020c4678[];
extern "C" char data_020c46a0[];
extern "C" char data_020c46a8[];
extern "C" char data_020c46b4[];
extern "C" char data_020c46bc[];
extern "C" char data_020c46c8[];
extern "C" char data_020c46cc[];
extern "C" char data_020c46d0[];
extern "C" char data_020c46d4[];
extern "C" char data_020c46e4[];
extern "C" char data_020c47b4[];
extern "C" char data_020c484c[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4eb4[];
extern "C" char data_020c5e40[];
extern "C" char data_020d3d20[];
extern "C" char data_020d9978[];
extern "C" char data_020d9a04[];
extern "C" char data_020df978[];
extern "C" char data_020e88a0[];
extern "C" void DC_FlushRange(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void NNS_G3dWorldPosToScrPos(void);
extern "C" void STD_CompareString(void);
extern "C" void STD_ConcatenateString(void);
extern "C" void STD_CopyString(void);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN10ConfigFile8GetFloatEPKc(void);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11TreasureBox13func_020524f0El(void);
extern "C" void _ZN11TreasureBox13func_02052550Ev(void);
extern "C" void _ZN11TreasureBox13func_02052da8Ell(void);
extern "C" void _ZN12SceneManager13func_0203e30cEv(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e090Eii(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e18cEv(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e1bcEv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12GetCharWidthEPKc(void);
extern "C" void _ZN8TextFont12GetTextWidthEPKc(void);
extern "C" void _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii(void);
extern "C" void atoi(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001f08(void);
extern "C" void func_02001f38(void);
extern "C" void func_020021f0(void);
extern "C" void func_02016d0c(void);
extern "C" void func_02022348(void);
extern "C" void func_0202273c(void);
extern "C" void func_02022b2c(void);
extern "C" void func_02022e2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_0205ed8c(void);
extern "C" void func_0205ee18(void);
extern "C" void func_0205f394(void);
extern "C" void func_0205f49c(void);
extern "C" void func_0205f89c(void);
extern "C" void func_0206145c(void);
extern "C" void func_0206a9d0(void);
extern "C" void func_0206ace8(void);
extern "C" void func_0207a5c0(void);
extern "C" void func_02084d24(void);
extern "C" void func_02084d34(void);
extern "C" void func_02084e08(void);
extern "C" void func_020859c0(void);
extern "C" void func_02085b4c(void);
extern "C" void func_02085ba4(void);
extern "C" void func_02085bfc(void);
extern "C" void func_02085c60(void);
extern "C" void func_02085d88(void);
extern "C" void func_02085e00(void);
extern "C" void func_02085e30(void);
extern "C" void func_02085ec0(void);
extern "C" void func_020860ac(void);
extern "C" void func_020860f0(void);
extern "C" void func_02086274(void);
extern "C" void func_02086440(void);
extern "C" void func_02086460(void);
extern "C" void func_02086484(void);
extern "C" void func_02086584(void);
extern "C" void func_02087500(void);
extern "C" void func_020877e0(void);
extern "C" void func_020878ac(void);
extern "C" void func_020879e4(void);
extern "C" void func_02087b68(void);
extern "C" void func_02088140(void);
extern "C" void func_02089998(void);
extern "C" void func_02089b4c(void);
extern "C" void func_02089bd4(void);
extern "C" void func_02089cbc(void);
extern "C" void func_02089dc4(void);
extern "C" void func_02089e04(void);
extern "C" void func_02089e64(void);
extern "C" void func_02089eb4(void);
extern "C" void func_02089f08(void);
extern "C" void func_02089fb0(void);
extern "C" void func_0208a00c(void);
extern "C" void func_0208a0c4(void);
extern "C" void func_0208a15c(void);
extern "C" void func_0208a28c(void);
extern "C" void func_0208a3ac(void);
extern "C" void func_0208a40c(void);
extern "C" void func_0208a764(void);
extern "C" void func_0208b434(void);
extern "C" void func_0208b444(void);
extern "C" void func_0208b4d8(void);
extern "C" void func_0208b55c(void);
extern "C" void func_0208b5f8(void);
extern "C" void func_0208b658(void);
extern "C" void func_0208b688(void);
extern "C" void func_0208b6c0(void);
extern "C" void func_0208b6f8(void);
extern "C" void func_0208b730(void);
extern "C" void func_0208b7ac(void);
extern "C" void func_0208b828(void);
extern "C" void func_0208b898(void);
extern "C" void func_0208b8cc(void);
extern "C" void func_0208bcd0(void);
extern "C" void func_0208c5d8(void);
extern "C" void func_0208c788(void);
extern "C" void func_0208c8d4(void);
extern "C" void func_0208ca30(void);
extern "C" void func_0208ca90(void);
extern "C" void func_0208cb10(void);
extern "C" void func_0208cba0(void);
extern "C" void func_0208cbc0(void);
extern "C" void func_0208cd14(void);
extern "C" void func_0208cd48(void);
extern "C" void func_0208cd7c(void);
extern "C" void func_0208cdec(void);
extern "C" void func_0208ce5c(void);
extern "C" void func_0208cee0(void);
extern "C" void func_0208cf4c(void);
extern "C" void func_0208d38c(void);
extern "C" void func_0208d3d8(void);
extern "C" void func_0208d434(void);
extern "C" void func_0208d46c(void);
extern "C" void func_0208dd58(void);
extern "C" void func_0208de7c(void);
extern "C" void func_0208e064(void);
extern "C" void func_0208e0e4(void);
extern "C" void func_0208e15c(void);
extern "C" void func_0208e35c(void);
extern "C" void func_0208e38c(void);
extern "C" void func_0208e414(void);
extern "C" void func_0208e480(void);
extern "C" void func_0208e4c4(void);
extern "C" void func_0208e508(void);
extern "C" void func_0208e584(void);
extern "C" void func_0208e600(void);
extern "C" void func_0208e680(void);
extern "C" void func_0208e6cc(void);
extern "C" void func_0208e710(void);
extern "C" void func_0208e754(void);
extern "C" void func_0208e798(void);
extern "C" void func_0208e7c8(void);
extern "C" void func_02090550(void);
extern "C" void func_02090dcc(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_020922fc(void);
extern "C" void func_02092544(void);
extern "C" void func_02092758(void);
extern "C" void func_02092808(void);
extern "C" void func_02092aac(void);
extern "C" void func_02092d3c(void);
extern "C" void func_02092e18(void);
extern "C" void func_02092ed4(void);
extern "C" void func_02092fc4(void);
extern "C" void func_02093188(void);
extern "C" void func_0209323c(void);
extern "C" void func_020932f0(void);
extern "C" void func_02093368(void);
extern "C" void func_0209342c(void);
extern "C" void func_020934ac(void);
extern "C" void func_02093524(void);
extern "C" void func_0209360c(void);
extern "C" void func_020936b4(void);
extern "C" void func_02093734(void);
extern "C" void func_0209386c(void);
extern "C" void func_02093928(void);
extern "C" void func_020939c8(void);
extern "C" void func_02093afc(void);
extern "C" void func_02093bf4(void);
extern "C" void func_02093ca8(void);
extern "C" void func_02093d1c(void);
extern "C" void func_02093e2c(void);
extern "C" void func_02093edc(void);
extern "C" void func_02097898(void);
extern "C" void func_02097aa0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097ca8(void);
extern "C" void func_02097e58(void);
extern "C" void func_02097ef8(void);
extern "C" void func_02097f98(void);
extern "C" void func_02097fcc(void);
extern "C" void func_020982a0(void);
extern "C" void func_020985fc(void);
extern "C" void func_02099a2c(void);
extern "C" void func_0209b06c(void);
extern "C" void func_0209b7f8(void);
extern "C" void func_ov000_0210c7c0(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02130b94(void);
extern "C" void func_ov015_02131948(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_02131db8(void);
extern "C" void func_ov015_021323fc(void);
extern "C" void func_ov015_0213240c(void);
extern "C" void func_ov015_0213241c(void);
extern "C" void func_ov015_021324a4(void);
extern "C" void func_ov015_021324b4(void);
extern "C" void func_ov015_021324c4(void);
extern "C" void func_ov015_02132554(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132600(void);
extern "C" void func_ov015_02132614(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_021326b8(void);
extern "C" void func_ov015_021326cc(void);
extern "C" void func_ov015_021326e0(void);
extern "C" void func_ov015_02132794(void);
extern "C" void func_ov015_02134300(void);
extern "C" void func_ov015_0213d1f0(void);
extern "C" void func_ov015_0213d290(void);
extern "C" void func_ov015_0213d330(void);
extern "C" void func_ov015_0213d3f4(void);
extern "C" void func_ov015_0213d4c8(void);
extern "C" void func_ov015_02146014(void);
extern "C" void func_ov015_021460d4(void);
extern "C" void gGameState(void);
extern "C" void sprintf(void);
extern "C" void strcpy(void);

asm UnkClass_02054800 * UnkClass_02054800::func_02054800()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    add r0, r6, #0x2bc
    mov r5, #0
    mov r4, #0x1c
    mov r1, r5
    mov r2, r4
    add r0, r0, #0x1c00
    bl MI_CpuFill8
    add r0, r6, #0xea0
    mov r1, r5
    mov r2, r4
    add r0, r0, #0x1000
    bl MI_CpuFill8
    add r0, r6, #0x1c
    mov r1, r5
    add r0, r0, #0x2c00
    mov r2, #0x900
    bl MI_CpuFill8
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_02054854()
{
    bx lr
}

asm int UnkClass_02054800::func_02054858(u32 keys, u32 arg)
{
    add r3, r0, #0x3000
    ldr r3, [r3, #0xe9c]
    add r0, r0, #0x3e00
    strh r1, [r0, #0x78]
    cmp r3, #0
    ldrneh r1, [r0, #0x78]
    strh r2, [r0, #0x7a]
    orrne r1, r1, #0x4000
    strneh r1, [r0, #0x78]
    mov r0, #0
    bx lr
}

asm int UnkClass_02054800::func_02054884(TPData *touch)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r3, r0, #0x3000
    mov r2, #0
    str r2, [r3, #0xe98]
    str r2, [r3, #0xe9c]
    ldrh r2, [r1, #4]
    cmp r2, #1
    bne @L_02054910
    ldrh r4, [r1]
    add r2, r0, #0x3e00
    strh r4, [r2, #0x7c]
    ldrh r4, [r1, #2]
    strh r4, [r2, #0x7e]
    ldrh r4, [r1, #4]
    strh r4, [r2, #0x80]
    ldrh r4, [r1, #6]
    strh r4, [r2, #0x82]
    ldrh r1, [r1, #6]
    cmp r1, #0
    ldreq r1, [r3, #0xe94]
    cmpeq r1, #0
    bne @L_02054904
    ldrh lr, [r2, #0x7c]
    ldrh r12, [r2, #0x7e]
    ldrh r5, [r2, #0x80]
    ldrh r4, [r2, #0x82]
    mov r1, #1
    strh lr, [r2, #0x84]
    strh r12, [r2, #0x86]
    strh r5, [r2, #0x88]
    strh r4, [r2, #0x8a]
    str r1, [r3, #0xe98]
@L_02054904:
    add r0, r0, #0x3000
    mov r1, #1
    b @L_02054950
@L_02054910:
    ldr r1, [r3, #0xe94]
    cmp r1, #0
    beq @L_02054948
    add r1, r0, #0x3e00
    ldrh r5, [r1, #0x7c]
    ldrh r4, [r1, #0x7e]
    ldrh lr, [r1, #0x80]
    ldrh r12, [r1, #0x82]
    mov r2, #1
    strh r5, [r1, #0x8c]
    strh r4, [r1, #0x8e]
    strh lr, [r1, #0x90]
    strh r12, [r1, #0x92]
    str r2, [r3, #0xe9c]
@L_02054948:
    add r0, r0, #0x3000
    mov r1, #0
@L_02054950:
    str r1, [r0, #0xe94]
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205495c()
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, [sp, #0x10]
    ldr lr, [sp, #0x14]
    cmp r1, #4
    mov r12, #0
    addls pc, pc, r1, lsl #2
    b @L_02054aa0
    b @L_0205498c
    b @L_020549b8
    b @L_020549d4
    b @L_02054a00
    b @L_02054a4c
@L_0205498c:
    add r1, r0, #0x3000
    ldr r1, [r1, #0xe94]
    cmp r1, #0
    beq @L_02054aa0
    add r0, r0, #0x3e00
    ldrh r1, [r0, #0x7c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x7e]
    cmpge r0, r3
    blt @L_02054aa0
    b @L_02054a94
@L_020549b8:
    add r0, r0, #0x3e00
    ldrh r1, [r0, #0x84]
    cmp r1, r2
    ldrgeh r0, [r0, #0x86]
    cmpge r0, r3
    blt @L_02054aa0
    b @L_02054a94
@L_020549d4:
    add r1, r0, #0x3000
    ldr r1, [r1, #0xe94]
    cmp r1, #0
    bne @L_02054aa0
    add r0, r0, #0x3e00
    ldrh r1, [r0, #0x8c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x8e]
    cmpge r0, r3
    blt @L_02054aa0
    b @L_02054a94
@L_02054a00:
    add r1, r0, #0x3000
    ldr r1, [r1, #0xe94]
    cmp r1, #0
    beq @L_02054aa0
    add r0, r0, #0x3e00
    ldrh r5, [r0, #0x84]
    cmp r5, r2
    ldrgeh r1, [r0, #0x86]
    cmpge r1, r3
    blt @L_02054aa0
    cmp r5, r4
    cmple r1, lr
    bgt @L_02054aa0
    ldrh r1, [r0, #0x7c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x7e]
    cmpge r0, r3
    blt @L_02054aa0
    b @L_02054a94
@L_02054a4c:
    add r1, r0, #0x3000
    ldr r1, [r1, #0xe94]
    cmp r1, #0
    bne @L_02054aa0
    add r0, r0, #0x3e00
    ldrh r5, [r0, #0x84]
    cmp r5, r2
    ldrgeh r1, [r0, #0x86]
    cmpge r1, r3
    blt @L_02054aa0
    cmp r5, r4
    cmple r1, lr
    bgt @L_02054aa0
    ldrh r1, [r0, #0x8c]
    cmp r1, r2
    ldrgeh r0, [r0, #0x8e]
    cmpge r0, r3
    blt @L_02054aa0
@L_02054a94:
    cmp r1, r4
    cmple r0, lr
    movle r12, #1
@L_02054aa0:
    mov r0, r12
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02054aa8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x114
    ldr r4, =data_020a70bc
    add r3, sp, #0x14
    mov r5, r0
    mov r2, #0x80
@L_02054ac0:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02054ac0
    mov r4, #0
    ldr r2, =0x1e90
    mov r1, r4
    add r0, r5, #0x10
    bl MI_CpuFill8
    add r0, r5, #0x2bc
    mov r6, #0x1c
    mov r1, r4
    mov r2, r6
    add r0, r0, #0x1c00
    bl MI_CpuFill8
    add r0, r5, #0xea0
    mov r1, r4
    mov r2, r6
    add r0, r0, #0x1000
    bl MI_CpuFill8
    add r0, r5, #0x1c
    mov r1, r4
    add r0, r0, #0x2c00
    mov r2, #0x900
    bl MI_CpuFill8
    mov r9, r4
    mov r8, #5
    add r7, sp, #0x14
    ldr r6, =data_020c46d4
    b @L_02054b74
@L_02054b40:
    ldr r0, [r6]
    mov r1, r8
    str r9, [sp]
    str r9, [sp, #4]
    str r9, [sp, #8]
    str r9, [sp, #0xc]
    mov r3, r9
    add r2, r7, r4, lsl #5
    str r9, [sp, #0x10]
    bl func_02097898
    add r1, r5, r4, lsl #2
    str r0, [r1, #0x14]
    add r4, r4, #1
@L_02054b74:
    cmp r4, #8
    blt @L_02054b40
    add r0, r5, #0x31c
    add r0, r0, #0x1c00
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r0, =data_020c46d4
    mov r1, #8
    ldr r0, [r0]
    mov r2, #1
    bl func_020920c4
    add r1, r5, #0x1000
    str r0, [r1, #0xf14]
    add sp, sp, #0x114
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02054800::func_02054bc0()
{
    ldr r12, =func_02056c6c
    bx r12
}

asm void UnkClass_02054800::func_02054bcc()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02055f94
    mov r0, r4
    bl func_020572b8
    mov r0, r4
    bl func_0205a864
    mov r0, r4
    bl func_0205bdd0
    mov r0, r4
    bl func_0205c598
    mov r0, r4
    bl func_0205cd14
    mov r0, r4
    bl func_02059f6c
    mov r0, r4
    bl func_0205d804
    mov r0, r4
    bl func_0205ed8c
    mov r0, r4
    bl func_0205f394
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02054c24(void *dst)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    mov r2, #0x48
@L_02054c30:
    mla r3, r4, r2, r0
    add r3, r3, #0x2000
    ldr r12, [r3, #0xc1c]
    add lr, r1, r4, lsl #4
    str r12, [r1, r4, lsl #4]
    ldr r12, [r3, #0xc20]
    add r4, r4, #1
    str r12, [lr, #4]
    ldr r12, [r3, #0xc44]
    cmp r4, #0x20
    str r12, [lr, #8]
    ldr r3, [r3, #0xc48]
    str r3, [lr, #0xc]
    blt @L_02054c30
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02054c6c(void *src)
{
    stmdb sp!, {r3, r4, r5, lr}
    add r2, r0, #0x1c
    mov r4, #0
    add r5, r2, #0x2c00
    mov r3, r4
@L_02054c80:
    ldr r2, [r1, r4, lsl #4]
    add lr, r1, r4, lsl #4
    str r2, [r5]
    ldr r12, [lr, #4]
    add r4, r4, #1
    str r12, [r5, #4]
    ldr r2, [lr, #8]
    cmp r12, #0
    str r2, [r5, #0x28]
    ldr r2, [lr, #0xc]
    str r2, [r5, #0x2c]
    strh r3, [r5, #0xa]
    ldrneh r2, [r5, #0xa]
    orrne r2, r2, #1
    strneh r2, [r5, #0xa]
    cmp r4, #0x20
    add r5, r5, #0x48
    blt @L_02054c80
    bl func_0205cfec
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02054cd0()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, r1
    mov r4, r2
    str r1, [r5]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    str r0, [r5, #4]
    bl _ZN12SceneManager13func_0203e30cEv
    cmp r0, #2
    beq @L_02054d14
    cmp r0, #3
    beq @L_02054d0c
    cmp r0, #0x6b
    beq @L_02054d18
    b @L_02054d20
@L_02054d0c:
    mov r1, #0x84
    b @L_02054d24
@L_02054d14:
    b @L_02054d18
@L_02054d18:
    mov r1, #0x36
    b @L_02054d24
@L_02054d20:
    mov r1, #0x83
@L_02054d24:
    mov r0, #1
    str r1, [r5, #8]
    str r0, [r5, #0xc]
    mov r0, r5
    mov r1, r4
    bl func_0205735c
    add r0, r5, #0x3000
    mov r1, #0
    strb r1, [r0, #0xe70]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02054d4c()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02055f94
    mov r0, r4
    bl func_02057474
    mov r0, r4
    bl func_0205a864
    mov r0, r4
    bl func_0205bdd0
    mov r0, r4
    bl func_0205c598
    mov r0, r4
    bl func_0205cd14
    mov r0, r4
    bl func_02059f6c
    mov r0, r4
    bl func_0205d804
    mov r0, r4
    bl func_0205ed8c
    mov r0, r4
    bl func_0205f394
    ldr r0, =data_020c4670
    ldr r0, [r0]
    bl func_02090550
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02054db4()
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020c484c
    mov r4, r0
    ldr r2, [r1]
    add r1, r4, #0x1000
    str r2, [r1, #0xf10]
    bl func_0205605c
    add r1, r4, #0x3e00
    add r0, r4, #0x3000
    ldrh r2, [r1, #0x78]
    ldr r1, =0x3f3
    ldr r3, [r0, #0xe9c]
    and r1, r2, r1
    mov r0, r4
    orr r1, r3, r1
    bl func_02057630
    mov r0, r4
    bl func_02059fe8
    mov r0, r4
    bl func_0205a8cc
    mov r0, r4
    bl func_0205be1c
    mov r0, r4
    bl func_0205c5fc
    mov r0, r4
    bl func_0205cd74
    mov r0, r4
    bl func_0205d874
    mov r0, r4
    bl func_0205ee18
    mov r0, r4
    bl func_0205f49c
    mov r0, r4
    bl func_0205f89c
    mov r0, r4
    bl func_0205ddb0
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02054e50()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    cmp r0, #0
    mov r6, #0
    bls @L_02054e98
    mov r7, r3, asr #0x1f
@L_02054e64:
    sub r12, r1, r2
    umull r4, lr, r12, r3
    mla lr, r12, r7, lr
    mov r12, r12, asr #0x1f
    adds r5, r4, #0x800
    mla lr, r12, r3, lr
    adc r4, lr, #0
    mov r5, r5, lsr #0xc
    orr r5, r5, r4, lsl #20
    add r6, r6, #1
    cmp r6, r0
    add r2, r2, r5
    blo @L_02054e64
@L_02054e98:
    mov r0, r2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_02054ea0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x40
    mov r9, r0
    ldr r0, [r9]
    mov r8, r1
    mov r7, r2
    ldr r10, =data_020d3d20
    ldr r4, =data_020c4ab4
    mov r5, #1
    mov r6, #0
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    add r1, r9, #0x1000
    str r0, [r1, #0xf18]
    cmp r8, #0x1c
    addls pc, pc, r8, lsl #2
    b @L_02055618
    b @L_02055618
    b @L_02054f54
    b @L_02054fb0
    b @L_02054fd8
    b @L_02055018
    b @L_02055040
    b @L_02055080
    b @L_020550c0
    b @L_02055128
    b @L_02055208
    b @L_02055258
    b @L_020553c8
    b @L_02055230
    b @L_02055448
    b @L_02055408
    b @L_02055470
    b @L_020552a4
    b @L_020552f0
    b @L_02055338
    b @L_02055380
    b @L_02055618
    b @L_02055198
    b @L_02054f80
    b @L_02055618
    b @L_020554f0
    b @L_02055530
    b @L_020555a0
    b @L_020555e0
    b @L_02055100
@L_02054f54:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    str r5, [r4, #0x64]
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x60
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02054f80:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    mov r0, #5
    str r0, [r4, #0x64]
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x60
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02054fb0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x85
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02054fd8:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x86
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055018:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x88
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055040:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x89
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055080:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x61
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020550c0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x8a
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055100:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x8f
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055128:
    mov r5, r6
    mov r0, r9
    mov r1, r5
    mov r2, #8
    bl func_02055870
    str r5, [r4, #8]
    strb r5, [r4, #0x14]
    mov r1, r6
    mov r0, #0x19
@L_0205514c:
    mla r2, r5, r0, r4
    add r3, r4, r5, lsl #2
    str r1, [r3, #0xc]
    add r5, r5, #1
    strb r1, [r2, #0x2d]
    cmp r5, #2
    blt @L_0205514c
    mov r0, #2
    str r0, [r4, #4]
    strb r1, [r4, #0x60]
    strb r1, [r4, #0x61]
    strb r1, [r4, #0x62]
    strb r1, [r4, #0x5f]
    strb r1, [r4, #0x63]
    ldr r0, [r9]
    mov r2, #0x5f
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055198:
    mov r5, r6
    mov r0, r9
    mov r1, r5
    mov r2, #8
    bl func_02055870
    str r5, [r4, #8]
    strb r5, [r4, #0x14]
    mov r1, r6
    mov r0, #0x19
@L_020551bc:
    mla r2, r5, r0, r4
    add r3, r4, r5, lsl #2
    str r1, [r3, #0xc]
    add r5, r5, #1
    strb r1, [r2, #0x2d]
    cmp r5, #2
    blt @L_020551bc
    mov r0, #3
    str r0, [r4, #4]
    strb r1, [r4, #0x60]
    strb r1, [r4, #0x61]
    strb r1, [r4, #0x62]
    strb r1, [r4, #0x5f]
    strb r1, [r4, #0x63]
    ldr r0, [r9]
    mov r2, #0x5f
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055208:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x64
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055230:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x65
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055258:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, =data_020d3d20
    mov r1, r7
    bl func_0209b7f8
    ldr r5, [r9]
    mov r4, #0x66
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020552a4:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, =data_020d3d20
    orr r1, r7, #0x80000000
    bl func_0209b7f8
    ldr r5, [r9]
    mov r4, #0x66
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020552f0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, =data_020d3d20
    mov r1, r7
    bl func_0209b7f8
    ldr r4, [r9]
    mov r1, r6
    mov r0, r4
    mov r2, #0x6c
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r4
    mov r1, r5
    mov r2, #0x5d
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055338:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, =data_020d3d20
    mov r1, r7
    bl func_0209b7f8
    ldr r4, [r9]
    mov r1, r6
    mov r0, r4
    mov r2, #0x6b
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r4
    mov r2, r6
    mov r1, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055380:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, =data_020d3d20
    mov r1, r7
    bl func_0209b7f8
    ldr r4, [r9]
    mov r1, r6
    mov r0, r4
    mov r2, #0x6e
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r4
    mov r1, r5
    mov r2, #0x5d
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020553c8:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x8b
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055408:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x8c
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055448:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r0, [r9]
    mov r1, r6
    mov r2, #0x68
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055470:
    mov r6, #6
    mov r0, r6
    bl func_ov015_02132628
    ldrb r1, [r10]
    ldr r2, =0x2aaaaaab
    add r5, sp, #0
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #1
    ldr r1, =data_020ae4a4
    mov r0, r5
    ldr r1, [r1, r3, lsl #2]
    bl strcpy
    sub r6, r6, #7
    mov r0, r10
    mov r1, r5
    mov r2, r6
    bl func_0209b06c
    mov r1, #0
    strb r7, [r10]
    str r1, [r4]
    ldr r0, [r9]
    mov r2, #0x5e
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    ldr r0, =data_020d9978
    mov r1, r6
    mov r2, r6
    bl _ZN11TreasureBox13func_02052da8Ell
    add r0, r9, #0x1000
    add sp, sp, #0x40
    str r6, [r0, #0xf18]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020554f0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x87
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02055530:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    bl func_ov015_021319bc
    strb r5, [r4, #0x6e]
    strb r5, [r4, #0x6f]
    strb r6, [r4, #0x70]
    strb r6, [r4, #0x71]
    strb r6, [r4, #0x72]
    strb r6, [r4, #0x73]
    strb r6, [r4, #0x74]
    strb r0, [r4, #0x68]
    strb r6, [r4, #0x69]
    strb r5, [r4, #0x6a]
    strb r6, [r4, #0x6b]
    ldr r7, [r9]
    mov r4, #0x5a
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r7
    mov r1, r5
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020555a0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x72
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_020555e0:
    mov r0, r9
    mov r1, r6
    mov r2, #8
    bl func_02055870
    ldr r5, [r9]
    mov r4, #0x73
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
    mov r0, r5
    mov r2, r4
    mov r1, #1
    bl _ZN17UnkClass_0203dc7c13func_0203e090Eii
@L_02055618:
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_02055634()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_ov015_02132794
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, pc}
    add r0, r4, #0x1000
    ldr r0, [r0, #0xf18]
    cmp r0, #0
    movlt r0, #1
    ldmltia sp!, {r4, pc}
    ldr r0, [r4]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    add r1, r4, #0x1000
    ldr r1, [r1, #0xf18]
    cmp r1, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02055680()
{
    stmdb sp!, {r4, lr}
    bl _ZN12SceneManager13func_0203e30cEv
    cmp r0, #2
    ldmneia sp!, {r4, pc}
    ldr r4, =data_020d9978
    mov r0, r4
    bl _ZN11TreasureBox13func_02052550Ev
    ldr r3, =data_020df978
    mov r2, #0
    mov r0, r4
    mov r1, #0x3d
    str r2, [r3, #0xa74]
    bl _ZN11TreasureBox13func_02052da8Ell
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_020556c0()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    cmp r1, #0
    beq @L_020556e4
    cmp r1, #1
    beq @L_020556ec
    cmp r1, #2
    ldreq r5, [r6, #0xc]
    b @L_020556f0
@L_020556e4:
    ldr r5, [r6, #4]
    b @L_020556f0
@L_020556ec:
    ldr r5, [r6, #8]
@L_020556f0:
    mov r4, #0
    ldr r0, =data_020d9978
    mov r1, r4
    bl _ZN11TreasureBox13func_020524f0El
    ldr r0, [r6]
    mov r1, r4
    mov r2, r5
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    ldr r0, [r6]
    ldr r1, [r0]
    ldr r1, [r1, #0x34]
    blx r1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_02055728()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_ov015_02132794
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5]
    bl _ZN17UnkClass_0203dc7c13func_0203e18cEv
    mov r4, r0
    ldr r0, [r5]
    bl _ZN17UnkClass_0203dc7c13func_0203e1bcEv
    cmp r4, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02055764()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r2
    cmp r5, #0x20
    bgt @L_020557a4
    bge @L_020557ec
    cmp r5, #0x12
    bgt @L_02055814
    cmp r5, #0x10
    blt @L_02055814
    beq @L_020557c0
    cmp r5, #0x11
    beq @L_020557e0
    cmp r5, #0x12
    beq @L_020557e4
    b @L_02055814
@L_020557a4:
    cmp r5, #0x21
    bgt @L_020557b4
    beq @L_0205580c
    b @L_02055814
@L_020557b4:
    cmp r5, #0x22
    beq @L_02055810
    b @L_02055814
@L_020557c0:
    ldr r0, =data_020e88a0
    bl func_0206ace8
    cmp r0, #0
    bne @L_020557d8
    bl func_ov015_0213241c
    b @L_02055814
@L_020557d8:
    bl func_ov015_021323fc
    b @L_02055814
@L_020557e0:
    b @L_020557d8
@L_020557e4:
    bl func_ov015_0213240c
    b @L_02055814
@L_020557ec:
    ldr r0, =data_020e88a0
    bl func_0206ace8
    cmp r0, #0
    bne @L_02055804
    bl func_ov015_021324c4
    b @L_02055814
@L_02055804:
    bl func_ov015_021324a4
    b @L_02055814
@L_0205580c:
    b @L_02055804
@L_02055810:
    bl func_ov015_021324b4
@L_02055814:
    ands r0, r5, #0xf
    beq @L_02055830
    cmp r0, #1
    beq @L_02055854
    cmp r0, #2
    beq @L_02055860
    ldmia sp!, {r3, r4, r5, pc}
@L_02055830:
    ldr r0, =data_020e88a0
    bl func_0206ace8
    cmp r0, #0
    mov r0, r4
    bne @L_0205584c
    bl func_ov015_0213257c
    ldmia sp!, {r3, r4, r5, pc}
@L_0205584c:
    bl func_ov015_02132554
    ldmia sp!, {r3, r4, r5, pc}
@L_02055854:
    mov r0, r4
    bl func_ov015_02132554
    ldmia sp!, {r3, r4, r5, pc}
@L_02055860:
    mov r0, r4
    bl func_ov015_02132568
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02055870()
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    cmp r1, #0x12
    bgt @L_020558c4
    bge @L_02055900
    cmp r1, #0x10
    bgt @L_020558b8
    bge @L_020558e8
    cmp r1, #2
    ldmgtia sp!, {r4, pc}
    cmp r1, #0
    ldmltia sp!, {r4, pc}
    beq @L_020558e8
    cmp r1, #1
    beq @L_020558f4
    cmp r1, #2
    beq @L_02055900
    ldmia sp!, {r4, pc}
@L_020558b8:
    cmp r1, #0x11
    beq @L_020558f4
    ldmia sp!, {r4, pc}
@L_020558c4:
    cmp r1, #0x21
    bgt @L_020558dc
    bge @L_02055930
    cmp r1, #0x20
    beq @L_0205590c
    ldmia sp!, {r4, pc}
@L_020558dc:
    cmp r1, #0x22
    beq @L_0205593c
    ldmia sp!, {r4, pc}
@L_020558e8:
    mov r0, r4
    bl func_ov015_02132600
    ldmia sp!, {r4, pc}
@L_020558f4:
    mov r0, r4
    bl func_ov015_02132600
    ldmia sp!, {r4, pc}
@L_02055900:
    mov r0, r4
    bl func_ov015_02132614
    ldmia sp!, {r4, pc}
@L_0205590c:
    ldr r0, =data_020e88a0
    bl func_0206ace8
    cmp r0, #0
    mov r0, r4
    bne @L_02055928
    bl func_ov015_021326e0
    ldmia sp!, {r4, pc}
@L_02055928:
    bl func_ov015_021326b8
    ldmia sp!, {r4, pc}
@L_02055930:
    mov r0, r4
    bl func_ov015_021326b8
    ldmia sp!, {r4, pc}
@L_0205593c:
    mov r0, r4
    bl func_ov015_021326cc
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205594c()
{
    ldr r12, =func_ov015_02132794
    bx r12
}

asm void UnkClass_02054800::func_02055958()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x54
    mov r6, r0
    mov r5, r1
    mov r7, #0x30
    mla r0, r5, r7, r6
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    mov r9, r2
    mov r4, r3
    cmp r1, #0
    beq @L_020559ac
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097b3c
    add r0, r6, #0x31c
    add r0, r0, #0x1c00
    mla r0, r5, r7, r0
    mov r2, r7
    mov r1, #0
    bl MI_CpuFill8
@L_020559ac:
    ldr r7, =data_020c46d4
    add r1, r6, #0x1000
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, #0xa
    bl func_02093928
    add r1, r6, #0x1000
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, #0xc8
    bl func_02093368
    add r0, r6, #0x1000
    ldr r1, [r0, #0xf14]
    ldr r0, [r7]
    add r2, r5, #1
    mov r3, #0x1f
    bl func_0209342c
    add r1, r6, #0x1000
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    ldr r3, =0x7fff
    add r2, r5, #1
    bl func_020934ac
    mov r8, #0
    str r8, [sp]
    add r1, r6, #0x1000
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, r8
    bl func_02093afc
    add r10, sp, #0x14
    ldr r1, =data_020ae588
    mov r0, r10
    bl STD_CopyString
    mov r1, r9
    mov r0, r10
    bl STD_ConcatenateString
    ldr r1, =data_020ae5a0
    mov r0, r10
    bl STD_ConcatenateString
    ldr r0, [r7]
    mov r7, #1
    str r8, [sp]
    str r8, [sp, #4]
    str r8, [sp, #8]
    str r8, [sp, #0xc]
    mov r2, r10
    mov r1, #5
    mov r3, r7
    str r8, [sp, #0x10]
    bl func_02097898
    mov r1, #0x30
    mul r1, r5, r1
    add r2, r6, r1
    add r2, r2, #0x1000
    str r0, [r2, #0xf1c]
    strb r7, [r2, #0xf22]
    strb r8, [r2, #0xf20]
    strb r4, [r2, #0xf21]
    add r0, r6, #0x23
    str r8, [r2, #0xf2c]
    add r3, r0, #0x1f00
    str r8, [r2, #0xf30]
    ldr r0, [sp, #0x78]
    str r8, [r2, #0xf28]
    str r0, [r2, #0xf24]
    ldrsb r0, [r3, r1]
    orr r0, r0, #1
    strb r0, [r3, r1]
    add sp, sp, #0x54
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_02055ae4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r4, #0x30
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r0, [r0, #0xf1c]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =data_020c46d4
    add r1, r6, #0x1000
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, #2
    bl func_02093928
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    ldr r0, [r7]
    bl func_02097b3c
    add r0, r6, #0x31c
    add r0, r0, #0x1c00
    mla r0, r5, r4, r0
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_02055b58()
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r1, #0x30
    mla r1, lr, r1, r0
    add r1, r1, #0x1000
    ldr r1, [r1, #0xf1c]
    mov r12, r2
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    and r1, r3, #0xff
    ldr r2, =data_020c46d4
    str r1, [sp]
    add r1, r0, #0x1000
    ldr r0, [r2]
    ldr r1, [r1, #0xf14]
    add r2, lr, #1
    and r3, r12, #0xff
    bl func_02093afc
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_02055ba8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, #0x30
    mul r7, r1, r4
    mov r8, r0
    add r0, r8, r7
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [sp, #0x1c]
    mov r3, r3, lsl #0xc
    cmp r1, #0
    ldrne r1, [r0, #0xf2c]
    ldrne r0, [r0, #0xf30]
    mov r2, r2, lsl #0xc
    addne r3, r3, r0
    ldr r6, [sp, #0x18]
    addne r2, r2, r1
    add r0, r8, r7
    cmp r6, #0
    addeq r0, r0, #0x1000
    streq r2, [r0, #0xf2c]
    streq r3, [r0, #0xf30]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r12, r0, #0x1000
    add r0, r8, #0x334
    add r1, r8, #0x338
    add r4, r1, #0x1c00
    str r6, [r12, #0xf28]
    add r5, r0, #0x1c00
    str r2, [r5, r7]
    str r3, [r4, r7]
    ldr r2, [r5, r7]
    ldr r0, [r12, #0xf2c]
    mov r1, r6
    sub r0, r2, r0
    str r0, [r5, r7]
    ldr r2, [r4, r7]
    ldr r0, [r12, #0xf30]
    sub r0, r2, r0
    str r0, [r4, r7]
    ldr r0, [r5, r7]
    bl func_0202273c
    str r0, [r5, r7]
    ldr r0, [r4, r7]
    mov r1, r6
    bl func_0202273c
    add r1, r8, #0x23
    add r1, r1, #0x1f00
    str r0, [r4, r7]
    ldrsb r0, [r1, r7]
    orr r0, r0, #0x10
    strb r0, [r1, r7]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_02055c80()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x1c
    cmp r2, #0
    mov r5, r0
    mov r4, r1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, pc}
    mov r1, r2
    mov r2, r3
    bl func_0205ab14
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, pc}
    ldr r2, =data_020c46cc
    ldr r1, [r0, #4]
    ldr r0, [r2]
    bl func_02085ba4
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, pc}
    ldr lr, [r0, #0x84]
    ldr r2, [sp, #0x28]
    str lr, [sp, #0x10]
    ldr r12, [r0, #0x88]
    add lr, lr, r2
    str r12, [sp, #0x14]
    ldr r3, [r0, #0x8c]
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x30]
    add r12, r12, r1
    add r3, r3, r0
    add r0, sp, #0x10
    add r1, sp, #0xc
    add r2, sp, #8
    str lr, [sp, #0x10]
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    bl NNS_G3dWorldPosToScrPos
    ldr r1, [sp, #0x34]
    mov r0, #0
    str r1, [sp]
    str r0, [sp, #4]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    mov r0, r5
    mov r1, r4
    bl func_02055ba8
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, pc}
}

asm void UnkClass_02054800::func_02055d58()
{
    stmdb sp!, {r3, lr}
    mov r12, r1
    mov r1, #0x30
    mla r1, r12, r1, r0
    add r1, r1, #0x1000
    ldr r1, [r1, #0xf1c]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    mov r1, r3, lsl #0x10
    mov r1, r1, asr #0x10
    ldr lr, =data_020c46d4
    str r1, [sp]
    add r1, r0, #0x1000
    mov r3, r2, lsl #0x10
    ldr r0, [lr]
    ldr r1, [r1, #0xf14]
    add r2, r12, #1
    mov r3, r3, asr #0x10
    bl func_0209360c
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_02055dac()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    mov r6, #0x30
    mla r0, r4, r6, r5
    add r12, r0, #0x1000
    ldr r0, [r12, #0xf1c]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r1, [sp, #0x10]
    rsb r0, r2, r2, lsl #5
    str r0, [r12, #0xf40]
    cmp r1, #0
    bne @L_02055e0c
    ldr r2, [r12, #0xf40]
    ldr r0, =data_020c46d4
    mov r3, r2, asr #0xc
    add r1, r5, #0x1000
    ldr r0, [r0]
    ldr r1, [r1, #0xf14]
    add r2, r4, #1
    and r3, r3, #0xff
    bl func_0209342c
    ldmia sp!, {r4, r5, r6, pc}
@L_02055e0c:
    str r1, [r12, #0xf3c]
    rsb lr, r3, r3, lsl #5
    sub r0, r3, r2
    str lr, [r12, #0xf48]
    bl func_0202273c
    mul r3, r4, r6
    add r2, r5, r3
    add r1, r5, #0x23
    rsb r4, r0, r0, lsl #5
    add r0, r2, #0x1000
    str r4, [r0, #0xf44]
    add r1, r1, #0x1f00
    ldrsb r0, [r1, r3]
    orr r0, r0, #0x40
    strb r0, [r1, r3]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_02055e50()
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r1, #0x30
    mla r1, lr, r1, r0
    add r1, r1, #0x1000
    ldr r1, [r1, #0xf1c]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldr r12, =data_020c46d4
    add r1, r0, #0x1000
    mov r3, r2, lsl #0x10
    ldr r0, [r12]
    ldr r1, [r1, #0xf14]
    add r2, lr, #1
    mov r3, r3, lsr #0x10
    bl func_02093368
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_02055e98()
{
    mov r3, #0x30
    mla r0, r1, r3, r0
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    cmp r1, #0
    strneb r2, [r0, #0xf20]
    bx lr
}

asm void UnkClass_02054800::func_02055eb4()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r5, r0
    mov r4, r1
    mov r0, #0x30
    mla r0, r4, r0, r5
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    cmp r1, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r1, #0
    str r1, [r0, #0xf2c]
    str r1, [r0, #0xf30]
    mov r3, #0x64
    ldr r6, =data_020c46d4
    str r3, [sp]
    add r1, r5, #0x1000
    ldr r0, [r6]
    ldr r1, [r1, #0xf14]
    add r2, r4, #1
    bl func_0209360c
    mov r0, #1
    str r0, [sp]
    add r1, r5, #0x1000
    ldr r0, [r6]
    ldr r1, [r1, #0xf14]
    add r2, r4, #1
    mov r3, #8
    bl func_0209386c
    add r1, r5, #0x1000
    ldr r0, [r6]
    ldr r1, [r1, #0xf14]
    add r2, r4, #1
    mov r3, #0x12c
    bl func_02093368
    add r1, r5, #0x1000
    add r2, r4, #1
    mov r0, #0xc0
    str r0, [sp]
    ldr r0, [r6]
    ldr r1, [r1, #0xf14]
    mov r3, #0x100
    bl func_020936b4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_02055f70()
{
    mov r2, #0x30
    mla r2, r1, r2, r0
    add r0, r2, #0x1000
    ldr r0, [r0, #0xf1c]
    cmp r0, #0
    addne r0, r2, #0x1f00
    ldrnesb r0, [r0, #0x23]
    moveq r0, #0
    bx lr
}

asm void UnkClass_02054800::func_02055f94()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r11, #0x30
    add r0, r10, #0x31c
    mov r9, #0
    add r8, r0, #0x1c00
    add r4, r10, #0x1000
    ldr r7, =data_020c46d4
    mov r5, r11
    mov r6, r11
    b @L_02056010
@L_02055fc0:
    mla r0, r9, r6, r10
    add r0, r0, #0x1000
    ldr r0, [r0, #0xf1c]
    cmp r0, #0
    beq @L_0205600c
    ldr r0, [r7]
    ldr r1, [r4, #0xf14]
    mov r3, #2
    add r2, r9, #1
    bl func_02093928
    mla r0, r9, r11, r10
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    ldr r0, [r7]
    bl func_02097b3c
    mla r0, r9, r5, r8
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
@L_0205600c:
    add r9, r9, #1
@L_02056010:
    cmp r9, #8
    blt @L_02055fc0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02056020()
{
    stmdb sp!, {r3, lr}
    mov r3, #0x30
    mla r3, r2, r3, r0
    add r2, r3, #0x1000
    ldr r12, [r2, #0xf1c]
    mov r2, r1
    add r1, r0, #0x1000
    ldr r3, =data_020c46d4
    ldr r1, [r1, #0xf14]
    ldr r0, [r3]
    add r2, r2, #1
    and r3, r12, #0xff
    bl func_0209323c
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205605c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r11, #0
    mov r6, r0
    ldr r10, =data_020c46d4
    mov r4, #0x30
    mov r5, r11
    b @L_02056398
@L_02056078:
    mla r2, r5, r4, r6
    add r0, r2, #0x1000
    ldr r1, [r0, #0xf1c]
    cmp r1, #0
    beq @L_02056394
    add r0, r2, #0x1f00
    ldrsb r0, [r0, #0x22]
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02056394
    b @L_02056394
    b @L_020560b0
    b @L_0205610c
    b @L_0205619c
@L_020560b0:
    ldr r0, [r10]
    bl func_02097aa0
    cmp r0, #0
    bne @L_02056394
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r3, [r0, #0xf24]
    ldr r1, [r0, #0xf1c]
    ldr r0, [r10]
    mov r2, #0
    bl func_02097ca8
    ldr r0, [r10]
    add r1, r6, #0x1000
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, #2
    bl func_02093928
    add r0, r6, #0x22
    add r2, r0, #0x1f00
    mul r1, r5, r4
    ldrsb r0, [r2, r1]
    add r0, r0, #1
    strb r0, [r2, r1]
@L_0205610c:
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf1c]
    ldr r0, [r10]
    bl func_02097f98
    cmp r0, #0
    beq @L_02056394
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r3, [r0, #0xf1c]
    add r1, r6, #0x1000
    ldr r0, [r10]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    and r3, r3, #0xff
    bl func_02093188
    mla r1, r5, r4, r6
    str r11, [sp]
    add r1, r1, #0x1f00
    ldrsb r3, [r1, #0x21]
    add r1, r6, #0x1000
    ldr r0, [r10]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    bl func_020939c8
    add r0, r6, #0x23
    add r1, r6, #0x22
    mul r2, r5, r4
    add r3, r0, #0x1f00
    ldrsb r0, [r3, r2]
    add r1, r1, #0x1f00
    orr r0, r0, #2
    strb r0, [r3, r2]
    ldrsb r0, [r1, r2]
    add r0, r0, #1
    strb r0, [r1, r2]
@L_0205619c:
    mla r0, r5, r4, r6
    add r0, r0, #0x1f00
    ldrsb r0, [r0, #0x20]
    mov r3, #2
    cmp r0, #0
    beq @L_020561d4
    mov r0, #1
    str r0, [sp]
    add r1, r6, #0x1000
    ldr r0, [r10]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    bl func_0209386c
    b @L_020561e8
@L_020561d4:
    add r1, r6, #0x1000
    ldr r0, [r10]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    bl func_02093928
@L_020561e8:
    mul r12, r5, r4
    add r0, r6, r12
    add r1, r0, #0x1f00
    ldrsb r1, [r1, #0x23]
    tst r1, #0x40
    beq @L_020562b0
    add r1, r6, #0x33c
    add r3, r1, #0x1c00
    add r1, r0, #0x1000
    mov r2, #0
    add r9, r6, #0x1f40
    add r0, r6, #0x1000
    b @L_02056240
@L_0205621c:
    ldr r8, [r9, r12]
    ldr r7, [r1, #0xf44]
    add r7, r8, r7
    str r7, [r9, r12]
    ldr r7, [r3, r12]
    subs r7, r7, #1
    str r7, [r3, r12]
    beq @L_0205624c
    add r2, r2, #1
@L_02056240:
    ldr r7, [r0, #0xf10]
    cmp r2, r7
    blo @L_0205621c
@L_0205624c:
    mov r2, #0x30
    mul r0, r5, r2
    add r1, r6, r0
    add r3, r1, #0x1000
    ldr r1, [r3, #0xf3c]
    ldr r7, =data_020c46d4
    cmp r1, #0
    bne @L_02056288
    add r1, r6, #0x23
    add r8, r1, #0x1f00
    ldrsb r1, [r8, r0]
    bic r1, r1, #0x40
    strb r1, [r8, r0]
    ldr r0, [r3, #0xf48]
    str r0, [r3, #0xf40]
@L_02056288:
    mla r0, r5, r2, r6
    add r0, r0, #0x1000
    ldr r0, [r0, #0xf40]
    add r1, r6, #0x1000
    mov r3, r0, asr #0xc
    ldr r0, [r7]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    and r3, r3, #0xff
    bl func_0209342c
@L_020562b0:
    mul r1, r5, r4
    add r7, r6, r1
    add r0, r7, #0x1f00
    ldrsb r0, [r0, #0x23]
    tst r0, #0x10
    beq @L_0205635c
    add r0, r6, #0x32c
    add r8, r6, #0xf30
    add r3, r6, #0x328
    add lr, r3, #0x1c00
    mov r2, #0
    add r0, r0, #0x1c00
    add r9, r8, #0x1000
    add r12, r7, #0x1000
    add r3, r6, #0x1000
    b @L_02056324
@L_020562f0:
    ldr r8, [r0, r1]
    ldr r7, [r12, #0xf34]
    add r7, r8, r7
    str r7, [r0, r1]
    ldr r8, [r9, r1]
    ldr r7, [r12, #0xf38]
    add r7, r8, r7
    str r7, [r9, r1]
    ldr r7, [lr, r1]
    subs r7, r7, #1
    str r7, [lr, r1]
    beq @L_02056330
    add r2, r2, #1
@L_02056324:
    ldr r7, [r3, #0xf10]
    cmp r2, r7
    blo @L_020562f0
@L_02056330:
    mov r0, #0x30
    mul r0, r5, r0
    add r1, r6, r0
    add r1, r1, #0x1000
    ldr r1, [r1, #0xf28]
    cmp r1, #0
    addeq r1, r6, #0x23
    addeq r2, r1, #0x1f00
    ldreqsb r1, [r2, r0]
    biceq r1, r1, #0x10
    streqb r1, [r2, r0]
@L_0205635c:
    mla r0, r5, r4, r6
    add r0, r0, #0x1000
    ldr r1, [r0, #0xf30]
    ldr r2, [r0, #0xf2c]
    mov r0, r1, lsl #4
    mov r0, r0, asr #0x10
    str r0, [sp]
    mov r3, r2, lsl #4
    add r1, r6, #0x1000
    ldr r0, [r10]
    ldr r1, [r1, #0xf14]
    add r2, r5, #1
    mov r3, r3, asr #0x10
    bl func_02093524
@L_02056394:
    add r5, r5, #1
@L_02056398:
    cmp r5, #8
    blt @L_02056078
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_020563a8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x28
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r6, #0
    mov r4, r1
    strb r6, [r5, #0x38]
    tst r0, #1
    bne @L_020563e4
    orr r0, r0, #1
    str r0, [r5, #0x10]
    strb r6, [r5, #0x43]
    strb r6, [r5, #0x42]
    strb r6, [r5, #0x132]
    strb r6, [r5, #0x20e]
@L_020563e4:
    ldr r0, [sp, #0x48]
    cmp r2, #0
    strneb r2, [r5, #0x40]
    cmp r3, #0
    strneb r3, [r5, #0x41]
    cmp r0, #0
    strneb r0, [r5, #0x44]
    ldr r0, [sp, #0x4c]
    ldr r1, [sp, #0x58]
    cmp r0, #0
    strneb r0, [r5, #0x45]
    ldr r0, [sp, #0x50]
    cmp r0, #0
    strneb r0, [r5, #0x46]
    ldr r0, [sp, #0x54]
    cmp r0, #0
    strneb r0, [r5, #0x47]
    cmp r1, #0
    addne r0, r5, #0x1e00
    strneh r1, [r0, #0x8e]
    ldr r1, [sp, #0x5c]
    cmp r1, #0
    addne r0, r5, #0x1e00
    strneh r1, [r0, #0x90]
    ldr r1, [sp, #0x60]
    cmp r1, #0
    addne r0, r5, #0x1000
    strne r1, [r0, #0xc78]
    cmp r4, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r6, =data_020c46d4
    ldrsh r1, [r5, #0x3e]
    mov r8, #0
    ldr r0, [r6]
    add r2, sp, #0x20
    add r3, sp, #0x24
    str r8, [sp, #0x20]
    bl func_02097fcc
    ldrsh r1, [r5, #0x3e]
    ldr r9, [sp, #0x20]
    ldr r0, [r6]
    bl func_02090dcc
    stmia sp, {r0, r8}
    str r8, [sp, #8]
    mov r7, #1
    str r7, [sp, #0xc]
    str r8, [sp, #0x10]
    str r8, [sp, #0x14]
    str r7, [sp, #0x18]
    ldr r0, =data_020c46b4
    str r8, [sp, #0x1c]
    ldr r0, [r0]
    mov r1, r4
    mov r2, r9
    mov r3, #0x40
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r1, [sp, #0x24]
    mov r0, r9
    bl DC_FlushRange
    ldrsh r1, [r5, #0x3e]
    ldr r3, [sp, #0x24]
    ldr r0, [r6]
    mov r2, r9
    str r8, [sp]
    str r8, [sp, #4]
    str r8, [sp, #8]
    bl func_02097ef8
    str r8, [sp]
    ldrsh r1, [r5, #0x3a]
    ldr r0, [r6]
    mov r3, r8
    mov r2, r7
    bl func_020939c8
    ldrsb r0, [r5, #0x41]
    ldr r3, =data_020a6fc4
    ldr r1, [r5, #0x4c]
    sub r0, r0, #1
    add r0, r3, r0, lsl #2
    ldrsh r0, [r0, #2]
    ldr r12, [r5, #0x48]
    mov r2, r7
    add r0, r0, r1, asr #12
    add r0, r0, #7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsb r4, [r5, #0x41]
    ldrsh r1, [r5, #0x3a]
    ldr r0, [r6]
    sub r4, r4, #1
    mov r4, r4, lsl #2
    ldrsh r3, [r3, r4]
    add r3, r3, r12, asr #12
    add r3, r3, #0xa
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl func_02093524
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02054800::func_02056580()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r10, r0
    mov r11, r2
    mov r8, r3
    cmp r9, #1
    ldr r7, [sp, #0x2c]
    beq @L_020565ac
    cmp r9, #2
    beq @L_020565b8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020565ac:
    add r4, r10, #0x64
    mov r6, #6
    b @L_020565c0
@L_020565b8:
    add r4, r10, #0x140
    mov r6, #0xa
@L_020565c0:
    cmp r7, #0
    ldrsb r5, [r4, #0xd1]
    beq @L_02056600
    mov r2, #0
    strb r7, [r4, #0xcf]
    strb r2, [r4, #0xcd]
    ldrsb r1, [r4, #0xcf]
    sub r0, r2, #1
    cmp r1, r0
    moveq r1, #1
    streqb r1, [r4, #0xcd]
    ldreqsb r0, [r10, #0x41]
    moveq r11, r2
    cmpeq r0, r9
    subeq r0, r1, #2
    streqb r0, [r10, #0x40]
@L_02056600:
    ldr r0, [sp, #0x30]
    cmp r0, #0
    strneb r0, [r4, #0xd0]
    cmp r11, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x60
    mla r0, r5, r0, r4
    mov r1, r11
    bl STD_CompareString
    cmp r0, #0
    bne @L_02056700
    cmp r8, #0
    beq @L_02056700
    mov r0, #0x60
    mla r0, r5, r0, r4
    mov r1, r8
    add r0, r0, #0x20
    bl STD_CompareString
    cmp r0, #0
    bne @L_02056700
    cmp r7, #0
    beq @L_02056764
    mov r0, #0
    strb r7, [r4, #0xcf]
    strb r0, [r4, #0xcd]
    ldrsb r1, [r4, #0xcf]
    sub r0, r0, #1
    cmp r1, r0
    beq @L_02056688
    cmp r1, #1
    beq @L_020566a4
    cmp r1, #2
    beq @L_020566e8
    b @L_02056764
@L_02056688:
    mov r1, #1
    strb r1, [r4, #0xcd]
    ldrsb r0, [r10, #0x41]
    cmp r0, r9
    subeq r0, r1, #2
    streqb r0, [r10, #0x40]
    b @L_02056764
@L_020566a4:
    ldrsb r0, [r4, #0xd2]
    cmp r0, #0
    bne @L_02056764
    ldr r9, =data_020c46d4
    ldr r7, =0x7fff
@L_020566b8:
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r9]
    mov r3, r7
    add r2, r6, r5, lsl #1
    bl func_020934ac
    add r2, r6, #1
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r9]
    mov r3, r7
    add r2, r2, r5, lsl #1
    bl func_020934ac
    b @L_02056764
@L_020566e8:
    ldrsb r0, [r4, #0xd2]
    cmp r0, #0
    bne @L_02056764
    ldr r9, =data_020c46d4
    ldr r7, =0x318c
    b @L_020566b8
@L_02056700:
    eor r1, r5, #1
    mov r6, #0x60
    mla r0, r1, r6, r4
    mov r1, r11
    bl STD_CompareString
    cmp r0, #0
    bne @L_0205674c
    cmp r8, #0
    beq @L_0205674c
    eor r0, r5, #1
    mla r2, r0, r6, r4
    mov r1, r8
    add r0, r2, #0x20
    bl STD_CompareString
    cmp r0, #0
    eoreq r0, r5, #1
    addeq r0, r0, #1
    streqb r0, [r4, #0xd2]
    beq @L_02056764
@L_0205674c:
    eor r1, r5, #1
    mla r0, r1, r6, r4
    mov r1, r11
    bl STD_CopyString
    sub r0, r6, #0x61
    strb r0, [r4, #0xd2]
@L_02056764:
    ldrb r0, [sp, #0x34]
    mov r6, #0x60
    strb r0, [r4, #0xcc]
    ldrsb r0, [r4, #0xd2]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    eor r0, r5, #1
    bne @L_020567c0
    mla r3, r0, r6, r4
    mov r8, #0
    mov r7, #0x20
    mov r1, r8
    mov r2, r7
    add r0, r3, #0x20
    bl MI_CpuFill8
    eor r0, r5, #1
    mla r3, r0, r6, r4
    mov r1, r8
    mov r2, r7
    add r0, r3, #0x40
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020567c0:
    mla r2, r0, r6, r4
    mov r1, r8
    add r0, r2, #0x20
    bl STD_CopyString
    ldr r1, [sp, #0x28]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    eor r0, r5, #1
    mla r2, r0, r6, r4
    add r0, r2, #0x40
    bl STD_CopyString
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_020567fc()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r0, [r4, #0x10]
    ldr r3, [r4, #0x2c]
    orr r2, r0, #0x100
    add r0, r4, #0x1000
    mov r1, #2
    mov r7, #0
    strb r1, [r0, #0xe98]
    str r3, [r0, #0xe94]
    ldr r5, =data_020c46d4
    str r2, [r4, #0x10]
    mov r6, #0xe
    strb r7, [r0, #0xe99]
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    str r7, [sp]
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r2, r6
    mov r3, r7
    bl func_020939c8
    mov r3, #0x64
    str r3, [sp]
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093afc
    add r0, sp, #4
    str r0, [sp]
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r2, r6
    add r3, sp, #8
    bl func_02093e2c
    ldr r1, [sp, #8]
    add r0, r4, #0x1e00
    strh r1, [r0, #0x9a]
    ldrsb r1, [r0, #0x98]
    ldr r0, [sp, #4]
    bl func_0202273c
    add r1, r4, #0x1e00
    strh r0, [r1, #0x9c]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_020568c4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r6, r1
    mov r8, #0x30
    mla r0, r6, r8, r7
    add r0, r0, #0x1000
    ldr r4, =data_020c46d4
    ldr r1, [r0, #0xf1c]
    ldr r0, [r4]
    mov r5, r2
    bl func_02097aa0
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mla r0, r6, r8, r7
    ldr r1, [r7, #0x10]
    add r0, r0, #0x1000
    orr r1, r1, #0x100
    str r1, [r7, #0x10]
    ldr r3, [r0, #0xf1c]
    add r0, r7, #0x1000
    mov r8, #0
    mov r6, #0xe
    str r3, [r0, #0xe94]
    ldrsh r1, [r7, #0x3a]
    strb r8, [r0, #0xe99]
    strb r5, [r0, #0xe98]
    ldr r0, [r4]
    mov r2, r6
    and r3, r3, #0xff
    bl func_02093188
    str r8, [sp]
    ldrsh r1, [r7, #0x3a]
    ldr r0, [r4]
    mov r2, r6
    mov r3, r8
    bl func_020939c8
    mov r3, #0x64
    str r3, [sp]
    ldrsh r1, [r7, #0x3a]
    ldr r0, [r4]
    mov r2, r6
    bl func_02093afc
    add r0, sp, #4
    str r0, [sp]
    ldrsh r1, [r7, #0x3a]
    ldr r0, [r4]
    mov r2, r6
    add r3, sp, #8
    bl func_02093e2c
    ldr r1, [sp, #8]
    add r0, r7, #0x1e00
    strh r1, [r0, #0x9a]
    ldrsb r1, [r0, #0x98]
    ldr r0, [sp, #4]
    bl func_0202273c
    add r1, r7, #0x1e00
    strh r0, [r1, #0x9c]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_020569bc()
{
    add r0, r0, #0x1e00
    ldrsb r0, [r0, #0x99]
    bx lr
}

asm void UnkClass_02054800::func_020569c8()
{
    ldr r1, [r0, #0x10]
    orr r1, r1, #0x200
    str r1, [r0, #0x10]
    bx lr
}

asm void UnkClass_02054800::func_020569d8()
{
    add r0, r0, #0x1e00
    ldrh r0, [r0, #0x9e]
    bx lr
}

asm void UnkClass_02054800::func_020569e4()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r0
    add r12, r4, #0x1e00
    ldrsh r5, [r12, #0x90]
    mov r6, r3
    str r5, [sp]
    ldrsh r3, [r12, #0x8e]
    add r12, r4, #0x7c
    mov r5, r2
    mov r2, r1
    add r1, r12, #0x1c00
    bl func_02056ac8
    add r1, r4, #0xbc
    mov r0, r5
    add r1, r1, #0x400
    mov r2, #0x40
    bl MI_CpuCopy8
    mov r0, r6
    add r1, r4, #0x21c
    mov r2, #0x2a0
    bl MI_CpuCopy8
    add r0, r4, #0x1000
    mov r6, #2
    ldr r5, =data_020c46d4
    ldr r1, [r0, #0xc70]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093d1c
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r3, r6
    mov r2, #3
    bl func_02093928
    ldrsb r0, [r4, #0x43]
    cmp r0, #0
    movne r0, #0
    strneb r0, [r4, #0x43]
    ldr r0, [r4, #0x10]
    tst r0, #1
    bne @L_02056aa4
    mov r1, #0
    orr r0, r1, #1
    str r0, [r4, #0x10]
    strb r1, [r4, #0x43]
    strb r1, [r4, #0x42]
    strb r1, [r4, #0x132]
    strb r1, [r4, #0x20e]
@L_02056aa4:
    ldr r1, [r4, #0x10]
    add r0, r4, #0x1000
    orr r1, r1, #2
    mov r2, #1
    strb r2, [r0, #0xe81]
    str r1, [r4, #0x10]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_02056ac8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x200
    add r5, sp, #0
    mov r10, r1
    mov r0, r5
    mov r1, r2
    mov r9, r3
    ldr r8, [sp, #0x228]
    mov r4, #0
    bl STD_CopyString
    ldrsb r0, [sp]
    mov r7, r4
    mov r6, r7
    cmp r0, #0
    beq @L_02056be4
    mov r11, #0xc
@L_02056b08:
    cmp r0, #0
    beq @L_02056b90
    cmp r0, #0xa
    beq @L_02056b24
    cmp r0, #0xc
    beq @L_02056b38
    b @L_02056b44
@L_02056b24:
    add r6, r6, #1
    mov r7, #0
    cmp r6, r8
    blt @L_02056b90
    strb r11, [r5]
@L_02056b38:
    mov r7, #0
    mov r6, r7
    b @L_02056b90
@L_02056b44:
    ldr r0, =data_020c46a8
    mov r1, r5
    ldr r0, [r0]
    bl _ZN8TextFont12GetCharWidthEPKc
    add r1, r7, r0
    cmp r1, r9
    blt @L_02056b84
    add r6, r6, #1
    cmp r6, r8
    movge r1, #0xc
    strgeb r1, [r10]
    movlt r1, #0xa
    strltb r1, [r10]
    mov r7, r4
    movge r6, r4
    add r10, r10, #1
@L_02056b84:
    cmp r0, #0
    addne r0, r0, #1
    addne r7, r7, r0
@L_02056b90:
    ldrsb r1, [r5]
    and r0, r1, #0xff
    cmp r0, #0x81
    blo @L_02056ba8
    cmp r0, #0x9f
    bls @L_02056bb8
@L_02056ba8:
    cmp r0, #0xe0
    blo @L_02056bc0
    cmp r0, #0xfc
    bhi @L_02056bc0
@L_02056bb8:
    mov r0, #1
    b @L_02056bc4
@L_02056bc0:
    mov r0, #0
@L_02056bc4:
    cmp r0, #0
    strneb r1, [r10], #1
    addne r5, r5, #1
    ldrsb r0, [r5]
    strb r0, [r10], #1
    ldrsb r0, [r5, #1]!
    cmp r0, #0
    bne @L_02056b08
@L_02056be4:
    strb r0, [r10]
    add sp, sp, #0x200
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02056bf4()
{
    add r2, r0, #0x1e00
    ldrsb r2, [r2, #0x82]
    add r0, r0, #0x1000
    orr r1, r2, r1
    strb r1, [r0, #0xe82]
    bx lr
}

asm void UnkClass_02054800::func_02056c0c()
{
    add r2, r0, #0x1e00
    ldrsb r2, [r2, #0x82]
    mvn r1, r1
    mov r1, r1, lsl #0x18
    and r1, r2, r1, asr #24
    add r0, r0, #0x1000
    strb r1, [r0, #0xe82]
    bx lr
}

asm void UnkClass_02054800::func_02056c2c()
{
    add r0, r0, #0x1000
    str r1, [r0, #0xc78]
    bx lr
}

asm void UnkClass_02054800::func_02056c38()
{
    cmp r1, #0
    ldr r1, [r0, #0x10]
    orrne r1, r1, #1
    biceq r1, r1, #1
    str r1, [r0, #0x10]
    bx lr
}

asm void UnkClass_02054800::func_02056c50()
{
    cmp r1, #4
    mov r1, #1
    strb r1, [r0, #0x43]
    strneb r1, [r0, #0x38]
    bx lr
}

asm void UnkClass_02054800::func_02056c64()
{
    ldr r0, [r0, #0x10]
    bx lr
}

asm void UnkClass_02054800::func_02056c6c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r5, #0
    mov r10, r0
    mov r9, r5
    ldr r4, =data_020c46d4
    b @L_02056ca4
@L_02056c88:
    add r0, r10, r9, lsl #2
    ldr r1, [r0, #0x14]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r5
    bl func_02097ca8
    add r9, r9, #1
@L_02056ca4:
    cmp r9, #8
    blt @L_02056c88
    mov r9, #0
    mov r1, r9
    add r0, r10, #0x38
    mov r2, #0x1e4
    bl MI_CpuFill8
    ldr r2, =0x1c78
    mov r1, r9
    add r0, r10, #0x21c
    bl MI_CpuFill8
    ldr r4, =data_020c46d4
    mov r6, #1
    ldr r0, [r4]
    mov r1, #0xf
    mov r2, r6
    bl func_020920c4
    strh r0, [r10, #0x3a]
    mov r1, #3
    ldr r0, [r4]
    mov r2, r1
    bl func_020982a0
    add r1, r10, #0x1c00
    strh r0, [r1, #0x6e]
    ldrsh r1, [r1, #0x6e]
    ldr r0, [r4]
    mov r2, r9
    mov r3, r9
    bl func_02097ca8
    ldr r0, [r4]
    mov r2, r6
    mov r1, #0x10
    bl func_020920c4
    add r2, r10, #0x1c00
    strh r0, [r2, #0x6c]
    ldrsh r1, [r2, #0x6c]
    ldrsh r2, [r2, #0x6e]
    ldr r0, [r4]
    and r2, r2, #0xff
    bl func_020922fc
    add r1, r10, #0x1c00
    ldrsh r1, [r1, #0x6c]
    ldr r0, [r4]
    mov r2, #0x36
    bl func_02092544
    add r6, r10, #0x1c00
    b @L_02056d84
@L_02056d60:
    mov r0, r9, lsl #0x13
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsh r1, [r6, #0x6c]
    ldr r0, [r4]
    mov r3, r5
    add r2, r9, #1
    bl func_02093734
    add r9, r9, #1
@L_02056d84:
    cmp r9, #8
    blt @L_02056d60
    add r0, r10, #0x1c00
    ldr r4, =data_020c46d4
    mov r6, #0x40
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r4]
    mov r2, r6
    mov r3, #8
    bl func_02092aac
    add r0, r10, #0x1c00
    ldr r5, =0x7fff
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r4]
    mov r2, r5
    bl func_02092808
    add r0, r10, #0x1c00
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r4]
    mov r2, #0x32
    mov r3, #0x64
    bl func_02092ed4
    ldr r0, [r4]
    mov r8, #3
    mov r1, r8
    mov r7, #1
    mov r2, r7
    bl func_020982a0
    strh r0, [r10, #0x3e]
    ldrsh r1, [r10, #0x3e]
    ldr r0, [r4]
    mov r9, #0
    mov r2, r9
    mov r3, r9
    bl func_02097ca8
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r7
    ldrsh r3, [r10, #0x3e]
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r7
    mov r3, r9
    bl func_02093734
    mov r3, r6
    mov r6, #0x10
    str r6, [sp]
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r7
    bl func_020936b4
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r7
    mov r3, #0x34
    bl func_02093368
    mov r3, r5
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r7
    bl func_020934ac
    ldr r3, [r10, #0x14]
    mov r5, #2
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    mov r3, #0x35
    bl func_02093368
    ldr r3, [r10, #0x18]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r8
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r8
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r8
    mov r3, #0x36
    bl func_02093368
    mov r11, #4
    ldr r0, [r4]
    mov r1, r11
    mov r2, r7
    bl func_020920c4
    strh r0, [r10, #0x3c]
    ldr r3, [r10, #0x1c]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r7
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r7
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r7
    mov r3, #0x38
    bl func_02093368
    add r0, sp, #4
    str r0, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    add r3, sp, #8
    mov r2, r7
    bl func_02093e2c
    ldr r1, [r10, #0x1c]
    ldr r0, [r4]
    and r3, r1, #0xff
    ldrsh r1, [r10, #0x3c]
    mov r2, r5
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r5
    mov r3, #0x38
    bl func_02093368
    str r7, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r3, r6
    mov r2, r5
    bl func_0209386c
    str r9, [sp]
    ldr r3, [sp, #8]
    ldrsh r1, [r10, #0x3c]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    mov r2, r5
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r3, [r10, #0x1c]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r8
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r8
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r8
    mov r3, #0x38
    bl func_02093368
    str r7, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r8
    mov r3, #0x20
    bl func_0209386c
    ldr r0, [sp, #4]
    mov r2, r8
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r3, r9
    bl func_02093524
    ldr r3, [r10, #0x1c]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r11
    and r3, r3, #0xff
    bl func_02093188
    str r9, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r11
    mov r3, r9
    bl func_020939c8
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r3, #0x38
    mov r2, r11
    bl func_02093368
    str r7, [sp]
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r11
    mov r3, #0x30
    bl func_0209386c
    ldr r0, [sp, #4]
    mov r2, r11
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldr r3, [sp, #8]
    ldrsh r1, [r10, #0x3c]
    mov r3, r3, lsl #0x10
    ldr r0, [r4]
    mov r3, r3, asr #0x10
    bl func_02093524
    mov r7, r5
    mov r6, r9
    mov r8, #0x39
    mov r5, #0x3a
    b @L_02057184
@L_02057120:
    ldrsh r1, [r10, #0x3a]
    mov r2, r9, lsl #1
    ldr r0, [r4]
    mov r3, r8
    add r2, r2, #6
    bl func_02093368
    mov r2, r9, lsl #1
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    add r2, r2, #6
    mov r3, r7
    bl func_02093928
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r9, lsl #1
    add r2, r2, #7
    mov r3, r5
    bl func_02093368
    ldr r0, [r4]
    ldrsh r1, [r10, #0x3a]
    mov r2, r9, lsl #1
    add r2, r2, #7
    mov r3, r7
    bl func_02093928
    add r9, r9, #1
@L_02057184:
    cmp r9, #4
    blt @L_02057120
    ldr r4, =data_020c46d4
    ldr r3, [r10, #0x2c]
    mov r5, #0xe
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    and r3, r3, #0xff
    bl func_02093188
    str r6, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    mov r3, r6
    bl func_020939c8
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    mov r3, #0x33
    bl func_02093368
    ldr r0, [r4]
    mov r1, #0xfa
    mov r2, #1
    bl func_020920c4
    add r1, r10, #0x1000
    str r0, [r1, #0xc70]
    mov r5, #3
    ldr r0, [r4]
    mov r1, #5
    mov r2, r5
    bl func_020982a0
    mov r1, r0
    add r0, r10, #0x1000
    str r1, [r0, #0xc74]
    ldr r0, [r4]
    mov r2, r6
    mov r3, r6
    bl func_02097ca8
    add r1, r10, #0x1000
    ldr r0, [r4]
    ldr r1, [r1, #0xc70]
    mov r2, #0x37
    bl func_02092544
    mov r1, #0xa
    add r0, r10, #0x1000
    str r1, [r0, #0xc78]
    add r0, r10, #0x1e00
    mov r1, #0x32
    strh r1, [r0, #0x88]
    mov r1, #0xf0
    strh r1, [r0, #0x8e]
    strh r5, [r0, #0x90]
    mov r5, #2
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r5
    bl func_02093d1c
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r5
    bl func_02093d1c
    add r1, r10, #0x1c00
    ldrsh r1, [r1, #0x6c]
    ldr r0, [r4]
    mov r2, r5
    bl func_02093d1c
    add r1, r10, #0x1000
    ldr r0, [r4]
    ldr r1, [r1, #0xc70]
    mov r2, r5
    bl func_02093d1c
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_020572b8()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_02057474
    ldr r5, =data_020c46d4
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    bl func_02092270
    ldrsh r1, [r4, #0x3c]
    ldr r0, [r5]
    bl func_02092270
    add r0, r4, #0x1c00
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r5]
    bl func_02092270
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xc70]
    bl func_02092270
    mov r6, #0
    b @L_0205731c
@L_02057308:
    add r0, r4, r6, lsl #2
    ldr r1, [r0, #0x14]
    ldr r0, [r5]
    bl func_02097e58
    add r6, r6, #1
@L_0205731c:
    cmp r6, #8
    blt @L_02057308
    add r0, r4, #0x1c00
    ldr r5, =data_020c46d4
    ldrsh r1, [r0, #0x6e]
    ldr r0, [r5]
    bl func_02097b3c
    ldrsh r1, [r4, #0x3e]
    ldr r0, [r5]
    bl func_02097b3c
    add r0, r4, #0x1000
    ldr r1, [r0, #0xc74]
    ldr r0, [r5]
    bl func_02097b3c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205735c()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldr r2, [r4, #0x10]
    mov lr, #0
    mov r12, #1
    add r0, r4, #0x1000
    bic r2, r2, #4
    cmp r1, #0
    strb lr, [r0, #0xe81]
    strb lr, [r0, #0xe82]
    addeq sp, sp, #0x14
    str r2, [r4, #0x10]
    strb r12, [r4, #0x40]
    strb r12, [r4, #0x41]
    strb r12, [r4, #0x44]
    strb r12, [r4, #0x45]
    strb r12, [r4, #0x46]
    strb r12, [r4, #0x47]
    str lr, [r4, #0x58]
    str lr, [r4, #0x5c]
    str lr, [r4, #0x60]
    ldmeqia sp!, {r3, r4, pc}
    ldr r3, =data_020c47b4
    ldr r1, =data_020ae5a8
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020573e8
    str lr, [sp]
    str lr, [sp, #4]
    str lr, [sp, #8]
    str r12, [sp, #0xc]
    add r2, r4, #0x58
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020573e8:
    ldr r3, =data_020c47b4
    ldr r1, =data_020ae5c0
    ldr r0, [r3]
    cmp r0, #0
    beq @L_02057420
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r4, #0x5c
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02057420:
    ldr r3, =data_020c47b4
    ldr r1, =data_020ae5d8
    ldr r0, [r3]
    cmp r0, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, pc}
    mov r2, #0
    str r2, [sp]
    str r2, [sp, #4]
    str r2, [sp, #8]
    mov r12, #1
    str r12, [sp, #0xc]
    add r2, r4, #0x60
    str r12, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, pc}
}

asm void UnkClass_02054800::func_02057474()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, r0
    mov r9, #0
    mov r6, #2
    ldr r5, =data_020c46d4
    str r9, [r4, #0x10]
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r2, r6
    mov r8, r9
    bl func_02093d1c
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r3, r6
    mov r2, #3
    bl func_02093928
    ldrsh r1, [r4, #0x3c]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093d1c
    b @L_020574fc
@L_020574c8:
    ldrsh r1, [r4, #0x3a]
    mov r2, r9, lsl #1
    ldr r0, [r5]
    mov r3, r6
    add r2, r2, #6
    bl func_02093928
    mov r2, r9, lsl #1
    ldrsh r1, [r4, #0x3a]
    ldr r0, [r5]
    mov r3, r6
    add r2, r2, #7
    bl func_02093928
    add r9, r9, #1
@L_020574fc:
    cmp r9, #4
    blt @L_020574c8
    ldr r5, =data_020c46d4
    add r1, r4, #0x1000
    mov r6, #2
    ldr r0, [r5]
    ldr r1, [r1, #0xc70]
    mov r2, r6
    bl func_02093d1c
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xc70]
    mov r2, r6
    bl func_02092d3c
    add r0, r4, #0x1c00
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093d1c
    add r1, r4, #0x1c00
    ldrsh r1, [r1, #0x6c]
    ldr r0, [r5]
    mov r2, r6
    bl func_02092d3c
    mov r9, #0
    ldr r5, =data_020c47b4
    b @L_0205758c
@L_02057568:
    add r0, r4, r9, lsl #2
    ldr r1, [r0, #0x58]
    cmp r1, #0
    beq @L_02057580
    mov r0, r5
    bl _ZN8GameHeap4FreeEPv
@L_02057580:
    add r0, r4, r9, lsl #2
    str r8, [r0, #0x58]
    add r9, r9, #1
@L_0205758c:
    cmp r9, #3
    blt @L_02057568
    mov r9, #0
    mov r5, #6
    ldr r6, =data_020c46d4
    b @L_020575f8
@L_020575a4:
    mla r7, r9, r5, r4
    mov r10, r8
    b @L_020575ec
@L_020575b0:
    add r0, r7, r10, lsl #1
    add r0, r0, #0x100
    ldrsh r1, [r0, #0x24]
    cmp r1, #0
    beq @L_020575cc
    ldr r0, [r6]
    bl func_02097b3c
@L_020575cc:
    add r0, r7, r10, lsl #1
    add r0, r0, #0x200
    ldrsh r1, [r0]
    cmp r1, #0
    beq @L_020575e8
    ldr r0, [r6]
    bl func_02097b3c
@L_020575e8:
    add r10, r10, #1
@L_020575ec:
    cmp r10, #3
    blt @L_020575b0
    add r9, r9, #1
@L_020575f8:
    cmp r9, #2
    blt @L_020575a4
    mov r5, #0xdc
    mov r1, r8
    mov r2, r5
    add r0, r4, #0x64
    bl MI_CpuFill8
    mov r1, r8
    mov r2, r5
    add r0, r4, #0x140
    bl MI_CpuFill8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_02057630()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r0
    ldrsb r0, [r10, #0x38]
    mov r11, r1
    mov r5, #2
    cmp r0, #0
    ldr r4, =data_020c46d4
    mov r8, #1
    beq @L_02057678
    ldr r0, [r10, #0x10]
    tst r0, #0x80
    beq @L_02057678
    tst r0, #0x20
    beq @L_02057678
    tst r0, #2
    biceq r0, r0, #1
    streq r0, [r10, #0x10]
@L_02057678:
    ldr r0, [r10, #0x10]
    ldrsh r1, [r10, #0x3a]
    tst r0, #1
    ldr r0, [r4]
    mov r2, r5
    bne @L_020576d4
    bl func_02093d1c
    ldrsh r1, [r10, #0x3c]
    ldr r0, [r4]
    mov r2, r5
    bl func_02093d1c
    add r1, r10, #0x1000
    ldr r0, [r4]
    ldr r1, [r1, #0xc70]
    mov r2, r5
    bl func_02093d1c
    add r0, r10, #0x1c00
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r4]
    mov r2, r5
    bl func_02093d1c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020576d4:
    mov r3, r8
    bl func_02093ca8
    add r1, r10, #0x1000
    ldr r0, [r4]
    ldr r1, [r1, #0xc70]
    mov r2, r5
    mov r3, r8
    bl func_02093ca8
    ldr r1, [r10, #0x10]
    mov r0, r10
    bic r2, r1, #0xc0
    add r1, r10, #0x38
    str r2, [r10, #0x10]
    bl func_02058858
    cmp r0, #0
    ldrne r0, [r10, #0x10]
    orrne r0, r0, #0x40
    strne r0, [r10, #0x10]
    bne @L_02057734
    ldrsb r0, [r10, #0x43]
    cmp r0, #0
    ldrne r0, [r10, #0x10]
    orrne r0, r0, #0x80
    strne r0, [r10, #0x10]
@L_02057734:
    ldr r0, [r10, #0x10]
    mov r7, #0
    tst r0, #0xc0
    addne r0, r10, #0x1000
    mov r9, #2
    ldr r4, =data_020c46d4
    strneb r8, [r0, #0xe80]
    bne @L_02057768
    ldrsb r0, [r10, #0x38]
    cmp r0, #0
    add r0, r10, #0x1000
    strneb r8, [r0, #0xe80]
    streqb r7, [r0, #0xe80]
@L_02057768:
    ldrsb r0, [r10, #0x40]
    ldr r2, [r10, #0x48]
    ldr r1, [r10, #0x4c]
    cmp r0, #0
    mov r5, r2, asr #0xc
    mov r6, r1, asr #0xc
    ble @L_020578a0
    ldrsb r0, [r10, #0x38]
    cmp r0, #0
    bne @L_020578a0
    add r0, r10, #0x100
    ldrsb r0, [r0, #0x33]
    cmp r0, #0
    addle r0, r10, #0x200
    ldrlesb r0, [r0, #0xf]
    cmple r0, #0
    ble @L_020578a0
    str r8, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r8
    mov r3, r9
    bl func_0209386c
    str r8, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r9
    mov r3, r9
    bl func_0209386c
    str r7, [sp]
    ldrsb r3, [r10, #0x40]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r9
    sub r3, r3, #1
    bl func_020939c8
    ldrsb r0, [r10, #0x41]
    ldr r7, =data_020a6fc4
    mov r2, r9
    sub r0, r0, #1
    add r0, r7, r0, lsl #2
    ldrsh r0, [r0, #2]
    add r0, r6, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsb r3, [r10, #0x41]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    sub r3, r3, #1
    mov r3, r3, lsl #2
    ldrsh r3, [r7, r3]
    add r3, r5, r3
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl func_02093524
    ldrsb r0, [r10, #0x41]
    mov r2, r8
    sub r0, r0, #1
    add r0, r7, r0, lsl #2
    ldrsh r0, [r0, #2]
    add r0, r6, r0
    add r0, r0, #7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsb r3, [r10, #0x41]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    sub r3, r3, #1
    mov r3, r3, lsl #2
    ldrsh r3, [r7, r3]
    add r3, r5, r3
    add r3, r3, #0xa
    mov r3, r3, lsl #0x10
    mov r3, r3, asr #0x10
    bl func_02093524
    b @L_020578c8
@L_020578a0:
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r3, r9
    mov r2, #1
    bl func_02093928
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, r9
    mov r3, r9
    bl func_02093928
@L_020578c8:
    ldr r0, [r10, #0x10]
    mov r1, #0
    tst r0, #4
    ldr r4, =data_020c46d4
    beq @L_020578ec
    add r0, r10, #0x1e00
    ldrsb r0, [r0, #0x82]
    tst r0, #0x20
    strne r1, [r10, #0x34]
@L_020578ec:
    ldr r0, [r10, #0x10]
    tst r0, #0x40
    addeq r0, r10, #0x1e00
    ldreqsb r0, [r0, #0x81]
    cmpeq r0, #4
    bne @L_02057974
    ldr r0, [r10, #0x34]
    cmp r0, #0
    beq @L_0205792c
    mov r0, #1
    str r0, [sp]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, #3
    mov r3, #2
    bl func_0209386c
@L_0205792c:
    ldr r0, [r10, #0x34]
    and r0, r0, #0x1f
    mov r0, r0, asr #1
    rsb r1, r0, #0x1f
    orr r0, r1, r1, lsl #5
    orr r0, r0, r1, lsl #10
    mov r2, r0, lsl #0x10
    mov r3, r2, lsr #0x10
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, #3
    bl func_020934ac
    add r0, r10, #0x1000
    ldr r1, [r10, #0x34]
    ldr r0, [r0, #0xf10]
    add r0, r1, r0
    str r0, [r10, #0x34]
    b @L_0205798c
@L_02057974:
    str r1, [r10, #0x34]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r4]
    mov r2, #3
    mov r3, #2
    bl func_02093928
@L_0205798c:
    ldrsb r1, [r10, #0x46]
    ldr r3, =data_020a6fcc
    ldr r0, =data_020c46d4
    sub r1, r1, #1
    add r1, r3, r1, lsl #2
    ldrsh r1, [r1, #2]
    mov r2, #3
    str r1, [sp]
    ldrsb r4, [r10, #0x46]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r0]
    sub r4, r4, #1
    mov r4, r4, lsl #2
    ldrsh r3, [r3, r4]
    bl func_02093524
    ldrsb r0, [r10, #0x38]
    ldrsh r2, [r10, #0x3a]
    mov r3, #1
    cmp r0, #0
    movne r0, #1
    strneb r0, [r10, #0x131]
    strneb r0, [r10, #0x20d]
    ldr r0, [r10, #0x10]
    add r1, r10, #0x64
    bic r4, r0, #0x30
    mov r0, r10
    str r4, [r10, #0x10]
    bl func_02058d74
    mov r3, #1
    orr r4, r0, #0
    ldrsh r2, [r10, #0x3a]
    mov r0, r10
    add r1, r10, #0x140
    sub r3, r3, #2
    bl func_02058d74
    orrs r0, r4, r0
    ldrne r0, [r10, #0x10]
    orrne r0, r0, #0x10
    strne r0, [r10, #0x10]
    bne @L_02057a40
    ldrsb r0, [r10, #0x38]
    cmp r0, #0
    ldrne r0, [r10, #0x10]
    orrne r0, r0, #0x20
    strne r0, [r10, #0x10]
@L_02057a40:
    ldr r2, [r10, #0x10]
    ldr r1, =gGameState
    tst r2, #0x100
    ldr r0, =data_020c46d4
    beq @L_02057d60
    tst r2, #4
    beq @L_02057d60
    tst r2, #2
    beq @L_02057d60
    ldrb r0, [r1, #0x4f3]
    mov r3, #0x80
    mov r4, #0x40
    cmp r0, #0
    ldrb r0, [r1, #0x4f3]
    moveq r3, #2
    cmp r0, #0
    add r0, r10, #0x3e00
    ldrh r2, [r0, #0x78]
    moveq r4, #0x400
    orr r0, r4, r3
    tst r2, r0
    beq @L_02057b24
    ldrb r0, [r1, #0x4f3]
    mov r2, #0x40
    cmp r0, #0
    add r0, r10, #0x3e00
    ldrh r0, [r0, #0x78]
    moveq r2, #0x400
    tst r0, r2
    addne r0, r10, #0x1e00
    ldrnesb r2, [r0, #0x99]
    addne r0, r10, #0x1000
    subne r2, r2, #1
    strneb r2, [r0, #0xe99]
    ldrb r0, [r1, #0x4f3]
    mov r1, #0x80
    cmp r0, #0
    add r0, r10, #0x3e00
    ldrh r0, [r0, #0x78]
    moveq r1, #2
    tst r0, r1
    addne r0, r10, #0x1e00
    ldrnesb r1, [r0, #0x99]
    addne r0, r10, #0x1000
    addne r1, r1, #1
    strneb r1, [r0, #0xe99]
    add r0, r10, #0x1e00
    ldrsb r2, [r0, #0x99]
    ldrsb r1, [r0, #0x98]
    add r0, r2, r1
    bl func_0202273c
    add r0, r10, #0x1000
    strb r1, [r0, #0xe99]
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    b @L_02057bcc
@L_02057b24:
    add r0, r10, #0x3000
    ldr r0, [r0, #0xe98]
    cmp r0, #0
    beq @L_02057bcc
    add r4, r10, #0x1e00
    ldrh r1, [r4, #0x9c]
    ldrsb r0, [r4, #0x98]
    ldrh r2, [r4, #0x9a]
    mov r9, #0
    mul r0, r1, r0
    rsb r7, r2, #0xf8
    rsb r8, r0, #0x80
    b @L_02057bc0
@L_02057b58:
    ldrh r2, [r4, #0x9a]
    mov r0, r10
    mov r1, #1
    add r2, r7, r2
    str r2, [sp]
    ldrh r11, [r4, #0x9c]
    mov r2, r7
    mov r3, r8
    add r11, r8, r11
    str r11, [sp, #4]
    bl func_0205495c
    cmp r0, #0
    beq @L_02057bb4
    add r0, r10, #0x1e00
    ldrsb r0, [r0, #0x99]
    cmp r0, r9
    beq @L_02057ba8
    ldr r0, =data_020c5e40
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_02057ba8:
    add r0, r10, #0x1000
    strb r9, [r0, #0xe99]
    b @L_02057bcc
@L_02057bb4:
    ldrh r0, [r4, #0x9c]
    add r9, r9, #1
    add r8, r8, r0
@L_02057bc0:
    ldrsb r0, [r4, #0x98]
    cmp r9, r0
    blt @L_02057b58
@L_02057bcc:
    mov r0, #0x80
    str r0, [sp]
    ldr r7, =data_020c46d4
    mov r4, #0xe
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r7]
    mov r2, r4
    mov r3, #0xf8
    bl func_02093524
    mov r11, #0
    str r11, [sp]
    add r0, r10, #0x1e00
    ldrsh r1, [r10, #0x3a]
    ldrsb r3, [r0, #0x99]
    ldr r0, [r7]
    mov r2, r4
    bl func_020939c8
    mov r2, r4
    mov r4, #1
    str r4, [sp]
    ldr r0, [r7]
    ldrsh r1, [r10, #0x3a]
    mov r8, #2
    mov r3, r8
    bl func_0209386c
    ldr r0, [r7]
    mov r3, r8
    ldrsh r1, [r10, #0x3a]
    mov r2, #3
    bl func_02093928
    add r0, r10, #0x3000
    ldr r0, [r0, #0xe9c]
    cmp r0, #0
    beq @L_02057cd4
    add r4, r10, #0x1e00
    ldrh r1, [r4, #0x9c]
    ldrsb r0, [r4, #0x98]
    ldrh r2, [r4, #0x9a]
    mov r9, r11
    mul r0, r1, r0
    rsb r7, r2, #0xf8
    rsb r8, r0, #0x80
    b @L_02057cc4
@L_02057c78:
    ldrh r2, [r4, #0x9a]
    mov r0, r10
    mov r1, #4
    add r2, r7, r2
    str r2, [sp]
    ldrh r12, [r4, #0x9c]
    mov r2, r7
    mov r3, r8
    add r12, r8, r12
    str r12, [sp, #4]
    bl func_0205495c
    cmp r0, #0
    addne r0, r10, #0x1000
    strneb r9, [r0, #0xe99]
    movne r11, #1
    bne @L_02057d24
    ldrh r0, [r4, #0x9c]
    add r9, r9, #1
    add r8, r8, r0
@L_02057cc4:
    ldrsb r0, [r4, #0x98]
    cmp r9, r0
    blt @L_02057c78
    b @L_02057d24
@L_02057cd4:
    ldr r1, =gGameState
    ldrb r0, [r1, #0x4f3]
    cmp r0, #0
    add r0, r10, #0x3e00
    ldrh r0, [r0, #0x78]
    moveq r4, #0x10
    tst r0, r4
    movne r11, #1
    bne @L_02057d24
    ldrb r0, [r1, #0x4f3]
    mov r1, #2
    cmp r0, #0
    add r0, r10, #0x3e00
    ldrh r0, [r0, #0x78]
    moveq r1, #0x80
    tst r0, r1
    movne r11, #1
    subne r1, r11, #2
    addne r0, r10, #0x1000
    strneb r1, [r0, #0xe99]
@L_02057d24:
    cmp r11, #0
    ldr r0, =data_020c46d4
    beq @L_02057d74
    ldr r1, [r10, #0x10]
    mov r2, #0xe
    bic r1, r1, #0x100
    str r1, [r10, #0x10]
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r0]
    mov r3, #2
    bl func_02093928
    ldr r0, =data_020c5e40
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    b @L_02057d74
@L_02057d60:
    ldrsh r1, [r10, #0x3a]
    ldr r0, [r0]
    mov r2, #0xe
    mov r3, #2
    bl func_02093928
@L_02057d74:
    ldr r4, =data_020c46d4
    add r1, r10, #0x1000
    add r2, r5, #0xc
    add r0, r6, #0x12
    mov r2, r2, lsl #0x10
    mov r3, r0, lsl #0x10
    ldr r0, [r4]
    ldr r1, [r1, #0xc70]
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_02093bf4
    add r0, r10, #0x1c00
    add r2, r5, #0xc
    add r1, r6, #0x12
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    ldrsh r1, [r0, #0x6c]
    ldr r0, [r4]
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_02093bf4
    ldr r0, [r10, #0x10]
    tst r0, #0x50
    bne @L_02057dec
    tst r0, #2
    beq @L_02057dec
    mov r0, r10
    mov r2, r11
    add r1, r10, #0x21c
    bl func_02057e80
@L_02057dec:
    ldr r0, [r10, #0x10]
    tst r0, #0x200
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r10, #0x3e00
    ldrh r0, [r0, #0x78]
    cmp r0, #0
    bne @L_02057e20
    add r0, r10, #0x3000
    ldr r0, [r0, #0xe98]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02057e20:
    add r2, r10, #0x1e00
    add r1, r10, #0x3e00
    add r0, r10, #0x3000
    ldr r3, [r0, #0xe98]
    ldrh r4, [r2, #0x9e]
    ldrh r1, [r1, #0x78]
    add r0, r10, #0x9e
    cmp r3, #0
    add r3, r0, #0x1e00
    orr r0, r4, r1
    strh r0, [r2, #0x9e]
    ldrneh r0, [r3]
    orrne r0, r0, #0x4000
    strneh r0, [r3]
    ldr r0, [r10, #0x10]
    bic r0, r0, #0x200
    str r0, [r10, #0x10]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02057e80()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x12c
    mov r4, r1
    add r1, r4, #0x1c00
    ldrsb r1, [r1, #0x64]
    mov r8, r0
    mov r7, r2
    cmp r1, #0
    mov r6, #2
    mov r9, #0
    mov r11, #1
    ldr r5, =data_020c46d4
    beq @L_02057edc
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r2, r6
    bl func_02093d1c
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x50]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093d1c
@L_02057edc:
    add r1, r4, #0x1c00
    ldrsb r2, [r1, #0x65]
    mov r0, #0
    str r0, [sp, #0x20]
    cmp r2, #6
    addls pc, pc, r2, lsl #2
    b @L_02058828
    b @L_02057f14
    b @L_02057f20
    b @L_02057f84
    b @L_0205832c
    b @L_02058698
    b @L_02058770
    b @L_02058820
@L_02057f14:
    add sp, sp, #0x12c
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02057f20:
    add r1, r4, #0x1000
    mov r6, #2
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r2, r6
    bl func_02093d1c
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x50]
    ldr r0, [r5]
    mov r2, r6
    bl func_02093d1c
    add r1, r4, #0x1c00
    ldrsb r3, [r1, #0x65]
    add r0, r4, #0xa60
    ldr r5, =0x7fff
    add r2, r4, #0x1000
    add r0, r0, #0x1000
    str r0, [r2, #0xc60]
    ldr r0, [sp, #0x20]
    add r3, r3, #1
    strh r5, [r1, #0x76]
    strb r0, [r2, #0xc67]
    strh r0, [r1, #0x6a]
    strb r3, [r2, #0xc65]
    b @L_02058828
@L_02057f84:
    add r1, r4, #0x1000
    mov r9, r0
    strb r0, [r1, #0xc68]
    ldr r7, [r1, #0xc60]
    mov r1, r0
    add r0, r4, #0x68
    add r2, r0, #0x1c00
    b @L_02058010
@L_02057fa4:
    ldrsb r0, [r7]
    cmp r0, #0xa
    cmpne r0, #0xc
    beq @L_02057ffc
    ldrb r0, [r2]
    add r0, r0, #1
    strb r0, [r2]
    ldrb r0, [r7]
    cmp r0, #0x81
    blo @L_02057fd4
    cmp r0, #0x9f
    bls @L_02057fe4
@L_02057fd4:
    cmp r0, #0xe0
    blo @L_02057fec
    cmp r0, #0xfc
    bhi @L_02057fec
@L_02057fe4:
    mov r0, r11
    b @L_02057ff0
@L_02057fec:
    mov r0, r1
@L_02057ff0:
    cmp r0, #0
    addne r7, r7, #1
    addne r9, r9, #1
@L_02057ffc:
    ldrsb r0, [r7]
    cmp r0, #0xc
    beq @L_0205801c
    add r9, r9, #1
    add r7, r7, #1
@L_02058010:
    ldrsb r0, [r7]
    cmp r0, #0
    bne @L_02057fa4
@L_0205801c:
    add r0, r4, #0x1000
    add r6, sp, #0x30
    ldr r1, [r0, #0xc60]
    mov r0, r6
    add r2, r9, #1
    bl func_02016d0c
    add r0, r9, #2
    mov r1, #0
    strb r1, [r6, r0]
    ldrsb r0, [r7]
    ldr r6, =data_020c46a8
    mov r2, r11
    cmp r0, #0
    addne r1, r7, #1
    add r0, r4, #0x1000
    str r1, [r0, #0xc60]
    ldr r0, [r6]
    mov r1, r11
    bl _ZN8TextFont10SetSpacingEii
    add r0, r4, #0x1000
    ldr r1, [r0, #0xa58]
    mov r9, #0
    ldr r0, [r5]
    add r2, sp, #0x28
    add r3, sp, #0x2c
    str r9, [sp, #0x28]
    bl func_02097fcc
    ldr r10, [sp, #0x28]
    mov r0, #0x40
    stmia sp, {r0, r9}
    str r9, [sp, #8]
    str r11, [sp, #0xc]
    add r0, r4, #0x2e0
    str r0, [sp, #0x10]
    ldr r0, =0x2ee
    add r1, sp, #0x30
    str r0, [sp, #0x14]
    str r9, [sp, #0x18]
    str r9, [sp, #0x1c]
    ldr r0, [r6]
    mov r2, r10
    mov r3, #0x100
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    ldr r1, [sp, #0x2c]
    mov r0, r10
    bl DC_FlushRange
    add r0, r4, #0x1000
    ldr r1, [r0, #0xa58]
    ldr r3, [sp, #0x2c]
    ldr r0, [r5]
    mov r2, r10
    str r9, [sp]
    str r9, [sp, #4]
    str r9, [sp, #8]
    bl func_02097ef8
    ldr r0, [r6]
    mov r1, r11
    mov r2, r11
    bl _ZN8TextFont10SetSpacingEii
    add r2, r4, #0x1000
    add r0, r4, #0x1c00
    strb r9, [r2, #0xc69]
    ldr r1, [r2, #0xa54]
    ldr r2, [r2, #0xa58]
    strh r9, [r0, #0x70]
    strh r9, [r0, #0x6e]
    ldr r0, [r5]
    and r2, r2, #0xff
    bl func_020922fc
    add r1, r4, #0x1000
    mov r6, #2
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r2, r6
    bl func_02092d3c
    add r1, r4, #0x1000
    ldrb r3, [r1, #0xc68]
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    add r2, r4, #0x2e0
    bl func_02092fc4
    str r11, [sp]
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r2, r11
    mov r3, r6
    bl func_0209386c
    add r8, r4, #0x1000
    mov r7, r9
    mov r10, #0x8a
    ldr r6, =0x51eb851f
    b @L_020581d0
@L_02058190:
    add r0, r4, r9, lsl #3
    add r3, r0, #0x200
    ldrsh r0, [r3, #0xe2]
    add r2, r9, #1
    smulbb r1, r0, r10
    mov r0, r1, lsr #0x1f
    smull r1, r11, r6, r1
    add r11, r0, r11, asr #5
    mov r0, r11, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    ldrsh r3, [r3, #0xe0]
    ldr r0, [r5]
    ldr r1, [r8, #0xa54]
    bl func_02093524
    add r9, r9, #1
@L_020581d0:
    ldrb r0, [r8, #0xc68]
    cmp r9, r0
    blt @L_02058190
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x50]
    ldr r0, =data_020c46d4
    mov r5, #2
    ldr r0, [r0]
    mov r2, r5
    mov r3, #1
    mov r8, #0
    bl func_02093ca8
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x50]
    ldr r0, =data_020c46d4
    mov r2, r5
    ldr r0, [r0]
    bl func_02092d3c
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x52]
    ldr r0, =data_020c46d4
    add r2, sp, #0x24
    ldr r0, [r0]
    str r8, [sp, #0x24]
    add r3, sp, #0x2c
    bl func_02097fcc
    mov r9, r8
    ldr r10, [sp, #0x24]
    add r5, r4, #0x1000
    add r6, r4, #0x1c00
    ldr r11, =data_020c46a0
    b @L_020582e8
@L_02058250:
    mov r0, #0x2a
    mul r0, r9, r0
    add r3, r4, r0
    strb r7, [r3, #3]
    ldrsh r2, [r4, r0]
    ldrsh r1, [r6, #0x6a]
    cmp r2, r1
    blt @L_020582e4
    ldrb r0, [r5, #0xc68]
    add r0, r1, r0
    cmp r2, r0
    bgt @L_020582e4
    mov r0, #0x40
    stmia sp, {r0, r7}
    mov r0, r8, lsl #3
    str r0, [sp, #8]
    mov r0, #9
    str r0, [sp, #0xc]
    str r7, [sp, #0x10]
    str r7, [sp, #0x14]
    str r7, [sp, #0x18]
    str r7, [sp, #0x1c]
    add r1, r3, #0xa
    ldr r0, [r11]
    mov r2, r10
    mov r3, #0x40
    bl _ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii
    mov r1, #0x2a
    mla r1, r9, r1, r4
    ldr r0, [r11]
    add r1, r1, #0xa
    add r8, r8, #1
    bl _ZN8TextFont12GetTextWidthEPKc
    mov r1, #0x2a
    mla r1, r9, r1, r4
    strb r0, [r1, #4]
    strb r8, [r1, #3]
@L_020582e4:
    add r9, r9, #1
@L_020582e8:
    cmp r9, #0x10
    blt @L_02058250
    ldr r1, [sp, #0x2c]
    mov r0, r10
    bl DC_FlushRange
    add r0, r4, #0x1a00
    ldr r2, =data_020c46d4
    ldrsh r1, [r0, #0x52]
    ldr r3, [sp, #0x2c]
    ldr r0, [r2]
    mov r5, #0
    str r5, [sp]
    str r5, [sp, #4]
    mov r2, r10
    str r5, [sp, #8]
    bl func_02097ef8
    b @L_02058680
@L_0205832c:
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r2, #2
    mov r3, #1
    mov r10, #0x2a
    bl func_02093ca8
    add r1, r4, #0x1c00
    add r0, r8, #0x1000
    ldrsh r2, [r1, #0x6c]
    ldr r0, [r0, #0xf10]
    ldrsh r3, [r1, #0x6e]
    mul r0, r2, r0
    mov r0, r0, lsl #0x10
    add r0, r3, r0, asr #16
    strh r0, [r1, #0x6e]
    cmp r7, #0
    beq @L_02058390
    mov r6, #5
    ldr r0, =data_020c5e40
    mov r1, r6
    bl _ZN12SoundManager9PlaySoundEi
    sub r1, r6, #6
    add r0, r4, #0x1c00
    strh r1, [r0, #0x6e]
@L_02058390:
    add r0, r4, #0x1c00
    ldrsb r1, [r0, #0x66]
    tst r1, #0x10
    mvnne r1, #0
    strneh r1, [r0, #0x6e]
    add r1, r4, #0x1c00
    ldrsh r0, [r1, #0x6e]
    cmp r0, #0
    addlt r0, r4, #0x1000
    ldrltb r2, [r0, #0xc68]
    movlt r0, #0x64
    smulbblt r0, r2, r0
    add r2, r4, #0x1c00
    strlth r0, [r1, #0x6e]
    ldrsb r0, [r2, #0x66]
    tst r0, #8
    beq @L_02058404
    add r0, r8, #0x1000
    ldr r0, [r0, #0xf10]
    ldrsh r3, [r2, #0x70]
    mov r0, r0, lsl #0x10
    add r1, r4, #0x1000
    add r0, r3, r0, asr #16
    strh r0, [r2, #0x70]
    ldrsh r2, [r2, #0x70]
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    and r2, r2, #0xff
    bl func_02092758
@L_02058404:
    mov r6, #1
    b @L_02058648
@L_0205840c:
    add r1, r4, #0x1c00
    ldrsb r0, [r1, #0x67]
    ldrsh r3, [r1, #0x6a]
    add r2, r0, #1
    add r0, r4, r2, lsl #2
    add r0, r0, #0x200
    ldrsh r0, [r0, #0xa0]
    cmp r3, r0
    bne @L_0205844c
    add r0, r4, #0x1000
    strb r2, [r0, #0xc67]
    ldrsb r0, [r1, #0x67]
    add r0, r4, r0, lsl #2
    add r0, r0, #0x200
    ldrh r0, [r0, #0xa2]
    strh r0, [r1, #0x76]
@L_0205844c:
    mov r9, #0
    add r0, r4, #0x1c00
    b @L_02058558
@L_02058458:
    mul r2, r9, r10
    ldrsh r3, [r0, #0x6a]
    ldrsh r1, [r4, r2]
    cmp r3, r1
    bne @L_02058554
    add r5, r4, #0x1000
    add r0, r4, r2
    ldrb r11, [r5, #0xc69]
    ldrb r3, [r0, #2]
    mov r1, #0x8a
    add r2, r4, r11, lsl #3
    add r3, r11, r3
    sub r3, r3, #1
    add r3, r4, r3, lsl #3
    add r3, r3, #0x200
    add r2, r2, #0x200
    ldrsh r12, [r2, #0xe0]
    ldrsh r11, [r3, #0xe0]
    ldrsh r2, [r3, #0xe4]
    add r3, r12, r11
    add r2, r3, r2
    add r2, r2, r2, lsr #31
    mov r2, r2, asr #1
    strh r2, [r0, #6]
    ldrb r3, [r5, #0xc69]
    add r2, r4, #0x1a00
    ldr r5, =data_020c46d4
    add r3, r4, r3, lsl #3
    add r3, r3, #0x200
    ldrsh r11, [r3, #0xe2]
    mov r3, #2
    smulbb r11, r11, r1
    ldr r1, =0x51eb851f
    smull lr, r12, r1, r11
    mov r1, r11, lsr #0x1f
    add r12, r1, r12, asr #5
    strh r12, [r0, #8]
    mov r1, #1
    str r1, [sp]
    ldrsh r1, [r2, #0x50]
    ldrb r2, [r0, #3]
    ldr r0, [r5]
    bl func_0209386c
    mov r11, #0x2a
    mla r3, r9, r11, r4
    ldrsh r1, [r3, #8]
    add r0, r4, #0x1a00
    str r1, [sp]
    ldrsh r1, [r0, #0x50]
    ldrb r2, [r3, #3]
    ldrsh r3, [r3, #6]
    ldr r0, [r5]
    bl func_02093524
    mov r0, #8
    str r0, [sp]
    mla r3, r9, r11, r4
    add r1, r8, #0x1c00
    ldrb r2, [r3, #3]
    ldrsh r1, [r1, #0x6c]
    ldrb r3, [r3, #4]
    ldr r0, [r5]
    bl func_020936b4
    b @L_02058560
@L_02058554:
    add r9, r9, #1
@L_02058558:
    cmp r9, #0x10
    blt @L_02058458
@L_02058560:
    mov r0, #1
    str r0, [sp]
    add r0, r4, #0x1000
    ldrb r2, [r0, #0xc69]
    ldr r5, =data_020c46d4
    ldr r1, [r0, #0xa54]
    ldr r0, [r5]
    add r2, r2, #1
    mov r3, #2
    bl func_0209386c
    add r1, r4, #0x1000
    ldrb r2, [r1, #0xc69]
    add r3, r4, #0x1c00
    ldrh r3, [r3, #0x76]
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    add r2, r2, #1
    bl func_020934ac
    cmp r6, #0
    addne r0, r4, #0x1000
    ldrne r1, [r0, #0xa5c]
    cmpne r1, #0
    ble @L_0205860c
    cmp r7, #0
    beq @L_020585d8
    ldrb r0, [r0, #0xc69]
    cmp r0, #0
    bne @L_0205860c
    cmp r7, #0
    beq @L_0205860c
@L_020585d8:
    add r0, r4, #0x1000
    ldrb r5, [r0, #0xc69]
    ldr r2, =0x55555556
    mov r3, #3
    smull r1, r9, r2, r5
    add r9, r9, r5, lsr #31
    smull r1, r2, r3, r9
    subs r9, r5, r1
    bne @L_0205860c
    ldr r1, [r0, #0xa5c]
    ldr r0, =data_020c5e40
    bl _ZN12SoundManager9PlaySoundEi
    mov r6, #0
@L_0205860c:
    add r2, r4, #0x1000
    add r1, r4, #0x1c00
    ldrb r0, [r2, #0xc69]
    ldrsh r5, [r1, #0x6a]
    ldrsh r3, [r1, #0x6e]
    add r0, r0, #1
    add r11, r5, #1
    sub r9, r3, #0x64
    ldrb r3, [r2, #0xc68]
    and r5, r0, #0xff
    strb r0, [r2, #0xc69]
    strh r11, [r1, #0x6a]
    strh r9, [r1, #0x6e]
    cmp r5, r3
    bhs @L_02058658
@L_02058648:
    add r0, r4, #0x1c00
    ldrsh r0, [r0, #0x6e]
    cmp r0, #0x64
    bgt @L_0205840c
@L_02058658:
    add r0, r4, #0x1000
    ldrb r2, [r0, #0xc69]
    ldrb r1, [r0, #0xc68]
    cmp r2, r1
    blo @L_02058828
    ldr r0, [r0, #0xc60]
    cmp r0, #0
    ldreq r0, [r8, #0x10]
    orreq r0, r0, #4
    streq r0, [r8, #0x10]
@L_02058680:
    add r0, r4, #0x1c00
    ldrsb r1, [r0, #0x65]
    add r0, r4, #0x1000
    add r1, r1, #1
    strb r1, [r0, #0xc65]
    b @L_02058828
@L_02058698:
    ldrsb r0, [r1, #0x66]
    tst r0, #8
    beq @L_020586e8
    add r0, r8, #0x1000
    ldr r0, [r0, #0xf10]
    ldrsh r2, [r1, #0x70]
    mov r0, r0, lsl #0x10
    add r0, r2, r0, asr #16
    strh r0, [r1, #0x70]
    ldrsh r0, [r1, #0x70]
    cmp r0, #0x80
    movgt r0, #0x80
    strgth r0, [r1, #0x70]
    add r0, r4, #0x1c00
    ldrsh r2, [r0, #0x70]
    add r1, r4, #0x1000
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    and r2, r2, #0xff
    bl func_02092758
@L_020586e8:
    add r1, r4, #0x1000
    mov r6, r11
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    mov r3, r6
    mov r2, #2
    bl func_02093ca8
    add r0, r4, #0x1000
    ldr r0, [r0, #0xc60]
    cmp r0, #0
    bne @L_02058730
    add r0, r4, #0x1c00
    ldrsb r0, [r0, #0x66]
    tst r0, #0x20
    bne @L_02058828
    tst r0, #0x40
    movne r7, r6
    movne r6, #0
@L_02058730:
    cmp r7, #0
    beq @L_02058828
    cmp r6, #0
    beq @L_0205874c
    ldr r0, =data_020c5e40
    mov r1, #5
    bl _ZN12SoundManager9PlaySoundEi
@L_0205874c:
    ldr r0, =data_020d9a04
    bl func_0206145c
    add r0, r4, #0x1c00
    ldrsb r2, [r0, #0x65]
    mov r3, #0x20
    add r1, r4, #0x1000
    add r2, r2, #1
    strh r3, [r0, #0x70]
    strb r2, [r1, #0xc65]
@L_02058770:
    add r2, r4, #0x1c00
    ldrsb r0, [r2, #0x66]
    mov r6, #2
    tst r0, #8
    beq @L_020587c4
    add r0, r8, #0x1000
    ldr r0, [r0, #0xf10]
    ldrsh r3, [r2, #0x70]
    mov r0, r0, lsl #0x10
    add r1, r4, #0x1000
    sub r0, r3, r0, asr #16
    strh r0, [r2, #0x70]
    ldrsh r2, [r2, #0x70]
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    and r2, r2, #0xff
    bl func_02092758
    add r0, r4, #0x1c00
    ldrsh r0, [r0, #0x70]
    cmp r0, #0
    bgt @L_02058828
@L_020587c4:
    add r0, r4, #0x1000
    ldr r1, [r0, #0xc60]
    mov r2, r6
    cmp r1, #0
    strneb r11, [r0, #0xc65]
    ldreq r1, [r8, #0x10]
    biceq r1, r1, #6
    streq r1, [r8, #0x10]
    add r1, r4, #0x1000
    streqb r9, [r0, #0xc66]
    ldr r0, [r5]
    ldr r1, [r1, #0xa54]
    bl func_02092d3c
    add r0, r4, #0x1a00
    ldrsh r1, [r0, #0x50]
    ldr r0, [r5]
    mov r2, r6
    bl func_02092d3c
    add r0, r4, #0x1c00
    ldrsb r1, [r0, #0x65]
    add r0, r4, #0x1000
    add r1, r1, #1
    strb r1, [r0, #0xc65]
@L_02058820:
    mov r0, #1
    str r0, [sp, #0x20]
@L_02058828:
    ldr r0, [sp, #0x20]
    add sp, sp, #0x12c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02058858()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    ldr r2, =data_020a6fd4
    mov r7, r1
    ldrh r5, [r2]
    ldrh r4, [r2, #2]
    ldrh r3, [r2, #4]
    ldrh r2, [r2, #6]
    ldrsb r1, [r7, #0xa]
    strh r4, [sp, #6]
    strh r2, [sp, #0xa]
    mov r8, r0
    strh r5, [sp, #4]
    strh r3, [sp, #8]
    cmp r1, #0
    mov r4, #2
    ldr r9, =data_020c46d4
    add r2, sp, #4
    mov r6, #1
    bne @L_020588d8
    ldrsb r0, [r7, #0xe]
    cmp r0, #0
    ble @L_020588d8
    sub r0, r0, #1
    mov r1, r0, lsl #2
    add r0, r2, r0, lsl #2
    ldrsh r1, [r2, r1]
    ldrsh r0, [r0, #2]
    mov r1, r1, lsl #0xc
    mov r0, r0, lsl #0xc
    str r1, [r7, #0x18]
    str r0, [r7, #0x1c]
@L_020588d8:
    ldrsb r0, [r7, #0xd]
    cmp r0, #1
    beq @L_020588f0
    cmp r0, #2
    beq @L_02058900
    b @L_02058910
@L_020588f0:
    mov r0, r8
    mov r1, r7
    bl func_02058afc
    b @L_0205890c
@L_02058900:
    mov r0, r8
    mov r1, r7
    bl func_02058ba8
@L_0205890c:
    mov r6, r0
@L_02058910:
    ldrsb r2, [r7, #0xc]
    cmp r2, #0
    ldrgtsb r0, [r7, #0xa]
    cmpgt r0, #0
    ble @L_02058ac4
    cmp r0, #0x14
    beq @L_02058ac4
    ldr r1, [r7, #0x10]
    ldr r0, [r7, #0x14]
    cmp r2, #5
    mov r4, r1, asr #0xc
    mov r5, r0, asr #0xc
    addls pc, pc, r2, lsl #2
    b @L_02058a90
    b @L_02058a90
    b @L_02058960
    b @L_020589e4
    b @L_020589e4
    b @L_020589e4
    b @L_020589b8
@L_02058960:
    ldr r2, [r8, #0x1c]
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    and r2, r2, #0xff
    bl func_020922fc
    mov r2, #0
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    mov r3, r2
    bl func_02092e18
    ldr r1, [r8, #0x24]
    ldrsb r2, [r7, #0xf]
    and r3, r1, #0xff
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    bl func_02093188
@L_020589a0:
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r2, #5
    mov r3, #2
    bl func_02093928
    b @L_02058a90
@L_020589b8:
    ldr r2, [r8, #0x1c]
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    and r2, r2, #0xff
    bl func_020922fc
    mov r2, #0
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    mov r3, r2
    bl func_02092e18
    b @L_020589a0
@L_020589e4:
    ldr r2, [r8, #0x20]
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    and r2, r2, #0xff
    bl func_020922fc
    mov r10, #0
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    mov r2, r10
    mov r3, r10
    bl func_02092e18
    ldr r1, [r8, #0x28]
    mov r8, #5
    and r3, r1, #0xff
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r2, r8
    bl func_02093188
    str r10, [sp]
    ldrsb r3, [r7, #0xc]
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r2, r8
    sub r3, r3, #2
    bl func_020939c8
    sub r0, r5, #6
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    str r0, [sp]
    add r3, r4, #8
    mov r3, r3, lsl #0x10
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r2, r8
    mov r3, r3, asr #0x10
    bl func_02093524
    mov r0, #1
    str r0, [sp]
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r2, r8
    mov r3, #2
    bl func_0209386c
@L_02058a90:
    ldrsh r1, [r7, #4]
    mov r2, r4, lsl #0x10
    mov r3, r5, lsl #0x10
    ldr r0, [r9]
    mov r2, r2, asr #0x10
    mov r3, r3, asr #0x10
    bl func_02093bf4
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    mov r2, #2
    mov r3, #1
    bl func_02093ca8
    b @L_02058ae8
@L_02058ac4:
    ldrsh r1, [r7, #4]
    ldr r0, [r9]
    mov r2, r4
    bl func_02093d1c
    ldrsh r1, [r7, #2]
    ldr r0, [r9]
    mov r3, r4
    mov r2, #5
    bl func_02093928
@L_02058ae8:
    mov r0, r6
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_02058afc()
{
    ldrsb r3, [r1, #0xa]
    mov r0, #1
    cmp r3, #0xb
    bgt @L_02058b30
    cmp r3, #0xa
    blt @L_02058b24
    beq @L_02058b58
    cmp r3, #0xb
    beq @L_02058b70
    b @L_02058b94
@L_02058b24:
    cmp r3, #0
    beq @L_02058b3c
    b @L_02058b94
@L_02058b30:
    cmp r3, #0x14
    beq @L_02058b7c
    b @L_02058b94
@L_02058b3c:
    ldr r12, [r1, #0x18]
    ldr r3, [r1, #0x1c]
    mov r2, #0xa
    str r12, [r1, #0x10]
    str r3, [r1, #0x14]
    strb r2, [r1, #0xa]
    bx lr
@L_02058b58:
    ldrsb r2, [r1, #0xb]
    cmp r2, #0
    addne r2, r3, #1
    moveq r0, #0
    strneb r2, [r1, #0xa]
    bx lr
@L_02058b70:
    mov r2, #0x14
    strb r2, [r1, #0xa]
    bx lr
@L_02058b7c:
    ldrsb r2, [r1, #0xb]
    cmp r2, #0
    moveq r2, #0
    movne r0, #0
    streqb r2, [r1, #0xa]
    bx lr
@L_02058b94:
    ldrsb r2, [r1, #0xb]
    cmp r2, #0
    moveq r2, #0xb
    streqb r2, [r1, #0xa]
    bx lr
}

asm void UnkClass_02054800::func_02058ba8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020c46e4
    mov r6, r1
    mov r7, r0
    ldr r1, =data_020ae5f0
    mov r0, r4
    bl _ZN10ConfigFile8GetFloatEPKc
    mov r1, #0
    bl func_02022348
    bls @L_02058bf8
    ldr r1, =data_020ae604
    mov r0, r4
    bl _ZN10ConfigFile8GetFloatEPKc
    mov r1, r0
    ldr r0, =0x45800000
    bl func_02022e2c
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02058c18
@L_02058bf8:
    ldr r1, =data_020ae618
    mov r0, r4
    bl _ZN10ConfigFile8GetFloatEPKc
    mov r1, r0
    ldr r0, =0x45800000
    bl func_02022e2c
    mov r1, #0x3f000000
    bl func_0202323c
@L_02058c18:
    bl func_02022b2c
    mov r4, r0
    ldr r0, =data_020c46e4
    ldr r1, =data_020ae62c
    bl _ZN10ConfigFile6GetIntEPKc
    ldrsb r3, [r6, #0xa]
    mov lr, r0
    mov r5, #1
    cmp r3, #0xa
    bgt @L_02058c64
    bge @L_02058cd8
    cmp r3, #1
    bgt @L_02058d44
    cmp r3, #0
    blt @L_02058d44
    beq @L_02058c80
    cmp r3, #1
    beq @L_02058ca0
    b @L_02058d44
@L_02058c64:
    cmp r3, #0xb
    bgt @L_02058c74
    beq @L_02058cf4
    b @L_02058d44
@L_02058c74:
    cmp r3, #0x14
    beq @L_02058d30
    b @L_02058d44
@L_02058c80:
    ldr r0, [r6, #0x18]
    ldr r1, [r6, #0x1c]
    sub r2, r0, #0x100000
    add r0, r3, #1
    str r2, [r6, #0x10]
    str r1, [r6, #0x14]
    strb r0, [r6, #0xa]
    b @L_02058d54
@L_02058ca0:
    add r0, r7, #0x1000
    ldr r1, [r6, #0x18]
    ldr r0, [r0, #0xf10]
    ldr r2, [r6, #0x10]
    mov r3, r4
    add r1, r1, lr, lsl #12
    bl func_02054e50
    ldr r1, [r6, #0x18]
    str r0, [r6, #0x10]
    cmp r0, r1
    blt @L_02058d54
    mov r0, #0xa
    str r1, [r6, #0x10]
    strb r0, [r6, #0xa]
@L_02058cd8:
    ldrsb r0, [r6, #0xb]
    cmp r0, #0
    ldrnesb r0, [r6, #0xa]
    moveq r5, #0
    addne r0, r0, #1
    strneb r0, [r6, #0xa]
    b @L_02058d54
@L_02058cf4:
    add r0, r7, #0x1000
    ldr r12, [r6, #0x18]
    add r1, lr, #0x100
    ldr r0, [r0, #0xf10]
    ldr r2, [r6, #0x10]
    mov r3, r4
    sub r1, r12, r1, lsl #12
    bl func_02054e50
    ldr r1, [r6, #0x18]
    str r0, [r6, #0x10]
    sub r1, r1, #0x100000
    cmp r0, r1
    movle r0, #0x14
    strleb r0, [r6, #0xa]
    b @L_02058d54
@L_02058d30:
    ldrsb r0, [r6, #0xb]
    cmp r0, #0
    movne r5, #0
    moveq r0, #0
    b @L_02058d50
@L_02058d44:
    ldrsb r0, [r6, #0xb]
    cmp r0, #0
    moveq r0, #0xb
@L_02058d50:
    streqb r0, [r6, #0xa]
@L_02058d54:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_02058d74()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xb8
    ldr r4, =data_020ae57c
    str r3, [sp, #0x14]
    add r3, sp, #0x2c
    mov r11, r0
    mov r10, r1
    mov r6, r2
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x14]
    mov r4, #6
    cmp r0, #0
    movgt r1, r4
    ldrsb r0, [r10, #0xd1]
    movle r1, #0xa
    ldrsb r2, [r10, #0xce]
    add r5, r1, r0, lsl #1
    mov r1, #1
    mov r7, #0
    cmp r2, #0xa
    str r1, [sp, #0x18]
    bgt @L_02058e00
    cmp r2, #0xa
    movge r2, #6
    bge @L_020592a4
    cmp r2, #1
    bgt @L_0205925c
    cmp r2, #0
    blt @L_0205925c
    beq @L_02058e0c
    cmp r2, #1
    mov r4, #6
    beq @L_02059028
    b @L_0205925c
@L_02058e00:
    cmp r2, #0x14
    beq @L_020594ac
    b @L_0205925c
@L_02058e0c:
    ldrsb r1, [r10, #0xcf]
    ldr r6, =data_020c46d4
    cmp r1, #0
    addle sp, sp, #0xb8
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r1, [r10, #0xd2]
    mov r9, #0
    add r5, sp, #0x38
    cmp r1, #0
    eorne r0, r0, #1
    strneb r0, [r10, #0xd1]
    b @L_02059008
@L_02058e40:
    ldrsb r0, [r10, #0xd2]
    cmp r0, #0
    bge @L_02058e7c
    ldrsb r1, [r10, #0xd1]
    mla r0, r1, r4, r10
    add r0, r0, r9, lsl #1
    ldrsh r1, [r0, #0xc0]
    cmp r1, #0
    beq @L_02058e6c
    ldr r0, [r6]
    bl func_02097b3c
@L_02058e6c:
    ldrsb r1, [r10, #0xd1]
    mla r0, r1, r4, r10
    add r0, r0, r9, lsl #1
    strh r7, [r0, #0xc0]
@L_02058e7c:
    ldrsb r1, [r10, #0xd1]
    mla r0, r1, r4, r10
    add r0, r0, r9, lsl #1
    ldrsh r0, [r0, #0xc0]
    cmp r0, #0
    bne @L_02059004
    ldr r1, =data_020ae640
    mov r0, r5
    bl STD_CopyString
    ldrsb r3, [r10, #0xd1]
    mov r0, #0x60
    mov r2, r9, lsl #5
    mla r1, r3, r0, r10
    ldrsb r0, [r2, r1]
    cmp r0, #0x2a
    beq @L_02058ef0
    add r1, r1, r2
    mov r0, r5
    bl STD_ConcatenateString
    cmp r9, #2
    mov r0, r5
    beq @L_02058edc
    ldr r1, =data_020ae654
    b @L_02058ee0
@L_02058edc:
    ldr r1, =data_020ae65c
@L_02058ee0:
    bl STD_ConcatenateString
    str r7, [sp, #0x24]
    str r7, [sp, #0x28]
    b @L_02058f94
@L_02058ef0:
    add r1, sp, #0x2c
    ldr r1, [r1, r9, lsl #2]
    mov r0, r5
    bl STD_ConcatenateString
    ldrsb r1, [r10, #0xd1]
    mov r0, #0x60
    mla r0, r1, r0, r10
    add r0, r0, r9, lsl #5
    add r0, r0, #1
    bl atoi
    mov r8, r0
    add r0, r11, r9, lsl #2
    ldr r0, [r0, #0x58]
    cmp r0, #0
    beq @L_02058f44
    mov r1, r8
    add r2, sp, #0x28
    add r3, sp, #0x24
    bl func_ov015_02134300
    cmp r0, #0
    bne @L_02058f94
@L_02058f44:
    cmp r9, #0
    beq @L_02058f60
    cmp r9, #1
    beq @L_02058f74
    cmp r9, #2
    beq @L_02058f84
    b @L_02059004
@L_02058f60:
    ldr r1, =data_020ae664
    mov r2, r8
    mov r0, r5
@L_02058f6c:
    bl sprintf
    b @L_02059004
@L_02058f74:
    mov r2, r8
    mov r0, r5
    ldr r1, =data_020ae66c
    b @L_02058f6c
@L_02058f84:
    mov r2, r8
    mov r0, r5
    ldr r1, =data_020ae674
    b @L_02058f6c
@L_02058f94:
    cmp r9, #2
    beq @L_02058fc4
    ldr r8, [sp, #0x24]
    ldr r3, [sp, #0x28]
    ldr r0, [r6]
    mov r2, #1
    str r7, [sp]
    stmib sp, {r2, r7}
    str r3, [sp, #0xc]
    mov r1, #5
    str r8, [sp, #0x10]
    b @L_02058fe8
@L_02058fc4:
    ldr r3, [sp, #0x24]
    ldr r2, [sp, #0x28]
    ldr r0, [r6]
    mov r1, #3
    str r7, [sp]
    str r7, [sp, #4]
    str r7, [sp, #8]
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
@L_02058fe8:
    mov r2, r5
    mov r3, #1
    bl func_02097898
    ldrsb r2, [r10, #0xd1]
    mla r1, r2, r4, r10
    add r1, r1, r9, lsl #1
    strh r0, [r1, #0xc0]
@L_02059004:
    add r9, r9, #1
@L_02059008:
    cmp r9, #3
    blt @L_02058e40
    ldrsb r0, [r10, #0xce]
    mov r1, #0
    strb r1, [r10, #0xd2]
@L_0205901c:
    add r0, r0, #1
    strb r0, [r10, #0xce]
    b @L_020594c4
@L_02059028:
    mla r1, r0, r4, r10
    ldrsh r1, [r1, #0xc0]
    ldr r8, =data_020c46d4
    cmp r1, #0
    beq @L_02059050
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097aa0
    cmp r0, #0
    bgt @L_020594c4
@L_02059050:
    ldrsb r1, [r10, #0xd1]
    mla r0, r1, r4, r10
    ldrsh r1, [r0, #0xc2]
    cmp r1, #0
    beq @L_02059078
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097aa0
    cmp r0, #0
    bgt @L_020594c4
@L_02059078:
    ldrsb r1, [r10, #0xd1]
    mla r0, r1, r4, r10
    ldrsh r1, [r0, #0xc4]
    cmp r1, #0
    beq @L_020590a0
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097aa0
    cmp r0, #0
    bgt @L_020594c4
@L_020590a0:
    ldr r0, [sp, #0x14]
    mov r1, #0xc0
    mul r2, r0, r1
    mov r1, #0x32
    mul r1, r0, r1
    rsb r0, r2, #0x80
    mov r0, r0, lsl #0x10
    rsb r1, r1, #0x32
    mov r0, r0, asr #0x10
    mov r9, #0
    and r11, r1, #0xff
    str r0, [sp, #0x20]
    b @L_02059180
@L_020590d4:
    ldrsb r2, [r10, #0xd1]
    ldr r0, [r8]
    mla r1, r2, r4, r10
    add r1, r1, r9, lsl #1
    ldrsh r1, [r1, #0xc0]
    bl func_02093edc
    ldrsb r3, [r10, #0xd1]
    ldr r0, [r8]
    mov r2, r7
    mla r1, r3, r4, r10
    add r1, r1, r9, lsl #1
    ldrsh r1, [r1, #0xc0]
    mov r3, r7
    bl func_02097ca8
    ldrsb r12, [r10, #0xd1]
    ldr r0, [r8]
    mov r1, r6
    mla r3, r12, r4, r10
    add r3, r3, r9, lsl #1
    ldrsh r3, [r3, #0xc0]
    add r2, r5, r9
    and r3, r3, #0xff
    bl func_02093188
    str r7, [sp]
    ldr r0, [r8]
    mov r1, r6
    add r2, r5, r9
    mov r3, r7
    bl func_020939c8
    str r7, [sp]
    ldr r0, [r8]
    mov r1, r6
    add r2, r5, r9
    mov r3, r11
    bl func_02093afc
    mov r0, #0x40
    str r0, [sp]
    ldr r0, [r8]
    ldr r3, [sp, #0x20]
    mov r1, r6
    add r2, r5, r9
    bl func_02093524
    add r9, r9, #1
@L_02059180:
    cmp r9, #2
    blt @L_020590d4
    ldrsb r1, [r10, #0xd1]
    mov r7, #6
    ldr r8, =data_020c46d4
    mla r0, r1, r7, r10
    ldrsh r1, [r0, #0xc4]
    ldr r0, [r8]
    mov r4, #0
    bl func_020985fc
    movs r1, r0
    beq @L_020591c4
    ldr r2, =data_020c46bc
    ldrb r0, [r10, #0xcc]
    ldr r1, [r1, #0x20]
    ldr r2, [r2]
    bl func_ov015_02131db8
@L_020591c4:
    ldrsb r1, [r10, #0xd1]
    mov r2, r4
    mov r3, r4
    mla r0, r1, r7, r10
    ldrsh r1, [r0, #0xc4]
    ldr r0, [r8]
    bl func_02097ca8
    ldrsb r3, [r10, #0xd1]
    ldr r0, [r8]
    mov r1, r6
    mla r2, r3, r7, r10
    ldrsh r3, [r2, #0xc4]
    add r2, r5, #1
    and r3, r3, #0xff
    bl func_0209323c
    ldr r0, [r8]
    mov r3, r4
    mov r1, r6
    add r2, r5, #1
    bl func_020932f0
    ldrsb r0, [r10, #0xcf]
    cmp r0, #2
    beq @L_02059228
    ldr r4, =0x7fff
    b @L_0205922c
@L_02059228:
    ldr r4, =0x318c
@L_0205922c:
    ldr r0, [r8]
    mov r1, r6
    mov r2, r5
    mov r3, r4
    bl func_020934ac
    ldr r0, [r8]
    mov r1, r6
    mov r3, r4
    add r2, r5, #1
    bl func_020934ac
    ldrsb r0, [r10, #0xce]
    b @L_0205901c
@L_0205925c:
    ldrsb r0, [r10, #0xd0]
    cmp r0, #1
    beq @L_02059274
    cmp r0, #2
    beq @L_0205928c
    b @L_020594c4
@L_02059274:
    ldr r3, [sp, #0x14]
    mov r0, r11
    mov r1, r10
    mov r2, r6
    bl func_02059514
    b @L_020594c4
@L_0205928c:
    ldr r3, [sp, #0x14]
    mov r0, r11
    mov r1, r10
    mov r2, r6
    bl func_0205968c
    b @L_020594c4
@L_020592a4:
    ldrsb r3, [r10, #0xd2]
    mov r1, #0
    str r1, [sp, #0x18]
    cmp r3, #0
    beq @L_02059488
    cmp r3, #0
    bge @L_02059480
    eor r0, r0, #1
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    mov r9, r1
    str r0, [sp, #0x1c]
    mov r0, r0
    mov r1, #0x60
    mla r6, r0, r2, r10
    mla r4, r0, r1, r10
    add r5, sp, #0x38
    b @L_0205946c
@L_020592ec:
    add r0, r6, r9, lsl #1
    ldrsh r1, [r0, #0xc0]
    cmp r1, #0
    beq @L_02059310
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097b3c
    add r0, r6, r9, lsl #1
    strh r7, [r0, #0xc0]
@L_02059310:
    ldr r1, =data_020ae67c
    mov r0, r5
    bl STD_CopyString
    mov r1, r9, lsl #5
    ldrsb r0, [r1, r4]
    cmp r0, #0x2a
    beq @L_02059360
    add r1, r4, r1
    mov r0, r5
    bl STD_ConcatenateString
    cmp r9, #2
    mov r0, r5
    beq @L_0205934c
    ldr r1, =data_020ae690
    b @L_02059350
@L_0205934c:
    ldr r1, =data_020ae698
@L_02059350:
    bl STD_ConcatenateString
    str r7, [sp, #0x24]
    str r7, [sp, #0x28]
    b @L_020593f8
@L_02059360:
    add r1, sp, #0x2c
    ldr r1, [r1, r9, lsl #2]
    mov r0, r5
    bl STD_ConcatenateString
    add r0, r4, r9, lsl #5
    add r0, r0, #1
    bl atoi
    mov r8, r0
    add r0, r11, r9, lsl #2
    ldr r0, [r0, #0x58]
    cmp r0, #0
    beq @L_020593a8
    mov r1, r8
    add r2, sp, #0x28
    add r3, sp, #0x24
    bl func_ov015_02134300
    cmp r0, #0
    bne @L_020593f8
@L_020593a8:
    cmp r9, #0
    beq @L_020593c4
    cmp r9, #1
    beq @L_020593d8
    cmp r9, #2
    beq @L_020593e8
    b @L_02059468
@L_020593c4:
    ldr r1, =data_020ae6a0
    mov r2, r8
    mov r0, r5
@L_020593d0:
    bl sprintf
    b @L_02059468
@L_020593d8:
    mov r2, r8
    mov r0, r5
    ldr r1, =data_020ae6a8
    b @L_020593d0
@L_020593e8:
    mov r2, r8
    mov r0, r5
    ldr r1, =data_020ae6b0
    b @L_020593d0
@L_020593f8:
    cmp r9, #2
    beq @L_0205942c
    ldr r0, =data_020c46d4
    ldr r8, [sp, #0x24]
    ldr r3, [sp, #0x28]
    ldr r0, [r0]
    mov r2, #1
    str r7, [sp]
    stmib sp, {r2, r7}
    str r3, [sp, #0xc]
    mov r1, #5
    str r8, [sp, #0x10]
    b @L_02059454
@L_0205942c:
    ldr r0, =data_020c46d4
    ldr r3, [sp, #0x24]
    ldr r2, [sp, #0x28]
    ldr r0, [r0]
    mov r1, #3
    str r7, [sp]
    str r7, [sp, #4]
    str r7, [sp, #8]
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
@L_02059454:
    mov r2, r5
    mov r3, #1
    bl func_02097898
    add r1, r6, r9, lsl #1
    strh r0, [r1, #0xc0]
@L_02059468:
    add r9, r9, #1
@L_0205946c:
    cmp r9, #3
    blt @L_020592ec
    ldr r0, [sp, #0x1c]
    add r0, r0, #1
    strb r0, [r10, #0xd2]
@L_02059480:
    mov r0, #0xb
    strb r0, [r10, #0xce]
@L_02059488:
    ldrsb r0, [r10, #0xcf]
    cmp r0, #0
    movlt r0, #1
    strltb r0, [r10, #0xcd]
    ldrsb r0, [r10, #0xcd]
    cmp r0, #0
    movne r0, #0xb
    strneb r0, [r10, #0xce]
    b @L_020594c4
@L_020594ac:
    ldrsb r0, [r10, #0xd2]
    strb r7, [r10, #0xce]
    cmp r0, #0
    moveq r0, #0
    streq r0, [sp, #0x18]
    streqb r0, [r10, #0xcf]
@L_020594c4:
    ldr r0, [sp, #0x18]
    add sp, sp, #0xb8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02059514()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r1
    ldrsb r1, [r10, #0xd1]
    mov r8, r3
    mov r9, r2
    ldrsb r0, [r10, #0xce]
    mov r2, #6
    cmp r8, #0
    movle r2, #0xa
    add r6, r2, r1, lsl #1
    cmp r0, #2
    beq @L_02059550
    cmp r0, #0xb
    beq @L_02059608
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02059550:
    mov r0, #0x70
    mul r0, r8, r0
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r7, #0
    mov r5, r0, asr #0x10
    mov r11, #0x40
    ldr r4, =data_020c46d4
    b @L_020595ac
@L_02059574:
    str r11, [sp]
    ldr r0, [r4]
    mov r1, r9
    mov r3, r5
    add r2, r6, r7
    bl func_02093524
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    mov r1, r9
    add r2, r6, r7
    mov r3, #2
    bl func_0209386c
    add r7, r7, #1
@L_020595ac:
    cmp r7, #2
    blt @L_02059574
    ldrsb r0, [r10, #0xd1]
    mov r1, #6
    cmp r8, #0
    movle r1, #0xa
    eor r0, r0, #1
    mov r7, #0
    add r6, r1, r0, lsl #1
    mov r5, #2
    ldr r4, =data_020c46d4
    b @L_020595f4
@L_020595dc:
    ldr r0, [r4]
    mov r1, r9
    mov r3, r5
    add r2, r6, r7
    bl func_02093928
    add r7, r7, #1
@L_020595f4:
    cmp r7, #2
    blt @L_020595dc
    mov r0, #0xa
    strb r0, [r10, #0xce]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02059608:
    ldrsb r0, [r10, #0xcd]
    cmp r0, #0
    moveq r0, #0
    streqb r0, [r10, #0xce]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0xc0
    mul r0, r8, r0
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r7, #0
    mov r5, r0, asr #0x10
    mov r8, #0x40
    mov r11, #2
    ldr r4, =data_020c46d4
    b @L_02059674
@L_02059644:
    str r8, [sp]
    ldr r0, [r4]
    mov r1, r9
    mov r3, r5
    add r2, r6, r7
    bl func_02093524
    ldr r0, [r4]
    mov r1, r9
    add r2, r6, r7
    mov r3, r11
    bl func_02093928
    add r7, r7, #1
@L_02059674:
    cmp r7, #2
    blt @L_02059644
    mov r0, #0x14
    strb r0, [r10, #0xce]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_0205968c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r1
    mov r9, r2
    mov r4, r3
    ldrsb r2, [r10, #0xd1]
    ldrsb r1, [r10, #0xce]
    mov r3, #6
    cmp r4, #0
    movle r3, #0xa
    add r7, r3, r2, lsl #1
    cmp r1, #0xb
    bgt @L_020596e0
    bge @L_02059808
    cmp r1, #3
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r1, #2
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    beq @L_020596ec
    cmp r1, #3
    beq @L_0205976c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020596e0:
    cmp r1, #0xc
    beq @L_0205981c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020596ec:
    mov r0, #0xc0
    mul r0, r4, r0
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r8, #0
    mov r5, r0, asr #0x10
    mov r6, #0x40
    mov r11, #1
    ldr r4, =data_020c46d4
    b @L_02059748
@L_02059714:
    str r6, [sp]
    ldr r0, [r4]
    mov r1, r9
    mov r3, r5
    add r2, r7, r8
    bl func_02093524
    str r11, [sp]
    ldr r0, [r4]
    mov r1, r9
    add r2, r7, r8
    mov r3, #2
    bl func_0209386c
    add r8, r8, #1
@L_02059748:
    cmp r8, #2
    blt @L_02059714
    ldrsb r0, [r10, #0xce]
    mov r1, #0xa
    str r1, [r10, #0xd8]
    add r0, r0, #1
    str r1, [r10, #0xd4]
    strb r0, [r10, #0xce]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0205976c:
    add r0, r0, #0x1000
    ldr r1, [r10, #0xd4]
    ldr r0, [r0, #0xf10]
    subs r0, r1, r0
    str r0, [r10, #0xd4]
    movmi r0, #0
    strmi r0, [r10, #0xd4]
    ldr r0, [r10, #0xd4]
    ldr r1, [r10, #0xd8]
    mov r0, r0, lsl #6
    bl func_0202273c
    mov r8, r0
    add r0, r8, #0x70
    mul r1, r0, r4
    rsb r0, r1, #0x80
    mov r6, #0x40
    mov r2, r0, lsl #0x10
    mov r3, r2, asr #0x10
    ldr r5, =data_020c46d4
    str r6, [sp]
    ldr r0, [r5]
    mov r1, r9
    mov r2, r7
    bl func_02093524
    add r3, r8, #0x70
    mul r4, r3, r4
    str r6, [sp]
    rsb r3, r4, #0x80
    mov r3, r3, lsl #0x10
    ldr r0, [r5]
    mov r1, r9
    add r2, r7, #1
    mov r3, r3, asr #0x10
    bl func_02093524
    ldr r0, [r10, #0xd4]
    cmp r0, #0
    moveq r0, #0xa
    streqb r0, [r10, #0xce]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02059808:
    mov r2, #0xa
    add r1, r1, #1
    str r2, [r10, #0xd8]
    str r2, [r10, #0xd4]
    strb r1, [r10, #0xce]
@L_0205981c:
    add r0, r0, #0x1000
    ldr r1, [r10, #0xd4]
    ldr r0, [r0, #0xf10]
    subs r0, r1, r0
    str r0, [r10, #0xd4]
    movmi r0, #0
    strmi r0, [r10, #0xd4]
    ldr r0, [r10, #0xd4]
    ldr r1, [r10, #0xd8]
    mov r0, r0, lsl #6
    bl func_0202273c
    rsb r8, r0, #0x40
    add r0, r8, #0x70
    mul r1, r0, r4
    rsb r0, r1, #0x80
    mov r6, #0x40
    mov r2, r0, lsl #0x10
    mov r3, r2, asr #0x10
    ldr r5, =data_020c46d4
    str r6, [sp]
    ldr r0, [r5]
    mov r1, r9
    mov r2, r7
    bl func_02093524
    add r0, r8, #0x70
    mul r1, r0, r4
    rsb r0, r1, #0x80
    mov r1, r0, lsl #0x10
    str r6, [sp]
    mov r3, r1, asr #0x10
    ldr r0, [r5]
    mov r1, r9
    add r2, r7, #1
    bl func_02093524
    ldr r0, [r10, #0xd4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #2
    ldr r0, [r5]
    mov r1, r9
    mov r2, r7
    mov r3, r4
    bl func_02093928
    ldr r0, [r5]
    mov r1, r9
    mov r3, r4
    add r2, r7, #1
    bl func_02093928
    mov r0, #0x14
    strb r0, [r10, #0xce]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_020598ec()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    add r0, r0, #0x21c
    add r4, r0, #0x3c00
    mov r0, #0x28
    mla r4, r1, r0, r4
    ldr r6, =data_020c4660
    mov r8, r2
    ldr r0, [r6]
    mov r1, r8
    mov r5, r3
    bl func_0208cee0
    str r0, [r4, #4]
    cmp r0, #0
    bge @L_0205998c
    mov r7, #1
    ldr r0, [r6]
    mov r1, r8
    mov r2, r7
    bl func_0208c5d8
    str r0, [r4, #4]
    str r7, [sp]
    mov r2, #0
    str r2, [sp, #4]
    ldr r0, [r6]
    ldr r1, [r4, #4]
    mov r3, r8
    bl func_0208c788
    ldr r1, [r4, #4]
    ldr r0, [r6]
    mov r2, r8
    mov r3, r7
    bl func_0208c8d4
    ldr r0, [r6]
    ldr r0, [r0, #0x18]
    cmp r0, #0
    strneb r7, [r0, #0x28]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x10
    b @L_02059994
@L_0205998c:
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x20
@L_02059994:
    strh r0, [r4, #0xa]
    ldr r0, [r4, #4]
    cmp r0, #0
    addeq sp, sp, #0xc
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r5, #0
    beq @L_020599d8
    mov r3, #0
    str r3, [sp]
    str r3, [sp, #4]
    str r3, [sp, #8]
    ldr r0, =data_020c4660
    ldr r1, [r4, #4]
    ldr r0, [r0]
    ldr r2, =data_020c4eb4
    bl func_0208cbc0
@L_020599d8:
    ldrh r1, [r4, #0xa]
    mov r0, #1
    orr r1, r1, #1
    strh r1, [r4, #0xa]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_020599f8()
{
    stmdb sp!, {r4, lr}
    add r0, r0, #0x21c
    add r2, r0, #0x3c00
    mov r0, #0x28
    mla r4, r1, r0, r2
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r4, pc}
    tst r0, #0x20
    bne @L_02059a30
    ldr r0, =data_020c4660
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_0208ca90
@L_02059a30:
    mov r0, r4
    mov r1, #0
    mov r2, #0x28
    bl MI_CpuFill8
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_02059a48()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x21c
    add r2, r0, #0x3c00
    mov r0, #0x28
    mla r5, r1, r0, r2
    ldrh r0, [r5, #0xa]
    tst r0, #1
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020c4660
    ldr r1, [r5, #4]
    ldr r0, [r4]
    bl func_0208ca30
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r5, #4]
    ldr r0, [r4]
    mov r2, #0x100
    bl func_0208cba0
    ldr r0, [r4]
    mov r1, #2
    bl func_0208ce5c
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_02059ab0()
{
    mov r2, #0x28
    mla r0, r1, r2, r0
    add r0, r0, #0x3e00
    ldrh r0, [r0, #0x26]
    tst r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_02054800::func_02059acc()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    add r0, r0, #0x21c
    add r4, r0, #0x3c00
    mov r0, #0x28
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    mov r6, r2
    mov r7, r3
    tst r0, #1
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r0, [sp, #0x30]
    cmp r0, #0
    subgt r5, r0, #1
    movgt r0, #0
    bgt @L_02059b3c
    cmp r7, #0
    movlt r5, #0
    movlt r0, r5
    blt @L_02059b3c
    ldr r0, =data_020e88a0
    mov r1, r7
    mov r2, #0
    bl func_0206a9d0
    ldrb r5, [r0, #0x1a]
    mov r0, r7
    bl func_ov015_02131948
@L_02059b3c:
    ldr r1, [sp, #0x28]
    mov r2, #0
    cmp r1, #0
    str r2, [sp, #0xc]
    addne r1, sp, #0x28
    strne r1, [sp, #0xc]
    ldr r1, [sp, #0x2c]
    str r2, [sp, #0x10]
    cmp r1, #0
    addne r1, sp, #0x2c
    strne r1, [sp, #0x10]
    str r0, [sp]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    str r1, [sp, #4]
    str r0, [sp, #8]
    ldr r0, =data_020c4660
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r6
    mov r3, r5
    bl func_0208cbc0
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_02059ba4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    mov r4, #0x28
    mul r4, r1, r4
    add r0, r0, #0x21c
    add r0, r0, #0x3c00
    ldr r5, [sp, #0x48]
    adds r4, r0, r4
    mov r7, r2
    mov r6, r3
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c4660
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208cd7c
    ldr r12, [sp, #4]
    ldr r3, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x40]
    ldr r0, [sp, #0x44]
    str r12, [sp, #0x1c]
    str r3, [sp, #0x20]
    str r2, [sp, #0x24]
    str r6, [sp, #0x10]
    str r1, [sp, #0x14]
    str r0, [sp, #0x18]
    cmp r7, #0
    beq @L_02059c3c
    add r1, sp, #0x10
    add r0, sp, #0x1c
    mov r2, r1
    bl func_02001f08
@L_02059c3c:
    ldr r0, [sp, #0x4c]
    cmp r0, #0
    beq @L_02059c60
    add r0, sp, #0x1c
    add r1, sp, #0x10
    bl func_020021f0
    ldr r1, [sp, #0x4c]
    bl func_02001d60
    mov r5, r0, asr #0xc
@L_02059c60:
    cmp r5, #0
    bne @L_02059c90
    ldr r1, [sp, #0x18]
    ldr r0, =data_020c4660
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    bl func_0208cd14
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02059c90:
    add r0, sp, #0x10
    add r1, sp, #0x1c
    mov r2, r0
    bl func_02001f38
    ldr r0, [sp, #0x10]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r1, [sp, #0x10]
    str r0, [sp, #0x18]
    str r1, [r4, #0x10]
    ldr r0, [sp, #0x14]
    str r0, [r4, #0x14]
    ldr r0, [sp, #0x18]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_02059d04()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    mov r4, #0x28
    mul r4, r1, r4
    add r0, r0, #0x21c
    add r0, r0, #0x3c00
    ldr r6, [sp, #0x40]
    ldr r5, [sp, #0x44]
    adds r4, r0, r4
    mov r8, r2
    mov r7, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0
    bne @L_02059dd4
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r3, r10, r8, r0
    umull lr, r12, r7, r0
    umull r9, r5, r6, r0
    adds r3, r3, #0
    mla r10, r8, r1, r10
    mov r2, r8, asr #0x1f
    mla r10, r2, r0, r10
    adc r2, r10, #0x800
    mov r2, r2, lsl #4
    mla r12, r7, r1, r12
    mla r5, r6, r1, r5
    mov r3, r7, asr #0x1f
    mov r1, r6, asr #0x1f
    mla r12, r3, r0, r12
    adds r3, lr, #0
    adc r3, r12, #0x800
    mla r5, r1, r0, r5
    adds r0, r9, #0
    adc r0, r5, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [sp]
    ldr r0, =data_020c4660
    mov r3, r3, lsl #4
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    bl func_0208cd48
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02059dd4:
    ldr r0, =data_020c4660
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208cdec
    ldr r9, [sp, #4]
    mov r3, #0x1680000
    umull r0, lr, r9, r3
    mov r9, r9, asr #0x1f
    adds r0, r0, #0x80000
    mla lr, r9, r3, lr
    ldr r2, [sp, #8]
    adc lr, lr, #0
    umull r12, r9, r2, r3
    mov r2, r2, asr #0x1f
    mov r0, r0, lsr #0x14
    orr r0, r0, lr, lsl #12
    sub r0, r8, r0
    adds r8, r12, #0x80000
    mla r9, r2, r3, r9
    ldr r1, [sp, #0xc]
    adc r2, r9, #0
    mov r8, r8, lsr #0x14
    orr r8, r8, r2, lsl #12
    sub r2, r7, r8
    umull r8, r7, r1, r3
    mov r1, r1, asr #0x1f
    str r2, [sp, #0x14]
    adds r2, r8, #0x80000
    mla r7, r1, r3, r7
    adc r1, r7, #0
    mov r2, r2, lsr #0x14
    orr r2, r2, r1, lsl #12
    sub r2, r6, r2
    mov r1, r5
    str r0, [sp, #0x10]
    str r2, [sp, #0x18]
    bl func_0202273c
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5
    bl func_0202273c
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5
    bl func_0202273c
    ldr r12, [sp, #0x10]
    ldr r2, =0xb60b60b
    ldr r8, [sp, #0x14]
    umull r9, lr, r12, r2
    mov r3, #0xb6
    mla lr, r12, r3, lr
    mov r1, r12, asr #0x1f
    mla lr, r1, r2, lr
    adds r9, r9, #0
    adc r1, lr, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x10]
    str r1, [r4, #0x1c]
    umull r12, r1, r8, r2
    mla r1, r8, r3, r1
    mov r7, r8, asr #0x1f
    mla r1, r7, r2, r1
    adds r12, r12, #0
    adc r1, r1, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x14]
    str r1, [r4, #0x20]
    umull r7, r1, r0, r2
    mla r1, r0, r3, r1
    mov r6, r0, asr #0x1f
    mla r1, r6, r2, r1
    adds r0, r7, #0
    adc r0, r1, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [r4, #0x24]
    strh r5, [r4, #0xe]
    str r0, [sp, #0x18]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x200
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_02059f34()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x21c
    add r12, r0, #0x3c00
    mov r0, #0x28
    mla r12, r1, r0, r12
    ldrh r0, [r12, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4660
    ldr r1, [r12, #4]
    ldr r0, [r0]
    bl func_0208cf4c
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_02059f6c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r11, #0x28
    mov r9, #0
    add r0, r10, #0x21c
    add r8, r0, #0x3c00
    mov r7, r9
    ldr r6, =data_020c4660
    mov r4, r11
    mov r5, r11
    b @L_02059fd8
@L_02059f98:
    mla r1, r9, r5, r10
    add r0, r1, #0x3e00
    ldrh r0, [r0, #0x26]
    tst r0, #1
    beq @L_02059fd4
    tst r0, #0x20
    bne @L_02059fc4
    add r1, r1, #0x3000
    ldr r0, [r6]
    ldr r1, [r1, #0xe20]
    bl func_0208ca90
@L_02059fc4:
    mla r0, r9, r4, r8
    mov r1, r7
    mov r2, r11
    bl MI_CpuFill8
@L_02059fd4:
    add r9, r9, #1
@L_02059fd8:
    cmp r9, #2
    blt @L_02059f98
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_02059fe8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x34
    mov r9, r0
    ldr r4, =data_020c4660
    mov r7, #0
    b @L_0205a1dc
@L_0205a000:
    add r0, r9, #0x21c
    add r1, r0, #0x3c00
    mov r0, #0x28
    mla r6, r7, r0, r1
    ldr r1, [r6, #4]
    cmp r1, #0
    beq @L_0205a1d8
    ldrh r0, [r6, #0xa]
    tst r0, #0x10
    beq @L_0205a044
    ldr r0, [r4]
    bl func_0208cb10
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205a044:
    ldr r1, [r6, #4]
    ldr r0, [r4]
    bl func_0208bcd0
    cmp r0, #0
    moveq r0, #0
    beq @L_0205a06c
    ldrb r0, [r0, #0x24]
    cmp r0, #3
    moveq r0, #1
    movne r0, #0
@L_0205a06c:
    cmp r0, #0
    ldrneh r0, [r6, #0xa]
    orrne r0, r0, #2
    strneh r0, [r6, #0xa]
    ldrh r0, [r6, #0xa]
    tst r0, #0x100
    beq @L_0205a12c
    ldr r1, [r4]
    ldr r2, [r6, #4]
    add r0, sp, #0x10
    bl func_0208cd7c
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    str r2, [sp, #0x28]
    str r1, [sp, #0x2c]
    str r0, [sp, #0x30]
    mov r8, #0
    add r10, r9, #0x1000
    add r5, sp, #0x28
    b @L_0205a0ec
@L_0205a0c0:
    mov r0, r5
    mov r2, r5
    add r1, r6, #0x10
    bl func_02001f08
    ldrh r0, [r6, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r6, #0xc]
    beq @L_0205a0f8
    add r8, r8, #1
@L_0205a0ec:
    ldr r0, [r10, #0xf10]
    cmp r8, r0
    blo @L_0205a0c0
@L_0205a0f8:
    ldr r0, [sp, #0x30]
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r6, #4]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x2c]
    bl func_0208cd14
    ldrh r0, [r6, #0xc]
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xfeff
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205a12c:
    ldrh r0, [r6, #0xa]
    tst r0, #0x200
    beq @L_0205a1d8
    ldr r1, [r4]
    ldr r2, [r6, #4]
    add r0, sp, #4
    bl func_0208cdec
    ldr r2, [sp, #4]
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    str r2, [sp, #0x1c]
    str r0, [sp, #0x24]
    str r1, [sp, #0x20]
    mov r8, #0
    add r0, r9, #0x1000
    b @L_0205a198
@L_0205a16c:
    ldrh r1, [r6, #0xe]
    ldr r3, [sp, #0x20]
    ldr r2, [r6, #0x20]
    sub r1, r1, #1
    mov r1, r1, lsl #0x10
    add r2, r3, r2
    movs r1, r1, lsr #0x10
    str r2, [sp, #0x20]
    strh r1, [r6, #0xe]
    beq @L_0205a1a4
    add r8, r8, #1
@L_0205a198:
    ldr r1, [r0, #0xf10]
    cmp r8, r1
    blo @L_0205a16c
@L_0205a1a4:
    ldr r0, [sp, #0x24]
    ldr r2, [sp, #0x1c]
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r6, #4]
    ldr r3, [sp, #0x20]
    bl func_0208cd48
    ldrh r0, [r6, #0xe]
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xfdff
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205a1d8:
    add r7, r7, #1
@L_0205a1dc:
    cmp r7, #2
    blt @L_0205a000
    add sp, sp, #0x34
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205a1fc()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, #0
    mov r3, #0x28
@L_0205a208:
    mla r12, r5, r3, r0
    add lr, r12, #0x2000
    ldr r4, [lr, #0x9c]
    add r12, r12, #0x9c
    cmp r1, r4
    ldreqsh lr, [lr, #0xa4]
    cmpeq r2, lr
    addeq r0, r12, #0x2000
    ldmeqia sp!, {r3, r4, r5, pc}
    add r5, r5, #1
    cmp r5, #6
    blt @L_0205a208
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205a240()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    movs r9, r1
    mov r4, r0
    mov r8, r2
    mov r7, r3
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r9
    bl func_ov015_02130b94
    movs r6, r0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r5, #0
    mov r0, r4
    mov r1, r5
    mov r2, r5
    bl func_0205a1fc
    mov r4, r0
    str r9, [r4]
    strh r8, [r4, #8]
    ldrh r1, [r6, #0x42]
    mov r2, #1
    ldr r0, =data_020c4650
    str r2, [sp]
    str r2, [sp, #4]
    ldr r0, [r0]
    mov r2, r8
    mov r3, r7
    bl func_02089998
    str r0, [r4, #4]
    cmp r0, #0
    movlt r0, r5
    ldrgeh r0, [r4, #0xa]
    orrge r0, r0, #0x11
    strgeh r0, [r4, #0xa]
    ldrgesh r0, [r4, #8]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02054800::func_0205a2e8()
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    bl func_0205a1fc
    movs r4, r0
    ldmeqia sp!, {r4, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020c4650
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02089bd4
    mov r0, r4
    mov r1, #0
    mov r2, #0x28
    bl MI_CpuFill8
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205a334()
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    bl func_0205a1fc
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    ldmeqia sp!, {r3, pc}
    ldr r2, =data_020c4650
    ldr r1, [r0, #4]
    ldr r0, [r2]
    bl func_02089b4c
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205a370()
{
    stmdb sp!, {r4, lr}
    mov r4, r3
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    bl func_0205a1fc
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    ldmeqia sp!, {r4, pc}
    ldr r2, =data_020c4650
    ldr r1, [r0, #4]
    ldr r0, [r2]
    mov r2, r4
    bl func_02089f08
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205a3b4()
{
    stmdb sp!, {r4, lr}
    mov r4, r3
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    bl func_0205a1fc
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    ldmeqia sp!, {r4, pc}
    ldr r2, =data_020c4650
    ldr r1, [r0, #4]
    ldr r0, [r2]
    rsb r2, r4, r4, lsl #3
    bl func_02089eb4
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205a3f8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    ldr r5, [sp, #0x4c]
    cmp r1, #0
    mov r6, r3
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_0205a1fc
    movs r4, r0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =data_020c4650
    ldr r1, [r4, #4]
    ldr r0, [r7]
    mov r2, #1
    bl func_02089e04
    ldr r1, [r7]
    ldr r2, [r4, #4]
    add r0, sp, #4
    bl func_0208a0c4
    ldr r12, [sp, #4]
    ldr r7, [sp, #8]
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #0x40]
    ldr r1, [sp, #0x44]
    ldr r0, [sp, #0x48]
    str r12, [sp, #0x1c]
    str r7, [sp, #0x20]
    str r3, [sp, #0x24]
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    str r0, [sp, #0x18]
    cmp r6, #0
    beq @L_0205a4a0
    add r1, sp, #0x10
    add r0, sp, #0x1c
    mov r2, r1
    bl func_02001f08
@L_0205a4a0:
    ldr r0, [sp, #0x50]
    cmp r0, #0
    beq @L_0205a4c4
    add r0, sp, #0x1c
    add r1, sp, #0x10
    bl func_020021f0
    ldr r1, [sp, #0x50]
    bl func_02001d60
    mov r5, r0, asr #0xc
@L_0205a4c4:
    cmp r5, #0
    bne @L_0205a4f4
    ldr r1, [sp, #0x18]
    ldr r0, =data_020c4650
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    bl func_02089fb0
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0205a4f4:
    add r0, sp, #0x10
    add r1, sp, #0x1c
    mov r2, r0
    bl func_02001f38
    ldr r0, [sp, #0x10]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r1, [sp, #0x10]
    str r0, [sp, #0x18]
    str r1, [r4, #0x10]
    ldr r0, [sp, #0x14]
    str r0, [r4, #0x14]
    ldr r0, [sp, #0x18]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205a568()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c
    cmp r1, #0
    mov r5, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    bl func_0205a1fc
    movs r4, r0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [sp, #0x30]
    cmp r0, #0
    bne @L_0205a5f4
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r12, r6, r5, r0
    mla r6, r5, r1, r6
    mov r3, r5, asr #0x1f
    mla r6, r3, r0, r6
    mov r2, #0
    adds r0, r12, #0
    adc r0, r6, #0x800
    mov r3, r0, lsl #4
    ldr r1, =data_020c4650
    str r2, [sp]
    ldr r0, [r1]
    ldr r1, [r4, #4]
    mov r3, r3, lsr #0x10
    bl func_0208a00c
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0205a5f4:
    ldr r0, =data_020c4650
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208a15c
    ldr lr, [sp, #8]
    mov r0, #0x1680000
    umull r3, r2, lr, r0
    mov r1, lr, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x80000
    adc r0, r2, #0
    mov r2, r3, lsr #0x14
    ldr r6, [sp, #4]
    ldr r12, [sp, #0xc]
    orr r2, r2, r0, lsl #12
    ldr r1, [sp, #0x30]
    sub r0, r5, r2
    str r6, [sp, #0x10]
    str lr, [sp, #0x14]
    str r12, [sp, #0x18]
    bl func_0202273c
    ldr r1, =0xb60b60b
    mov r2, #0xb6
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r0, r5, #0
    adc r0, r3, #0x800
    mov r0, r0, lsl #4
    mov r1, r0, lsr #0x10
    ldr r0, [sp, #0x30]
    str r1, [r4, #0x20]
    strh r0, [r4, #0xe]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x200
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205a69c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r3
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    bl func_0205a1fc
    cmp r0, #0
    beq @L_0205a6c8
    ldrh r1, [r0, #0xa]
    tst r1, #1
    bne @L_0205a6d0
@L_0205a6c8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0205a6d0:
    ldr r2, =data_020c4650
    ldr r1, [r0, #4]
    ldr r0, [r2]
    bl func_02089e64
    mov r7, #0
    mov r6, r0
    mov r8, r7
    ldr r5, [sp, #0x18]
    b @L_0205a728
@L_0205a6f4:
    ldr r1, [r5, r8, lsl #2]
    mov r0, r6
    bl func_ov015_021460d4
    mov r1, r0
    mov r0, r6
    bl func_ov015_02146014
    ldr r3, [r0, #0x10]
    ldr r2, [r0, #0xc]
    ldr r1, [r0, #0x14]
    sub r0, r3, r2
    bl func_02001d60
    add r7, r7, r0, asr #12
    add r8, r8, #1
@L_0205a728:
    cmp r8, r4
    blt @L_0205a6f4
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205a73c()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r3
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_0205a1fc
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4650
    ldr r1, [r4, #4]
    ldr r0, [r0]
    ldr r3, [sp, #0x10]
    mov r2, r5
    bl func_02089cbc
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x10
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205a790()
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    bl func_0205a1fc
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    ldmeqia sp!, {r3, pc}
    ldr r2, =data_020c4650
    ldr r1, [r0, #4]
    ldr r0, [r2]
    bl func_02089b4c
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205a7cc()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r3
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_0205a1fc
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4650
    ldr r1, [r4, #4]
    ldr r0, [r0]
    ldr r3, [sp, #0x10]
    mov r2, r5
    bl func_0208a28c
    ldr r0, [sp, #0x10]
    cmp r0, #1
    ldreqh r0, [r4, #0xa]
    orreq r0, r0, #4
    streqh r0, [r4, #0xa]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #8
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205a834()
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_0205a1fc
    cmp r0, #0
    beq @L_0205a85c
    ldrh r0, [r0, #0xa]
    tst r0, #1
    ldmneia sp!, {r3, pc}
@L_0205a85c:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205a864()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, #0
    add r0, r0, #0x9c
    mov r9, #0x28
    add r4, r0, #0x2000
    mov r10, r6
    ldr r8, =data_020c4650
    mov r7, r9
    b @L_0205a8bc
@L_0205a888:
    mul r1, r6, r7
    ldr r0, [r4, r1]
    add r5, r4, r1
    cmp r0, #0
    beq @L_0205a8b8
    ldr r0, [r8]
    ldr r1, [r5, #4]
    bl func_02089bd4
    mov r0, r5
    mov r1, r10
    mov r2, r9
    bl MI_CpuFill8
@L_0205a8b8:
    add r6, r6, #1
@L_0205a8bc:
    cmp r6, #6
    blt @L_0205a888
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205a8cc()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x40
    mov r9, r0
    ldr r4, =data_020c4650
    mov r7, #0
    b @L_0205aaf0
@L_0205a8e4:
    mov r0, #0x28
    mul r1, r7, r0
    add r0, r9, #0x9c
    add r2, r0, #0x2000
    ldr r0, [r2, r1]
    add r6, r2, r1
    cmp r0, #0
    beq @L_0205aaec
    ldrh r0, [r6, #0xa]
    tst r0, #0x10
    beq @L_0205a930
    ldr r0, [r4]
    ldr r1, [r6, #4]
    bl func_02089dc4
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205a930:
    ldr r0, [r4]
    ldr r1, [r6, #4]
    bl func_0208a40c
    cmp r0, #0
    ldrneh r0, [r6, #0xa]
    orrne r0, r0, #2
    strneh r0, [r6, #0xa]
    ldrh r0, [r6, #0xa]
    tst r0, #8
    beq @L_0205a980
    tst r0, #4
    bne @L_0205a980
    ldr r0, [r4]
    ldr r1, [r6, #4]
    bl func_0208a3ac
    cmp r0, #0
    ldrneh r1, [r6, #0xa]
    ldrne r0, =0xfff7
    andne r0, r1, r0
    strneh r0, [r6, #0xa]
@L_0205a980:
    ldrh r0, [r6, #0xa]
    tst r0, #0x100
    beq @L_0205aa30
    ldr r1, [r4]
    ldr r2, [r6, #4]
    add r0, sp, #0x1c
    bl func_0208a0c4
    ldr r2, [sp, #0x1c]
    ldr r1, [sp, #0x20]
    ldr r0, [sp, #0x24]
    str r2, [sp, #0x34]
    str r1, [sp, #0x38]
    str r0, [sp, #0x3c]
    mov r8, #0
    add r10, r9, #0x1000
    add r5, sp, #0x34
    b @L_0205a9f0
@L_0205a9c4:
    mov r0, r5
    mov r2, r5
    add r1, r6, #0x10
    bl func_02001f08
    ldrh r0, [r6, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r6, #0xc]
    beq @L_0205a9fc
    add r8, r8, #1
@L_0205a9f0:
    ldr r0, [r10, #0xf10]
    cmp r8, r0
    blo @L_0205a9c4
@L_0205a9fc:
    ldr r0, [sp, #0x3c]
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r6, #4]
    ldr r2, [sp, #0x34]
    ldr r3, [sp, #0x38]
    bl func_02089fb0
    ldrh r0, [r6, #0xc]
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xfeff
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205aa30:
    ldrh r0, [r6, #0xa]
    tst r0, #0x200
    beq @L_0205aaec
    ldr r1, [r4]
    ldr r2, [r6, #4]
    add r0, sp, #0x10
    bl func_0208a15c
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    str r2, [sp, #0x28]
    str r0, [sp, #0x30]
    str r1, [sp, #0x2c]
    mov r8, #0
    add r0, r9, #0x1000
    b @L_0205aa9c
@L_0205aa70:
    ldrh r1, [r6, #0xe]
    ldr r3, [sp, #0x2c]
    ldr r2, [r6, #0x20]
    sub r1, r1, #1
    mov r1, r1, lsl #0x10
    add r2, r3, r2
    movs r1, r1, lsr #0x10
    str r2, [sp, #0x2c]
    strh r1, [r6, #0xe]
    beq @L_0205aaa8
    add r8, r8, #1
@L_0205aa9c:
    ldr r1, [r0, #0xf10]
    cmp r8, r1
    blo @L_0205aa70
@L_0205aaa8:
    add r0, sp, #0x28
    add r3, sp, #4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r6, #4]
    ldr r0, [r4]
    ldr r2, [sp, #0xc]
    str r2, [sp]
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    bl func_0208a00c
    ldrh r0, [r6, #0xe]
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xfdff
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205aaec:
    add r7, r7, #1
@L_0205aaf0:
    cmp r7, #6
    blt @L_0205a8e4
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205ab14()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r4, r2
    mov r6, r0
    mov r1, #0
    mov r2, #0x48
    b @L_0205ab64
@L_0205ab30:
    mul r12, r1, r2
    add r3, r6, r12
    add r0, r3, #0x2000
    ldr r0, [r0, #0x18c]
    cmp r5, r0
    addeq r0, r3, #0x2100
    ldreqsh r0, [r0, #0x94]
    cmpeq r4, r0
    addeq r0, r6, #0x18c
    addeq r0, r0, #0x2000
    addeq r0, r0, r12
    ldmeqia sp!, {r4, r5, r6, pc}
    add r1, r1, #1
@L_0205ab64:
    cmp r1, #0x20
    blt @L_0205ab30
    cmp r5, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =data_020c46cc
    mov r1, r5
    ldr r0, [r0]
    mov r2, r4
    bl func_02085d88
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r1, #0
    mov r2, #0x48
    b @L_0205abbc
@L_0205aba4:
    mla r3, r1, r2, r6
    add r3, r3, #0x2000
    ldr r3, [r3, #0x18c]
    cmp r3, #0
    beq @L_0205abc4
    add r1, r1, #1
@L_0205abbc:
    cmp r1, #0x20
    blt @L_0205aba4
@L_0205abc4:
    cmp r1, #0x20
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r2, #0x48
    mul r12, r1, r2
    add r2, r6, r12
    add r1, r2, #0x2000
    str r5, [r1, #0x18c]
    add r2, r2, #0x2100
    strh r4, [r2, #0x94]
    add r3, r6, #0x18c
    str r0, [r1, #0x190]
    add r0, r3, #0x2000
    mov r1, #1
    strh r1, [r2, #0x96]
    add r0, r0, r12
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205ac0c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x64
    ldr r4, [sp, #0x88]
    movs r7, r1
    mov r8, r0
    mov r6, r2
    mov r5, r3
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r9, #0
    mov r0, r7
    mov r1, r9
    bl func_ov015_02130b14
    movs r10, r0
    bne @L_0205ac70
    mov r1, r7, lsl #0x10
    ldr r0, =data_020e88a0
    add r2, sp, #4
    mov r1, r1, lsr #0x10
    bl func_0207a5c0
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, r9
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0205ac70:
    cmp r5, #0
    bne @L_0205ac84
    cmp r10, #0
    ldrneh r5, [r10, #0x6e]
    ldreqh r5, [sp, #0x54]
@L_0205ac84:
    mov r0, r8
    cmp r4, #0
    mov r1, r7
    mov r2, r6
    moveq r4, #0x32
    bl func_0205ab14
    movs r9, r0
    bne @L_0205acb8
    mov r1, #0
    mov r0, r8
    mov r2, r1
    bl func_0205ab14
    mov r9, r0
@L_0205acb8:
    str r7, [r9]
    strh r6, [r9, #8]
    ldr r8, =data_020c46cc
    str r4, [sp]
    ldr r0, [r8]
    mov r1, r7
    mov r2, r6
    mov r3, r5
    bl func_020859c0
    mov r1, r0
    str r1, [r9, #4]
    ldr r0, [r8]
    ldr r2, =0xc350
    mov r3, #3
    bl func_02085e00
    ldr r0, =data_020c46c8
    str r4, [sp]
    ldr r0, [r0]
    mov r1, r7
    mov r2, r5
    mov r3, #0
    bl func_020878ac
    ldrh r0, [r9, #0xa]
    orr r0, r0, #0x11
    strh r0, [r9, #0xa]
    ldr r0, [r9, #4]
    add sp, sp, #0x64
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205ad38()
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_0205ab14
    movs r5, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020c46cc
    ldr r1, [r5, #4]
    ldr r0, [r4]
    bl func_02086274
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r4]
    ldr r1, [r5, #4]
    bl func_02085bfc
    ldr r2, =data_020c46c8
    mov r1, r0
    ldr r0, [r2]
    mov r2, #1
    bl func_020877e0
    ldr r0, [r4]
    ldr r1, [r5, #4]
    bl func_02085b4c
    mov r0, r5
    mov r1, #0
    mov r2, #0x48
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205adbc()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    movs r5, r1
    mov r6, #1
    mov r8, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r1, r8, #1
    cmp r5, r1
    beq @L_0205aec4
    ldr r1, =0x514
    cmp r5, r1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, r1, #0x258
    cmp r5, r1
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r0, #0x18c
    add r4, r0, #0x2000
    mov r9, #0x48
    b @L_0205ae38
@L_0205ae08:
    ldr r0, [r4]
    cmp r0, r5
    bne @L_0205ae30
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r4
    mov r1, r7
    mov r2, r9
    bl MI_CpuFill8
@L_0205ae30:
    add r4, r4, #0x48
    add r8, r8, #1
@L_0205ae38:
    cmp r8, #0x20
    blt @L_0205ae08
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r10, =data_020c46cc
    mov r1, #1
    ldr r0, [r10]
    bl func_02085c60
    mov r4, r0
    mov r8, #0
    ldr r7, =data_020c46c8
    b @L_0205aeb8
@L_0205ae64:
    ldrh r0, [r4, #0x20]
    cmp r0, r5
    bne @L_0205aeb0
    ldr r9, [r4, #0x5c]
    ldr r0, [r10]
    mov r1, r9
    bl func_02086274
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r10]
    mov r1, r9
    bl func_02085bfc
    mov r1, r0
    ldr r0, [r7]
    mov r2, r6
    bl func_020877e0
    ldr r0, [r10]
    mov r1, r9
    bl func_02085b4c
@L_0205aeb0:
    add r4, r4, #0xd4
    add r8, r8, #1
@L_0205aeb8:
    cmp r8, #0x18
    blt @L_0205ae64
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0205aec4:
    add r0, r0, #0x18c
    add r10, r0, #0x2000
    ldr r0, =0x76c
    ldr r5, =data_020c46cc
    sub r4, r0, #0x258
    ldr r11, =data_020c46c8
    b @L_0205af5c
@L_0205aee0:
    ldr r1, [r10]
    cmp r1, r4
    blt @L_0205af54
    ldr r0, =0x76c
    cmp r1, r0
    bgt @L_0205af54
    ldrh r0, [r10, #0xa]
    tst r0, #1
    beq @L_0205af58
    mov r0, r10
    mov r1, r7
    mov r2, #0x48
    ldr r9, [r10, #4]
    bl MI_CpuFill8
    ldr r0, [r5]
    mov r1, r9
    bl func_02086274
    cmp r0, #0
    bne @L_0205af58
    ldr r0, [r5]
    mov r1, r9
    bl func_02085bfc
    mov r1, r0
    ldr r0, [r11]
    mov r2, r6
    bl func_020877e0
    mov r1, r9
    ldr r0, [r5]
    bl func_02085b4c
@L_0205af54:
    add r10, r10, #0x48
@L_0205af58:
    add r8, r8, #1
@L_0205af5c:
    cmp r8, #0x20
    blt @L_0205aee0
    ldr r7, =data_020c46cc
    mov r1, #1
    ldr r0, [r7]
    bl func_02085c60
    ldr r11, =0x76c
    mov r10, r0
    mov r8, #0
    sub r4, r11, #0x258
    ldr r5, =data_020c46c8
    b @L_0205afe8
@L_0205af8c:
    ldrh r0, [r10, #0x20]
    cmp r0, r4
    blo @L_0205afe0
    cmp r0, r11
    bhi @L_0205afe0
    ldr r9, [r10, #0x5c]
    ldr r0, [r7]
    mov r1, r9
    bl func_02086274
    cmp r0, #0
    bne @L_0205afe4
    ldr r0, [r7]
    mov r1, r9
    bl func_02085bfc
    mov r1, r0
    ldr r0, [r5]
    mov r2, r6
    bl func_020877e0
    ldr r0, [r7]
    mov r1, r9
    bl func_02085b4c
@L_0205afe0:
    add r10, r10, #0xd4
@L_0205afe4:
    add r8, r8, #1
@L_0205afe8:
    cmp r8, #0x18
    blt @L_0205af8c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_0205b004()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    movs r6, r1
    mov r5, r2
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    bl func_0205ab14
    movs r4, r0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r7, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r7]
    bl func_02085ba4
    mov r8, r0
    ldr r0, [r7]
    ldr r1, [r4, #4]
    bl func_02085bfc
    ldrh r3, [r8, #0xa8]
    mov r1, #0
    mov r2, r6
    str r3, [sp]
    str r1, [sp, #4]
    ldrb r3, [r8, #0x67]
    ldr r6, =data_020c46c8
    mov r1, r0
    str r3, [sp, #8]
    ldr r0, [r6]
    mov r3, r5
    bl func_02087500
    ldr r0, [r6]
    mov r1, #1
    bl func_020879e4
    ldrh r0, [r4, #0xa]
    orr r0, r0, #2
    strh r0, [r4, #0xa]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205b0b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, [sp, #0x18]
    mov r7, r3
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_0205ab14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    mov r6, r0
    cmp r5, #0
    bne @L_0205b110
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    and r1, r7, #0xff
    bl func_02084e08
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0205b110:
    cmp r7, #0
    beq @L_0205b130
    mov r0, #0
    str r0, [r4, #0x38]
    mov r1, r5, lsl #0xc
    mov r0, #0x20000
    bl func_02001d60
    b @L_0205b148
@L_0205b130:
    mov r2, #0x1f000
    mov r1, r5, lsl #0xc
    mov r0, #0x20000
    str r2, [r4, #0x38]
    bl func_02001d60
    rsb r0, r0, #0
@L_0205b148:
    str r0, [r4, #0x3c]
    strh r5, [r4, #0x40]
    cmp r6, #0
    beq @L_0205b174
    mov r0, r6
    mov r1, #1
    bl func_02084e08
    ldr r1, [r4, #0x38]
    mov r0, r6
    mov r1, r1, asr #0xc
    bl func_02084d34
@L_0205b174:
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x800
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205b188()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x38
    ldr r5, [sp, #0x5c]
    cmp r1, #0
    mov r6, r3
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_0205ab14
    movs r4, r0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    movs r7, r0
    beq @L_0205b1e4
    mov r1, #1
    bl func_02084e08
@L_0205b1e4:
    cmp r7, #0
    beq @L_0205b204
    ldr r0, [r7, #0x84]
    str r0, [sp, #0x2c]
    ldr r0, [r7, #0x88]
    str r0, [sp, #0x30]
    ldr r0, [r7, #0x8c]
    b @L_0205b218
@L_0205b204:
    ldr r2, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r0, [sp, #0x58]
    str r2, [sp, #0x2c]
    str r1, [sp, #0x30]
@L_0205b218:
    str r0, [sp, #0x34]
    ldr r2, [sp, #0x50]
    ldr r1, [sp, #0x54]
    ldr r0, [sp, #0x58]
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    str r0, [sp, #0x28]
    cmp r6, #0
    beq @L_0205b24c
    add r1, sp, #0x20
    add r0, sp, #0x2c
    mov r2, r1
    bl func_02001f08
@L_0205b24c:
    cmp r5, #0
    bne @L_0205b2d8
    ldr r1, [sp, #0x60]
    cmp r1, #0
    bne @L_0205b2a4
    ldr r1, [sp, #0x24]
    ldrb r0, [sp, #0x64]
    str r1, [sp]
    ldr r2, [sp, #0x28]
    mov r1, #1
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, =data_020c46cc
    ldr r2, [r4, #4]
    ldr r1, [r0]
    ldr r3, [sp, #0x20]
    add r0, sp, #0x14
    bl func_02085ec0
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0205b2a4:
    ldr r3, =data_020c46cc
    add r0, sp, #0x20
    str r1, [sp, #4]
    sub r5, sp, #8
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    ldr r0, [r3]
    ldr r1, [r4, #4]
    ldmia r5, {r2, r3}
    bl func_02086584
    mov r0, #0
    strh r0, [r4, #0xc]
    b @L_0205b334
@L_0205b2d8:
    add r0, sp, #0x20
    add r1, sp, #0x2c
    mov r2, r0
    bl func_02001f38
    ldr r0, [sp, #0x20]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x24]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x28]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r1, [sp, #0x20]
    str r0, [sp, #0x28]
    str r1, [r4, #0x10]
    ldr r0, [sp, #0x24]
    str r0, [r4, #0x14]
    ldr r0, [sp, #0x28]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
@L_0205b334:
    ldrh r1, [r4, #0xa]
    ldr r0, =data_020c46cc
    mov r2, #0x18
    orr r1, r1, #0x100
    strh r1, [r4, #0xa]
    ldr r0, [r0]
    ldr r1, [r4, #4]
    bl func_02086484
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205b360()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x38
    ldr r6, [sp, #0x5c]
    cmp r1, #0
    mov r7, r3
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_0205ab14
    movs r5, r0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r5, #0xa]
    tst r0, #1
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r5, #4]
    ldr r0, [r0]
    bl func_02085ba4
    movs r4, r0
    addeq sp, sp, #0x38
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #1
    bl func_02084e08
    ldr r0, [r4, #0x84]
    ldr r2, [sp, #0x50]
    str r0, [sp, #0x2c]
    ldr r0, [r4, #0x88]
    ldr r1, [sp, #0x54]
    str r0, [sp, #0x30]
    ldr r3, [r4, #0x8c]
    ldr r0, [sp, #0x58]
    str r3, [sp, #0x34]
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    str r0, [sp, #0x28]
    cmp r7, #0
    beq @L_0205b408
    add r1, sp, #0x20
    add r0, sp, #0x2c
    mov r2, r1
    bl func_02001f08
@L_0205b408:
    cmp r6, #0
    bne @L_0205b490
    ldr r1, [sp, #0x60]
    cmp r1, #0
    bne @L_0205b45c
    ldr r0, [sp, #0x24]
    mov r1, #1
    str r0, [sp]
    ldr r2, [sp, #0x28]
    ldr r0, =data_020c46cc
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r1, [r0]
    ldr r2, [r5, #4]
    ldr r3, [sp, #0x20]
    add r0, sp, #0x14
    bl func_02085ec0
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0205b45c:
    ldr r3, =data_020c46cc
    add r0, sp, #0x20
    str r1, [sp, #4]
    sub r4, sp, #8
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    ldr r0, [r3]
    ldr r1, [r5, #4]
    ldmia r4, {r2, r3}
    bl func_02086584
    mov r0, #0
    strh r0, [r5, #0xc]
    b @L_0205b4ec
@L_0205b490:
    add r0, sp, #0x20
    add r1, sp, #0x2c
    mov r2, r0
    bl func_02001f38
    ldr r0, [sp, #0x20]
    mov r1, r6, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x24]
    mov r1, r6, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x28]
    mov r1, r6, lsl #0xc
    bl func_02001d60
    ldr r1, [sp, #0x20]
    str r0, [sp, #0x28]
    str r1, [r5, #0x10]
    ldr r0, [sp, #0x24]
    str r0, [r5, #0x14]
    ldr r0, [sp, #0x28]
    str r0, [r5, #0x18]
    strh r6, [r5, #0xc]
@L_0205b4ec:
    ldrh r0, [r5, #0xa]
    orr r0, r0, #0x100
    strh r0, [r5, #0xa]
    add sp, sp, #0x38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205b504()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x14
    cmp r1, #0
    mov r5, r3
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    bl func_0205ab14
    movs r4, r0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x14
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    cmp r5, #0
    beq @L_0205b59c
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    ldr r6, [r0, #0x84]
    ldr r12, [r0, #0x8c]
    ldr r5, [sp, #0x28]
    ldr r3, [sp, #0x2c]
    ldr r2, [sp, #0x30]
    ldr r1, [sp, #0x34]
    ldr lr, [r0, #0x88]
    add r5, r5, r6
    add r3, r3, r12
    add r2, r2, r6
    add r0, r1, r12
    str r6, [sp, #8]
    str lr, [sp, #0xc]
    str r12, [sp, #0x10]
    str r5, [sp, #0x28]
    str r3, [sp, #0x2c]
    str r2, [sp, #0x30]
    str r0, [sp, #0x34]
@L_0205b59c:
    ldr r5, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r5]
    mov r2, #1
    bl func_020860ac
    ldr r1, [sp, #0x30]
    ldr r0, [sp, #0x34]
    str r1, [sp]
    str r0, [sp, #4]
    ldr r0, [r5]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x28]
    ldr r3, [sp, #0x2c]
    bl func_020860f0
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205b5e0()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x2c
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    bl func_0205ab14
    movs r4, r0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r5, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r5]
    bl func_02085ba4
    mov r6, r0
    ldr r0, [r5]
    ldr r1, [r4, #4]
    mov r2, #0x10
    bl func_02086484
    cmp r6, #0
    beq @L_0205b688
    add r0, r6, #0x6c
    add r3, sp, #0x20
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x24]
    mov r1, #0
    str r0, [sp]
    ldr r2, [sp, #0x28]
    mov r0, #1
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r1, [r5]
    ldr r2, [r4, #4]
    ldr r3, [sp, #0x20]
    add r0, sp, #0x14
    bl func_02085ec0
@L_0205b688:
    mov r0, #0
    strh r0, [r4, #0xc]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x2c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205b6a8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [sp, #0x18]
    ldr r5, [sp, #0x1c]
    mov r7, r3
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_0205ab14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    cmp r6, #0
    bne @L_0205b710
    str r7, [r4, #0x30]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, #0
    ldr r2, [r4, #0x30]
    mov r3, r1
    bl func_02084d24
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0205b710:
    cmp r5, #0
    ldreq r3, =0x5e14
    beq @L_0205b73c
    mov r0, #0x6000
    umull r3, r2, r5, r0
    mov r1, r5, asr #0x1f
    adds r3, r3, #0x800
    mla r2, r1, r0, r2
    adc r0, r2, #0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
@L_0205b73c:
    ldr r2, =0x88888889
    mov r0, r3, lsr #0x1f
    smull r1, r5, r2, r3
    add r5, r3, r5
    add r1, r6, r6, lsr #31
    add r5, r0, r5, asr #5
    mov r0, r7
    mov r1, r1, asr #1
    bl func_0202273c
    add r1, r6, r6, lsr #31
    mov r1, r1, asr #1
    sub r1, r1, #1
    mul r1, r5, r1
    add r1, r1, r1, lsr #31
    add r0, r0, r1, asr #1
    str r0, [r4, #0x2c]
    mov r0, #0
    str r0, [r4, #0x30]
    str r5, [r4, #0x28]
    strh r6, [r4, #0x34]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x400
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205b7a8()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, [sp, #0x10]
    mov r6, r3
    cmp r1, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    bl func_0205ab14
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    ldrh r1, [r0, #0x6a]
    mov r0, #0x1680000
    umull r3, r2, r1, r0
    mov r1, r1, asr #0x1f
    mla r2, r1, r0, r2
    adds r3, r3, #0x80000
    adc r0, r2, #0
    mov r2, r3, lsr #0x14
    ldr r1, [sp, #0x14]
    orr r2, r2, r0, lsl #12
    cmp r6, #0
    addne r5, r5, r2
    cmp r1, #0
    bne @L_0205b858
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r6, r3, r5, r0
    mla r3, r5, r1, r3
    mov r2, r5, asr #0x1f
    mla r3, r2, r0, r3
    adds r0, r6, #0
    adc r0, r3, #0x800
    mov r2, r0, lsl #4
    ldr r1, =data_020c46cc
    mov r2, r2, lsr #0x10
    ldr r0, [r1]
    ldr r1, [r4, #4]
    bl func_02085e30
    ldmia sp!, {r4, r5, r6, pc}
@L_0205b858:
    sub r0, r5, r2
    bl func_0202273c
    ldr r1, =0xb60b60b
    mov r2, #0xb6
    umull r5, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r0, r5, #0
    adc r0, r3, #0x800
    mov r0, r0, lsl #4
    mov r1, r0, lsr #0x10
    ldr r0, [sp, #0x14]
    str r1, [r4, #0x20]
    strh r0, [r4, #0xe]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x200
    strh r0, [r4, #0xa]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205b8ac()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    cmp r1, #0
    mov r4, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    bl func_0205ab14
    movs r5, r0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrh r0, [r5, #0xa]
    tst r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r7, =data_020c46cc
    ldr r1, [r5, #4]
    ldr r0, [r7]
    bl func_02085ba4
    ldr r1, [r0, #0x84]
    ldr r3, [sp, #0x30]
    str r1, [sp, #0x10]
    ldr r12, [r0, #0x88]
    add r1, sp, #4
    str r12, [sp, #0x14]
    ldr r6, [r0, #0x8c]
    add r0, sp, #0x10
    add r2, sp, #0
    str r6, [sp, #0x18]
    str r4, [sp, #4]
    str r12, [sp, #8]
    str r3, [sp, #0xc]
    bl func_02099a2c
    ldr r0, [sp, #0x34]
    cmp r0, #0
    bne @L_0205b950
    ldrh r2, [sp]
    ldr r0, [r7]
    ldr r1, [r5, #4]
    bl func_02085e30
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0205b950:
    ldrh r1, [sp]
    mov r6, #0x1680000
    ldr r0, [r7]
    umull r3, r2, r1, r6
    mov r1, r1, asr #0x1f
    mla r2, r1, r6, r2
    adds r3, r3, #0x80000
    ldr r1, [r5, #4]
    adc r2, r2, #0
    mov r4, r3, lsr #0x14
    orr r4, r4, r2, lsl #12
    bl func_02085ba4
    ldrh r3, [r0, #0x6a]
    umull r2, r1, r3, r6
    mov r0, r3, asr #0x1f
    mla r1, r0, r6, r1
    adds r2, r2, #0x80000
    adc r0, r1, #0
    mov r1, r2, lsr #0x14
    orr r1, r1, r0, lsl #12
    sub r0, r4, r1
    mov r1, #0xb4000
    cmp r0, #0xb4000
    rsbgt r0, r0, #0x168
    rsb r1, r1, #0
    cmp r0, r1
    ldr r1, [sp, #0x34]
    addlt r0, r0, #0x168
    strh r3, [sp]
    bl func_0202273c
    ldr r1, =0xb60b60b
    mov r2, #0xb6
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r0, r4, #0
    adc r0, r3, #0x800
    mov r0, r0, asr #0xc
    strh r0, [sp]
    ldrh r1, [sp]
    ldr r0, [sp, #0x34]
    str r1, [r5, #0x20]
    strh r0, [r5, #0xe]
    ldrh r0, [r5, #0xa]
    orr r0, r0, #0x200
    strh r0, [r5, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205ba1c()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    cmp r3, #0
    mov r6, r0
    mov r5, r1
    mov r4, r2
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r2, [sp, #0x30]
    mov r1, r3
    bl func_0205ab14
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrh r1, [r0, #0xa]
    tst r1, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r7, =data_020c46cc
    ldr r1, [r0, #4]
    ldr r0, [r7]
    bl func_02085ba4
    ldr r1, [r0, #0x84]
    cmp r5, #0
    str r1, [sp, #4]
    ldr r1, [r0, #0x88]
    str r1, [sp, #8]
    ldr r0, [r0, #0x8c]
    str r0, [sp, #0xc]
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_0205ab14
    movs r5, r0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrh r0, [r5, #0xa]
    tst r0, #1
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r0, [r7]
    ldr r1, [r5, #4]
    bl func_02085ba4
    ldr r2, [r0, #0x84]
    add r1, sp, #4
    str r2, [sp, #0x10]
    ldr r3, [r0, #0x88]
    add r2, sp, #0
    str r3, [sp, #0x14]
    ldr r3, [r0, #0x8c]
    add r0, sp, #0x10
    str r3, [sp, #0x18]
    bl func_02099a2c
    ldr r0, [sp, #0x34]
    cmp r0, #0
    bne @L_0205bb1c
    ldrh r2, [sp]
    ldr r0, [r7]
    ldr r1, [r5, #4]
    bl func_02085e30
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0205bb1c:
    ldrh r1, [sp]
    mov r6, #0x1680000
    ldr r0, [r7]
    umull r3, r2, r1, r6
    mov r1, r1, asr #0x1f
    mla r2, r1, r6, r2
    adds r3, r3, #0x80000
    ldr r1, [r5, #4]
    adc r2, r2, #0
    mov r4, r3, lsr #0x14
    orr r4, r4, r2, lsl #12
    bl func_02085ba4
    ldrh r3, [r0, #0x6a]
    umull r2, r1, r3, r6
    mov r0, r3, asr #0x1f
    mla r1, r0, r6, r1
    adds r2, r2, #0x80000
    adc r0, r1, #0
    mov r1, r2, lsr #0x14
    orr r1, r1, r0, lsl #12
    sub r0, r4, r1
    mov r1, #0xb4000
    cmp r0, #0xb4000
    rsbgt r0, r0, #0x168
    rsb r1, r1, #0
    cmp r0, r1
    ldr r1, [sp, #0x34]
    addlt r0, r0, #0x168
    strh r3, [sp]
    bl func_0202273c
    ldr r1, =0xb60b60b
    mov r2, #0xb6
    umull r4, r3, r0, r1
    mla r3, r0, r2, r3
    mov r0, r0, asr #0x1f
    mla r3, r0, r1, r3
    adds r0, r4, #0
    adc r0, r3, #0x800
    mov r0, r0, asr #0xc
    strh r0, [sp]
    ldrh r1, [sp]
    ldr r0, [sp, #0x34]
    str r1, [r5, #0x20]
    strh r0, [r5, #0xe]
    ldrh r0, [r5, #0xa]
    orr r0, r0, #0x200
    strh r0, [r5, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205bbe8()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    movs r6, r1
    mov r5, r3
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    bl func_0205ab14
    movs r4, r0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_02085ba4
    str r5, [sp]
    ldr r1, =data_020c46c8
    ldrh r2, [r0, #0xa8]
    ldr r0, [r1]
    mov r1, r6
    mov r3, #0
    bl func_020878ac
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x10
    strh r0, [r4, #0xa]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205bc68()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r3
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_0205ab14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r4, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [sp, #0x10]
    cmp r0, #0
    beq @L_0205bcc4
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r5
    mov r3, #3
    bl func_02085e00
    ldrh r0, [r4, #0xa]
    orr r0, r0, #4
    strh r0, [r4, #0xa]
    b @L_0205bcdc
@L_0205bcc4:
    ldr r0, =data_020c46cc
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r5
    mov r3, #4
    bl func_02085e00
@L_0205bcdc:
    ldrh r0, [r4, #0xa]
    orr r0, r0, #8
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205bcf0()
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_0205ab14
    cmp r0, #0
    beq @L_0205bd18
    ldrh r0, [r0, #0xa]
    tst r0, #1
    ldmneia sp!, {r3, pc}
@L_0205bd18:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205bd20()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r2, #0
    movs r5, r1
    mov r4, r2
    moveq r0, r2
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r0, #0x18c
    add r1, r0, #0x2000
    b @L_0205bd70
@L_0205bd44:
    ldr r0, [r1]
    cmp r0, r5
    bne @L_0205bd68
    ldrh r0, [r1, #0xa]
    tst r0, #1
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r4, r0
    b @L_0205bd78
@L_0205bd68:
    add r1, r1, #0x48
    add r2, r2, #1
@L_0205bd70:
    cmp r2, #0x20
    blt @L_0205bd44
@L_0205bd78:
    cmp r2, #0x20
    bne @L_0205bdc4
    ldr r0, =data_020c46cc
    mov r1, #1
    ldr r0, [r0]
    bl func_02085c60
    mov r2, #0
    b @L_0205bdb0
@L_0205bd98:
    ldrh r1, [r0, #0x20]
    cmp r1, r5
    ldreqh r4, [r0, #0xa4]
    beq @L_0205bdb8
    add r0, r0, #0xd4
    add r2, r2, #1
@L_0205bdb0:
    cmp r2, #0x18
    blt @L_0205bd98
@L_0205bdb8:
    cmp r2, #0x18
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
@L_0205bdc4:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205bdd0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, #0
    add r0, r0, #0x18c
    mov r6, #0x48
    add r8, r0, #0x2000
    mov r7, r4
    mov r5, r6
@L_0205bdec:
    mul r3, r4, r5
    ldr r0, [r8, r3]
    cmp r0, #0
    beq @L_0205be0c
    mov r1, r7
    mov r2, r6
    add r0, r8, r3
    bl MI_CpuFill8
@L_0205be0c:
    add r4, r4, #1
    cmp r4, #0x20
    blt @L_0205bdec
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205be1c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    mov r11, r0
    add r0, r11, #0x1000
    ldr r6, [r0, #0xf10]
    ldr r9, =data_020c46cc
    mov r7, #0
    b @L_0205c1c4
@L_0205be3c:
    mov r0, #0x48
    mul r1, r7, r0
    add r0, r11, #0x18c
    add r2, r0, #0x2000
    ldr r0, [r2, r1]
    add r4, r2, r1
    cmp r0, #0
    beq @L_0205c1c0
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_02085ba4
    ldrh r1, [r4, #0xa]
    mov r5, r0
    tst r1, #0x10
    beq @L_0205be98
    ldr r0, =data_020c46c8
    ldr r0, [r0]
    bl func_02087b68
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205be98:
    ldrh r0, [r4, #0xa]
    tst r0, #8
    beq @L_0205bedc
    tst r0, #4
    bne @L_0205bedc
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_02085bfc
    ldr r2, =data_020c46c8
    mov r1, r0
    ldr r0, [r2]
    bl func_02088140
    cmp r0, #0
    ldrneh r1, [r4, #0xa]
    ldrne r0, =0xfff7
    andne r0, r1, r0
    strneh r0, [r4, #0xa]
@L_0205bedc:
    ldrh r0, [r4, #0xa]
    tst r0, #0x100
    beq @L_0205c014
    ldrh r0, [r4, #0xc]
    cmp r0, #0
    bne @L_0205bf2c
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_02086440
    cmp r0, #0
    bne @L_0205c014
    ldrh r1, [r4, #0xa]
    ldr r0, =0xfeff
    mov r2, #0x18
    and r0, r1, r0
    strh r0, [r4, #0xa]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_02086460
    b @L_0205c014
@L_0205bf2c:
    ldr r0, [r5, #0x84]
    mov r10, #0
    str r0, [sp, #0x38]
    ldr r0, [r5, #0x88]
    add r8, sp, #0x38
    str r0, [sp, #0x3c]
    ldr r0, [r5, #0x8c]
    str r0, [sp, #0x40]
    b @L_0205bf7c
@L_0205bf50:
    mov r0, r8
    mov r2, r8
    add r1, r4, #0x10
    bl func_02001f08
    ldrh r0, [r4, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0xc]
    beq @L_0205bf84
    add r10, r10, #1
@L_0205bf7c:
    cmp r10, r6
    blo @L_0205bf50
@L_0205bf84:
    ldrh r0, [r4, #0xc]
    ldr r8, =data_020c46cc
    mov r10, #0
    cmp r0, #0
    bne @L_0205bfe8
    ldrh r1, [r4, #0xa]
    ldr r0, =0xfeff
    mov r2, #0x18
    and r0, r1, r0
    strh r0, [r4, #0xa]
    ldr r0, [r8]
    ldr r1, [r4, #4]
    bl func_02086460
    ldr r0, [sp, #0x3c]
    mov r1, #1
    str r0, [sp]
    ldr r2, [sp, #0x40]
    add r0, sp, #0x20
    stmib sp, {r2, r10}
    str r1, [sp, #0xc]
    str r10, [sp, #0x10]
    ldr r1, [r8]
    ldr r2, [r4, #4]
    ldr r3, [sp, #0x38]
    b @L_0205c010
@L_0205bfe8:
    ldr r0, [sp, #0x3c]
    str r0, [sp]
    ldr r0, [sp, #0x40]
    stmib sp, {r0, r10}
    str r10, [sp, #0xc]
    str r10, [sp, #0x10]
    ldr r1, [r8]
    ldr r2, [r4, #4]
    ldr r3, [sp, #0x38]
    add r0, sp, #0x14
@L_0205c010:
    bl func_02085ec0
@L_0205c014:
    ldrh r0, [r4, #0xa]
    tst r0, #0x200
    beq @L_0205c094
    ldrh r0, [r5, #0x6a]
    mov r10, #0
    str r0, [sp, #0x30]
    b @L_0205c05c
@L_0205c030:
    ldrh r0, [r4, #0xe]
    ldr r2, [sp, #0x30]
    ldr r1, [r4, #0x20]
    sub r0, r0, #1
    add r1, r2, r1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    str r1, [sp, #0x30]
    strh r0, [r4, #0xe]
    beq @L_0205c064
    add r10, r10, #1
@L_0205c05c:
    cmp r10, r6
    blo @L_0205c030
@L_0205c064:
    ldr r0, [sp, #0x30]
    ldr r1, [r4, #4]
    mov r2, r0, lsl #0x10
    ldr r0, [r9]
    mov r2, r2, lsr #0x10
    bl func_02085e30
    ldrh r0, [r4, #0xe]
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xfdff
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205c094:
    ldrh r0, [r4, #0xa]
    tst r0, #0x400
    beq @L_0205c11c
    mov r10, #0
    b @L_0205c0d4
@L_0205c0a8:
    ldr r1, [r4, #0x30]
    ldr r0, [r4, #0x2c]
    add r2, r1, r0
    str r2, [r4, #0x30]
    ldr r1, [r4, #0x2c]
    ldr r0, [r4, #0x28]
    cmp r2, #0
    sub r0, r1, r0
    str r0, [r4, #0x2c]
    ble @L_0205c0dc
    add r10, r10, #1
@L_0205c0d4:
    cmp r10, r6
    blo @L_0205c0a8
@L_0205c0dc:
    ldr r0, [r4, #0x30]
    cmp r0, #0
    bgt @L_0205c100
    ldrh r1, [r4, #0xa]
    ldr r0, =0xfbff
    and r0, r1, r0
    strh r0, [r4, #0xa]
    mov r0, #0
    str r0, [r4, #0x30]
@L_0205c100:
    cmp r5, #0
    beq @L_0205c11c
    mov r1, #0
    ldr r2, [r4, #0x30]
    mov r0, r5
    mov r3, r1
    bl func_02084d24
@L_0205c11c:
    ldrh r0, [r4, #0xa]
    tst r0, #0x800
    beq @L_0205c1c0
    mov r10, #0
    b @L_0205c15c
@L_0205c130:
    ldr r1, [r4, #0x38]
    ldr r0, [r4, #0x3c]
    add r0, r1, r0
    str r0, [r4, #0x38]
    ldrh r0, [r4, #0x40]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0x40]
    beq @L_0205c164
    add r10, r10, #1
@L_0205c15c:
    cmp r10, r6
    blo @L_0205c130
@L_0205c164:
    ldrh r0, [r4, #0x40]
    cmp r0, #0
    bne @L_0205c1a8
    ldrh r2, [r4, #0xa]
    ldr r0, =0xf7ff
    mov r1, #0x1f000
    and r0, r2, r0
    strh r0, [r4, #0xa]
    str r1, [r4, #0x38]
    ldr r0, [r4, #0x3c]
    cmp r0, #0
    bge @L_0205c1a8
    cmp r5, #0
    beq @L_0205c1a8
    mov r0, r5
    mov r1, #0
    bl func_02084e08
@L_0205c1a8:
    cmp r5, #0
    beq @L_0205c1c0
    ldr r1, [r4, #0x38]
    mov r0, r5
    mov r1, r1, asr #0xc
    bl func_02084d34
@L_0205c1c0:
    add r7, r7, #1
@L_0205c1c4:
    cmp r7, #0x20
    blt @L_0205be3c
    add sp, sp, #0x44
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_0205c1f4()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x104
    mov r3, #0x28
    mul r6, r1, r3
    add r0, r0, #0x28c
    add r5, sp, #4
    add r7, r0, #0x2800
    ldr r4, =data_020c4678
    ldr r1, =data_020ae6b8
    ldr r0, [r4]
    mov r9, r2
    mov r3, r5
    add r8, r7, r6
    bl func_0208d38c
    str r9, [r7, r6]
    mov r2, #1
    ldr r0, [r4]
    mov r1, r5
    mov r3, r2
    str r2, [sp]
    bl func_0208de7c
    str r0, [r8, #4]
    ldrh r0, [r8, #0xa]
    orr r0, r0, #0x11
    strh r0, [r8, #0xa]
    add sp, sp, #0x104
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void UnkClass_02054800::func_0205c268()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x28c
    add r0, r0, #0x2800
    mov r4, #0x28
    mla r5, r1, r4, r0
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4678
    ldr r1, [r5, #4]
    ldr r0, [r0]
    bl func_0208e0e4
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205c2b0()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x28c
    add r2, r0, #0x2800
    mov r0, #0x28
    mla r5, r1, r0, r2
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020c4678
    ldr r1, [r5, #4]
    ldr r0, [r4]
    bl func_0208e064
    mov r0, #1
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r5, #4]
    mov r2, #0x3000
    mov r3, #8
    bl func_0208e6cc
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205c304()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x28c
    add r3, r0, #0x2800
    mov r0, #0x28
    mla r3, r1, r0, r3
    ldrh r0, [r3, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r3, #4]
    ldr r0, [r0]
    bl func_0208e754
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205c33c()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x28c
    add r3, r0, #0x2800
    mov r0, #0x28
    mla r3, r1, r0, r3
    ldrh r0, [r3, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r3, #4]
    ldr r0, [r0]
    add r2, r2, r2, lsl #1
    bl func_0208e710
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205c378()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    add r0, r0, #0x28c
    add r4, r0, #0x2800
    mov r0, #0x28
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    ldr r5, [sp, #0x3c]
    mov r7, r2
    tst r0, #1
    mov r6, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, =data_020c4678
    ldr r1, [r4, #4]
    ldr r0, [r8]
    mov r2, #1
    bl func_0208e38c
    cmp r5, #0
    bne @L_0205c3ec
    ldr r0, [sp, #0x38]
    mov r2, r7
    str r0, [sp]
    ldr r0, [r8]
    ldr r1, [r4, #4]
    mov r3, r6
    bl func_0208e414
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0205c3ec:
    ldr r1, [r8]
    ldr r2, [r4, #4]
    add r0, sp, #4
    bl func_0208e508
    ldr r1, [sp, #8]
    ldr r0, [sp, #4]
    sub r3, r6, r1
    sub r0, r7, r0
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x38]
    str r0, [sp, #0x10]
    sub r2, r1, r2
    str r3, [sp, #0x14]
    mov r1, r5, lsl #0xc
    str r2, [sp, #0x18]
    bl func_02001d60
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    str r2, [r4, #0x10]
    str r1, [r4, #0x14]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
    ldrh r1, [r4, #0xa]
    str r0, [sp, #0x18]
    orr r0, r1, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205c480()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x104
    add r0, r0, #0x28c
    add r3, r0, #0x2800
    mov r0, #0x28
    mla r6, r1, r0, r3
    ldrh r0, [r6, #0xa]
    tst r0, #1
    addeq sp, sp, #0x104
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r5, sp, #4
    str r5, [sp]
    ldr r4, =data_020c4678
    ldr r3, [r6]
    ldr r0, [r4]
    ldr r1, =data_020ae6c0
    bl func_0208d3d8
    ldr r0, [r4]
    ldr r1, [r6, #4]
    mov r2, r5
    mov r3, #1
    bl func_0208e15c
    ldrh r0, [r6, #0xa]
    orr r0, r0, #0x10
    strh r0, [r6, #0xa]
    add sp, sp, #0x104
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205c4f4()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x28c
    add r2, r0, #0x2800
    mov r0, #0x28
    mla r2, r1, r0, r2
    ldrh r0, [r2, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r2, #4]
    ldr r0, [r0]
    bl func_0208e064
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205c52c()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x28c
    add r12, r0, #0x2800
    mov r0, #0x28
    mla r4, r1, r0, r12
    ldrh r0, [r4, #0xa]
    mov r5, r3
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4678
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_0208e600
    cmp r5, #1
    ldreqh r0, [r4, #0xa]
    orreq r0, r0, #4
    streqh r0, [r4, #0xa]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #8
    strh r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205c584()
{
    mov r2, #0x28
    mla r0, r1, r2, r0
    add r0, r0, #0x2a00
    ldrh r0, [r0, #0x96]
    bx lr
}

asm void UnkClass_02054800::func_0205c598()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, #0
    add r0, r0, #0x28c
    mov r9, #0x28
    add r4, r0, #0x2800
    mov r10, r6
    ldr r8, =data_020c4678
    mov r7, r9
    b @L_0205c5ec
@L_0205c5bc:
    mla r5, r6, r7, r4
    ldrh r0, [r5, #0xa]
    tst r0, #1
    beq @L_0205c5e8
    ldr r0, [r8]
    ldr r1, [r5, #4]
    bl func_0208e0e4
    mov r0, r5
    mov r1, r10
    mov r2, r9
    bl MI_CpuFill8
@L_0205c5e8:
    add r6, r6, #1
@L_0205c5ec:
    cmp r6, #4
    blt @L_0205c5bc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205c5fc()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x20
    mov r9, r0
    ldr r4, =data_020c4678
    mov r7, #0
    b @L_0205c780
@L_0205c614:
    add r0, r9, #0x28c
    add r1, r0, #0x2800
    mov r0, #0x28
    mla r6, r7, r0, r1
    ldrh r0, [r6, #0xa]
    tst r0, #1
    beq @L_0205c77c
    tst r0, #0x10
    beq @L_0205c658
    ldr r0, [r4]
    ldr r1, [r6, #4]
    bl func_0208e35c
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205c658:
    ldr r1, [r6, #4]
    mov r5, #0
    ldr r0, [r4]
    add r2, sp, #4
    str r5, [sp, #4]
    bl func_0208d46c
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_0205c688
    ldrb r0, [r0, #0xc]
    cmp r0, #3
    moveq r5, #1
@L_0205c688:
    cmp r5, #0
    ldrneh r0, [r6, #0xa]
    orrne r0, r0, #2
    strneh r0, [r6, #0xa]
    ldrh r0, [r6, #0xa]
    tst r0, #8
    beq @L_0205c6cc
    tst r0, #4
    bne @L_0205c6cc
    ldr r0, [r4]
    ldr r1, [r6, #4]
    bl func_0208e680
    cmp r0, #0
    ldrneh r1, [r6, #0xa]
    ldrne r0, =0xfff7
    andne r0, r1, r0
    strneh r0, [r6, #0xa]
@L_0205c6cc:
    ldrh r0, [r6, #0xa]
    tst r0, #0x100
    beq @L_0205c77c
    ldr r1, [r4]
    ldr r2, [r6, #4]
    add r0, sp, #8
    bl func_0208e508
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
    mov r8, #0
    add r10, r9, #0x1000
    add r5, sp, #0x14
    b @L_0205c73c
@L_0205c710:
    mov r0, r5
    mov r2, r5
    add r1, r6, #0x10
    bl func_02001f08
    ldrh r0, [r6, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r6, #0xc]
    beq @L_0205c748
    add r8, r8, #1
@L_0205c73c:
    ldr r0, [r10, #0xf10]
    cmp r8, r0
    blo @L_0205c710
@L_0205c748:
    ldr r0, [sp, #0x1c]
    str r0, [sp]
    ldr r0, [r4]
    ldr r1, [r6, #4]
    ldr r2, [sp, #0x14]
    ldr r3, [sp, #0x18]
    bl func_0208e414
    ldrh r0, [r6, #0xc]
    cmp r0, #0
    ldreqh r1, [r6, #0xa]
    ldreq r0, =0xfeff
    andeq r0, r1, r0
    streqh r0, [r6, #0xa]
@L_0205c77c:
    add r7, r7, #1
@L_0205c780:
    cmp r7, #4
    blt @L_0205c614
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205c7a0()
{
    stmdb sp!, {r4, lr}
    mov r3, #0x28
    mul r3, r1, r3
    add r0, r0, #0x32c
    add r1, r0, #0x2800
    ldr r0, [r1, r3]
    add r4, r1, r3
    cmp r0, r2
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020c4674
    str r2, [r4]
    ldr r0, [r0]
    mov r1, r2
    bl func_0208b434
    str r0, [r4, #4]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x11
    strh r0, [r4, #0xa]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205c7f0()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x32c
    add r0, r0, #0x2800
    mov r4, #0x28
    mla r5, r1, r4, r0
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4674
    ldr r1, [r5, #4]
    ldr r0, [r0]
    bl func_0208b4d8
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205c838()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x32c
    add r2, r0, #0x2800
    mov r0, #0x28
    mla r5, r1, r0, r2
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r4, =data_020c4674
    ldr r1, [r5, #4]
    ldr r0, [r4]
    bl func_0208b444
    ldr r0, [r4]
    ldr r1, [r5, #4]
    mov r2, #1
    bl func_0208b658
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205c880()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    add r0, r0, #0x32c
    add r4, r0, #0x2800
    mov r0, #0x28
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    ldr r5, [sp, #0x3c]
    mov r7, r2
    tst r0, #1
    mov r6, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, =data_020c4674
    ldr r1, [r4, #4]
    ldr r0, [r8]
    mov r2, #1
    bl func_0208b5f8
    cmp r5, #0
    bne @L_0205c8f4
    ldr r0, [sp, #0x38]
    mov r2, r7
    str r0, [sp]
    ldr r0, [r8]
    ldr r1, [r4, #4]
    mov r3, r6
    bl func_0208b688
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0205c8f4:
    ldr r1, [r8]
    ldr r2, [r4, #4]
    add r0, sp, #4
    bl func_0208b730
    ldr r1, [sp, #8]
    ldr r0, [sp, #4]
    sub r3, r6, r1
    sub r0, r7, r0
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x38]
    str r0, [sp, #0x10]
    sub r2, r1, r2
    str r3, [sp, #0x14]
    mov r1, r5, lsl #0xc
    str r2, [sp, #0x18]
    bl func_02001d60
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r2, [sp, #0x10]
    ldr r1, [sp, #0x14]
    str r2, [r4, #0x10]
    str r1, [r4, #0x14]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
    ldrh r1, [r4, #0xa]
    str r0, [sp, #0x18]
    orr r0, r1, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205c988()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    add r0, r0, #0x32c
    add r4, r0, #0x2800
    mov r0, #0x28
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    ldr r6, [sp, #0x40]
    ldr r5, [sp, #0x44]
    tst r0, #1
    mov r8, r2
    mov r7, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0
    bne @L_0205ca4c
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r3, r10, r8, r0
    umull lr, r12, r7, r0
    umull r9, r5, r6, r0
    adds r3, r3, #0
    mla r10, r8, r1, r10
    mov r2, r8, asr #0x1f
    mla r10, r2, r0, r10
    adc r2, r10, #0x800
    mov r2, r2, lsl #4
    mla r12, r7, r1, r12
    mla r5, r6, r1, r5
    mov r3, r7, asr #0x1f
    mov r1, r6, asr #0x1f
    mla r12, r3, r0, r12
    adds r3, lr, #0
    adc r3, r12, #0x800
    mla r5, r1, r0, r5
    adds r0, r9, #0
    adc r0, r5, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [sp]
    ldr r0, =data_020c4674
    mov r3, r3, lsl #4
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    bl func_0208b6c0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0205ca4c:
    ldr r0, =data_020c4674
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208b7ac
    ldr r9, [sp, #4]
    mov r3, #0x1680000
    umull r0, lr, r9, r3
    mov r9, r9, asr #0x1f
    adds r0, r0, #0x80000
    mla lr, r9, r3, lr
    ldr r2, [sp, #8]
    adc lr, lr, #0
    umull r12, r9, r2, r3
    mov r2, r2, asr #0x1f
    mov r0, r0, lsr #0x14
    orr r0, r0, lr, lsl #12
    sub r0, r8, r0
    adds r8, r12, #0x80000
    mla r9, r2, r3, r9
    ldr r1, [sp, #0xc]
    adc r2, r9, #0
    mov r8, r8, lsr #0x14
    orr r8, r8, r2, lsl #12
    sub r2, r7, r8
    umull r8, r7, r1, r3
    mov r1, r1, asr #0x1f
    str r2, [sp, #0x14]
    adds r2, r8, #0x80000
    mla r7, r1, r3, r7
    adc r1, r7, #0
    mov r2, r2, lsr #0x14
    orr r2, r2, r1, lsl #12
    sub r2, r6, r2
    mov r1, r5
    str r0, [sp, #0x10]
    str r2, [sp, #0x18]
    bl func_0202273c
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5
    bl func_0202273c
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5
    bl func_0202273c
    ldr r12, [sp, #0x10]
    ldr r2, =0xb60b60b
    ldr r8, [sp, #0x14]
    umull r9, lr, r12, r2
    mov r3, #0xb6
    mla lr, r12, r3, lr
    mov r1, r12, asr #0x1f
    mla lr, r1, r2, lr
    adds r9, r9, #0
    adc r1, lr, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x10]
    str r1, [r4, #0x1c]
    umull r12, r1, r8, r2
    mla r1, r8, r3, r1
    mov r7, r8, asr #0x1f
    mla r1, r7, r2, r1
    adds r12, r12, #0
    adc r1, r1, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x14]
    str r1, [r4, #0x20]
    umull r7, r1, r0, r2
    mla r1, r0, r3, r1
    mov r6, r0, asr #0x1f
    mla r1, r6, r2, r1
    adds r0, r7, #0
    adc r0, r1, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [r4, #0x24]
    strh r5, [r4, #0xe]
    str r0, [sp, #0x18]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x200
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205cbac()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x32c
    add r12, r0, #0x2800
    mov r0, #0x28
    mla r12, r1, r0, r12
    ldrh r0, [r12, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, [sp, #0xc]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    ldr r1, [sp, #8]
    ldr r0, =data_020c4674
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r12, #4]
    bl func_0208b6f8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205cbf8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    add r0, r0, #0x32c
    add r4, r0, #0x2800
    mov r0, #0x28
    mla r5, r1, r0, r4
    ldrh r0, [r5, #0xa]
    mov r7, r2
    mov r6, r3
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =data_020c4674
    ldr r1, [r5, #4]
    ldr r0, [r4]
    mov r2, #1
    bl func_0208b5f8
    ldr r0, [r4]
    ldr r1, [r5, #4]
    mov r2, r7
    mov r3, r6
    bl func_0208b828
    cmp r6, #1
    ldreqh r0, [r5, #0xa]
    orreq r0, r0, #4
    streqh r0, [r5, #0xa]
    ldrh r0, [r5, #0xa]
    orr r0, r0, #8
    strh r0, [r5, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205cc6c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    add r0, r4, #0x32c
    add r5, r0, #0x2800
    mov r0, #0x28
    mla r6, r1, r0, r5
    ldrh r0, [r6, #0xa]
    mov r8, r2
    mov r7, r3
    tst r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r5, =data_020c4674
    ldr r1, [r6, #4]
    ldr r0, [r5]
    bl func_0208b658
    cmp r8, #4
    addls pc, pc, r8, lsl #2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_0205ccc8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0205ccc8:
    ldr r2, [sp, #0x18]
    mov r0, r4
    mov r1, r7
    bl func_0205a1fc
    movs r2, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r5]
    ldr r1, [r6, #4]
    ldr r2, [r2, #4]
    bl func_0208b8cc
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205ccf8()
{
    mov r2, #0x28
    mla r0, r1, r2, r0
    add r0, r0, #0x2b00
    ldrh r0, [r0, #0x36]
    tst r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_02054800::func_0205cd14()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, #0
    add r0, r0, #0x32c
    mov r7, #0x28
    add r9, r0, #0x2800
    mov r8, r4
    ldr r6, =data_020c4674
    mov r5, r7
    b @L_0205cd64
@L_0205cd38:
    mla r10, r4, r5, r9
    ldr r1, [r10, #4]
    cmp r1, #0
    beq @L_0205cd60
    ldr r0, [r6]
    bl func_0208b4d8
    mov r0, r10
    mov r1, r8
    mov r2, r7
    bl MI_CpuFill8
@L_0205cd60:
    add r4, r4, #1
@L_0205cd64:
    cmp r4, #4
    blt @L_0205cd38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205cd74()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r8, r0
    add r0, r8, #0x1000
    ldr r5, [r0, #0xf10]
    ldr r9, =data_020c4674
    mov r6, #0
    b @L_0205cfc4
@L_0205cd94:
    add r0, r8, #0x32c
    add r1, r0, #0x2800
    mov r0, #0x28
    mla r4, r6, r0, r1
    ldrh r0, [r4, #0xa]
    tst r0, #1
    beq @L_0205cfc0
    tst r0, #0x10
    beq @L_0205cdfc
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_0208b55c
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_0208b55c
    cmn r0, #1
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xffee
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
    beq @L_0205cfc0
@L_0205cdfc:
    ldr r1, [r4, #4]
    mov r7, #0
    ldr r0, [r9]
    add r2, sp, #4
    str r7, [sp, #4]
    bl func_0208a764
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_0205ce2c
    ldrb r0, [r0, #0xb]
    cmp r0, #3
    moveq r7, #1
@L_0205ce2c:
    cmp r7, #0
    ldrneh r0, [r4, #0xa]
    orrne r0, r0, #2
    strneh r0, [r4, #0xa]
    ldrh r0, [r4, #0xa]
    tst r0, #8
    beq @L_0205ce70
    tst r0, #4
    bne @L_0205ce70
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_0208b898
    cmp r0, #0
    ldrneh r1, [r4, #0xa]
    ldrne r0, =0xfff7
    andne r0, r1, r0
    strneh r0, [r4, #0xa]
@L_0205ce70:
    ldrh r0, [r4, #0xa]
    tst r0, #0x100
    beq @L_0205cf18
    ldr r1, [r9]
    ldr r2, [r4, #4]
    add r0, sp, #0x14
    bl func_0208b730
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    str r2, [sp, #0x2c]
    str r1, [sp, #0x30]
    str r0, [sp, #0x34]
    mov r7, #0
    add r10, sp, #0x2c
    b @L_0205cedc
@L_0205ceb0:
    mov r0, r10
    mov r2, r10
    add r1, r4, #0x10
    bl func_02001f08
    ldrh r0, [r4, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0xc]
    beq @L_0205cee4
    add r7, r7, #1
@L_0205cedc:
    cmp r7, r5
    blo @L_0205ceb0
@L_0205cee4:
    ldr r0, [sp, #0x34]
    str r0, [sp]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x30]
    bl func_0208b688
    ldrh r0, [r4, #0xc]
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xfeff
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205cf18:
    ldrh r0, [r4, #0xa]
    tst r0, #0x200
    beq @L_0205cfc0
    ldr r1, [r9]
    ldr r2, [r4, #4]
    add r0, sp, #8
    bl func_0208b7ac
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    str r0, [sp, #0x28]
    mov r7, #0
    add r10, sp, #0x20
    b @L_0205cf84
@L_0205cf58:
    mov r0, r10
    mov r2, r10
    add r1, r4, #0x1c
    bl func_02001f08
    ldrh r0, [r4, #0xe]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0xe]
    beq @L_0205cf8c
    add r7, r7, #1
@L_0205cf84:
    cmp r7, r5
    blo @L_0205cf58
@L_0205cf8c:
    ldr r0, [sp, #0x28]
    str r0, [sp]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    bl func_0208b6c0
    ldrh r0, [r4, #0xe]
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xfdff
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205cfc0:
    add r6, r6, #1
@L_0205cfc4:
    cmp r6, #6
    blt @L_0205cd94
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205cfec()
{
    add r1, r0, #0x1c
    add r2, r0, #0x11c
    add r0, r1, #0x2c00
    add r1, r2, #0x3400
    ldr r12, =MI_CpuCopy8
    mov r2, #0x900
    bx r12
}

asm void UnkClass_02054800::func_0205d00c()
{
    add r1, r0, #0x11c
    add r2, r0, #0x1c
    add r0, r1, #0x3400
    add r1, r2, #0x2c00
    ldr r12, =MI_CpuCopy8
    mov r2, #0x900
    bx r12
}

asm void UnkClass_02054800::func_0205d02c()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x104
    add r0, r0, #0x1c
    add r4, r0, #0x2c00
    mov r0, #0x48
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    mov r5, r2
    mov r7, r3
    tst r0, #1
    ldr r6, =data_020c4678
    beq @L_0205d09c
    mov r1, r5
    add r0, r4, #0x30
    bl STD_CompareString
    cmp r0, #0
    bne @L_0205d080
    ldr r0, [r4]
    cmp r0, r7
    addeq sp, sp, #0x104
    ldmeqia sp!, {r4, r5, r6, r7, pc}
@L_0205d080:
    ldr r0, [r6]
    ldr r1, [r4, #4]
    bl func_0208e0e4
    mov r0, r4
    mov r1, #0
    mov r2, #0x48
    bl MI_CpuFill8
@L_0205d09c:
    cmp r7, #0
    ldr r0, [r6]
    bge @L_0205d0b8
    add r2, sp, #4
    mov r1, r5
    bl func_0208d434
    b @L_0205d0c8
@L_0205d0b8:
    add r3, sp, #4
    mov r1, r5
    mov r2, r7
    bl func_0208d38c
@L_0205d0c8:
    ldr r0, [sp, #0x120]
    str r7, [r4]
    cmp r0, #0
    mov r2, #0
    ldr r0, [r6]
    add r1, sp, #4
    beq @L_0205d0f0
    str r2, [sp]
    mov r3, #1
    b @L_0205d0fc
@L_0205d0f0:
    mov r6, #1
    mov r3, r2
    str r6, [sp]
@L_0205d0fc:
    bl func_0208de7c
    str r0, [r4, #4]
    movs r0, r0
    addmi sp, sp, #0x104
    ldmmiia sp!, {r4, r5, r6, r7, pc}
    ldrh r1, [r4, #0xa]
    ldr r0, [sp, #0x118]
    ldr r2, [sp, #0x11c]
    orr r1, r1, #0x11
    strh r1, [r4, #0xa]
    str r0, [r4, #0x28]
    mov r1, r5
    add r0, r4, #0x30
    str r2, [r4, #0x2c]
    bl STD_CopyString
    add sp, sp, #0x104
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205d144()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x1c
    add r0, r0, #0x2c00
    mov r4, #0x48
    mla r5, r1, r4, r0
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4678
    ldr r1, [r5, #4]
    ldr r0, [r0]
    bl func_0208e0e4
    mov r0, r5
    mov r2, r4
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205d18c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, #0
    add r0, r0, #0x1c
    mov r10, r1
    add r7, r0, #0x2c00
    mov r11, r9
    mvn r4, #0
    ldr r6, =data_020c4678
    mov r5, #0x48
    b @L_0205d1f4
@L_0205d1b4:
    mla r8, r9, r5, r7
    ldrh r0, [r8, #0xa]
    tst r0, #1
    beq @L_0205d1f0
    ldr r0, [r8, #0x28]
    cmp r0, r4
    cmpne r0, r10
    bne @L_0205d1f0
    ldr r0, [r6]
    ldr r1, [r8, #4]
    bl func_0208e0e4
    mov r0, r8
    mov r1, r11
    mov r2, #0x48
    bl MI_CpuFill8
@L_0205d1f0:
    add r9, r9, #1
@L_0205d1f4:
    cmp r9, #0x20
    blt @L_0205d1b4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkClass_02054800::func_0205d204()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r2, r0, #0x2c00
    mov r0, #0x48
    mla r2, r1, r0, r2
    ldrh r0, [r2, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r2, #4]
    ldr r0, [r0]
    bl func_0208e064
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205d23c()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r3, r0, #0x2c00
    mov r0, #0x48
    mla r3, r1, r0, r3
    ldrh r0, [r3, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r3, #4]
    ldr r0, [r0]
    bl func_0208e754
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205d274()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r3, r0, #0x2c00
    mov r0, #0x48
    mla r3, r1, r0, r3
    ldrh r0, [r3, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r3, #4]
    ldr r0, [r0]
    bl func_0208e710
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205d2ac()
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    add r0, r0, #0x1c
    add r4, r0, #0x2c00
    mov r0, #0x48
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    ldr r5, [sp, #0x34]
    mov r7, r2
    tst r0, #1
    mov r6, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r0, =data_020c4678
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, #1
    bl func_0208e38c
    ldr r0, [sp, #0x30]
    str r7, [sp, #0x10]
    str r6, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, [r4, #0x28]
    cmp r0, #0
    bge @L_0205d324
    ldr r0, =data_020c4660
    add r1, sp, #0x10
    ldr r0, [r0]
    bl func_ov000_0210c7c0
    str r0, [r4, #0x28]
@L_0205d324:
    cmp r5, #0
    bne @L_0205d354
    ldr r1, [sp, #0x30]
    ldr r0, =data_020c4678
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r4, #4]
    mov r2, r7
    mov r3, r6
    bl func_0208e414
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0205d354:
    ldr r0, =data_020c4678
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208e508
    ldr r1, [sp, #8]
    ldr r0, [sp, #4]
    sub r3, r6, r1
    sub r0, r7, r0
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x30]
    str r0, [sp, #0x10]
    sub r2, r1, r2
    str r3, [sp, #0x14]
    mov r1, r5, lsl #0xc
    str r2, [sp, #0x18]
    bl func_02001d60
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5, lsl #0xc
    bl func_02001d60
    ldr r1, [sp, #0x10]
    str r0, [sp, #0x18]
    str r1, [r4, #0x10]
    ldr r0, [sp, #0x14]
    str r0, [r4, #0x14]
    ldr r0, [sp, #0x18]
    str r0, [r4, #0x18]
    strh r5, [r4, #0xc]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x100
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void UnkClass_02054800::func_0205d3f4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    add r0, r0, #0x1c
    add r4, r0, #0x2c00
    mov r0, #0x48
    mla r4, r1, r0, r4
    ldrh r0, [r4, #0xa]
    ldr r6, [sp, #0x40]
    ldr r5, [sp, #0x44]
    tst r0, #1
    mov r8, r2
    mov r7, r3
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0
    bne @L_0205d4b8
    ldr r0, =0xb60b60b
    mov r1, #0xb6
    umull r3, r10, r8, r0
    umull lr, r12, r7, r0
    umull r9, r5, r6, r0
    adds r3, r3, #0
    mla r10, r8, r1, r10
    mov r2, r8, asr #0x1f
    mla r10, r2, r0, r10
    adc r2, r10, #0x800
    mov r2, r2, lsl #4
    mla r12, r7, r1, r12
    mla r5, r6, r1, r5
    mov r3, r7, asr #0x1f
    mov r1, r6, asr #0x1f
    mla r12, r3, r0, r12
    adds r3, lr, #0
    adc r3, r12, #0x800
    mla r5, r1, r0, r5
    adds r0, r9, #0
    adc r0, r5, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [sp]
    ldr r0, =data_020c4678
    mov r3, r3, lsl #4
    ldr r1, [r4, #4]
    ldr r0, [r0]
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    bl func_0208e480
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0205d4b8:
    ldr r0, =data_020c4678
    ldr r2, [r4, #4]
    ldr r1, [r0]
    add r0, sp, #4
    bl func_0208e584
    ldr r9, [sp, #4]
    mov r3, #0x1680000
    umull r0, lr, r9, r3
    mov r9, r9, asr #0x1f
    adds r0, r0, #0x80000
    mla lr, r9, r3, lr
    ldr r2, [sp, #8]
    adc lr, lr, #0
    umull r12, r9, r2, r3
    mov r2, r2, asr #0x1f
    mov r0, r0, lsr #0x14
    orr r0, r0, lr, lsl #12
    sub r0, r8, r0
    adds r8, r12, #0x80000
    mla r9, r2, r3, r9
    ldr r1, [sp, #0xc]
    adc r2, r9, #0
    mov r8, r8, lsr #0x14
    orr r8, r8, r2, lsl #12
    sub r2, r7, r8
    umull r8, r7, r1, r3
    mov r1, r1, asr #0x1f
    str r2, [sp, #0x14]
    adds r2, r8, #0x80000
    mla r7, r1, r3, r7
    adc r1, r7, #0
    mov r2, r2, lsr #0x14
    orr r2, r2, r1, lsl #12
    sub r2, r6, r2
    mov r1, r5
    str r0, [sp, #0x10]
    str r2, [sp, #0x18]
    bl func_0202273c
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    mov r1, r5
    bl func_0202273c
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x18]
    mov r1, r5
    bl func_0202273c
    ldr r12, [sp, #0x10]
    ldr r2, =0xb60b60b
    ldr r8, [sp, #0x14]
    umull r9, lr, r12, r2
    mov r3, #0xb6
    mla lr, r12, r3, lr
    mov r1, r12, asr #0x1f
    mla lr, r1, r2, lr
    adds r9, r9, #0
    adc r1, lr, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x10]
    str r1, [r4, #0x1c]
    umull r12, r1, r8, r2
    mla r1, r8, r3, r1
    mov r7, r8, asr #0x1f
    mla r1, r7, r2, r1
    adds r12, r12, #0
    adc r1, r1, #0x800
    mov r1, r1, lsl #4
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x14]
    str r1, [r4, #0x20]
    umull r7, r1, r0, r2
    mla r1, r0, r3, r1
    mov r6, r0, asr #0x1f
    mla r1, r6, r2, r1
    adds r0, r7, #0
    adc r0, r1, #0x800
    mov r0, r0, lsl #4
    mov r0, r0, lsr #0x10
    str r0, [r4, #0x24]
    strh r5, [r4, #0xe]
    str r0, [sp, #0x18]
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x200
    strh r0, [r4, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205d618()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x104
    add r0, r0, #0x1c
    add r4, r0, #0x2c00
    mov r0, #0x48
    mla r6, r1, r0, r4
    ldrh r0, [r6, #0xa]
    tst r0, #1
    addeq sp, sp, #0x104
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    add r5, sp, #4
    ldr r4, =data_020c4678
    str r5, [sp]
    mov r1, r2
    mov r2, r3
    ldr r0, [r4]
    ldr r3, [r6]
    bl func_0208d3d8
    ldr r0, [r4]
    ldr r1, [r6, #4]
    mov r2, r5
    mov r3, #1
    bl func_0208e15c
    ldrh r0, [r6, #0xa]
    orr r0, r0, #0x10
    strh r0, [r6, #0xa]
    add sp, sp, #0x104
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void UnkClass_02054800::func_0205d68c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x124
    add r0, r0, #0x1c
    add r0, r0, #0x2c00
    mov r5, #0x48
    mla r4, r1, r5, r0
    ldrh r0, [r4, #0xa]
    tst r0, #1
    addeq sp, sp, #0x124
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r8, sp, #4
    ldr r1, =data_020ae6c4
    mov r0, r8
    bl sprintf
    add r7, sp, #0x24
    str r7, [sp]
    ldr r6, =data_020c4678
    ldr r3, [r4]
    ldr r0, [r6]
    mov r1, r8
    sub r2, r5, #0x49
    bl func_0208d3d8
    ldr r0, [r6]
    ldr r1, [r4, #4]
    mov r2, r7
    mov r3, #0
    bl func_0208e15c
    ldr r0, [r6]
    ldr r1, [r4, #4]
    bl func_0208e064
    ldrh r0, [r4, #0xa]
    orr r0, r0, #0x10
    strh r0, [r4, #0xa]
    add sp, sp, #0x124
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkClass_02054800::func_0205d720()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r2, r0, #0x2c00
    mov r0, #0x48
    mla r2, r1, r0, r2
    ldrh r0, [r2, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r2, #4]
    ldr r0, [r0]
    bl func_0208e064
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205d758()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x1c
    add r12, r0, #0x2c00
    mov r0, #0x48
    mla r4, r1, r0, r12
    ldrh r0, [r4, #0xa]
    mov r5, r3
    tst r0, #1
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_020c4678
    ldr r1, [r4, #4]
    ldr r0, [r0]
    bl func_0208e600
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #1
    ldreqh r0, [r4, #0xa]
    orreq r0, r0, #4
    streqh r0, [r4, #0xa]
    ldrh r1, [r4, #0xa]
    mov r0, #1
    orr r1, r1, #8
    strh r1, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205d7c4()
{
    mov r2, #0x48
    mla r0, r1, r2, r0
    add r0, r0, #0x2c00
    ldrh r0, [r0, #0x26]
    tst r0, #1
    moveq r0, #0
    bx lr
}

asm void UnkClass_02054800::func_0205d7e0()
{
    add r0, r0, #0x1c
    add r2, r0, #0x2c00
    mov r0, #0x48
    mla r2, r1, r0, r2
    ldrh r0, [r2, #0xa]
    tst r0, #1
    ldrne r0, [r2, #4]
    moveq r0, #0
    bx lr
}

asm void UnkClass_02054800::func_0205d804()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r6, #0
    add r0, r0, #0x1c
    mov r9, #0x48
    add r4, r0, #0x2c00
    mov r10, r6
    ldr r8, =data_020c4678
    mov r7, r9
    b @L_0205d864
@L_0205d828:
    mla r5, r6, r7, r4
    ldrh r0, [r5, #0xa]
    tst r0, #1
    beq @L_0205d860
    ldr r0, [r5, #0x28]
    cmp r0, #0
    bgt @L_0205d860
    ldr r0, [r8]
    ldr r1, [r5, #4]
    bl func_0208e0e4
    mov r0, r5
    mov r1, r10
    mov r2, r9
    bl MI_CpuFill8
@L_0205d860:
    add r6, r6, #1
@L_0205d864:
    cmp r6, #0x20
    blt @L_0205d828
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205d874()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x38
    mov r8, r0
    add r0, r8, #0x1000
    ldr r5, [r0, #0xf10]
    ldr r9, =data_020c4678
    mov r6, #0
    b @L_0205daa0
@L_0205d894:
    add r0, r8, #0x1c
    add r1, r0, #0x2c00
    mov r0, #0x48
    mla r4, r6, r0, r1
    ldrh r0, [r4, #0xa]
    tst r0, #1
    beq @L_0205da9c
    tst r0, #0x10
    beq @L_0205d8d8
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_0208e35c
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xffef
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205d8d8:
    ldr r1, [r4, #4]
    mov r7, #0
    ldr r0, [r9]
    add r2, sp, #4
    str r7, [sp, #4]
    bl func_0208d46c
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_0205d908
    ldrb r0, [r0, #0xc]
    cmp r0, #3
    moveq r7, #1
@L_0205d908:
    cmp r7, #0
    ldrneh r0, [r4, #0xa]
    orrne r0, r0, #2
    strneh r0, [r4, #0xa]
    ldrh r0, [r4, #0xa]
    tst r0, #8
    beq @L_0205d94c
    tst r0, #4
    bne @L_0205d94c
    ldr r0, [r9]
    ldr r1, [r4, #4]
    bl func_0208e680
    cmp r0, #0
    ldrneh r1, [r4, #0xa]
    ldrne r0, =0xfff7
    andne r0, r1, r0
    strneh r0, [r4, #0xa]
@L_0205d94c:
    ldrh r0, [r4, #0xa]
    tst r0, #0x100
    beq @L_0205d9f4
    ldr r1, [r9]
    ldr r2, [r4, #4]
    add r0, sp, #0x14
    bl func_0208e508
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x1c]
    str r2, [sp, #0x2c]
    str r1, [sp, #0x30]
    str r0, [sp, #0x34]
    mov r7, #0
    add r10, sp, #0x2c
    b @L_0205d9b8
@L_0205d98c:
    mov r0, r10
    mov r2, r10
    add r1, r4, #0x10
    bl func_02001f08
    ldrh r0, [r4, #0xc]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0xc]
    beq @L_0205d9c0
    add r7, r7, #1
@L_0205d9b8:
    cmp r7, r5
    blo @L_0205d98c
@L_0205d9c0:
    ldr r0, [sp, #0x34]
    str r0, [sp]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x30]
    bl func_0208e414
    ldrh r0, [r4, #0xc]
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xfeff
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205d9f4:
    ldrh r0, [r4, #0xa]
    tst r0, #0x200
    beq @L_0205da9c
    ldr r1, [r9]
    ldr r2, [r4, #4]
    add r0, sp, #8
    bl func_0208e584
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    str r2, [sp, #0x20]
    str r1, [sp, #0x24]
    str r0, [sp, #0x28]
    mov r7, #0
    add r10, sp, #0x20
    b @L_0205da60
@L_0205da34:
    mov r0, r10
    mov r2, r10
    add r1, r4, #0x1c
    bl func_02001f08
    ldrh r0, [r4, #0xe]
    sub r0, r0, #1
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    strh r0, [r4, #0xe]
    beq @L_0205da68
    add r7, r7, #1
@L_0205da60:
    cmp r7, r5
    blo @L_0205da34
@L_0205da68:
    ldr r0, [sp, #0x28]
    str r0, [sp]
    ldr r0, [r9]
    ldr r1, [r4, #4]
    ldr r2, [sp, #0x20]
    ldr r3, [sp, #0x24]
    bl func_0208e480
    ldrh r0, [r4, #0xe]
    cmp r0, #0
    ldreqh r1, [r4, #0xa]
    ldreq r0, =0xfdff
    andeq r0, r1, r0
    streqh r0, [r4, #0xa]
@L_0205da9c:
    add r6, r6, #1
@L_0205daa0:
    cmp r6, #0x20
    blt @L_0205d894
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void UnkClass_02054800::func_0205dac4()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r3, r0, #0x2c00
    mov r0, #0x48
    mla r3, r1, r0, r3
    ldrh r0, [r3, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4678
    ldr r1, [r3, #4]
    ldr r0, [r0]
    bl func_0208e7c8
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205dafc()
{
    add r0, r0, #0x1c
    add r2, r0, #0x2c00
    mov r0, #0x48
    mla r2, r1, r0, r2
    ldrh r1, [r2, #0xa]
    tst r1, #1
    ldrne r0, [r2, #0x2c]
    subeq r0, r0, #0x49
    bx lr
}

asm void UnkClass_02054800::func_0205db20()
{
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x1c
    add r3, r0, #0x2c00
    mov r0, #0x48
    mla r5, r1, r0, r3
    ldrh r0, [r5, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r2, #4
    addls pc, pc, r2, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0205db60
@L_0205db60:
    ldr r4, =data_020c4678
    ldr r1, [r5, #4]
    ldr r0, [r4]
    bl func_0208dd58
    ldr r0, [r4]
    ldr r1, [r5, #4]
    mov r2, #1
    bl func_0208e798
    ldmia sp!, {r3, r4, r5, pc}
}

asm void UnkClass_02054800::func_0205db88()
{
    stmdb sp!, {r3, lr}
    add r0, r0, #0x1c
    add r12, r0, #0x2c00
    mov r0, #0x48
    mla r12, r1, r0, r12
    ldrh r0, [r12, #0xa]
    tst r0, #1
    ldmeqia sp!, {r3, pc}
    ldr r0, [sp, #0xc]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    ldr r1, [sp, #8]
    ldr r0, =data_020c4678
    str r1, [sp]
    ldr r0, [r0]
    ldr r1, [r12, #4]
    bl func_0208e4c4
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205dbd4()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    orr r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsl #0x10
    str r2, [sp]
    mov r0, r0, lsr #0x10
    str r0, [sp, #4]
    ldr r2, [sp, #0x28]
    ldr r0, =data_020c46d0
    str r2, [sp, #8]
    add r1, sp, #0x14
    ldr r0, [r0]
    ldmia r1, {r1, r2, r3}
    bl func_ov015_0213d1f0
    add sp, sp, #0xc
    ldmia sp!, {lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkClass_02054800::func_0205dc34()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x24]
    orr r1, r1, #2
    mov r1, r1, lsl #0x10
    add r0, r0, #0x3000
    mov r3, #0
    strb r3, [r0, #0xe70]
    mov r0, r1, lsr #0x10
    mov r2, r2, lsl #0x10
    str r0, [sp]
    mov r0, r2, lsr #0x10
    str r0, [sp, #4]
    ldr r2, [sp, #0x28]
    ldr r0, =data_020c46d0
    str r2, [sp, #8]
    add r1, sp, #0x14
    ldr r0, [r0]
    ldmia r1, {r1, r2, r3}
    bl func_ov015_0213d290
    add sp, sp, #0xc
    ldmia sp!, {lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkClass_02054800::func_0205dca0()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, [sp, #0x20]
    ldr r1, [sp, #0x24]
    orr r0, r0, #4
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsl #0x10
    str r2, [sp]
    mov r0, r0, lsr #0x10
    str r0, [sp, #4]
    ldr r2, [sp, #0x28]
    ldr r0, =data_020c46d0
    str r2, [sp, #8]
    add r1, sp, #0x14
    ldr r0, [r0]
    ldmia r1, {r1, r2, r3}
    bl func_ov015_0213d330
    add sp, sp, #0xc
    ldmia sp!, {lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkClass_02054800::func_0205dd00()
{
    stmdb sp!, {r3, lr}
    ldr r12, [sp, #8]
    ldr r0, =data_020c46d0
    str r12, [sp]
    orr r2, r2, #4
    mov r2, r2, lsl #0x10
    mov r3, r3, lsl #0x10
    ldr r0, [r0]
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    bl func_ov015_0213d3f4
    ldmia sp!, {r3, pc}
}

asm void UnkClass_02054800::func_0205dd34()
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    mov r1, r2
    mov r4, r0
    mov r2, r3
    beq @L_0205dd60
    bl func_0205a1fc
    add r1, r4, #0x3000
    str r0, [r1, #0xe6c]
    mov r12, #2
    b @L_0205dd70
@L_0205dd60:
    bl func_0205ab14
    add r1, r4, #0x3000
    str r0, [r1, #0xe6c]
    mov r12, #1
@L_0205dd70:
    add r0, r4, #0x3000
    ldr r1, [r0, #0xe6c]
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #8]
    ldr r1, [sp, #0x10]
    strb r12, [r0, #0xe70]
    strb r3, [r0, #0xe72]
    strb r2, [r0, #0xe71]
    str r1, [r0, #0xe74]
    ldmia sp!, {r4, pc}
}

asm void UnkClass_02054800::func_0205dda0()
{
    add r0, r0, #0x3000
    mov r1, #0
    strb r1, [r0, #0xe70]
    bx lr
}

asm void UnkClass_02054800::func_0205ddb0()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    ldr r1, =data_020c46d0
    mov r5, r0
    ldr r0, [r1]
    bl func_ov015_0213d4c8
    mov r4, r0
    add r0, r5, #0x3e00
    ldrsb r0, [r0, #0x70]
    ldr r3, [r4]
    ldr r2, [r4, #4]
    ldr r1, [r4, #8]
    str r3, [sp, #0x18]
    str r2, [sp, #0x1c]
    str r1, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, pc}
    cmp r0, #1
    beq @L_0205de0c
    cmp r0, #2
    beq @L_0205de3c
    b @L_0205de70
@L_0205de0c:
    add r0, r5, #0x3000
    ldr r1, [r0, #0xe6c]
    ldr r0, =data_020c46cc
    ldr r1, [r1, #4]
    ldr r0, [r0]
    bl func_02085ba4
    cmp r0, #0
    beq @L_0205de70
    ldr r2, [r0, #0x84]
    ldr r1, [r0, #0x88]
    ldr r0, [r0, #0x8c]
    b @L_0205de64
@L_0205de3c:
    add r0, r5, #0x3000
    ldr r1, [r0, #0xe6c]
    ldr r0, =data_020c4650
    ldr r2, [r1, #4]
    ldr r1, [r0]
    add r0, sp, #0xc
    bl func_0208a0c4
    ldr r2, [sp, #0xc]
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
@L_0205de64:
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
@L_0205de70:
    ldr r1, [r4]
    ldr r0, [sp, #0x18]
    cmp r1, r0
    ldreq r1, [r4, #4]
    ldreq r0, [sp, #0x1c]
    cmpeq r1, r0
    ldreq r1, [r4, #8]
    ldreq r0, [sp, #0x20]
    cmpeq r1, r0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r4, r5, pc}
    add r0, r5, #0x3e00
    ldrsb r2, [r0, #0x71]
    add r4, r5, #0x3000
    add r1, sp, #0x18
    str r2, [sp]
    ldrsb r12, [r0, #0x72]
    mov r0, r5
    ldmia r1, {r1, r2, r3}
    str r12, [sp, #4]
    ldr r4, [r4, #0xe74]
    str r4, [sp, #8]
    bl func_0205dc34
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}
