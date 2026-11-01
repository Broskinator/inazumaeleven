#include "game/Unk_02097aa0.hpp"

extern "C" u8 *func_020970b0(void *list, int id);

extern "C" void func_02097aa0(u8 *obj, int id);
extern "C" void func_02097ac0(void *obj, u8 *entry);
extern "C" s32 func_02097b3c(...);
extern "C" s32 func_02097c24(s32 arg0);
extern "C" void func_02097c74(void);
extern "C" void func_02097ca8(void);
extern "C" s32 func_02097d70(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02097de4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_02097e58(void *obj, int a);
extern "C" void func_02097e78(void *obj, int a);
extern "C" void func_02097eb8(void *obj, int a);
extern "C" void func_02097ef8(void);
extern "C" void func_02097f48(void);
extern "C" s32 func_02097f98(u8 *arg0, s32 arg1);
extern "C" void func_02097fcc(void);
extern "C" void func_02098098(void);
extern "C" void func_02098164(void);
extern "C" void func_020981e4(void);
extern "C" void func_020982a0(void);
extern "C" s32 func_0209835c(u8 *arg0, u8 arg1, s32 arg2);
extern "C" void func_02098410(void);
extern "C" s32 func_020984a8(u8 *arg0, s32 arg1);
extern "C" void func_020984f0(void);
extern "C" void func_0209855c(void);
extern "C" u8 *func_020985fc(u8 *self, int id);
extern "C" s32 func_0209860c(s32 arg0, u8 *arg1, u8 *arg2);
extern "C" void func_020986e8(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02098710(...);
extern "C" void func_020987fc(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02098824(...);
extern "C" void func_02098900(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02098930(...);
extern "C" s32 func_02098a0c(...);
extern "C" s32 func_02098a8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" s32 func_02098ab8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void func_02098ae4(void);
extern "C" s32 func_02098b48(s32 arg0);
extern "C" s32 func_02098bac(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02098ca8(s32 arg0);
extern "C" void func_02098cdc(void);
extern "C" void func_02098d30(void);
extern "C" s32 func_02098d88(...);
extern "C" void func_02098dd8(void);

extern "C" char data_020afd54[];
extern "C" char data_020c4668[];
extern "C" char data_020c47b4[];
extern "C" void GX_GetSizeOfTex(void);
extern "C" void GX_GetSizeOfTexPltt(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void NNS_GfdFreeLnkPlttVram(void);
extern "C" void NNS_GfdInitLnkPlttVramManager(void);
extern "C" void NNS_GfdInitLnkTexVramManager(void);
extern "C" s32 OS_InitMutex(...);
extern "C" void _ZN11FileManager6CancelEPvi(void);
extern "C" void _ZN11FileManager7ReleaseEPv(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" void func_02003eec(void);
extern "C" void func_020040b0(void);
extern "C" s32 func_02030128(...);
extern "C" void func_02030188(void);
extern "C" void func_0203020c(void);
extern "C" s32 func_02030278(...);
extern "C" s32 func_02030490(...);
extern "C" void func_020304ec(void);
extern "C" s32 func_02030604(...);
extern "C" void func_02096eb4(void);
extern "C" void func_02096ed0(void);
extern "C" s32 func_02096f9c(...);
extern "C" void func_020970e0(void);
extern "C" void func_02097128(void);
extern "C" void func_02097178(void);
extern "C" s32 func_020971c8(...);
extern "C" s32 func_020972fc(...);
extern "C" s32 func_02097434(...);
extern "C" void func_02097564(void);
extern "C" s32 func_020975e0(...);
extern "C" void func_02097754(void);
extern "C" void func_02098fac(void);
extern "C" void func_020990e8(void);
extern "C" void func_020991ac(void);
extern "C" void func_020991d8(void);
extern "C" void func_0209920c(void);
extern "C" void func_02099238(void);
extern "C" void func_0209926c(void);
extern "C" void func_020992ec(void);
extern "C" s32 func_02099cc8(...);
extern "C" s32 func_02099cfc(...);
extern "C" s32 func_0209a45c(...);
extern "C" s32 func_0209a4d8(...);
extern "C" s32 func_0209a638(...);
extern "C" void func_0209aa5c(void);

extern "C" void func_02097aa0(u8 *obj, int id)
{
    func_02097ac0(obj, func_020970b0(obj + 4, id));
}

extern "C" asm void func_02097ac0(void *obj, u8 *entry)
{
    stmdb sp!, {r4, lr}
    movs r4, r1
    beq @L_02097adc
    mov r0, r4
    bl func_02096eb4
    cmp r0, #0
    beq @L_02097ae4
@L_02097adc:
    mvn r0, #0
    ldmia sp!, {r4, pc}
@L_02097ae4:
    ldrb r0, [r4, #0x33]
    cmp r0, #1
    beq @L_02097afc
    cmp r0, #2
    beq @L_02097b28
    b @L_02097b30
@L_02097afc:
    ldr r0, =data_020c47b4
    ldr r1, [r4, #0x20]
    ldr r0, [r0]
    cmp r0, #0
    mvneq r0, #0
    beq @L_02097b18
    bl _ZN11FileManager7ReleaseEPv
@L_02097b18:
    cmp r0, #0
    moveq r1, #2
    streqb r1, [r4, #0x33]
    ldmia sp!, {r4, pc}
@L_02097b28:
    mov r0, #0
    ldmia sp!, {r4, pc}
@L_02097b30:
    mvn r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_02097b3c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r0, r4, #4
    bl func_020970b0
    movs r6, r0
    beq @L_02097b60
    bl func_02096eb4
    cmp r0, #0
    beq @L_02097b68
@L_02097b60:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_02097b68:
    mov r0, r6
    mvn r1, #0
    bl func_02096ed0
    ldrsh r0, [r6, #0x34]
    cmp r0, #0
    bgt @L_02097c14
    ldr r1, [r6, #0x20]
    cmp r1, #0
    beq @L_02097bc8
    ldrh r0, [r6, #0x30]
    tst r0, #1
    bne @L_02097bc8
    ldrb r0, [r6, #0x33]
    cmp r0, #1
    bne @L_02097bc0
    ldr r0, =data_020c47b4
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02097bc8
    mov r2, #1
    bl _ZN11FileManager6CancelEPvi
    b @L_02097bc8
@L_02097bc0:
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02097bc8:
    ldr r1, [r6, #0x38]
    cmp r1, #0
    beq @L_02097bdc
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02097bdc:
    ldr r5, =data_020c4668
    add r1, r6, #0x44
    ldr r0, [r5]
    bl func_02098d88
    ldr r0, [r5]
    add r1, r6, #0x50
    bl func_02098d88
    mov r1, r6
    mov r0, #0
    mov r2, #0x60
    bl MIi_CpuClearFast
    ldrsh r0, [r4, #0xa]
    sub r0, r0, #1
    strh r0, [r4, #0xa]
@L_02097c14:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_02097c24(s32 arg0)
{
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 v0;
    r6 = (u8 *)arg0;
    r5 = 0;
    r4 = 0;
    if (*(s16 *)(r6 + 0x8) > 0) {
        do {
            v0 = func_02097b3c((s32)r6, (r4 + 1));
            r4 = (r4 + 1);
            r5 = (v0 != 0 ? (r5 + 1) : r5);
        } while (r4 < *(s16 *)(r6 + 0x8));
    }
    return (r5 <= 0 ? 0 : 1);
}

extern "C" asm void func_02097c74(void)
{
    stmdb sp!, {r3, lr}
    add r0, r0, #4
    bl func_020970b0
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r1, [r0, #0x30]
    mov r0, #1
    tst r1, #0x10
    ldmneia sp!, {r3, pc}
    tst r1, #0x20
    moveq r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02097ca8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    add r0, r8, #4
    mov r6, r2
    mov r5, r3
    bl func_020970b0
    mov r4, r0
    mov r0, r8
    mov r1, r7
    bl func_02097aa0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r1, r4
    bl func_02097128
    cmp r0, #0
    beq @L_02097d24
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5
    bl func_02097d70
    cmp r0, #0
    bne @L_02097d24
    mov r0, r8
    mov r1, r7
    bl func_02097e58
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02097d24:
    mov r0, r8
    mov r1, r4
    bl func_02097178
    cmp r0, #0
    beq @L_02097d68
    mov r0, r8
    mov r1, r7
    mov r2, r6
    mov r3, r5
    bl func_02097de4
    cmp r0, #0
    bne @L_02097d68
    mov r0, r8
    mov r1, r7
    bl func_02097e58
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02097d68:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_02097d70(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    u8 *v0;
    s32 v1;
    s32 v2;
    v0 = func_020970b0((void *)(arg0 + 4), arg1);
    v1 = ((s32 (*)(...))func_02097ac0)((void *)arg0, (u8 *)v0);
    if (v1 != 0)
        return 0;
    r4 = (u8 *)v0;
    if ((*(u16 *)(r4 + 0x30) & 0x10) == 0) {
        v2 = func_020971c8(arg0, (s32)r4);
        if (v2 == 0)
            return 0;
        func_02097434(arg0, (s32)r4, arg2, arg3);
    }
    return 1;
}

extern "C" s32 func_02097de4(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    u8 *v0;
    s32 v1;
    s32 v2;
    v0 = func_020970b0((void *)(arg0 + 4), arg1);
    v1 = ((s32 (*)(...))func_02097ac0)((void *)arg0, (u8 *)v0);
    if (v1 != 0)
        return 0;
    r4 = (u8 *)v0;
    if ((*(u16 *)(r4 + 0x30) & 0x20) == 0) {
        v2 = func_020972fc(arg0, (s32)r4);
        if (v2 == 0)
            return 0;
        func_020975e0(arg0, (s32)r4, arg2, arg3);
    }
    return 1;
}

extern "C" void func_02097e58(void *obj, int a)
{
    func_02097e78(obj, a);
    func_02097eb8(obj, a);
}

extern "C" asm void func_02097e78(void *obj, int a)
{
    stmdb sp!, {r4, lr}
    add r0, r0, #4
    bl func_020970b0
    movs r4, r0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020c4668
    add r1, r4, #0x44
    ldr r0, [r0]
    bl func_02098d88
    ldrh r1, [r4, #0x30]
    ldr r0, =0xffef
    and r0, r1, r0
    strh r0, [r4, #0x30]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02097eb8(void *obj, int a)
{
    stmdb sp!, {r4, lr}
    add r0, r0, #4
    bl func_020970b0
    movs r4, r0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020c4668
    add r1, r4, #0x50
    ldr r0, [r0]
    bl func_02098d88
    ldrh r1, [r4, #0x30]
    ldr r0, =0xffdf
    and r0, r1, r0
    strh r0, [r4, #0x30]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02097ef8(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    add r0, r6, #4
    mov r5, r2
    mov r4, r3
    bl func_020970b0
    ldrb r2, [sp, #0x20]
    mov r1, r0
    ldr r0, [sp, #0x24]
    str r2, [sp]
    ldr r12, [sp, #0x28]
    str r0, [sp, #4]
    mov r0, r6
    mov r2, r5
    mov r3, r4
    str r12, [sp, #8]
    bl func_02097564
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02097f48(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    add r0, r6, #4
    mov r5, r2
    mov r4, r3
    bl func_020970b0
    ldrb r2, [sp, #0x20]
    mov r1, r0
    ldr r0, [sp, #0x24]
    str r2, [sp]
    ldr r12, [sp, #0x28]
    str r0, [sp, #4]
    mov r0, r6
    mov r2, r5
    mov r3, r4
    str r12, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_02097f98(u8 *arg0, s32 arg1)
{
    u8 *v0;
    v0 = func_020970b0((void *)(arg0 + 4), arg1);
    arg0 = (u8 *)v0;
    if ((s32)arg0 == 0) {
        return 1;
    } else {
        if ((*(u8 *)(arg0 + 0x5C) == 0 && *(u8 *)(arg0 + 0x5D) == 0)) {
            arg0 = (u8 *)1;
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    }
}

extern "C" asm void func_02097fcc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    movs r6, r2
    mov r5, r3
    mov r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r0, [r6]
    cmp r5, #0
    strne r0, [r5]
    add r0, r7, #4
    bl func_020970b0
    mov r4, r0
    mov r0, r7
    mov r1, r4
    bl func_02097ac0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_0209807c
    b @L_0209807c
    b @L_0209807c
    b @L_02098048
    b @L_0209807c
    b @L_02098048
    b @L_0209805c
    b @L_0209807c
    b @L_02098068
    b @L_02098068
@L_02098048:
    ldr r0, [r4, #0x20]
    mov r1, #1
@L_02098050:
    bl func_02099cc8
@L_02098054:
    mov r1, r0
    b @L_02098084
@L_0209805c:
    ldr r0, [r4, #0x20]
    mov r1, #0
    b @L_02098050
@L_02098068:
    ldrb r0, [r4, #0x40]
    ldrb r1, [r4, #0x41]
    ldrb r2, [r4, #0x42]
    bl func_02098ae4
    b @L_02098054
@L_0209807c:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098084:
    mov r0, r7
    mov r2, r6
    mov r3, r5
    bl func_02098164
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02098098(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    movs r6, r2
    mov r5, r3
    mov r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r0, [r6]
    cmp r5, #0
    strne r0, [r5]
    add r0, r7, #4
    bl func_020970b0
    mov r4, r0
    mov r0, r7
    mov r1, r4
    bl func_02097ac0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02098148
    b @L_02098148
    b @L_02098148
    b @L_02098148
    b @L_02098114
    b @L_02098128
    b @L_0209813c
    b @L_02098148
    b @L_02098148
    b @L_0209811c
@L_02098114:
    ldr r1, [r4, #0x2c]
    b @L_02098150
@L_0209811c:
    ldrb r0, [r4, #0x42]
    bl func_02098b48
    b @L_02098134
@L_02098128:
    ldr r0, [r4, #0x20]
    mov r1, #2
@L_02098130:
    bl func_02099cc8
@L_02098134:
    mov r1, r0
    b @L_02098150
@L_0209813c:
    ldr r0, [r4, #0x20]
    mov r1, #1
    b @L_02098130
@L_02098148:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098150:
    mov r0, r7
    mov r2, r6
    mov r3, r5
    bl func_02098164
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02098164(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, [sp, #0x14]
    mov r5, r2
    mov r4, r3
    cmp r0, #0
    ble @L_02098188
    cmp r5, #0
    bne @L_02098198
@L_02098188:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_02098198:
    mov r0, #0
    str r0, [r5]
    cmp r4, #0
    strne r0, [r4]
    add r0, sp, #0x14
    bl func_0209aa5c
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, lr}
    addeq sp, sp, #0x10
    bxeq lr
    str r0, [r5]
    cmp r4, #0
    ldrne r0, [sp, #0x14]
    strne r0, [r4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_020981e4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r1
    add r1, sp, #0
    add r0, r9, #4
    mov r7, r2
    mov r6, r3
    bl func_02096f9c
    movs r5, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r4, #0
    ldr r1, [sp]
    mov r0, r4
    mov r2, #0x60
    bl MIi_CpuClearFast
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl func_02098ae4
    cmp r0, #0
    movle r0, r4
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [sp]
    mov r1, #8
    str r0, [r2, #0x2c]
    ldr r0, [sp]
    mov r3, #2
    strh r4, [r0, #0x30]
    ldr r0, [sp]
    mov r2, #1
    strb r1, [r0, #0x32]
    ldr r1, [sp]
    mov r0, r5
    strb r3, [r1, #0x33]
    ldr r1, [sp]
    strh r2, [r1, #0x34]
    ldr r1, [sp]
    strb r8, [r1, #0x40]
    ldr r1, [sp]
    strb r7, [r1, #0x41]
    ldr r1, [sp]
    strb r6, [r1, #0x42]
    ldrsh r1, [r9, #0xa]
    add r1, r1, #1
    strh r1, [r9, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020982a0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r1
    add r1, sp, #0
    add r0, r9, #4
    mov r7, r2
    bl func_02096f9c
    movs r6, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r5, #0
    ldr r1, [sp]
    mov r0, r5
    mov r2, #0x60
    bl MIi_CpuClearFast
    mov r4, #3
    mov r0, r8
    mov r1, r7
    mov r2, r4
    bl func_02098ae4
    cmp r0, #0
    movle r0, r5
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [sp]
    mov r1, #7
    str r0, [r2, #0x2c]
    ldr r0, [sp]
    mov r3, #2
    strh r5, [r0, #0x30]
    ldr r0, [sp]
    mov r2, #1
    strb r1, [r0, #0x32]
    ldr r1, [sp]
    mov r0, r6
    strb r3, [r1, #0x33]
    ldr r1, [sp]
    strh r2, [r1, #0x34]
    ldr r1, [sp]
    strb r8, [r1, #0x40]
    ldr r1, [sp]
    strb r7, [r1, #0x41]
    ldr r1, [sp]
    strb r4, [r1, #0x42]
    ldrsh r1, [r9, #0xa]
    add r1, r1, #1
    strh r1, [r9, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_0209835c(u8 *arg0, u8 arg1, s32 arg2)
{
    s32 local[1];
    s32 v0;
    s32 v2;
    s32 t0;
    u8 *t1;
    u8 *t2;
    u8 *t3;
    u8 *t4;
    u8 *t5;
    u8 *t6;
    s32 t7;
    v0 = func_02096f9c((arg0 + 4), (s32)((u8 *)local), arg2);
    if (v0 == 0)
        return 0;
    t0 = *(s32 *)(((u8 *)local));
    MIi_CpuClearFast(0, t0, 0x60);
    v2 = func_02098b48(arg1);
    if ((arg2 * v2) <= 0)
        return 0;
    t1 = (u8 *)*(s32 *)(((u8 *)local));
    *(s32 *)(t1 + 0x2C) = (arg2 * v2);
    t2 = (u8 *)*(s32 *)(((u8 *)local));
    *(u16 *)(t2 + 0x30) = 0;
    t3 = (u8 *)*(s32 *)(((u8 *)local));
    *(u8 *)(t3 + 0x32) = 3;
    t4 = (u8 *)*(s32 *)(((u8 *)local));
    *(u8 *)(t4 + 0x33) = 2;
    t5 = (u8 *)*(s32 *)(((u8 *)local));
    *(u16 *)(t5 + 0x34) = 1;
    t6 = (u8 *)*(s32 *)(((u8 *)local));
    *(u8 *)(t6 + 0x42) = arg1;
    t7 = (*(s16 *)(arg0 + 0xA) + 1);
    *(u16 *)(arg0 + 0xA) = t7;
    return v0;
}

extern "C" asm void func_02098410(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    ldr r0, [r4, #0x18]
    cmp r0, #0
    addgt r0, r0, #1
    strgt r0, [r4, #0x18]
    movgt r0, #1
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r7, #0
    ldr r5, =data_020c4668
    mov r6, #0x20
    str r7, [r4, #0xc]
    str r7, [r4, #0x10]
    strb r7, [r4, #0x14]
    strb r7, [r4, #0x15]
    str r7, [r4, #0x18]
    ldr r0, [r5]
    mov r2, r6
    add r1, r4, #0xc
    bl func_02098d30
    cmp r0, #0
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r6, [sp]
    ldr r0, [r5]
    ldr r3, =data_020afd54
    mov r2, r7
    add r1, r4, #0xc
    bl func_02098fac
    cmp r0, #0
    ldrne r1, [r4, #0x18]
    moveq r0, r7
    addne r1, r1, #1
    movne r0, #1
    strne r1, [r4, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_020984a8(u8 *arg0, s32 arg1)
{
    s32 t0;
    s32 t1;
    t0 = (*(s32 *)(arg0 + 0x18) - 1);
    *(s32 *)(arg0 + 0x18) = t0;
    if ((t0 <= 0 || arg1 != 0)) {
        t1 = *(s32 *)(((u8 *)&data_020c4668));
        func_02098d88(t1, (s32)(arg0 + 0xC));
        *(s32 *)(arg0 + 0x18) = 0;
    }
    return 1;
}

extern "C" asm void func_020984f0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, #0
    ldr r4, =data_020c4668
    b @L_02098534
@L_02098504:
    add r0, r7, #4
    add r1, r6, #1
    bl func_020970b0
    movs r5, r0
    beq @L_02098530
    ldr r0, [r4]
    add r1, r5, #0x44
    bl func_0209926c
    ldr r0, [r4]
    add r1, r5, #0x50
    bl func_0209926c
@L_02098530:
    add r6, r6, #1
@L_02098534:
    ldrsh r0, [r7, #8]
    cmp r6, r0
    blt @L_02098504
    ldr r0, =data_020c4668
    add r1, r7, #0xc
    ldr r0, [r0]
    bl func_0209926c
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209855c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, #0
    ldr r4, =data_020c4668
    b @L_020985ac
@L_02098570:
    add r0, r7, #4
    add r1, r6, #1
    bl func_020970b0
    movs r5, r0
    beq @L_020985a8
    ldr r0, [r4]
    add r1, r5, #0x44
    bl func_020992ec
    ldr r0, [r4]
    add r1, r5, #0x50
    bl func_020992ec
    mov r0, r7
    mov r1, r5
    bl func_020970e0
@L_020985a8:
    add r6, r6, #1
@L_020985ac:
    ldrsh r0, [r7, #8]
    cmp r6, r0
    blt @L_02098570
    ldr r4, =data_020c4668
    add r1, r7, #0xc
    ldr r0, [r4]
    bl func_020992ec
    cmp r0, #0
    beq @L_020985ec
    mov r0, #0x20
    str r0, [sp]
    ldr r0, [r4]
    ldr r3, =data_020afd54
    add r1, r7, #0xc
    mov r2, #0
    bl func_02098fac
@L_020985ec:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" u8 *func_020985fc(u8 *self, int id)
{
    return func_020970b0(self + 4, id);
}

extern "C" s32 func_0209860c(s32 arg0, u8 *arg1, u8 *arg2)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    v0 = ((s32 (*)(...))func_02097ac0)((void *)arg0, arg1);
    if (v0 != 0) {
        return 0;
    } else {
        switch (*(u8 *)(arg1 + 0x32)) {
            case 2:
            case 4:
                if ((*(u16 *)(arg1 + 0x30) & 2) != 0) {
                    return 0;
                } else {
                    t0 = *(s32 *)(arg1 + 0x20);
                    v1 = func_02099cc8(t0, 1);
                    arg0 = v1;
                    if (arg0 <= 0) {
                        return 0;
                    } else {
                        if ((s32)arg2 != 0) {
                            *(s32 *)(arg2) = arg0;
                        }
                        t1 = *(s32 *)(arg1 + 0x20);
                        v2 = func_02099cfc(t1, 1);
                        return v2;
                    }
                }
            case 5:
                if ((*(u16 *)(arg1 + 0x30) & 2) != 0) {
                    return 0;
                } else {
                    t2 = *(s32 *)(arg1 + 0x20);
                    v3 = func_02099cc8(t2, 0);
                    arg0 = v3;
                    if (arg0 <= 0) {
                        return 0;
                    } else {
                        if ((s32)arg2 != 0) {
                            *(s32 *)(arg2) = arg0;
                        }
                        t3 = *(s32 *)(arg1 + 0x20);
                        v4 = func_02099cfc(t3, 0);
                        return v4;
                    }
                }
            case 0:
            case 1:
            case 3:
            case 6:
            case 7:
            case 8:
            default:
                return 0;
        }
    }
}

extern "C" void func_020986e8(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *v0 = func_020970b0((void *)(arg0 + 4), arg1);
    func_02098710(arg0, v0, arg2);
}

extern "C" asm s32 func_02098710(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r1
    mov r4, r2
    bl func_02097ac0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r5, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020987f4
    b @L_020987f4
    b @L_020987f4
    b @L_020987f4
    b @L_02098760
    b @L_02098774
    b @L_020987b4
    b @L_020987f4
    b @L_020987f4
    b @L_020987f4
@L_02098760:
    cmp r4, #0
    ldrne r0, [r5, #0x2c]
    strne r0, [r4]
    ldr r0, [r5, #0x20]
    ldmia sp!, {r3, r4, r5, pc}
@L_02098774:
    ldrh r0, [r5, #0x30]
    tst r0, #2
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x20]
    mov r1, #2
    bl func_02099cc8
    cmp r0, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    strne r0, [r4]
    ldr r0, [r5, #0x20]
    mov r1, #2
    bl func_02099cfc
    ldmia sp!, {r3, r4, r5, pc}
@L_020987b4:
    ldrh r0, [r5, #0x30]
    tst r0, #2
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x20]
    mov r1, #1
    bl func_02099cc8
    cmp r0, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    strne r0, [r4]
    ldr r0, [r5, #0x20]
    mov r1, #1
    bl func_02099cfc
    ldmia sp!, {r3, r4, r5, pc}
@L_020987f4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_020987fc(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *v0 = func_020970b0((void *)(arg0 + 4), arg1);
    func_02098824(arg0, v0, arg2);
}

extern "C" asm s32 func_02098824(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, r2
    mov r4, #0
    bl func_02097ac0
    cmp r0, #0
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r6, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020988f8
    b @L_020988f8
    b @L_020988f8
    b @L_02098878
    b @L_020988f8
    b @L_02098878
    b @L_020988b8
    b @L_020988f8
    b @L_020988f8
    b @L_020988f8
@L_02098878:
    ldrh r0, [r6, #0x30]
    tst r0, #2
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x20]
    mov r1, r4
    bl func_02099cc8
    cmp r0, #0
    movle r0, r4
    ldmleia sp!, {r4, r5, r6, pc}
    cmp r5, #0
    strne r0, [r5]
    ldr r0, [r6, #0x20]
    mov r1, #0
    bl func_02099cfc
    ldmia sp!, {r4, r5, r6, pc}
@L_020988b8:
    ldrh r0, [r6, #0x30]
    tst r0, #2
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x20]
    mov r1, #2
    bl func_02099cc8
    cmp r0, #0
    movle r0, r4
    ldmleia sp!, {r4, r5, r6, pc}
    cmp r5, #0
    strne r0, [r5]
    ldr r0, [r6, #0x20]
    mov r1, #2
    bl func_02099cfc
    ldmia sp!, {r4, r5, r6, pc}
@L_020988f8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_02098900(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *v0 = func_020970b0((void *)(arg0 + 4), arg1);
    func_02098930(arg0, v0, arg2, arg3);
}

extern "C" asm s32 func_02098930(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r2
    mov r4, r3
    mov r6, r0
    cmpeq r4, #0
    mov r5, r1
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    mvnne r0, #0
    strne r0, [r7]
    cmp r4, #0
    mvnne r0, #0
    strne r0, [r4]
    mov r0, r6
    mov r1, r5
    bl func_02097ac0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    beq @L_020989a8
    ldr r0, =data_020c4668
    mov r2, r7
    ldr r0, [r0]
    add r1, r5, #0x44
    bl func_020990e8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_020989a8:
    cmp r4, #0
    beq @L_02098a00
    ldrb r0, [r5, #0x32]
    cmp r0, #7
    bne @L_020989e0
    ldr r0, =data_020c4668
    mov r2, r4
    ldr r0, [r0]
    add r1, r6, #0xc
    bl func_020990e8
    cmp r0, #0
    bne @L_02098a00
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020989e0:
    ldr r0, =data_020c4668
    mov r2, r4
    ldr r0, [r0]
    add r1, r5, #0x50
    bl func_020990e8
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098a00:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_02098a0c(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r0
    bl GX_GetSizeOfTex
    mov r5, r0
    bl GX_GetSizeOfTexPltt
    mov r6, r0
    cmp r5, #0
    beq @L_02098a58
    mov r0, #1
    str r0, [sp]
    ldr r2, [r4]
    ldr r3, [r4, #0x24]
    mov r0, r5
    mov r1, #0
    bl NNS_GfdInitLnkTexVramManager
    ldr r0, [r4, #0x2c]
    orr r0, r0, #1
    str r0, [r4, #0x2c]
@L_02098a58:
    cmp r6, #0
    beq @L_02098a80
    ldr r1, [r4, #4]
    ldr r2, [r4, #0x28]
    mov r0, r6
    mov r3, #1
    bl NNS_GfdInitLnkPlttVramManager
    ldr r0, [r4, #0x2c]
    orr r0, r0, #2
    str r0, [r4, #0x2c]
@L_02098a80:
    mov r0, #1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 func_02098a8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v0 = func_0209a4d8(arg1, arg3, arg2, arg4, arg5);
    return (v0 != 0 ? 1 : 0);
}

extern "C" s32 func_02098ab8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v0 = func_0209a638(arg1, arg3, arg2, arg4, arg5);
    return (v0 != 0 ? 1 : 0);
}

extern "C" asm void func_02098ae4(void)
{
    mov r3, #8
    mov r12, r3, lsl r0
    mov r0, r3, lsl r1
    mul r0, r12, r0
    cmp r2, #7
    addls pc, pc, r2, lsl #2
    b @L_02098b40
    b @L_02098b40
    bx lr
    b @L_02098b20
    b @L_02098b2c
    bx lr
    b @L_02098b40
    bx lr
    b @L_02098b38
@L_02098b20:
    add r0, r0, #3
    mov r0, r0, asr #2
    bx lr
@L_02098b2c:
    add r0, r0, #1
    mov r0, r0, asr #1
    bx lr
@L_02098b38:
    mov r0, r0, lsl #1
    bx lr
@L_02098b40:
    mov r0, #0
    bx lr
}

extern "C" s32 func_02098b48(s32 arg0)
{
    switch (arg0) {
        case 1:
            return 0;
        case 2:
            return 0x20;
        case 3:
            return 0x20;
        case 4:
            return 0x200;
        case 6:
            return 0;
        case 7:
            return 0;
        case 0:
        case 5:
        default:
            return 0;
    }
}

extern "C" s32 func_02098bac(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v7;
    *(s32 *)(arg0) = 0;
    *(s32 *)(arg0 + 0x4) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
    *(s32 *)(arg0 + 0x24) = 0;
    *(s32 *)(arg0 + 0x28) = 0;
    *(s32 *)(arg0 + 0x2C) = 0;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s32 *)(arg0 + 0x34) = 0;
    v0 = OS_InitMutex((arg0 + 8), arg1, arg2, arg3);
    *(s32 *)(arg0 + 0x38) = 0;
    if ((arg1 <= 0 || arg2 <= 0))
        return 0;
    v1 = func_02030128(arg1);
    *(s32 *)(arg0 + 0x24) = v1;
    v2 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, v1, 0, 1);
    *(s32 *)(arg0) = v2;
    v3 = func_02030490(arg2);
    *(s32 *)(arg0 + 0x28) = v3;
    v4 = _ZN8GameHeap5AllocEiii((s32)data_020c47b4, v3, 0, 1);
    *(s32 *)(arg0 + 0x4) = v4;
    if ((*(s32 *)(arg0) == 0 || v4 == 0))
        return 0;
    MIi_CpuClearFast(0, *(s32 *)(arg0), *(s32 *)(arg0 + 0x24));
    MIi_CpuClearFast(0, *(s32 *)(arg0 + 0x4), *(s32 *)(arg0 + 0x28));
    v7 = func_02098a0c((s32)arg0);
    if (v7 == 0)
        return 0;
    func_0209a45c(arg3);
    return 1;
}

extern "C" s32 func_02098ca8(s32 arg0)
{
    u8 *r4;
    s32 v2;
    r4 = (u8 *)arg0;
    if ((*(s32 *)(r4 + 0x2C) & 1) != 0) {
        func_02030278();
    }
    if ((*(s32 *)(r4 + 0x2C) & 2) != 0) {
        func_02030604();
    }
    v2 = func_02098a0c((s32)r4);
    return v2;
}

extern "C" asm void func_02098cdc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r2
    mov r6, r1
    bl func_02098d88
    cmp r5, #0
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, pc}
    add r0, r5, #0x1f
    mov r4, #0
    bic r5, r0, #0x1f
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl func_02030188
    cmp r0, #0
    moveq r0, r4
    strne r0, [r6, #4]
    movne r0, #1
    strne r5, [r6]
    strneb r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02098d30(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r2
    mov r6, r1
    bl func_02098d88
    cmp r5, #0
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, pc}
    add r0, r5, #0x1f
    mov r4, #0
    bic r5, r0, #0x1f
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl func_020304ec
    cmp r0, #0
    moveq r0, r4
    movne r1, #2
    strne r0, [r6, #4]
    strne r5, [r6]
    strneb r1, [r6, #8]
    movne r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_02098d88(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_02098dc0
    ldrb r1, [r4, #8]
    cmp r1, #1
    beq @L_02098db4
    cmp r1, #2
    beq @L_02098dbc
    ldmia sp!, {r4, pc}
@L_02098db4:
    bl func_0203020c
    b @L_02098dc0
@L_02098dbc:
    bl NNS_GfdFreeLnkPlttVram
@L_02098dc0:
    mov r0, #0
    str r0, [r4]
    str r0, [r4, #4]
    strb r0, [r4, #8]
    strb r0, [r4, #9]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02098dd8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r4, [sp, #0x20]
    mov r6, r0
    add r4, r4, #3
    ldrb r0, [r1, #8]
    ldr lr, [r1]
    bic r4, r4, #3
    cmp lr, r4
    movlt r4, lr
    mov r5, r3
    ldr r12, [sp, #0x2c]
    cmp r0, #1
    beq @L_02098e1c
    cmp r0, #2
    beq @L_02098e8c
    b @L_02098efc
@L_02098e1c:
    ldr r1, [r1, #4]
    ldr r0, [sp, #0x24]
    mov r1, r1, lsl #0x10
    cmp r0, #0
    add r7, r2, r1, lsr #13
    beq @L_02098e64
    cmp r12, #0
    movne r0, #0
    strneb r0, [r12]
    mov r0, r6
    bl func_020991ac
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_02003eec
    mov r0, r6
    bl func_020991d8
    b @L_02098f08
@L_02098e64:
    ldr r1, [sp, #0x28]
    mov r0, r6
    str r1, [sp]
    mov r1, r7
    mov r2, r4
    mov r3, r5
    str r12, [sp, #4]
    bl func_02098a8c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098e8c:
    ldr r1, [r1, #4]
    ldr r0, [sp, #0x24]
    mov r1, r1, lsl #0x10
    cmp r0, #0
    add r7, r2, r1, lsr #13
    beq @L_02098ed4
    cmp r12, #0
    movne r0, #0
    strneb r0, [r12]
    mov r0, r6
    bl func_0209920c
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_020040b0
    mov r0, r6
    bl func_02099238
    b @L_02098f08
@L_02098ed4:
    ldr r1, [sp, #0x28]
    mov r0, r6
    str r1, [sp]
    mov r1, r7
    mov r2, r4
    mov r3, r5
    str r12, [sp, #4]
    bl func_02098ab8
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098efc:
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02098f08:
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
