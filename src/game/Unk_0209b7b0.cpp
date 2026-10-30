#include "game/Unk_0209b7b0.hpp"

extern "C" char data_020c47b4[];
#include "wireless/Wireless.hpp"

extern Wireless data_020cb980;

extern "C" void *data_020aff50[];
extern "C" u8 data_020cd980[];
extern "C" u8 data_020cdd80[];

extern "C" void func_0209b7b0(u8 *obj, s32 a, s32 b);
extern "C" void func_0209b7c8(u8 *obj, s32 *a, s32 *b);
extern "C" s32 func_0209b7e0(u8 *obj, BOOL keep);
extern "C" void func_0209b7f8(u8 *obj, s32 value);
extern "C" s32 func_0209b804(u8 *obj);
extern "C" void func_0209b810(void);
extern "C" void func_0209b904(void);
extern "C" void func_0209b9c8(void);
extern "C" s32 func_0209ba38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_0209ba60(u8 *obj, u8 value);
extern "C" u8 func_0209ba68(u8 *obj);
extern "C" void func_0209ba70(u8 *obj, s32 value);
extern "C" s32 func_0209ba8c(u8 *obj);
extern "C" u8 *func_0209ba94(u8 *obj);
extern "C" u8 *func_0209baa0(u8 *obj);
extern "C" void func_0209baa8(u8 *obj, s32 value);
extern "C" s32 func_0209bab0(u8 *obj);
extern "C" u8 func_0209bab8(u8 *obj);
extern "C" void func_0209bac0(u8 *obj, u8 value);
extern "C" void func_0209bac8(u8 *obj, u8 value);
extern "C" u8 func_0209bad0(u8 *obj);
extern "C" void func_0209bad8(void);
extern "C" u8 *func_0209bb10(u8 *obj);
extern "C" void func_0209bb1c(u8 *obj, u8 value);
extern "C" u8 func_0209bb28(u8 *obj);
extern "C" void func_0209bb34(u8 *obj, u8 value);
extern "C" u8 func_0209bb40(u8 *obj);
extern "C" void func_0209bb4c(void);
extern "C" void *func_0209bc60(void *obj);
extern "C" void **func_0209bc74(void **obj);
extern "C" s32 func_0209bc94(u8 *arg0);
extern "C" void func_0209bcbc(void);
extern "C" void func_0209bd88(void);
extern "C" void func_0209be60(void *obj);
extern "C" void func_0209bebc(void *obj);
extern "C" BOOL func_0209bec8(void);
extern "C" void func_0209bedc(u8 *obj, s32 value);
extern "C" s32 func_0209bee4(u8 *obj);
extern "C" void func_0209beec(s32 arg0);
extern "C" void func_0209bf0c(void);
extern "C" BOOL func_0209bf44(u8 *obj);
extern "C" BOOL func_0209bf60(u8 *obj);
extern "C" s32 func_0209bf7c(void);
extern "C" u16 func_0209bf8c(void);
extern "C" u16 func_0209bf9c(u8 *obj);
extern "C" u16 func_0209bfe8(u8 *obj);
extern "C" void func_0209bff0(u8 *obj);
extern "C" void func_0209c004(void);
extern "C" void func_0209c044(void);
extern "C" void func_0209c078(void);
extern "C" void func_0209c0ac(void);
extern "C" void func_0209c17c(void);
extern "C" void func_0209c24c(void);
extern "C" s32 func_0209c33c(...);
extern "C" void func_0209c380(u8 *arg0, u8 *arg1);
extern "C" s32 func_0209c398(s32 arg0, u8 *arg1);
extern "C" void func_0209c3bc(void);
extern "C" void func_0209c420(void);
extern "C" void func_0209c480(void);
extern "C" u8 *func_0209c4bc(u8 *obj, int i);
extern "C" void func_0209c4d8(void);
extern "C" void func_0209c50c(void);
extern "C" void func_0209c56c(void);
extern "C" void func_0209c5a4(u8 *arg0);
extern "C" void func_0209c5d0(u8 *arg0);
extern "C" void func_0209c5fc(void);
extern "C" void func_0209c628(u8 *obj);
extern "C" void func_0209c648(void);
extern "C" void func_0209c6a8(u8 *arg0, u8 arg1);
extern "C" void func_0209c6d4(void);
extern "C" BOOL func_0209c798(void);
extern "C" void func_0209c7a0(void);
extern "C" void func_0209c7f4(void);
extern "C" void func_0209c934(void);
extern "C" void func_0209c9e0(void);
extern "C" void func_0209cba8(void);

extern "C" char data_020a72d4[];
extern "C" char data_020a72e4[];
extern "C" char data_020aff1c[];
extern "C" char data_020aff58[];
extern "C" char data_020c4830[];
extern "C" char data_020c4844[];
extern "C" char data_020c5120[];
extern "C" char data_020c5124[];
extern "C" char data_020c5320[];
extern "C" char data_020c53b0[];
extern "C" char data_020c53b4[];
extern "C" char data_020c8760[];
extern "C" char data_020e88a0[];
extern "C" char data_020fc748[];
extern "C" void DC_FlushRange(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_020621b413func_020690a8Eii(void);
extern "C" void _ZN17UnkClass_020621b413func_0207f7ccEv(void);
extern "C" void _ZN8Wireless13func_0203c0f4EP8GameHeap(void);
extern "C" void _ZN8Wireless13func_0203c170Emtt(void);
extern "C" void _ZN8Wireless13func_0203c358Ev(void);
extern "C" void _ZN8Wireless13func_0203c364Ei(void);
extern "C" void _ZN8Wireless13func_0203c3bcEPvt(void);
extern "C" void _ZN8Wireless13func_0203c420Ei(void);
extern "C" void _ZN8Wireless13func_0203c4a8Ev(void);
extern "C" void _ZN8Wireless13func_0203c540Ev(void);
extern "C" void _ZN8Wireless13func_0203c67cEv(void);
extern "C" void _ZN8Wireless13func_0203c9ecEi(void);
extern "C" void _ZN8Wireless13func_0203cb90EPFvtPvtE(void);
extern "C" void _ZN8Wireless13func_0203cbecEi(void);
extern "C" void _ZN8Wireless13func_0203cc08EtPvm(void);
extern "C" void _ZN8Wireless13func_0203cdf8EtPKv(void);
extern "C" void _ZN8Wireless13func_0203cebcEt(void);
extern "C" void _ZN8Wireless13func_0203d04cEttt(void);
extern "C" void _ZN8Wireless13func_0203d2b8EtPh(void);
extern "C" void _ZN8Wireless13func_0203d8d0Ev(void);
extern "C" void _ZN8Wireless13func_0203d960Eti(void);
extern "C" void _ZN8Wireless13func_0203da3cEv(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02008564(void);
extern "C" void func_02008580(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02131994(void);
extern "C" void func_ov015_02143750(void);
extern "C" void sprintf(void);
extern "C" s32 strcpy(...);

extern "C" void func_0209b7b0(u8 *obj, s32 a, s32 b)
{
    *(s32 *)(obj + 0x5C20) = 1;
    *(s32 *)(obj + 0x5C28) = a;
    *(s32 *)(obj + 0x5C2C) = b;
}

extern "C" void func_0209b7c8(u8 *obj, s32 *a, s32 *b)
{
    *a = *(s32 *)(obj + 0x5C28);
    *b = *(s32 *)(obj + 0x5C2C);
}

extern "C" s32 func_0209b7e0(u8 *obj, BOOL keep)
{
    s32 value = *(s32 *)(obj + 0x5C20);

    if (!keep) {
        *(s32 *)(obj + 0x5C20) = 0;
    }
    return value;
}

extern "C" void func_0209b7f8(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x5C24) = value;
}

extern "C" s32 func_0209b804(u8 *obj)
{
    return *(s32 *)(obj + 0x5C24);
}

extern "C" asm void func_0209b810(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r7, =0x2aaaaaab
    mov lr, r1, lsr #0x1f
    smull r4, r8, r7, r1
    add r8, lr, r8, asr #1
    cmp r8, #0xa
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    smull r4, r6, r7, r2
    smull r4, r5, r7, r1
    mov r12, r2, lsr #0x1f
    add r6, r12, r6, asr #1
    mov r4, #0x60
    mul r7, r8, r4
    mov r12, #0xc
    add r5, lr, r5, asr #1
    smull r6, lr, r12, r6
    smull r5, lr, r12, r5
    mov r4, #0
    mov r12, r4
    sub r6, r2, r6
    add r9, r0, r7
    sub r5, r1, r5
    mvn lr, #0
@L_0209b870:
    add r2, r9, r12, lsl #3
    ldrb r1, [r2, #0xa5]
    cmp r6, r1
    bne @L_0209b8ac
    add r0, r0, r7
    add r1, r0, r12, lsl #3
    ldrb r0, [r1, #0xa4]
    cmp r5, r0
    bne @L_0209b8a4
    cmp r3, #0
    strne r3, [r1, #0xa8]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0209b8a4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0209b8ac:
    ldrb r1, [r2, #0xa4]
    cmp r5, r1
    addeq r4, r4, #1
    cmp r1, #0
    bne @L_0209b8c8
    cmp lr, #0
    movlt lr, r12
@L_0209b8c8:
    add r12, r12, #1
    cmp r12, #0xc
    blt @L_0209b870
    cmp r4, #1
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, #0x60
    mla r0, r8, r1, r0
    add r0, r0, lr, lsl #3
    strb r5, [r0, #0xa4]
    strb r6, [r0, #0xa5]
    str r3, [r0, #0xa8]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209b904(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =0x2aaaaaab
    mov r4, r1, lsr #0x1f
    smull r2, r12, r5, r1
    add r12, r4, r12, asr #1
    cmp r12, #0xa
    ldmgeia sp!, {r3, r4, r5, pc}
    smull r3, r2, r5, r1
    mov r3, #0x60
    add r2, r4, r2, asr #1
    mov r5, #0xc
    smull r2, r4, r5, r2
    mul r3, r12, r3
    add r5, r0, r3
    sub r2, r1, r2
    mov r4, #0
@L_0209b944:
    add r1, r5, r4, lsl #3
    ldrb r1, [r1, #0xa5]
    cmp r2, r1
    bne @L_0209b970
    add r0, r0, #0xa4
    add r0, r0, r3
    add r0, r0, r4, lsl #3
    mov r1, #0
    mov r2, #4
    bl MI_CpuFill8
    b @L_0209b97c
@L_0209b970:
    add r4, r4, #1
    cmp r4, #0xc
    blt @L_0209b944
@L_0209b97c:
    add r4, r4, #1
    cmp r4, #0xc
    ldmgeia sp!, {r3, r4, r5, pc}
@L_0209b988:
    add r2, r5, r4, lsl #3
    ldrb r0, [r2, #0xa4]
    add r4, r4, #1
    cmp r4, #0xc
    strb r0, [r2, #0x9c]
    ldrb r0, [r2, #0xa5]
    strb r0, [r2, #0x9d]
    ldrb r1, [r2, #0xa6]
    ldrb r0, [r2, #0xa7]
    strb r1, [r2, #0x9e]
    strb r0, [r2, #0x9f]
    ldr r0, [r2, #0xa8]
    str r0, [r2, #0xa0]
    blt @L_0209b988
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0209b9c8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr lr, =0x2aaaaaab
    mov r12, r1, lsr #0x1f
    smull r3, r4, lr, r1
    add r4, r12, r4, asr #1
    cmp r4, #0xa
    ldmgeia sp!, {r4, r5, r6, pc}
    smull r3, r5, lr, r1
    mov r3, #0x60
    mul r6, r4, r3
    add r5, r12, r5, asr #1
    mov lr, #0xc
    smull r3, r12, lr, r5
    sub r5, r1, r3
    add r4, r0, r6
    mov r3, #0
@L_0209ba08:
    add r1, r4, r3, lsl #3
    ldrb r1, [r1, #0xa5]
    cmp r5, r1
    addeq r0, r0, r6
    addeq r0, r0, r3, lsl #3
    streq r2, [r0, #0xa8]
    ldmeqia sp!, {r4, r5, r6, pc}
    add r3, r3, #1
    cmp r3, #0xc
    blt @L_0209ba08
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_0209ba38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 v0;
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x4) = arg2;
    *(s32 *)(((u8 *)(arg0 + (arg1 << 4))) + 0x10) = arg4;
    v0 = strcpy(((arg0 + 8) + (arg1 << 4)), arg3, arg2, arg3);
    return v0;
}

extern "C" void func_0209ba60(u8 *obj, u8 value)
{
    obj[0x1] = value;
}

extern "C" u8 func_0209ba68(u8 *obj)
{
    return obj[0x1];
}

extern "C" void func_0209ba70(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x614) = value;
    if (value != 0) {
        *(s32 *)(obj + 0x5BFC) = -1;
        *(s32 *)(obj + 0x5C00) = -1;
    }
}

extern "C" s32 func_0209ba8c(u8 *obj)
{
    return *(s32 *)(obj + 0x614);
}

extern "C" u8 *func_0209ba94(u8 *obj)
{
    return obj + 0x5BFC;
}

extern "C" u8 *func_0209baa0(u8 *obj)
{
    return obj + 0x5C00;
}

extern "C" void func_0209baa8(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x61C) = value;
}

extern "C" s32 func_0209bab0(u8 *obj)
{
    return *(s32 *)(obj + 0x61C);
}

extern "C" u8 func_0209bab8(u8 *obj)
{
    return obj[0x618];
}

extern "C" void func_0209bac0(u8 *obj, u8 value)
{
    obj[0x618] = value;
}

extern "C" void func_0209bac8(u8 *obj, u8 value)
{
    obj[0x619] = value;
}

extern "C" u8 func_0209bad0(u8 *obj)
{
    return obj[0x619];
}

extern "C" asm void func_0209bad8(void)
{
    stmdb sp!, {r3, lr}
    add r2, r0, #5
    add lr, r2, #0x5c00
    mov r12, #0xa
@L_0209bae8:
    ldrb r3, [r1]
    ldrb r2, [r1, #1]
    add r1, r1, #2
    subs r12, r12, #1
    strb r2, [lr, #1]
    strb r3, [lr], #2
    bne @L_0209bae8
    add r0, r0, #5
    add r0, r0, #0x5c00
    ldmia sp!, {r3, pc}
}

extern "C" u8 *func_0209bb10(u8 *obj)
{
    return obj + 0x558;
}

extern "C" void func_0209bb1c(u8 *obj, u8 value)
{
    obj[0x5C55] = value;
}

extern "C" u8 func_0209bb28(u8 *obj)
{
    return obj[0x5C55];
}

extern "C" void func_0209bb34(u8 *obj, u8 value)
{
    obj[0x5C54] = value;
}

extern "C" u8 func_0209bb40(u8 *obj)
{
    return obj[0x5C54];
}

extern "C" asm void func_0209bb4c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r3, #1
    mov r5, #0
    mov r1, r5
    add r0, r4, #0x1c
    mov r2, #0xa8
    strb r3, [r4, #0x19]
    strb r3, [r4, #0x1a]
    bl MI_CpuFill8
    mvn r1, #0
    mov r0, #0x1c
@L_0209bb7c:
    mla r2, r5, r0, r4
    strh r1, [r2, #0x1c]
    add r5, r5, #1
    strh r1, [r2, #0x70]
    cmp r5, #3
    blt @L_0209bb7c
    ldr r0, =data_020e88a0
    bl func_ov015_02143750
    movs r5, r0
    beq @L_0209bbd0
    ldrsb r0, [r5, #0x23]
    bl func_ov015_02131994
    cmp r0, #0
    ldreqsb r0, [r5, #0x23]
    streqh r0, [r4, #0x1c]
    ldreqsb r0, [r5, #0x1d]
    streqh r0, [r4, #0x70]
    ldrnesb r0, [r5, #0x1d]
    strneh r0, [r4, #0x1c]
    ldrnesb r0, [r5, #0x23]
    strneh r0, [r4, #0x70]
@L_0209bbd0:
    ldrsh r0, [r4, #0x1c]
    mvn r5, #0
    mov r6, r5
    bl func_ov015_02130ae8
    movs r1, r0
    beq @L_0209bbfc
    ldr r0, =data_020e88a0
    mov r2, #0xf
    mov r3, #0
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    mov r5, r0
@L_0209bbfc:
    ldrsh r0, [r4, #0x70]
    bl func_ov015_02130ae8
    movs r1, r0
    beq @L_0209bc20
    ldr r0, =data_020e88a0
    mov r2, #0xf
    mov r3, #0
    bl _ZN17UnkClass_020621b413func_0207f7ccEv
    mov r6, r0
@L_0209bc20:
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r2, r6
    bl _ZN17UnkClass_020621b413func_020690a8Eii
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0x8b]
    ldr r0, =data_020e88a0
    mov r1, r6
    mov r2, r5
    bl _ZN17UnkClass_020621b413func_020690a8Eii
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0x37]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void *func_0209bc60(void *obj)
{
    operator delete(obj);
    return obj;
}

extern "C" void **func_0209bc74(void **obj)
{
    obj[0] = data_020aff50;
    func_0209bebc(obj);
    return obj;
}

extern "C" s32 func_0209bc94(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)data_020aff50;
    ((s32 (*)(...))func_0209bebc)((s32)arg0, (s32)data_020aff50);
    _ZdlPv((s32)arg0);
    return (s32)arg0;
}

extern "C" asm void func_0209bcbc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, #0
    ldr r1, =data_020fc748
    str r5, [r4, #0x58]
    str r5, [r4, #0x60]
    str r5, [r4, #0x5c]
    strb r5, [r4, #0x67]
    strb r5, [r4, #0x66]
    add r0, r4, #4
    strb r5, [r1]
    bl func_02008580
    add r0, r4, #0x2b8
    bl func_02008564
    ldr r0, =data_020aff1c
    add r1, r4, #0x2e0
    ldr r0, [r0, #0x10]
    mov r2, #0x10
    bl MI_CpuCopy8
    add r0, r4, #0xbe
    ldr r1, =data_020aff58
    add r0, r0, #0x200
    bl sprintf
    mov r0, r5
    ldr r1, =data_020c5120
    mov r2, #0x1e4
    bl MIi_CpuClearFast
    mov r0, r5
    ldr r1, =data_020c8760
    mov r2, #0xf00
    bl MIi_CpuClearFast
    ldr r1, =data_020c4844
    ldr r0, =data_020c4830
    str r5, [r1]
    str r5, [r0]
    strb r5, [r4, #0x84]
    mov r0, #0x78
    str r0, [r4, #0x74]
    str r0, [r4, #0x78]
    add r0, r0, r0, lsl #1
    add r0, r0, #0x78
    add r0, r0, #4
    str r0, [r4, #0x8c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0209bd88(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r4, r3
    ldr r5, [r7, #0x74]
    ldr r3, [r7, #0x78]
    sub r0, r4, #1
    mla r0, r3, r0, r5
    ldrb r12, [sp, #0x18]
    ldr r8, =data_020cb980
    mov r6, r1
    add r3, r0, #4
    ldr r1, =data_020c47b4
    mov r0, r8
    mov r5, r2
    strb r12, [r7, #0x65]
    str r3, [r7, #0x8c]
    bl _ZN8Wireless13func_0203c0f4EP8GameHeap
    ldr r1, [sp, #0x20]
    mov r0, r8
    mov r3, r4
    ldr r2, [sp, #0x1c]
    bl _ZN8Wireless13func_0203c170Emtt
    mov r2, #0
    ldrb r1, [sp, #0x18]
    mov r4, r0
    strb r2, [r7, #0x93]
    cmp r1, #0
    strb r2, [r7, #0x92]
    strb r2, [r7, #0x91]
    strb r2, [r7, #0x90]
    bne @L_0209be0c
    ldr r0, =func_0209c934
    bl _ZN8Wireless13func_0203cb90EPFvtPvtE
@L_0209be0c:
    cmp r4, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    add r1, r7, #0x2f0
    mov r2, #0x11
    strb r6, [r7, #0x302]
    bl MI_CpuCopy8
    ldr r0, =data_020cb980
    add r1, r7, #0x2e0
    mov r2, #0x34
    bl _ZN8Wireless13func_0203c3bcEPvt
    mov r0, r7
    bl func_0209beec
    mov r0, r7
    bl func_0209c56c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0209be60(void *obj)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_0209bee4
    cmp r0, #0
    beq @L_0209be90
    ldr r4, =data_020cb980
@L_0209be78:
    mov r0, r4
    bl _ZN8Wireless13func_0203c540Ev
    mov r0, r4
    bl _ZN8Wireless13func_0203c67cEv
    cmp r0, #0
    beq @L_0209be78
@L_0209be90:
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_0209bedc
    str r4, [r5, #0x60]
    str r4, [r5, #0x5c]
    strb r4, [r5, #0x67]
    strb r4, [r5, #0x66]
    strb r4, [r5, #0x65]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_0209bebc(void *obj)
{
    func_0209be60(obj);
}

extern "C" BOOL func_0209bec8(void)
{
    return data_020cb980.func_0203c4a8();
}

extern "C" void func_0209bedc(u8 *obj, s32 value)
{
    *(s32 *)(obj + 0x58) = value;
}

extern "C" s32 func_0209bee4(u8 *obj)
{
    return *(s32 *)(obj + 0x58);
}

extern "C" void func_0209beec(s32 arg0)
{
    s32 r2;
    s32 r3;
    r2 = 0;
    r3 = 0;
    do {
        *(s32 *)(((u8 *)(arg0 + (r3 << 2))) + 0x278) = r2;
        r3 = (r3 + 1);
    } while (r3 < 0x10);
    return;
}

extern "C" asm void func_0209bf0c(void)
{
    stmdb sp!, {r3, lr}
    bl func_0209bf44
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020cb980
    bl _ZN8Wireless13func_0203c358Ev
    cmp r0, #3
    movgt r0, #3
    ldmgtia sp!, {r3, pc}
    cmp r0, #0
    movlt r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" BOOL func_0209bf44(u8 *obj)
{
    s32 state = func_0209bee4(obj);

    return state == 11 || state == 5;
}

extern "C" BOOL func_0209bf60(u8 *obj)
{
    s32 state = func_0209bee4(obj);

    return state != 0 && state != 12;
}

extern "C" s32 func_0209bf7c(void)
{
    return *(s32 *)(data_020cd980 + 0x440);
}

extern "C" u16 func_0209bf8c(void)
{
    return *(u16 *)(data_020cdd80 + 0x5C);
}

extern "C" asm u16 func_0209bf9c(u8 *obj)
{
    ldrb r1, [r0, #0x65]
    cmp r1, #0
    bne @L_0209bfd0
    ldr r1, [r0, #0x5c]
    cmp r1, #1
    moveq r1, #1
    movne r1, #0
    cmp r1, #0
    ldrne r0, =data_020cdd80
    ldrneh r0, [r0, #0x60]
    orrne r0, r0, #1
    ldreqh r0, [r0, #0x68]
    bx lr
@L_0209bfd0:
    ldr r0, =data_020cb980
    ldrh r0, [r0, #6]
    orr r0, r0, #1
    bx lr
}

extern "C" u16 func_0209bfe8(u8 *obj)
{
    return *(u16 *)(obj + 0x6A);
}

extern "C" void func_0209bff0(u8 *obj)
{
    *(u16 *)(obj + 0x6A) = func_0209bf9c(obj);
}

extern "C" asm void func_0209c004(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    bl func_0209bf9c
    cmp r4, #0
    beq @L_0209c030
    ldrh r1, [r5, #0x6a]
    cmp r0, r1
    movlo r1, #1
    movhs r1, #0
    strb r1, [r4]
@L_0209c030:
    ldrh r1, [r5, #0x6a]
    cmp r0, r1
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0209c044(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020fc748
    ldrb r0, [r4]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r0, =data_020cb980
    mov r1, #0
    bl _ZN8Wireless13func_0203c364Ei
    mov r0, #1
    strb r0, [r4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209c078(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020fc748
    ldrb r0, [r4]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020cb980
    mov r1, #1
    bl _ZN8Wireless13func_0203c364Ei
    mov r0, #0
    strb r0, [r4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209c0ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r8, r0
    ldr r4, [r8, #0x60]
    ldr r3, =data_020cdd80
    mov r7, r1
    mov r6, r2
    cmp r4, #1
    ldrh r5, [r3, #0x66]
    mov r4, #0
    bne @L_0209c150
    ldr r0, [r8, #0x58]
    cmp r0, #5
    beq @L_0209c0e8
    cmp r0, #0xb
    bne @L_0209c164
@L_0209c0e8:
    ldr r0, =data_020c4844
    ldr r4, =data_020c8760
    ldr r9, [r0]
    mov r8, #0x3c0
    and r1, r9, #3
    mla r0, r1, r8, r4
    mov r1, r7
    mov r2, r5
    bl MI_CpuCopy8
    and r0, r9, #3
    mla r3, r0, r8, r4
    mov r1, r6
    mov r2, r5
    add r0, r3, #0xf0
    bl MI_CpuCopy8
    ldr r2, =data_020c4830
    mov r3, #0
    mov r0, r7
    mov r1, r5
    str r3, [r2]
    bl DC_FlushRange
    mov r0, r6
    mov r1, r5
    bl DC_FlushRange
    mov r4, #1
    b @L_0209c164
@L_0209c150:
    bl func_0209bee4
    cmp r0, #0xc
    bne @L_0209c164
    mov r0, r8
    bl func_0209be60
@L_0209c164:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209c17c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r0
    ldr r2, [r4, #0x60]
    str r1, [sp]
    mov r7, r1
    cmp r2, #1
    mov r10, #0
    bne @L_0209c224
    ldr r0, [r4, #0x58]
    cmp r0, #5
    beq @L_0209c1b0
    cmp r0, #0xb
    bne @L_0209c238
@L_0209c1b0:
    ldr r0, =data_020c4830
    ldr r1, =data_020c4844
    ldr r10, [r0]
    mov r11, #0xf0
    cmp r10, #4
    ldr r0, =data_020c4830
    mov r9, #0
    movgt r10, #4
    str r9, [r0]
    ldr r8, [r1]
    mov r5, r11, lsl #2
    ldr r6, =data_020c8760
    mov r4, #0x3c0
    b @L_0209c208
@L_0209c1e8:
    sub r0, r8, r9
    and r1, r0, #3
    mla r0, r1, r4, r6
    mov r1, r7
    mov r2, r5
    bl MI_CpuCopy8
    add r7, r7, r5
    add r9, r9, #1
@L_0209c208:
    cmp r9, r10
    blt @L_0209c1e8
    mov r0, r11, lsl #2
    mul r1, r10, r0
    ldr r0, [sp]
    bl DC_FlushRange
    b @L_0209c238
@L_0209c224:
    bl func_0209bee4
    cmp r0, #0xc
    bne @L_0209c238
    mov r0, r4
    bl func_0209be60
@L_0209c238:
    mov r0, r10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209c24c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r6, r2
    mov r5, r0
    mov r0, r4
    mov r1, r6
    bl DC_FlushRange
    ldrb r0, [r5, #0x65]
    cmp r0, #0
    bne @L_0209c310
    ldr r0, [r5, #0x5c]
    cmp r0, #1
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0209c2ec
    mov r0, r5
    bl func_0209bf9c
    ldr r6, =data_020c5120
    strb r0, [r6]
    ldrb r0, [r5, #0x84]
    cmp r0, #0
    movne r0, #0
    strneb r0, [r6, #1]
    strneb r0, [r6, #2]
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r2, [r5, #0x74]
    ldr r1, =data_020c5124
    mov r0, r2, lsr #2
    strb r0, [r6, #1]
    ldr r3, [r5, #0x78]
    mov r0, r4
    mov r3, r3, lsr #2
    strb r3, [r6, #2]
    bl MI_CpuCopy8
    ldr r1, [r5, #0x74]
    mov r0, r6
    add r1, r1, #4
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
@L_0209c2ec:
    ldr r6, =data_020c5120
    ldr r2, [r5, #0x78]
    mov r0, r4
    mov r1, r6
    bl MI_CpuCopy8
    ldr r1, [r5, #0x78]
    mov r0, r6
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
@L_0209c310:
    ldr r5, =data_020c5120
    mov r0, r4
    mov r1, r5
    mov r2, r6
    bl MI_CpuCopy8
    mov r0, r5
    mov r1, r6
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_0209c33c(...)
{
    cmp r2, #0
    ldrne r0, [r0, #0x74]
    add r3, r1, #2
    ldreq r0, [r0, #0x78]
    mov r2, #0
    sub r1, r0, #2
    cmp r1, #0
    ble @L_0209c378
@L_0209c35c:
    ldrb r0, [r3], #1
    sub r1, r1, #1
    cmp r1, #0
    add r0, r2, r0
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    bgt @L_0209c35c
@L_0209c378:
    mov r0, r2
    bx lr
}

extern "C" void func_0209c380(u8 *arg0, u8 *arg1)
{
    s32 v0 = func_0209c33c(arg0, arg1, *(u8 *)(arg0 + 0x64));
    *(u16 *)(arg1) = v0;
}

extern "C" s32 func_0209c398(s32 arg0, u8 *arg1)
{
    s32 v0;
    v0 = func_0209c33c(arg0, (s32)arg1);
    if (*(u16 *)(arg1) == ((u16)v0)) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return arg0;
}

extern "C" asm void func_0209c3bc(void)
{
    ldrb r3, [r0, #0x65]
    add r1, r1, #3
    add r2, r2, #3
    cmp r3, #0
    bic r1, r1, #3
    bic r2, r2, #3
    bxne lr
    ldr r3, [r0, #0x5c]
    cmp r3, #1
    moveq r3, #1
    movne r3, #0
    cmp r3, #0
    bxeq lr
    ldr r3, [r0, #0x74]
    cmp r1, r3
    ldreq r3, [r0, #0x78]
    cmpeq r2, r3
    bxeq lr
    mov r12, #1
    mov r3, #0x78
    str r1, [r0, #0x7c]
    str r2, [r0, #0x80]
    strb r12, [r0, #0x84]
    str r3, [r0, #0x88]
    bx lr
}

extern "C" asm void func_0209c420(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    mov r7, #1
    bl func_0209bf9c
    ldr r1, =data_020cdd80
    ldrh r1, [r1, #0x5e]
    sub r2, r1, #1
    mov r1, r7
    b @L_0209c45c
@L_0209c44c:
    tst r0, r1, lsl r2
    movne r7, r2
    bne @L_0209c464
    sub r2, r2, #1
@L_0209c45c:
    cmp r2, #0
    bgt @L_0209c44c
@L_0209c464:
    mla r0, r4, r7, r5
    add r0, r0, #4
    str r5, [r6, #0x74]
    str r4, [r6, #0x78]
    str r0, [r6, #0x8c]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209c480(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x84]
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r4, #0x7c]
    ldr r2, [r4, #0x80]
    bl func_0209c420
    ldr r1, [r4, #0x8c]
    ldr r0, =data_020cb980
    bl _ZN8Wireless13func_0203cbecEi
    mov r0, #0
    strb r0, [r4, #0x84]
    ldmia sp!, {r4, pc}
}

extern "C" u8 *func_0209c4bc(u8 *obj, int i)
{
    if (i == 0) {
        return NULL;
    }
    return *(u8 **)(obj + 0x74) + *(s32 *)(obj + 0x78) * (i - 1);
}

extern "C" asm void func_0209c4d8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #7
    str r1, [r4, #0x6c]
    moveq r1, #0xf0
    moveq r2, #0x50
    beq @L_0209c500
    bl func_0209c50c
    mov r1, r0
    mov r2, r1
@L_0209c500:
    mov r0, r4
    bl func_0209c3bc
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209c50c(void)
{
    cmp r1, #8
    mov r0, #0x74
    addls pc, pc, r1, lsl #2
    b @L_0209c564
    b @L_0209c564
    b @L_0209c564
    b @L_0209c540
    b @L_0209c548
    b @L_0209c550
    b @L_0209c558
    b @L_0209c55c
    b @L_0209c564
    b @L_0209c560
@L_0209c540:
    mov r0, #0x22
    b @L_0209c564
@L_0209c548:
    mov r0, #4
    b @L_0209c564
@L_0209c550:
    mov r0, #0xc
    b @L_0209c564
@L_0209c558:
    mov r0, #4
@L_0209c55c:
    b @L_0209c564
@L_0209c560:
    mov r0, #0x18
@L_0209c564:
    add r0, r0, #4
    bx lr
}

extern "C" asm void func_0209c56c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #1
    mov r5, #0
    mov r1, r4
    str r5, [r0, #0x5c]
    bl func_0209bedc
    ldr r0, =data_020cb980
    mov r1, r4
    bl _ZN8Wireless13func_0203c364Ei
    ldr r0, =data_020fc748
    strb r5, [r0]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_0209c5a4(u8 *arg0)
{
    s32 v0 = func_0209bee4(arg0);
    if (v0 != 1)
        return;
    *(s32 *)(arg0 + 0x5C) = 1;
    ((s32 (*)(...))func_0209bedc)((s32)arg0, 2, 1);
}

extern "C" void func_0209c5d0(u8 *arg0)
{
    s32 v0 = func_0209bee4(arg0);
    if (v0 != 1)
        return;
    *(s32 *)(arg0 + 0x5C) = 2;
    ((s32 (*)(...))func_0209bedc)((s32)arg0, 6, 2);
}

extern "C" asm void func_0209c5fc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_020cb980
    bl _ZN8Wireless13func_0203da3cEv
    mov r2, #2
    mov r0, r4
    mov r1, #6
    str r2, [r4, #0x5c]
    bl func_0209bedc
    ldmia sp!, {r4, pc}
}

extern "C" void func_0209c628(u8 *obj)
{
    if (!func_0209bf60(obj)) {
        return;
    }
    data_020cb980.func_0203c540();
}

extern "C" asm void func_0209c648(void)
{
    stmdb sp!, {r3, lr}
    bl func_0209bee4
    cmp r0, #0xb
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    ldmia sp!, {r3, pc}
    b @L_0209c68c
    b @L_0209c68c
    b @L_0209c68c
    b @L_0209c698
    ldmia sp!, {r3, pc}
    b @L_0209c698
@L_0209c68c:
    ldr r0, =data_020cb980
    bl _ZN8Wireless13func_0203d8d0Ev
    ldmia sp!, {r3, pc}
@L_0209c698:
    ldr r0, =data_020cb980
    bl _ZN8Wireless13func_0203c540Ev
    ldmia sp!, {r3, pc}
}

extern "C" void func_0209c6a8(u8 *arg0, u8 arg1)
{
    s32 v0 = func_0209bee4(arg0);
    if (v0 != 7)
        return;
    *(u8 *)(arg0 + 0x67) = arg1;
    func_0209bedc(arg0, 8);
}

extern "C" asm void func_0209c6d4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_0209bee4
    cmp r0, #2
    beq @L_0209c6fc
    cmp r0, #3
    beq @L_0209c720
    cmp r0, #4
    beq @L_0209c748
    b @L_0209c78c
@L_0209c6fc:
    ldr r0, =data_020cb980
    mov r1, #0
    bl _ZN8Wireless13func_0203cebcEt
    cmp r0, #0
    beq @L_0209c78c
    mov r0, r5
    mov r1, #3
@L_0209c718:
    bl func_0209bedc
    b @L_0209c78c
@L_0209c720:
    add r1, r5, #0xbe
    ldr r0, =data_020cb980
    add r2, r1, #0x200
    mov r1, #3
    bl _ZN8Wireless13func_0203cdf8EtPKv
    cmp r0, #0
    beq @L_0209c78c
    mov r0, r5
    mov r1, #4
    b @L_0209c718
@L_0209c748:
    ldrb r0, [r5, #0x65]
    mov r4, #0
    mov r1, #4
    cmp r0, #0
    ldr r0, =data_020cb980
    movne r1, #2
    mov r2, r4
    mov r3, r4
    bl _ZN8Wireless13func_0203d04cEttt
    cmp r0, #0
    beq @L_0209c78c
    mov r0, r5
    mov r1, #5
    strb r4, [r5, #0x66]
    bl func_0209bedc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0209c78c:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" BOOL func_0209c798(void)
{
    return TRUE;
}

extern "C" asm void func_0209c7a0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_0209beec
    mov r0, r4
    bl func_0209bee4
    cmp r0, #6
    bne @L_0209c7e8
    mov r1, #0
    ldr r0, =data_020cb980
    mov r2, r1
    bl _ZN8Wireless13func_0203d2b8EtPh
    cmp r0, #0
    beq @L_0209c7e8
    mov r0, r4
    mov r1, #7
    bl func_0209bedc
    mov r0, #1
    ldmia sp!, {r4, pc}
@L_0209c7e8:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209c7f4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_0209bee4
    cmp r0, #0xa
    addls pc, pc, r0, lsl #2
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c924
    b @L_0209c838
    b @L_0209c868
    b @L_0209c8b8
    b @L_0209c8f0
@L_0209c838:
    mov r6, #0
    ldr r5, =data_020cb980
    b @L_0209c85c
@L_0209c844:
    mov r0, r5
    mov r1, r6
    bl _ZN8Wireless13func_0203c420Ei
    add r1, r4, r6, lsl #2
    str r0, [r1, #0x278]
    add r6, r6, #1
@L_0209c85c:
    cmp r6, #0x10
    blt @L_0209c844
    b @L_0209c924
@L_0209c868:
    ldr r5, =data_020cb980
    ldrb r1, [r4, #0x67]
    mov r0, r5
    bl _ZN8Wireless13func_0203c420Ei
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl _ZN8Wireless13func_0203d8d0Ev
    add r1, r4, #0xbe
    mov r0, r5
    add r2, r1, #0x200
    mov r1, #3
    bl _ZN8Wireless13func_0203cdf8EtPKv
    cmp r0, #0
    beq @L_0209c924
    mov r0, r4
    mov r1, #9
@L_0209c8b0:
    bl func_0209bedc
    b @L_0209c924
@L_0209c8b8:
    ldrb r0, [r4, #0x65]
    ldrb r2, [r4, #0x67]
    mov r1, #4
    cmp r0, #0
    ldr r0, =data_020cb980
    movne r1, #2
    bl _ZN8Wireless13func_0203d960Eti
    cmp r0, #0
    beq @L_0209c8e8
    mov r0, r4
    mov r1, #0xa
    b @L_0209c8b0
@L_0209c8e8:
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0209c8f0:
    ldr r0, =data_020cdd80
    ldrh r1, [r0, #0x6a]
    cmp r1, #9
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r0, [r0, #0x60]
    cmp r0, #0
    beq @L_0209c924
    mov r0, r4
    mov r1, #0xb
    bl func_0209bedc
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_0209c924:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0209c934(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r5, r1
    mov r6, r0
    beq @L_0209c9c4
    cmp r6, #0
    ldr r4, =data_020c53b4
    bne @L_0209c990
    ldrb r0, [r5]
    ldr r7, =data_020c5320
    strh r0, [r7, #0x68]
    ldrb r1, [r5, #1]
    cmp r1, #0
    ldrneb r2, [r5, #2]
    cmpne r2, #0
    beq @L_0209c9b4
    mov r0, r7
    mov r1, r1, lsl #2
    mov r2, r2, lsl #2
    bl func_0209c420
    ldr r2, [r7, #0x8c]
    mov r1, r4
    add r0, r5, #4
    b @L_0209c9b0
@L_0209c990:
    ldr r0, =data_020c5320
    mov r1, r6
    ldr r7, [r0, #0x78]
    bl func_0209c4bc
    mov r1, r0
    mov r0, r5
    mov r2, r7
    add r1, r4, r1
@L_0209c9b0:
    bl MI_CpuCopy8
@L_0209c9b4:
    ldr r0, =data_020c53b0
    mov r1, #1
    strb r1, [r0, r6]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0209c9c4:
    ldr r0, =data_020c53b0
    mov r1, #0
    strb r1, [r0, r6]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209c9e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r1, =data_020a72d4
    add r5, sp, #0
    mov r4, r0
    ldmia r1, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r0, =data_020cdd80
    ldrh r1, [r0, #0x60]
    cmp r1, #0
    bne @L_0209ca50
    ldrb r0, [r4, #0x66]
    cmp r0, #0
    beq @L_0209ca44
    mov r0, r4
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209ca44
    mov r5, #0xc
    mov r0, r4
    mov r1, r5
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r5, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209ca44:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209ca50:
    ldrh r0, [r0, #0x6a]
    cmp r0, #9
    bne @L_0209ca88
    mov r0, r4
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209ca88
    mov r5, #0xc
    mov r0, r4
    mov r1, r5
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r5, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209ca88:
    ldr r5, =data_020cdd80
    ldrh r0, [r5, #0x6a]
    cmp r0, #6
    addne sp, sp, #0x10
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, =data_020cb980
    ldr r1, =data_020c5120
    mov r2, #1
    mov r0, r11
    strb r2, [r4, #0x66]
    bl _ZN8Wireless13func_0203c9ecEi
    cmp r0, #0
    beq @L_0209cb7c
    ldr r0, =data_020c5320
    bl func_0209bf9c
    ldr r1, =data_020c4844
    mov r9, r0
    ldr r0, [r1]
    ldr r2, =data_020c8760
    add r0, r0, #1
    and r1, r0, #3
    mov r0, #0x3c0
    mla r7, r1, r0, r2
    mov r10, #0
    add r6, sp, #0
    mov r8, #1
    mov r4, #0xf0
    b @L_0209cb24
@L_0209cafc:
    tst r9, r8, lsl r10
    beq @L_0209cb20
    mla r2, r10, r4, r7
    mov r1, r10, lsl #0x10
    ldrh r3, [r5, #0x66]
    mov r0, r11
    mov r1, r1, lsr #0x10
    bl _ZN8Wireless13func_0203cc08EtPvm
    str r0, [r6, r10, lsl #2]
@L_0209cb20:
    add r10, r10, #1
@L_0209cb24:
    cmp r10, #4
    blt @L_0209cafc
    ldr r0, =data_020c4830
    ldr r2, [sp]
    ldr r3, [r0]
    ldr r1, =data_020c4844
    add r3, r3, #1
    str r3, [r0]
    cmp r2, #0
    ldrne r0, [sp, #4]
    ldr r4, [r1]
    cmpne r0, #0
    ldrne r0, [sp, #8]
    add r4, r4, #1
    cmpne r0, #0
    ldrne r0, [sp, #0xc]
    add sp, sp, #0x10
    cmpne r0, #0
    movne r0, #1
    str r4, [r1]
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cb7c:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209cba8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r1, =data_020a72e4
    add r4, sp, #0
    mov r5, r0
    ldmia r1, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, =data_020cdd80
    ldrh r4, [r0, #0x6a]
    cmp r4, #9
    bne @L_0209cc00
    mov r0, r5
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209cc00
    mov r4, #0xc
    mov r0, r5
    mov r1, r4
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r4, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cc00:
    cmp r4, #6
    addne sp, sp, #0x10
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, =data_020cb980
    ldr r1, =data_020c5120
    mov r0, r11
    bl _ZN8Wireless13func_0203c9ecEi
    cmp r0, #0
    beq @L_0209cce8
    ldr r0, =data_020c5320
    bl func_0209bf9c
    ldr r1, =data_020c4844
    mov r9, r0
    ldr r0, [r1]
    ldr r2, =data_020c8760
    add r0, r0, #1
    and r1, r0, #3
    mov r0, #0x3c0
    mla r7, r1, r0, r2
    mov r10, #0
    add r6, sp, #0
    mov r8, #1
    ldr r5, =data_020cdd80
    mov r4, #0xf0
    b @L_0209cc90
@L_0209cc68:
    tst r9, r8, lsl r10
    beq @L_0209cc8c
    mla r2, r10, r4, r7
    mov r1, r10, lsl #0x10
    ldrh r3, [r5, #0x66]
    mov r0, r11
    mov r1, r1, lsr #0x10
    bl _ZN8Wireless13func_0203cc08EtPvm
    str r0, [r6, r10, lsl #2]
@L_0209cc8c:
    add r10, r10, #1
@L_0209cc90:
    cmp r10, #4
    blt @L_0209cc68
    ldr r0, =data_020c4830
    ldr r2, [sp]
    ldr r3, [r0]
    ldr r1, =data_020c4844
    add r3, r3, #1
    str r3, [r0]
    cmp r2, #0
    ldrne r0, [sp, #4]
    ldr r4, [r1]
    cmpne r0, #0
    ldrne r0, [sp, #8]
    add r4, r4, #1
    cmpne r0, #0
    ldrne r0, [sp, #0xc]
    add sp, sp, #0x10
    cmpne r0, #0
    movne r0, #1
    str r4, [r1]
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cce8:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
