#include "ov082/Unk_ov082_0216ffa0.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov082_0216ffa0(s32 arg0, s32 arg1);
extern "C" s32 func_ov082_02170098(...);
extern "C" s32 func_ov082_0217014c(u8 *arg0);
extern "C" s32 func_ov082_02170190(...);
extern "C" s32 func_ov082_02170264(...);
extern "C" s32 func_ov082_0217028c(...);
extern "C" s32 func_ov082_021704a4(u8 *arg0);
extern "C" s32 func_ov082_021705dc(...);
extern "C" s32 func_ov082_02170670(...);
extern "C" void func_ov082_021706e0(void);
extern "C" s32 func_ov082_0217077c(...);
extern "C" s32 func_ov082_0217095c(...);
extern "C" s32 func_ov082_02170a88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_ov082_02170b24(u8 *arg0);
extern "C" s32 func_ov082_02170b78(...);
extern "C" s32 func_ov082_02170ef4(...);
extern "C" void func_ov082_02170f6c(void);
extern "C" void func_ov082_0217111c(u8 *arg0);
extern "C" void func_ov082_02171178(u8 *arg0);
extern "C" s32 func_ov082_021711d4(u8 *arg0);
extern "C" void func_ov082_021712c4(void);
extern "C" s32 func_ov082_02171310(u8 *arg0);
extern "C" void func_ov082_02171404(void);
extern "C" s32 func_ov082_0217150c(...);
extern "C" s32 func_ov082_02171578(u8 *arg0);
extern "C" s32 func_ov082_02171688(u8 *arg0);
extern "C" s32 func_ov082_021716e0(u8 *arg0);
extern "C" s32 func_ov082_02171738(u8 *arg0);
extern "C" void func_ov082_0217178c(void);
extern "C" s32 func_ov082_021718e8(s32 arg0);
extern "C" void func_ov082_021718fc(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c9660[];
extern "C" char data_ov082_02171900[];
extern "C" char data_ov082_02171930[];
extern "C" char data_ov082_02171970[];
extern "C" char data_ov082_02171b64[];
extern "C" char data_ov082_02171b80[];
extern "C" char data_ov082_02171ba0[];
extern "C" char data_ov082_02171bc0[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 G2S_GetBG1CharPtr(...);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void OS_Sleep(void);
extern "C" s32 STD_CopyString(...);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 func_02003608(...);
extern "C" s32 func_02003988(...);
extern "C" void func_02003b48(void);
extern "C" void func_020131e0(void);
extern "C" void func_02017278(void);
extern "C" void func_0209d668(void);
extern "C" s32 func_0209d8b8(...);
extern "C" s32 func_ov015_02132240(...);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132984(void);
extern "C" s32 func_ov015_02132b7c(...);
extern "C" void func_ov015_021330b4(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" s32 func_ov015_02133e24(...);
extern "C" s32 func_ov015_02133e50(...);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 func_ov015_02133f94(...);
extern "C" void func_ov015_02134024(void);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b6ac(...);
extern "C" s32 func_ov015_0213b7f8(...);
extern "C" s32 func_ov015_0213b870(...);
extern "C" s32 func_ov015_0213bfcc(...);
extern "C" s32 func_ov015_0213c33c(...);

extern "C" s32 func_ov082_0216ffa0(s32 arg0, s32 arg1)
{
    u8 *r4;
    u8 *r5;
    r4 = (u8 *)arg1;
    r5 = (u8 *)arg0;
    if ((s32)r4 == 0) {
        return -1;
    } else {
        arg0 = *(s32 *)(r4);
        if ((arg0 != 0xF && arg0 != 0xE)) {
            return -1;
        } else {
            if ((u32)*(s32 *)(r4 + 0x4) >= (u32)0x65) {
                return -1;
            } else {
                arg1 = *(s32 *)(r4 + 0xC);
                if (arg1 != 0) {
                    STD_CopyString((s32)(r5 + 0x1C4), arg1);
                }
                arg1 = *(s32 *)(r4 + 0x14);
                if (arg1 != 0) {
                    STD_CopyString((s32)((r5 + 0xC5) + 0x200), arg1);
                }
                arg0 = *(s32 *)(r4 + 0x1C);
                if (arg0 != 0) {
                    MI_CpuCopy8(arg0, (s32)(r5 + 0x2E4), 0x74);
                }
                arg0 = *(s32 *)(r4 + 0x20);
                if (arg0 != 0) {
                    MI_CpuCopy8(arg0, (s32)(r5 + 0x358), 0x74);
                }
                MI_CpuCopy8((s32)r4, (s32)(r5 + 0xC), 0x24);
                if (*(s32 *)(r5 + 0x18) != 0) {
                    *(s32 *)(r5 + 0x18) = (s32)(r5 + 0x1C4);
                }
                if (*(s32 *)(r5 + 0x20) != 0) {
                    *(s32 *)(r5 + 0x20) = (s32)((r5 + 0xC5) + 0x200);
                }
                if (*(s32 *)(r5 + 0x28) != 0) {
                    *(s32 *)(r5 + 0x28) = (s32)(r5 + 0x2E4);
                }
                if (*(s32 *)(r5 + 0x2C) != 0) {
                    *(s32 *)(r5 + 0x2C) = (s32)(r5 + 0x358);
                }
                *(u8 *)(r4 + 0x10) = 0;
                return 1;
            }
        }
    }
}

extern "C" asm s32 func_ov082_02170098(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r2, =0x101
    mov r1, r5
    add r0, r6, #0x1c4
    bl MI_CpuFill8
    add r0, r6, #0xc5
    mov r4, #0x1f
    mov r1, r5
    mov r2, r4
    add r0, r0, #0x200
    bl MI_CpuFill8
    add r0, r6, #0x300
    sub r1, r4, #0x20
    strb r5, [r6, #0x2e4]
    strb r5, [r6, #0x2fc]
    strb r5, [r6, #0x32c]
    strh r5, [r0, #0x2e]
    strb r5, [r6, #0x32d]
    strh r5, [r0, #0x30]
    strh r5, [r0, #0x32]
    strh r1, [r0, #0x34]
    str r5, [r6, #0x354]
    strh r5, [r0, #0x36]
    strh r5, [r0, #0x38]
    strb r5, [r6, #0x33a]
    strb r5, [r6, #0x352]
    strb r5, [r6, #0x353]
    strb r5, [r6, #0x358]
    strb r5, [r6, #0x370]
    strb r5, [r6, #0x3a0]
    strh r5, [r0, #0xa2]
    strb r5, [r6, #0x3a1]
    strh r5, [r0, #0xa4]
    strh r5, [r0, #0xa6]
    strh r1, [r0, #0xa8]
    str r5, [r6, #0x3c8]
    strh r5, [r0, #0xaa]
    strh r5, [r0, #0xac]
    strb r5, [r6, #0x3ae]
    strb r5, [r6, #0x3c6]
    strb r5, [r6, #0x3c7]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov082_0217014c(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0x94), 0, 0xC0);
    func_ov015_02133f94((s32)data_ov082_02171b64, (arg0 + 0x94));
    func_ov015_02133f94((s32)data_ov082_02171b80, (arg0 + 0xA0));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" asm s32 func_ov082_02170190(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r7, [r4, #0x94]
    cmp r7, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, =data_ov082_02171970
    ldr r0, [r8]
    cmp r0, #0
    beq @L_021701e0
    add r6, r4, #0x94
    mov r5, #0xc
@L_021701c4:
    ldr r3, [r8, #4]
    mov r2, r7
    mla r1, r3, r5, r6
    bl func_ov015_021340c0
    ldr r0, [r8, #8]!
    cmp r0, #0
    bne @L_021701c4
@L_021701e0:
    mov r5, #1
    ldr r0, [r4, #0xa0]
    add r2, sp, #8
    add r3, sp, #4
    mov r1, r5
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_02170218
    str r5, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov082_02171ba0
    add r1, r4, #0x148
    bl func_ov015_02134024
@L_02170218:
    add r0, r4, #0x94
    mov r1, #0x10
    bl func_ov015_02134118
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r6, #1
    mov r5, #0x10
@L_02170238:
    mov r0, r6
    bl OS_Sleep
    mov r1, r5
    add r0, r4, #0x94
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02170238
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov082_02170264(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x94
    mov r4, #0xc
@L_02170274:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_02170274
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov082_0217028c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    mov r10, r0
    ldr r4, [r10, #0xac]
    mov r11, #1
    cmp r4, #0
    beq @L_021702d0
    ldr r0, [r4, #0xc]
    ldr r1, [r4, #0x10]
    mov r3, r11
    add r0, r4, r0
    mov r2, #0
    bl func_ov015_02132984
    mov r0, r4
    mov r1, r11
    mov r2, r11
    bl func_ov015_021322b0
@L_021702d0:
    ldr r8, =data_ov082_02171930
    add r5, sp, #0x30
    ldmia r8!, {r0, r1, r2, r3}
    mov r7, r5
    stmia r5!, {r0, r1, r2, r3}
    ldmia r8!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r8!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    mov r6, #0
    ldmia r8, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r1, [sp, #0x30]
    sub r4, r6, #1
    cmp r1, r4
    beq @L_02170364
    mvn r4, #0
    mov r5, #0xc
@L_02170318:
    mla r0, r1, r5, r10
    ldr r9, [r0, #0x94]
    ldr r8, [r7, #4]
    cmp r9, #0
    beq @L_02170358
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    mov r3, r8
    add r0, r9, r0
    add r2, r6, #1
    bl func_ov015_02132984
    mov r6, r0
    mov r0, r9
    mov r1, r11
    mov r2, r8
    bl func_ov015_021322b0
@L_02170358:
    ldr r1, [r7, #8]!
    cmp r1, r4
    bne @L_02170318
@L_02170364:
    ldr r5, =data_ov082_02171900
    add r4, sp, #0
    ldmia r5!, {r0, r1, r2, r3}
    mov r9, r4
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r8, #0
    ldr r1, [sp]
    sub r0, r8, #1
    cmp r1, r0
    mov r11, #1
    beq @L_021703f4
    mvn r4, #0
    mov r5, #0xc
@L_021703a8:
    mla r0, r1, r5, r10
    ldr r7, [r0, #0x94]
    ldr r6, [r9, #4]
    cmp r7, #0
    beq @L_021703e8
    ldr r0, [r7, #0xc]
    ldr r1, [r7, #0x10]
    mov r3, r6
    add r0, r7, r0
    add r2, r8, #1
    bl func_ov015_02132984
    mov r8, r0
    mov r0, r7
    mov r1, r11
    mov r2, r6
    bl func_ov015_021322b0
@L_021703e8:
    ldr r1, [r9, #8]!
    cmp r1, r4
    bne @L_021703a8
@L_021703f4:
    ldr r7, [r10, #0x148]
    str r8, [r10, #0x1bc]
    cmp r7, #0
    mov r4, #1
    mov r5, #0
    beq @L_0217043c
    ldr r0, [r7, #0xc]
    mov r6, #0xe
    ldr r1, [r7, #0x10]
    mov r3, r6
    add r0, r7, r0
    add r2, r8, #1
    bl func_ov015_02132984
    mov r8, r0
    mov r0, r7
    mov r2, r6
    mov r1, r4
    bl func_ov015_021322b0
@L_0217043c:
    add r6, r10, #0x30
    mov r7, #0
@L_02170444:
    ldr r0, [r6]
    mov r2, r5
    cmp r0, #0
    ldrne r1, [r6, #4]
    cmpne r1, #0
    movne r2, r4
    cmp r2, #0
    beq @L_02170484
    ldrh r9, [r6, #0xc]
    ldrh r1, [r6, #0xe]
    mov r3, r5
    add r2, r8, #1
    mul r1, r9, r1
    mov r1, r1, lsl #1
    bl func_ov015_02132984
    mov r8, r0
@L_02170484:
    add r7, r7, #1
    cmp r7, #5
    add r6, r6, #0x14
    blt @L_02170444
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov082_021704a4(u8 *arg0)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 v7;
    s32 v8;
    s32 v9;
    s32 v10;
    s32 v11;
    s32 v13;
    s32 v14;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    r6 = (u8 *)*(s32 *)(arg0 + 0xAC);
    if ((s32)r6 != 0) {
        t0 = (s32)(r6 + *(s32 *)(r6 + 0x14));
        t1 = *(s32 *)(r6 + 0x18);
        func_02003988(t0, 0, t1);
        t2 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t3 = *(s32 *)(r6 + 0x10);
        func_02003608(t2, 0, t3);
    }
    v2 = G2S_GetBG1CharPtr();
    r4 = 0;
    MIi_CpuClearFast(0, v2, 0x20);
    v4 = G2S_GetBG1CharPtr();
    DC_FlushRange(v4, 0x20);
    t4 = *(s32 *)(arg0 + 0xC4);
    v6 = func_ov015_02132b7c(1, t4, 0x20);
    t5 = *(s32 *)(arg0 + 0xD0);
    v7 = func_ov015_02132b7c(1, t5, v6);
    t6 = *(s32 *)(arg0 + 0xF4);
    v8 = func_ov015_02132b7c(1, t6, v7);
    t7 = *(s32 *)(arg0 + 0x118);
    v9 = func_ov015_02132b7c(1, t7, v8);
    t8 = *(s32 *)(arg0 + 0x124);
    v10 = func_ov015_02132b7c(1, t8, v9);
    t9 = *(s32 *)(arg0 + 0x130);
    v11 = func_ov015_02132b7c(1, t9, v10);
    t10 = *(s32 *)(arg0 + 0x13C);
    func_ov015_02132b7c(1, t10, v11);
    v13 = func_ov082_021705dc((s32)arg0);
    r0 = v13;
    r6 = (u8 *)(arg0 + 0x30);
    do {
        r3 = 0;
        r5 = 1;
        r4 = (r4 + 1);
        if ((*(s32 *)(r6) != 0 && *(s32 *)(r6 + 0x4) != 0)) {
            r1 = r5;
        } else {
            r1 = 0;
        }
        r3 = 0;
        r5 = 1;
        if (r1 != 0) {
            *(s32 *)(r6 + 0x8) = r0;
            r2 = *(u16 *)(r6 + 0xC);
            r1 = (*(u16 *)(r6 + 0xC) * *(u16 *)(r6 + 0xE));
            r0 = (r0 + ((*(u16 *)(r6 + 0xC) * *(u16 *)(r6 + 0xE)) << 5));
        }
        r3 = 0;
        r6 = (u8 *)(r6 + 0x14);
    } while (r4 < 5);
    v14 = func_ov015_02132240();
    return v14;
}

extern "C" asm s32 func_ov082_021705dc(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl G2S_GetBG2CharPtr
    mov r4, #0x20
    mov r1, r0
    mov r2, r4
    mov r0, #0
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r4
    bl DC_FlushRange
    mov r2, r4
    mov r4, #2
    mov r0, r4
    ldr r1, [r5, #0xb8]
    bl func_ov015_02132b7c
    mov r2, r0
    mov r0, r4
    ldr r1, [r5, #0xdc]
    bl func_ov015_02132b7c
    mov r2, r0
    mov r0, r4
    ldr r1, [r5, #0xe8]
    bl func_ov015_02132b7c
    mov r2, r0
    mov r0, r4
    ldr r1, [r5, #0x100]
    bl func_ov015_02132b7c
    mov r2, r0
    mov r0, r4
    ldr r1, [r5, #0x10c]
    bl func_ov015_02132b7c
    ldr r1, [r5, #0x148]
    mov r2, r0
    mov r0, r4
    bl func_ov015_02132b7c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov082_02170670(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, #0
    add r7, r0, #0x30
    mov r5, r8
    mov r6, #1
    mov r4, r8
@L_02170688:
    ldr r0, [r7]
    cmp r0, #0
    ldrne r0, [r7, #4]
    cmpne r0, #0
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    ldrneb r0, [r7, #0x10]
    cmpne r0, #0
    beq @L_021706cc
    strb r4, [r7, #0x10]
    ldrh r3, [r7, #0xc]
    ldrh r2, [r7, #0xe]
    ldmib r7, {r0, r1}
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl func_02003b48
@L_021706cc:
    add r8, r8, #1
    cmp r8, #5
    add r7, r7, #0x14
    blt @L_02170688
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov082_021706e0(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    mov r1, #1
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, #0
    bl func_ov015_0213b7f8
    ldr r4, [r4, #0xb8]
    cmp r4, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    bl func_020131e0
    cmp r0, #0
    addlt sp, sp, #0x20
    ldmltia sp!, {r4, pc}
    ldr lr, [r4, #0xc]
    mov r1, #1
    str r1, [sp]
    mov r12, #2
    str r12, [sp, #4]
    mov r3, #0x1e
    str r3, [sp, #8]
    mov r2, #0
    str r2, [sp, #0xc]
    cmp r0, #3
    str r12, [sp, #0x10]
    str r12, [sp, #0x14]
    movgt r0, #3
    add r3, r4, lr
    add lr, r3, r0, lsl #3
    str r12, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r3, r2
    str lr, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov082_0217077c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20
    mov r4, #0x14
    mul r7, r1, r4
    add r0, r0, #0x30
    ldr r6, [r0, r7]
    add r9, r0, r7
    cmp r6, #0
    ldrne r0, [r9, #4]
    mov r5, r2
    mov r2, #0
    cmpne r0, #0
    movne r2, #1
    cmp r2, #0
    mov r4, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r3, [sp, #0x40]
    mov r0, r4, asr #2
    mov r2, r3, asr #2
    add r2, r3, r2, lsr #29
    add r0, r4, r0, lsr #29
    mov r2, r2, lsl #0x15
    mov r0, r0, lsl #0x15
    mov r7, r2, asr #0x18
    mov r3, r0, asr #0x18
    mov r2, #8
    cmp r1, #4
    mov r0, #0x1c
    moveq r2, #3
    beq @L_02170810
    cmp r1, #0
    subeq r1, r3, #7
    moveq r1, r1, lsl #0x18
    movne r0, #0xd
    movne r2, #3
    moveq r3, r1, asr #0x18
@L_02170810:
    mov r1, #5
    mov r8, #1
    stmia sp, {r1, r8}
    str r3, [sp, #8]
    str r7, [sp, #0xc]
    str r0, [sp, #0x10]
    mov r7, #0
    str r2, [sp, #0x14]
    str r7, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, r8
    mov r2, r7
    mov r3, r7
    str r6, [sp, #0x1c]
    bl func_ov015_0213b6ac
    mov r0, r9
    bl func_ov015_02133dc8
    ldr r6, =data_020c46a8
    mov r1, r8
    ldr r0, [r6]
    mov r2, #4
    bl _ZN8TextFont10SetSpacingEii
    mov r1, r4, lsr #0x1f
    rsb r0, r1, r4, lsl #29
    add r1, r1, r0, ror #29
    ldr r0, [sp, #0x40]
    ldrb r3, [sp, #0x44]
    mov r2, r0, lsr #0x1f
    rsb r0, r2, r0, lsl #29
    add r2, r2, r0, ror #29
    cmp r3, #0
    beq @L_021708d4
    mov r0, #3
    str r0, [sp]
    stmib sp, {r0, r8}
    str r7, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r0, [sp, #0x48]
    str r2, [sp, #0x14]
    str r0, [sp, #0x18]
    str r8, [sp, #0x1c]
    ldrh r2, [r9, #0xc]
    ldrh r3, [r9, #0xe]
    ldr r1, [r9, #4]
    mov r0, r5
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
    b @L_02170920
@L_021708d4:
    mov r3, #3
    ldr r0, [sp, #0x48]
    str r3, [sp]
    str r0, [sp, #4]
    ldr r0, [r9, #4]
    mov r3, r5
    str r0, [sp, #8]
    ldrh r0, [r9, #0xc]
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r9, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r7, [sp, #0x14]
    str r7, [sp, #0x18]
    ldr r0, [r6]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
@L_02170920:
    ldr r0, =data_020c46a8
    ldr r0, [r0]
    bl _ZN8TextFont12ResetSpacingEv
    mov r0, #1
    strb r0, [r9, #0x10]
    ldrh r2, [r9, #0xc]
    ldrh r1, [r9, #0xe]
    ldr r0, [r9, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov082_0217095c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    add r4, sp, #0x20
    mov r6, #0
    mov r10, r2
    mov r11, r3
    str r6, [r4]
    str r6, [r4, #4]
    str r6, [r4, #8]
    str r6, [r4, #0xc]
    cmp r1, #0
    ldr r2, [sp, #0x58]
    ldr r9, [sp, #0x5c]
    beq @L_021709cc
    ldr r5, =0x66666667
    mov r3, #0xa
@L_0217099c:
    mov r7, r1, lsr #0x1f
    smull r12, r8, r5, r1
    add r8, r7, r8, asr #2
    smull r8, r7, r3, r8
    mov r7, r1
    sub r8, r1, r8
    str r8, [r4, r6, lsl #2]
    smull r8, r1, r5, r7
    mov r7, r7, lsr #0x1f
    adds r1, r7, r1, asr #2
    add r6, r6, #1
    bne @L_0217099c
@L_021709cc:
    mov r1, #0xc
    mla r0, r2, r1, r0
    ldr r8, [r0, #0x94]
    cmp r6, #0
    moveq r6, #1
    cmp r8, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0
    mov r7, #0
    addle sp, sp, #0x30
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    and r4, r2, #0xff
    mov r5, #1
@L_02170a04:
    sub r1, r6, r7
    add r0, sp, #0x20
    ldr r2, [r8, #0xc]
    add r0, r0, r1, lsl #2
    cmp r9, #0
    subne r1, r10, r1
    addeq r1, r10, r7
    ldr r0, [r0, #-4]
    add r2, r8, r2
    mov r1, r1, lsl #0x18
    add r0, r2, r0, lsl #2
    mov r2, r1, asr #0x18
    mov r1, #4
    stmia sp, {r1, r5}
    str r2, [sp, #8]
    str r11, [sp, #0xc]
    mov r2, #0
    str r5, [sp, #0x10]
    mov r1, #2
    str r1, [sp, #0x14]
    str r4, [sp, #0x18]
    str r0, [sp, #0x1c]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r3, r2
    bl func_ov015_0213b6ac
    add r7, r7, #1
    cmp r7, r6
    blt @L_02170a04
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov082_02170a88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 v0;
    s32 v1;
    if (arg1 < 0x3C) {
        v0 = func_ov082_0217095c(arg0, arg1, arg2, arg3, arg4, 0);
        return v0;
    } else {
        if ((s32)*(u8 * *)(((u8 *)(((arg4 + 1) * 0xC) + arg0)) + 0x94) == 0)
            return (((arg4 + 1) * 0xC) + arg0);
        v1 = func_ov015_0213b6ac((s32)((u8 *)&data_020c9660), 1, 0, 0, 4, 1, arg2, arg3, 4, 2, (arg4 & 0xFF), (s32)(*(u8 * *)(((u8 *)(((arg4 + 1) * 0xC) + arg0)) + 0x94) + *(s32 *)(*(u8 * *)(((u8 *)(((arg4 + 1) * 0xC) + arg0)) + 0x94) + 0xC)));
        return v1;
    }
}

extern "C" void func_ov082_02170b24(u8 *arg0)
{
    s8 y = 3;
    s32 i;
    for (i = 0; i < 5; i++) {
        func_ov082_02170a88((s32)arg0, *(u8 *)(arg0 + i * 0x13 + 0x169), 0x18, y, 6);
        y += 4;
    }
}

extern "C" asm s32 func_ov082_02170b78(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x40
    mov r9, r0
    ldrb r2, [r9, #0x1b8]
    mov r4, #0xc
    mov r0, #6
    cmp r2, #2
    mov r5, #0x30
    mov r8, r1
    mov r6, #1
    mov r3, #0x1e
    mov r7, #0xb
    moveq r0, #4
    moveq r4, #0x10
    moveq r5, #0x20
    beq @L_02170be0
    cmp r2, #3
    moveq r7, r4
    moveq r0, r6
    moveq r4, #0x16
    moveq r5, #0x38
    beq @L_02170be0
    cmp r2, #5
    moveq r0, r6
    moveq r4, #0x10
    moveq r5, #8
@L_02170be0:
    mov r1, #0xc
    mla r1, r7, r1, r9
    ldr r2, [r1, #0x94]
    cmp r2, #0
    beq @L_02170c50
    mov r7, #2
    mov r6, r6, lsl #0x18
    mov r1, #1
    str r7, [sp]
    mov r0, r0, lsl #0x18
    str r1, [sp, #4]
    mov r6, r6, asr #0x18
    str r6, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    and r0, r3, #0xff
    str r0, [sp, #0x10]
    and r0, r4, #0xff
    str r0, [sp, #0x14]
    mov r0, #0xa
    str r0, [sp, #0x18]
    ldr r3, [r2, #0xc]
    ldr r0, =data_020c9660
    add r4, r2, r3
    mov r2, r1
    mov r3, #0
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_02170c50:
    ldrb r0, [r9, #0x1b8]
    mov r4, #1
    cmp r0, #3
    bne @L_02170cac
    ldr r7, [r9, #0x2c]
    cmp r7, #0
    beq @L_02170cac
    mov r0, #0x1a
    mov r6, #0x18
    str r0, [sp]
    mov r1, #0
    mov r0, r9
    mov r2, r7
    mov r3, r6
    stmib sp, {r1, r4}
    bl func_ov082_0217077c
    mov r0, #6
    str r0, [sp]
    ldrb r1, [r7, #0x48]
    mov r0, r9
    mov r2, r6
    mov r3, #3
    bl func_ov082_02170a88
@L_02170cac:
    cmp r8, #0
    addeq sp, sp, #0x40
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    sub r0, r5, #5
    stmia sp, {r0, r4}
    mov r0, r9
    mov r2, r8
    mov r1, #3
    mov r3, #0x58
    str r4, [sp, #8]
    bl func_ov082_0217077c
    add r0, r5, #0x32
    mov r7, #0x60
    str r0, [sp]
    mov r6, #0
    str r6, [sp, #4]
    mov r0, r9
    mov r1, r4
    mov r3, r7
    add r2, r8, #0x18
    str r4, [sp, #8]
    bl func_ov082_0217077c
    add r0, r5, #0x42
    stmia sp, {r0, r6}
    mov r3, r7
    mov r0, r9
    mov r1, #2
    add r2, r8, #0x30
    str r4, [sp, #8]
    bl func_ov082_0217077c
    add r1, r5, #0x10
    mov r0, r1, asr #2
    mov r10, #9
    add r0, r1, r0, lsr #29
    mov r7, r0, asr #3
    str r10, [sp]
    mov r3, r7, lsl #0x18
    ldrb r1, [r8, #0x48]
    mov r0, r9
    mov r2, #0x12
    mov r3, r3, asr #0x18
    bl func_ov082_02170a88
    add r1, r5, #0x20
    str r10, [sp]
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r6, r0, asr #3
    str r4, [sp, #4]
    mov r3, r6, lsl #0x18
    ldrh r1, [r8, #0x4a]
    mov r0, r9
    mov r2, #0x14
    mov r3, r3, asr #0x18
    bl func_ov082_0217095c
    str r10, [sp]
    str r4, [sp, #4]
    mov r0, r6, lsl #0x18
    mov r3, r0, asr #0x18
    ldrb r1, [r8, #0x49]
    mov r0, r9
    mov r2, #0x1a
    bl func_ov082_0217095c
    bl func_0209d668
    cmp r0, #4
    addls pc, pc, r0, lsl #2
    b @L_02170dc8
    b @L_02170dc8
    b @L_02170dd0
    b @L_02170dd8
    b @L_02170ddc
    b @L_02170de0
@L_02170dc8:
    mov r2, #0xb
    b @L_02170de4
@L_02170dd0:
    mov r2, #6
    b @L_02170de4
@L_02170dd8:
    b @L_02170dc8
@L_02170ddc:
    b @L_02170dc8
@L_02170de0:
    mov r2, #0xc
@L_02170de4:
    mov r6, #9
    add r1, r5, #0x40
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r3, r0, lsl #0x15
    mov r2, r2, lsl #0x18
    str r6, [sp]
    mov r4, #1
    str r4, [sp, #4]
    ldrh r1, [r8, #0x4c]
    mov r0, r9
    mov r2, r2, asr #0x18
    mov r3, r3, asr #0x18
    bl func_ov082_0217095c
    ldrh r1, [r8, #0x4e]
    mov r0, r9
    mov r3, r7
    mov r2, #3
    bl func_ov082_0217178c
    str r6, [sp]
    add r7, r5, #0x50
    str r4, [sp, #4]
    mov r3, r7, asr #2
    add r3, r7, r3, lsr #29
    mov r3, r3, lsl #0x15
    ldrh r1, [r8, #0x52]
    mov r0, r9
    mov r2, #0x1a
    mov r3, r3, asr #0x18
    bl func_ov082_0217095c
    str r6, [sp]
    str r4, [sp, #4]
    add r4, r5, #0x60
    mov r3, r4, asr #2
    add r3, r4, r3, lsr #29
    mov r3, r3, lsl #0x15
    ldrh r1, [r8, #0x54]
    mov r0, r9
    mov r2, #0x1b
    mov r3, r3, asr #0x18
    bl func_ov082_0217095c
    add r0, r8, #0x56
    bl STD_GetStringLength
    cmp r0, #0
    addeq sp, sp, #0x40
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x18c
    bl func_0209d8b8
    add r4, sp, #0x20
    mov r2, r0
    mov r0, r4
    add r3, r8, #0x56
    mov r1, #0x20
    bl func_02017278
    add r0, r5, #0x71
    str r0, [sp]
    mov r1, #0
    mov r2, r4
    str r1, [sp, #4]
    mov r4, #2
    mov r0, r9
    mov r1, #4
    mov r3, #0x10
    str r4, [sp, #8]
    bl func_ov082_0217077c
    add sp, sp, #0x40
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm s32 func_ov082_02170ef4(...)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x20
    ldr r12, [r0, #0xd0]
    cmp r12, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, pc}
    ldr r0, [r12, #0xc]
    mov r3, #2
    add r12, r12, r0
    mov r0, #0xb4
    mla r12, r2, r0, r12
    str r3, [sp]
    mov r2, #1
    str r2, [sp, #4]
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r0, =data_020c9660
    mov r1, r2
    mov r3, #0
    str r12, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x20
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov082_02170f6c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r1, #1
    mov r8, #0
    mov r10, r0
    ldr r0, =data_020c9660
    mov r2, r1
    mov r3, r8
    mov r5, r1
    bl func_ov015_0213b870
    ldr r9, [r10, #0xc4]
    cmp r9, #0
    beq @L_02171008
    mov r7, #2
    mov r6, r7
    mov r4, #0x1c
    mov r11, #4
@L_02170fb0:
    str r6, [sp]
    mov r0, r7, lsl #0x18
    stmib sp, {r5, r6}
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    str r4, [sp, #0x10]
    str r11, [sp, #0x14]
    str r11, [sp, #0x18]
    ldr r1, [r9, #0xc]
    ldr r0, =data_020c9660
    add r3, r9, r1
    str r3, [sp, #0x1c]
    mov r1, r5
    mov r2, r5
    mov r3, #0
    bl func_ov015_0213b6ac
    add r0, r7, #4
    add r8, r8, #1
    mov r0, r0, lsl #0x10
    cmp r8, #5
    mov r7, r0, lsr #0x10
    blt @L_02170fb0
@L_02171008:
    ldr r0, [r10, #0x10]
    mov r5, #1
    cmp r0, #0
    mov r6, #0
    beq @L_0217102c
    mov r0, r10
    mov r1, #2
    mov r2, r6
    bl func_ov082_02170ef4
@L_0217102c:
    ldrb r3, [r10, #0x1b7]
    cmp r3, #5
    bhs @L_0217106c
    ldrb r2, [r10, #0x24]
    cmp r2, #0
    beq @L_0217106c
    add r1, r10, #0x158
    mov r0, #0x13
    mla r0, r3, r0, r1
    strb r2, [r0, #0x11]
    ldr r1, [r10, #0x20]
    bl STD_CopyString
    ldrb r0, [r10, #0x1b7]
    strb r6, [r10, #0x24]
    add r0, r0, #1
    strb r0, [r10, #0x1b7]
@L_0217106c:
    mov r7, #0
    add r4, r10, #0x158
    mov r11, #0x20
@L_02171078:
    mov r0, r7, lsl #5
    add r9, r0, #0x14
    mov r0, #0x13
    mul r2, r7, r0
    add r0, r10, r2
    ldrb r0, [r0, #0x169]
    mov r8, r11
    cmp r7, #0
    addeq r8, r11, #0x38
    cmp r0, #0
    beq @L_021710c0
    str r9, [sp]
    mov r0, r10
    mov r1, r7
    add r2, r4, r2
    mov r3, r8
    stmib sp, {r5, r6}
    b @L_021710e0
@L_021710c0:
    ldr r0, =0x14d
    bl func_0209d8b8
    str r9, [sp]
    mov r2, r0
    stmib sp, {r5, r6}
    mov r3, r8
    mov r0, r10
    mov r1, r7
@L_021710e0:
    bl func_ov082_0217077c
    add r7, r7, #1
    cmp r7, #5
    blt @L_02171078
    mov r0, r10
    bl func_ov082_02170b24
    mov r0, r10
    bl func_ov082_021706e0
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov082_0217111c(u8 *arg0)
{
    func_ov015_0213b870((s32)data_020c9660, 1, 1, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 1, 0);
    func_ov082_02170b78(arg0, *(s32 *)(arg0 + 0x28));
    func_ov015_0213bfcc((s32)data_020c9660, 1);
}

extern "C" void func_ov082_02171178(u8 *arg0)
{
    func_ov015_0213b870((s32)data_020c9660, 1, 1, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 1, 0);
    func_ov082_02170b78(arg0, *(s32 *)(arg0 + 0x28));
    func_ov015_0213bfcc((s32)data_020c9660, 1);
}

extern "C" s32 func_ov082_021711d4(u8 *arg0)
{
    u8 *r2;
    s32 r4;
    s32 r5;
    s32 r8;
    s32 v4;
    s32 v6;
    r5 = 1;
    r4 = 0;
    func_ov015_0213b870((u8 *)((u8 *)&data_020c9660), 1, 1, 0);
    func_ov015_0213b7f8((u8 *)((u8 *)&data_020c9660), 1, 1, 0);
    r8 = 2;
    func_ov082_02170ef4((s32)arg0, 2, 0);
    r2 = (u8 *)*(s32 *)(arg0 + 0x130);
    if ((s32)r2 != 0) {
        func_ov015_0213b6ac((u8 *)((u8 *)&data_020c9660), r5, r5, r4, r8, r5, r8, 8, 0x1C, 9, 0xC, (s32)(r2 + *(s32 *)(r2 + 0xC)));
    }
    v4 = func_0209d8b8(0x150);
    func_ov082_0217077c((s32)arg0, 0, v4, 0x48, 0x4C, 1, 1);
    v6 = func_ov015_0213bfcc((u8 *)((u8 *)&data_020c9660), 1);
    return v6;
}

extern "C" void func_ov082_021712c4(void)
{
    func_ov015_0213b870((s32)data_020c9660, 1, 1, 0);
    func_ov015_0213b7f8((s32)data_020c9660, 1, 1, 0);
    func_ov015_0213bfcc((s32)data_020c9660, 1);
}

extern "C" s32 func_ov082_02171310(u8 *arg0)
{
    u8 *r2;
    s32 r4;
    s32 r5;
    u8 *r7;
    s32 v5;
    s32 t0;
    r5 = 1;
    r4 = 0;
    func_ov015_0213b870((u8 *)((u8 *)&data_020c9660), 1, 1, 0);
    func_ov015_0213b7f8((u8 *)((u8 *)&data_020c9660), 1, 1, 0);
    t0 = *(s32 *)(arg0 + 0x28);
    func_ov082_02170b78((s32)arg0, t0);
    r7 = arg0;
    r2 = (u8 *)*(s32 *)(arg0 + 0x13C);
    if ((s32)r2 != 0) {
        func_ov015_0213b6ac((u8 *)((u8 *)&data_020c9660), r5, r5, r4, 2, r5, r4, 0x11, 0x20, 7, 0xD, (s32)(r2 + *(s32 *)(r2 + 0xC)));
    }
    arg0 = (u8 *)*(s32 *)(r7 + 0x28);
    if (((s32)arg0 != 0 && (r2 = (u8 *)*(s32 *)(arg0 + 0x70), (s32)r2 != 0))) {
        func_ov082_0217077c((s32)r7, 0, (s32)r2, 0x4C, 0x9E, 0, 1);
    }
    v5 = func_ov015_0213bfcc((u8 *)((u8 *)&data_020c9660), 1);
    return v5;
}

extern "C" asm void func_ov082_02171404(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
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
    mov r0, r6
    mov r1, r5
    mov r2, r5
    mov r3, r4
    bl func_ov015_0213b7f8
    mov r8, #2
    mov r0, r7
    mov r1, #5
    mov r2, r8
    bl func_ov082_02170ef4
    ldr r2, [r7, #0x130]
    cmp r2, #0
    beq @L_021714ac
    str r8, [sp]
    stmib sp, {r5, r8}
    mov r0, #0xa
    str r0, [sp, #0xc]
    mov r0, #0x1c
    str r0, [sp, #0x10]
    mov r0, #9
    str r0, [sp, #0x14]
    mov r0, #0xc
    str r0, [sp, #0x18]
    ldr r1, [r2, #0xc]
    mov r0, r6
    add r6, r2, r1
    mov r1, r5
    mov r2, r5
    mov r3, r4
    str r6, [sp, #0x1c]
    bl func_ov015_0213b6ac
@L_021714ac:
    bl func_0209d668
    cmp r0, #4
    ldr r0, =0x125
    mov r4, #1
    bne @L_021714cc
    bl func_0209d8b8
    mov r1, #0x52
    b @L_021714d4
@L_021714cc:
    bl func_0209d8b8
    mov r1, #0x5c
@L_021714d4:
    stmia sp, {r1, r4}
    mov r2, r0
    mov r0, r7
    mov r1, #0
    mov r3, #0x48
    str r4, [sp, #8]
    bl func_ov082_0217077c
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov082_0217150c(...)
{
    stmdb sp!, {r3, lr}
    ldrb r1, [r0, #0x25]
    strb r1, [r0, #0x1b8]
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, pc}
    b @L_02171540
    b @L_02171548
    b @L_02171550
    b @L_02171558
    b @L_02171560
    b @L_02171568
    b @L_02171570
@L_02171540:
    bl func_ov082_021712c4
    ldmia sp!, {r3, pc}
@L_02171548:
    bl func_ov082_02170f6c
    ldmia sp!, {r3, pc}
@L_02171550:
    bl func_ov082_0217111c
    ldmia sp!, {r3, pc}
@L_02171558:
    bl func_ov082_02171178
    ldmia sp!, {r3, pc}
@L_02171560:
    bl func_ov082_021711d4
    ldmia sp!, {r3, pc}
@L_02171568:
    bl func_ov082_02171310
    ldmia sp!, {r3, pc}
@L_02171570:
    bl func_ov082_02171404
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov082_02171578(u8 *arg0)
{
    s32 v11;
    u8 *t0;
    s32 t1;
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28))(t0, 1, t1);
    func_ov015_02135440(6);
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xC) = 0;
    *(s32 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = (0 - 1);
    *(s32 *)(arg0 + 0x18) = 0;
    *(u8 *)(arg0 + 0x1C) = 0;
    *(u8 *)(arg0 + 0x1D) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(u8 *)(arg0 + 0x24) = 0;
    *(u8 *)(arg0 + 0x25) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x154) = (0 - 1);
    func_ov015_0213b364((s32)data_020c9660, 1);
    func_ov015_02133e24((arg0 + 0x30), 5);
    func_ov015_02133e50((arg0 + 0x30), 0x1C, 8);
    func_ov015_02133e50((arg0 + 0x44), 0xD, 3);
    func_ov015_02133e50((arg0 + 0x58), 0xD, 3);
    func_ov015_02133e50((arg0 + 0x6C), 0xD, 3);
    func_ov015_02133e50((arg0 + 0x80), 0x1C, 3);
    MI_CpuFill8((arg0 + 0x158), 0, 0x5F);
    *(s32 *)(arg0 + 0x1C0) = (0 - 1);
    *(u8 *)(arg0 + 0x1B7) = 0;
    *(u8 *)(arg0 + 0x1B8) = 0;
    *(s32 *)(arg0 + 0x1BC) = 0;
    func_ov082_02170098((s32)arg0);
    v11 = func_ov082_0217014c(arg0);
    return v11;
}

extern "C" s32 func_ov082_02171688(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = func_ov015_02134118((s32)(arg0 + 0x94), 0x10);
            if (v0 == 0)
                return v0;
            func_ov082_02170190((s32)arg0);
            func_ov082_0217028c((s32)arg0);
            *(s32 *)(arg0 + 0x8) = 2;
            return 2;
        case 3:
            v3 = func_ov082_0217150c((s32)arg0, r1);
            return v3;
    }
}

extern "C" s32 func_ov082_021716e0(u8 *arg0)
{
    s32 r1;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov082_021704a4(arg0);
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 3:
            func_ov082_02170670((s32)arg0);
            v3 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 1);
            return v3;
    }
}

extern "C" s32 func_ov082_02171738(u8 *arg0)
{
    s32 v4;
    u8 *t0;
    s32 t1;
    func_ov015_02134198((arg0 + 0x94), 0x10);
    func_ov082_02170264((s32)arg0);
    func_ov015_0213b3fc((s32)data_020c9660, 1);
    func_ov015_02133e8c((arg0 + 0x30), 5);
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC);
    v4 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 1, t1);
    return v4;
}

extern "C" asm void func_ov082_0217178c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x28
    mov r8, r0
    ldr r0, [r8, #0x1c0]
    mov r7, r1
    mov r6, r2
    mov r5, r3
    cmp r7, r0
    beq @L_02171870
    ldr r0, [r8, #0xa0]
    add r2, sp, #0x24
    add r3, sp, #0x20
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_0217186c
    add r0, r8, #0x148
    bl func_ov015_02134208
    mov r0, #1
    str r0, [sp]
    ldr r2, [sp, #0x24]
    ldr r3, [sp, #0x20]
    ldr r0, =data_ov082_02171bc0
    add r1, r8, #0x148
    bl func_ov015_02134024
    add r0, r8, #0x94
    mov r1, #0x10
    bl func_ov015_02134118
    cmp r0, #0
    bne @L_02171824
    mov r9, #1
    mov r4, #0x10
@L_02171808:
    mov r0, r9
    bl OS_Sleep
    mov r1, r4
    add r0, r8, #0x94
    bl func_ov015_02134118
    cmp r0, #0
    beq @L_02171808
@L_02171824:
    ldr r4, [r8, #0x148]
    cmp r4, #0
    beq @L_0217186c
    ldr r0, [r4, #0xc]
    ldr r2, [r8, #0x1bc]
    mov r9, #0xe
    ldr r1, [r4, #0x10]
    mov r3, r9
    add r0, r4, r0
    add r2, r2, #1
    bl func_ov015_02132984
    mov r0, r4
    mov r2, r9
    mov r1, #1
    bl func_ov015_021322b0
    mov r0, r8
    bl func_ov082_021705dc
    bl func_ov015_02132240
@L_0217186c:
    str r7, [r8, #0x1c0]
@L_02171870:
    ldr r3, [r8, #0x148]
    cmp r3, #0
    addeq sp, sp, #0x28
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #6
    mov r0, r6, lsl #0x18
    mov r2, r5, lsl #0x18
    str r1, [sp]
    mov r1, #1
    str r1, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    mov r0, r2, asr #0x18
    mov r2, #0
    str r0, [sp, #0xc]
    mov r0, #4
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov r0, #0xe
    str r0, [sp, #0x18]
    ldr r4, [r3, #0xc]
    ldr r0, =data_020c9660
    add r4, r3, r4
    mov r3, r2
    str r4, [sp, #0x1c]
    bl func_ov015_0213b6ac
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov082_021718e8(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov082_021718fc(void)
{
}
