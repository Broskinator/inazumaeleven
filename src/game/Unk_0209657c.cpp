#include "game/Unk_0209657c.hpp"

extern "C" void func_02097c24(void *obj);
extern "C" void *data_020afd7c[];     // (a vtable)

extern "C" s32 C3DSprFile_TryFinalize_2(...);     // (for the asm functions)
extern "C" void C3DVramMan_GetTexSize(void);     // (for the asm functions)
extern "C" void C3DVramMan_GetPlttSize(void);     // (for the asm functions)
extern "C" void func_02098cdc(void);     // (for the asm functions)
extern "C" void func_02098d30(void);     // (for the asm functions)
extern "C" void C3DVramMan_FreeRes(void);     // (for the asm functions)
extern "C" s32 func_02098dd8(...);     // (for the asm functions)
extern "C" void func_0209657c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_020965e0(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02096680(s32 arg0, s32 arg1, u16 arg2);
extern "C" void func_020966d4(s32 arg0, s32 arg1, s16 arg2, s16 arg3);
extern "C" void func_02096750(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void func_020967d4(s32 arg0, s32 arg1, u16 arg2);
extern "C" void func_02096828(void *self, int a, int b, s32 value, s32 value2);
extern "C" void func_02096848(void);
extern "C" s32 func_020968e8(u8 *arg0, s32 arg1, s32 arg2, u16 arg3);
extern "C" void func_02096934(void *self, int a, int b, u8 value);
extern "C" void func_0209694c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
extern "C" s32 func_02096994(...);
extern "C" s32 func_020969cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02096a20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4);
extern "C" void func_02096aa4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6);
extern "C" void func_02096ae4(void *self, int a, int b, u8 value, u8 value2);
extern "C" void func_02096b04(void *self, int a, u32 value);
extern "C" s32 func_02096b24(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02096b74(void *self, int a, u16 value);
extern "C" s32 func_02096b8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_02096c10(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_02096c54(...);
extern "C" s32 func_02096c8c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02096cb8(s32 arg0);
extern "C" void func_02096d18(u8 *obj, u32 flags);
extern "C" void func_02096d28(u8 *obj, u32 flags);
extern "C" void func_02096d3c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_02096d64(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" s32 func_02096d8c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_02096db8(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02096e0c(s32 arg0, s32 arg1, u8 arg2);
extern "C" void func_02096e60(s32 arg0, s32 arg1, s32 arg2);
extern "C" BOOL C3DSprSheet_IsIdle(u8 *obj);
extern "C" void func_02096ed0(u8 *obj, int delta);
extern "C" s32 func_02096ef4(...);
extern "C" void func_02096f70(void *obj);
extern "C" s32 func_02096f9c(u8 *arg0, u8 *arg1);
extern "C" s32 func_0209700c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_020970b0(u8 *arg0, s32 arg1);
extern "C" s32 func_020970e0(s32 arg0, s32 arg1);
extern "C" s32 func_02097128(s32 arg0, u8 *arg1);
extern "C" s32 func_02097178(s32 arg0, u8 *arg1);
extern "C" void func_020971c8(void);
extern "C" void func_020972fc(void);
extern "C" s32 func_02097434(...);
extern "C" s32 func_02097564(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6);
extern "C" s32 func_020975e0(...);
extern "C" s32 func_02097754(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6);
extern "C" s32 func_020977d0(u8 *arg0);
extern "C" void **func_02097810(void **obj);
extern "C" void **func_02097830(void **obj);
extern "C" s32 func_02097858(s32 arg0);
extern "C" void C3DSprFile_Clear(void *obj);
extern "C" void C3DSprFile_LoadFromPath(void);

extern "C" char g3DVramMan[];
extern "C" char gAllocator[];
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" s32 _fflt(...);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_020956f8(void);
extern "C" s32 func_02095d14(...);
extern "C" u8 *func_020960ac(void *self, int a);
extern "C" u8 *func_020960ec(void *self, int a, int b);
extern "C" void func_02096110(void);
extern "C" s32 func_02096160(...);
extern "C" void PAC_GetSize(void);
extern "C" void PAC_GetPtr(void);
extern "C" s32 strcmp(...);
extern "C" void strncpy(void);
extern "C" void strrchr(void);

extern "C" void func_0209657c(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    s32 i;
    if (r == 0 || *(s32 *)r == 0)
        return;
    for (i = r[6]; i >= 1; i--) {
        u8 *e = (u8 *)((s32 (*)(...))func_02096110)(arg0, r, i);
        if (e != 0)
            *(u16 *)(e + 0xA) &= (u16)~arg2;
    }
}

extern "C" void func_020965e0(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *p;
    u8 *e;
    s32 j;
    s32 t;
    s32 fx;
    if (arg2 < 0)
        arg2 = 0;
    p = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    if (p == 0 || *(s32 *)p == 0)
        return;
    j = p[6];
    if (j < 1)
        return;
    t = -arg2;
    fx = t << 12;
    do {
        e = (u8 *)((s32 (*)(...))func_02096110)(arg0, p, j);
        if (e != 0) {
            float v;
            if (t > 0)
                v = 0.5f + (float)fx;
            else
                v = (float)fx - 0.5f;
            *(s32 *)(e + 0x30) = (s32)v;
        }
        j--;
    } while (j >= 1);
}

extern "C" void func_02096680(s32 arg0, s32 arg1, u16 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            *(u16 *)(e + 0xE) = arg2;
    }
}

extern "C" void func_020966d4(s32 arg0, s32 arg1, s16 arg2, s16 arg3)
{
    u8 *r = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    s32 i;
    if (r == 0 || *(s32 *)r == 0)
        return;
    for (i = r[6]; i >= 1; i--) {
        u8 *e = (u8 *)((s32 (*)(...))func_02096110)(arg0, r, i);
        if (e != 0) {
            s16 ox = *(s16 *)(e + 0x10);
            s16 oy = *(s16 *)(e + 0x12);
            *(s16 *)(e + 0x10) = arg2;
            *(s16 *)(e + 0x12) = arg3;
            e[0x1A] = 0;
            e[0x1B] = 0;
            ((s32 (*)(...))func_020956f8)(arg0, e, ox, oy);
        }
    }
}

extern "C" void func_02096750(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    u8 *r = (u8 *)((s32 (*)(...))func_020960ac)(arg0, arg1);
    s32 i;
    if (r == 0 || *(s32 *)r == 0)
        return;
    for (i = r[6]; i >= 1; i--)
        ((s32 (*)(...))func_02095d14)(arg0, ((s32 (*)(...))func_02096110)(arg0, r, i), arg2, arg3, arg4, arg5);
}

extern "C" void func_020967d4(s32 arg0, s32 arg1, u16 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            *(u16 *)(e + 0x24) = arg2;
    }
}

extern "C" void func_02096828(void *self, int a, int b, s32 value, s32 value2)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        *(s32 *)entry = value;
        *(s32 *)(entry + 0x14) = value2;
    }
}

extern "C" asm void func_02096848(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r6, [sp, #0x20]
    mov r10, r0
    mov r7, r3
    mov r9, r1
    cmp r6, #0
    movlt r6, r7
    mov r0, r10
    mov r1, r7
    mov r8, r2
    bl func_02096160
    mov r5, r0
    mov r0, r10
    mov r1, r6
    bl func_02096160
    mov r4, r0
    cmp r5, #0
    cmpne r4, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r5
    bl C3DSprSheet_IsIdle
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl C3DSprSheet_IsIdle
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_020960ec
    cmp r0, #0
    strneh r6, [r0, #6]
    ldrneh r1, [r0, #4]
    cmpne r1, r7
    strneh r7, [r0, #4]
    mvnne r1, #0
    strneh r1, [r0, #0x10]
    strneh r1, [r0, #0x12]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_020968e8(u8 *arg0, s32 arg1, s32 arg2, u16 arg3)
{
    s32 v0;
    BOOL v1;
    u8 *v2;
    v0 = func_02096160((s32)arg0, arg3, arg2, arg3);
    if (v0 == 0)
        return v0;
    v1 = C3DSprSheet_IsIdle((u8 *)v0);
    if (v1 != 0)
        return v1;
    v2 = func_020960ec((void *)arg0, arg1, arg2);
    arg0 = (u8 *)v2;
    if ((s32)arg0 != 0) {
        *(u16 *)(arg0 + 0x6) = arg3;
    }
    return (s32)arg0;
}

extern "C" void func_02096934(void *self, int a, int b, u8 value)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        entry[8] = value;
    }
}

extern "C" void func_0209694c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    u8 *v1;
    s32 t0;
    if (arg4 == 0) {
        func_02096994();
        return;
    } else {
        v1 = func_020960ec((void *)arg0, arg1, arg2);
        if (v1 == 0)
            return;
        t0 = (*(u16 *)(((u8 *)v1) + 0xA) | ((u16)(arg3 & 0x7BC3)));
        *(u16 *)(((u8 *)v1) + 0xA) = t0;
        return;
    }
}

extern "C" asm s32 func_02096994(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r3
    bl func_020960ec
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0xfffe
    ldrh r2, [r0, #0xa]
    and r1, r4, r1
    mvn r1, r1
    mov r1, r1, lsl #0x10
    and r1, r2, r1, lsr #16
    strh r1, [r0, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_020969cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    u8 *v0;
    s32 v1;
    s32 v3;
    s32 v5;
    r5 = arg3;
    if (r5 < 0) {
        r5 = 0;
    }
    v0 = func_020960ec((void *)arg0, arg1, arg2);
    if ((s32)v0 == 0)
        return (s32)v0;
    r4 = (u8 *)v0;
    arg0 = ((0 - r5) << 0xC);
    if ((0 - r5) > 0) {
        v1 = _fflt(arg0);
        _fadd(0x3F000000, v1);
    } else {
        v3 = _fflt(arg0);
        _fsub(v3, 0x3F000000);
    }
    v5 = _ffix();
    *(s32 *)(r4 + 0x30) = v5;
    return v5;
}

extern "C" s32 func_02096a20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4)
{
    u8 *r4;
    u8 *v0;
    s32 v1;
    s32 v3;
    s32 v5;
    s32 v6;
    s32 v8;
    s32 v10;
    v0 = func_020960ec((void *)arg0, arg1, arg2);
    if ((s32)v0 == 0)
        return (s32)v0;
    r4 = (u8 *)v0;
    if (arg3 > 0) {
        v1 = _fflt((arg3 << 0xC));
        _fadd(0x3F000000, v1);
    } else {
        v3 = _fflt((arg3 << 0xC));
        _fsub(v3, 0x3F000000);
    }
    v5 = _ffix();
    *(s32 *)(r4 + 0x28) = v5;
    if (arg4 > 0) {
        v6 = _fflt((arg4 << 0xC), arg4);
        _fadd(0x3F000000, v6);
    } else {
        v8 = _fflt((arg4 << 0xC), arg4);
        _fsub(v8, 0x3F000000);
    }
    v10 = _ffix();
    *(s32 *)(r4 + 0x2C) = v10;
    return v10;
}

extern "C" void func_02096aa4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6)
{
    u8 *v0 = func_020960ec((void *)arg0, arg1, arg2);
    func_02095d14(arg0, v0, arg3, arg4, arg5, arg6);
}

extern "C" void func_02096ae4(void *self, int a, int b, u8 value, u8 value2)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        entry[0x26] = value;
        entry[0x27] = value2;
    }
}

extern "C" void func_02096b04(void *self, int a, u32 value)
{
    u8 *entry;

    if (value > 31) {
        value = 31;
    }
    entry = func_020960ac(self, a);
    if (entry != NULL) {
        entry[7] = value;
    }
}

extern "C" s32 func_02096b24(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    u8 *v0;
    s32 v1;
    s32 v3;
    s32 v5;
    v0 = func_020960ac((void *)arg0, arg1);
    if ((s32)v0 == 0)
        return (s32)v0;
    r4 = (u8 *)v0;
    if ((0 - arg2) > 0) {
        v1 = _fflt(((0 - arg2) << 0xC));
        _fadd(0x3F000000, v1);
    } else {
        v3 = _fflt(((0 - arg2) << 0xC));
        _fsub(v3, 0x3F000000);
    }
    v5 = _ffix();
    *(s32 *)(r4 + 0x14) = v5;
    return v5;
}

extern "C" void func_02096b74(void *self, int a, u16 value)
{
    u8 *entry = func_020960ac(self, a);

    if (entry != NULL) {
        *(u16 *)(entry + 8) = value;
    }
}

extern "C" s32 func_02096b8c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    u8 *v0;
    s32 v1;
    s32 v3;
    s32 v5;
    s32 v6;
    s32 v8;
    s32 v10;
    v0 = func_020960ac((void *)arg0, arg1);
    if ((s32)v0 == 0)
        return (s32)v0;
    r4 = (u8 *)v0;
    if (arg2 > 0) {
        v1 = _fflt((arg2 << 0xC));
        _fadd(0x3F000000, v1);
    } else {
        v3 = _fflt((arg2 << 0xC));
        _fsub(v3, 0x3F000000);
    }
    v5 = _ffix();
    *(s32 *)(r4 + 0xC) = v5;
    if (arg3 > 0) {
        v6 = _fflt((arg3 << 0xC));
        _fadd(0x3F000000, v6);
    } else {
        v8 = _fflt((arg3 << 0xC));
        _fsub(v8, 0x3F000000);
    }
    v10 = _ffix();
    *(s32 *)(r4 + 0x10) = v10;
    return v10;
}

extern "C" void func_02096c10(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *v1;
    s32 t0;
    if (arg3 == 0) {
        func_02096c54();
        return;
    } else {
        v1 = func_020960ac((void *)arg0, arg1);
        if (v1 == 0)
            return;
        t0 = (*(u16 *)(((u8 *)v1) + 0x4) | ((u16)(arg2 & 0x7003)));
        *(u16 *)(((u8 *)v1) + 0x4) = t0;
        return;
    }
}

extern "C" asm s32 func_02096c54(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl func_020960ac
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0x7002
    ldrh r2, [r0, #4]
    and r1, r4, r1
    mvn r1, r1
    mov r1, r1, lsl #0x10
    and r1, r2, r1, lsr #16
    strh r1, [r0, #4]
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_02096c8c(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *v0;
    v0 = func_020960ec((void *)arg0, arg1, arg2);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        if ((*(u16 *)(arg0 + 0xA) & 2) != 0) {
            arg0 = (u8 *)1;
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    } else {
        return 0;
    }
}

extern "C" s32 func_02096cb8(s32 arg0)
{
    u8 *r = (u8 *)((s32 (*)(...))func_020960ac)();
    s32 i;
    if (r == 0)
        return 0;
    for (i = r[6]; i >= 1; i--) {
        u8 *e = (u8 *)((s32 (*)(...))func_02096110)(arg0, r, i);
        if (e != 0 && !(*(u16 *)(e + 0xA) & 2))
            return i;
    }
    return 0;
}

extern "C" void func_02096d18(u8 *obj, u32 flags)
{
    *(u32 *)(obj + 0x40) |= flags;
}

extern "C" void func_02096d28(u8 *obj, u32 flags)
{
    *(u32 *)(obj + 0x40) &= ~flags;
}

extern "C" void func_02096d3c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    u8 *v0;
    v0 = func_020960ac((void *)arg0, arg1);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        *(s32 *)(arg0 + 0xC) = arg2;
        *(s32 *)(arg0 + 0x10) = arg3;
        *(s32 *)(arg0 + 0x14) = arg4;
    }
    return;
}

extern "C" void func_02096d64(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    u8 *v0;
    v0 = func_020960ec((void *)arg0, arg1, arg2);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        *(s32 *)(arg0 + 0x34) = arg3;
        *(s32 *)(arg0 + 0x38) = arg4;
        *(s32 *)(arg0 + 0x3C) = arg5;
    }
    return;
}

extern "C" s32 func_02096d8c(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *v0;
    v0 = func_020960ec((void *)arg0, arg1, arg2);
    arg0 = (u8 *)v0;
    if ((s32)arg0 == 0) {
        return 0;
    } else {
        if (*(u8 *)(arg0 + 0x1A) == 0) {
            *(u8 *)(arg0 + 0x1B) = 1;
        }
        return *(u8 *)(arg0 + 0x1B);
    }
}

extern "C" void func_02096db8(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            *(s32 *)(e + 0x40) = arg2;
    }
}

extern "C" void func_02096e0c(s32 arg0, s32 arg1, u8 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            e[0xD] = arg2;
    }
}

extern "C" void func_02096e60(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *p = ((u8 *(*)(s32, s32))func_020960ac)(arg0, arg1);
    s32 i;
    if (p == 0 || *(s32 *)p == 0)
        return;
    for (i = p[6]; i >= 1; i--) {
        u8 *e = ((u8 *(*)(s32, u8 *, s32))func_02096110)(arg0, p, i);
        if (e != 0)
            *(s32 *)(e + 0x44) = arg2;
    }
}

extern "C" BOOL C3DSprSheet_IsIdle(u8 *obj)
{
    return *(u16 *)(obj + 0x30) == 0 && obj[0x33] == 0;
}

extern "C" void func_02096ed0(u8 *obj, int delta)
{
    *(s16 *)(obj + 0x34) += (s16)delta;
    if (*(s16 *)(obj + 0x34) < 0) {
        *(s16 *)(obj + 0x34) = 0;
    }
}

extern "C" asm s32 func_02096ef4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, #0x60
    mul r0, r4, r0
    add r0, r0, #3
    bic r9, r0, #3
    mov r8, #0
    mov r7, #1
    ldr r0, =gAllocator
    mov r1, r9
    mov r2, r8
    mov r3, r7
    bl _ZN8GameHeap5AllocEiii
    movs r6, r0
    mov r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, r6
    mov r2, r9
    bl MIi_CpuClearFast
    mov r0, r5
    bl func_02096f70
    mov r0, r7
    str r6, [r5]
    strh r4, [r5, #4]
    strh r8, [r5, #6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02096f70(void *obj)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4]
    cmp r1, #0
    beq @L_02096f8c
    ldr r0, =gAllocator
    bl _ZN8GameHeap4FreeEPv
@L_02096f8c:
    mov r0, #0
    str r0, [r4]
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_02096f9c(u8 *arg0, u8 *arg1)
{
    s32 r4;
    s32 r5;
    BOOL v0;
    if ((s32)arg1 != 0) {
        *(s32 *)(arg1) = 0;
    }
    r4 = *(s32 *)(arg0);
    if (r4 == 0) {
        return 0;
    } else {
        r5 = 0;
        if (*(s16 *)(arg0 + 0x4) > 0) {
            do {
                v0 = C3DSprSheet_IsIdle((u8 *)r4);
                if (v0 != 0) {
                    if ((s32)arg1 != 0) {
                        *(s32 *)(arg1) = r4;
                    }
                    return (r5 + 1);
                }
                r5 = (r5 + 1);
                r4 = (r4 + 0x60);
            } while (r5 < *(s16 *)(arg0 + 0x4));
        }
        return 0;
    }
}

extern "C" s32 func_0209700c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    u8 *r4;
    s32 r5;
    u8 *r6;
    s32 r7;
    s32 r8;
    s32 r9;
    u8 *r10;
    BOOL v0;
    s32 v1;
    r6 = (u8 *)arg4;
    r10 = (u8 *)arg0;
    if ((s32)r6 != 0) {
        *(s32 *)(r6) = 0;
    }
    r4 = (u8 *)*(s32 *)(r10);
    r9 = arg1;
    r8 = arg2;
    r7 = arg3;
    if ((s32)r4 == 0) {
        return 0;
    } else {
        r5 = 0;
        if (*(s16 *)(r10 + 0x4) > 0) {
            do {
                v0 = C3DSprSheet_IsIdle(r4);
                if ((((v0 == 0 && (v1 = strcmp((s32)r4, r9), v1 == 0)) && r7 == *(s32 *)(r4 + 0x24)) && r8 == *(s32 *)(r4 + 0x28))) {
                    if ((s32)r6 != 0) {
                        *(s32 *)(r6) = (s32)r4;
                    }
                    return (r5 + 1);
                }
                r5 = (r5 + 1);
                r4 = (u8 *)(r4 + 0x60);
            } while (r5 < *(s16 *)(r10 + 0x4));
        }
        return 0;
    }
}

extern "C" s32 func_020970b0(u8 *arg0, s32 arg1)
{
    if ((arg1 <= 0 || arg1 > *(s16 *)(arg0 + 0x4))) {
        return 0;
    }
    return (((arg1 - 1) * 0x60) + *(s32 *)(arg0));
}

extern "C" s32 func_020970e0(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v1;
    r4 = (u8 *)arg1;
    r5 = arg0;
    if ((*(u16 *)(r4 + 0x30) & 0x10) != 0) {
        func_02097434(arg0, arg1, 1, 0);
    }
    if ((*(u16 *)(r4 + 0x30) & 0x20) == 0)
        return *(u16 *)(r4 + 0x30);
    v1 = func_020975e0(r5, (s32)r4, 1, 0);
    return v1;
}

extern "C" s32 func_02097128(s32 arg0, u8 *arg1)
{
    if ((s32)arg1 == 0)
        return 0;
    switch (*(u8 *)(arg1 + 0x32)) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
            return 1;
        case 0:
        case 1:
        case 3:
        case 6:
        default:
            return 0;
    }
}

extern "C" s32 func_02097178(s32 arg0, u8 *arg1)
{
    if ((s32)arg1 == 0)
        return 0;
    switch (*(u8 *)(arg1 + 0x32)) {
        case 3:
        case 4:
        case 5:
        case 8:
            return 1;
        case 0:
        case 1:
        case 2:
        case 6:
        case 7:
        default:
            return 0;
    }
}

extern "C" asm void func_020971c8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r5, #0
    bl C3DSprFile_TryFinalize_2
    cmp r0, #0
    movne r0, r5
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r1, [r4, #0x30]
    tst r1, #0x10
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020972a4
    b @L_020972a4
    b @L_020972a4
    b @L_02097228
    b @L_020972a4
    b @L_02097228
    b @L_02097228
    b @L_020972a4
    b @L_02097290
    b @L_02097290
@L_02097228:
    tst r1, #2
    movne r0, r5
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r0, #5
    ldr r0, [r4, #0x20]
    bne @L_02097280
    mov r1, r5
    bl PAC_GetSize
    mov r6, r0
    ldr r0, [r4, #0x20]
    mov r1, #2
    bl PAC_GetPtr
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r0, #2]
    strb r1, [r4, #0x40]
    ldrb r1, [r0, #3]
    strb r1, [r4, #0x41]
    ldrb r0, [r0, #4]
    strb r0, [r4, #0x42]
    b @L_020972ac
@L_02097280:
    mov r1, #1
    bl PAC_GetSize
@L_02097288:
    mov r6, r0
    b @L_020972ac
@L_02097290:
    ldrb r0, [r4, #0x40]
    ldrb r1, [r4, #0x41]
    ldrb r2, [r4, #0x42]
    bl C3DVramMan_GetTexSize
    b @L_02097288
@L_020972a4:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_020972ac:
    cmp r6, #0
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r5, =g3DVramMan
    mov r2, r6
    ldr r0, [r5]
    add r1, r4, #0x44
    bl func_02098cdc
    cmp r0, #0
    ldrneh r1, [r4, #0x30]
    movne r0, #1
    orrne r1, r1, #0x10
    strneh r1, [r4, #0x30]
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5]
    add r1, r4, #0x44
    bl C3DVramMan_FreeRes
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020972fc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    bl C3DSprFile_TryFinalize_2
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r1, [r4, #0x30]
    tst r1, #0x20
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020973dc
    b @L_020973dc
    b @L_020973dc
    b @L_020973dc
    b @L_02097358
    b @L_02097360
    b @L_02097360
    b @L_020973dc
    b @L_020973c8
    b @L_020973d0
@L_02097358:
    ldr r6, [r4, #0x2c]
    b @L_020973e4
@L_02097360:
    tst r1, #2
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r0, #5
    ldr r0, [r4, #0x20]
    bne @L_020973b8
    mov r1, #1
    bl PAC_GetSize
    mov r6, r0
    ldr r0, [r4, #0x20]
    mov r1, #2
    bl PAC_GetPtr
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r0, #2]
    strb r1, [r4, #0x40]
    ldrb r1, [r0, #3]
    strb r1, [r4, #0x41]
    ldrb r0, [r0, #4]
    strb r0, [r4, #0x42]
    b @L_020973e4
@L_020973b8:
    mov r1, #2
    bl PAC_GetSize
@L_020973c0:
    mov r6, r0
    b @L_020973e4
@L_020973c8:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_020973d0:
    ldrb r0, [r4, #0x42]
    bl C3DVramMan_GetPlttSize
    b @L_020973c0
@L_020973dc:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_020973e4:
    cmp r6, #0
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r5, =g3DVramMan
    mov r2, r6
    ldr r0, [r5]
    add r1, r4, #0x50
    bl func_02098d30
    cmp r0, #0
    ldrneh r1, [r4, #0x30]
    movne r0, #1
    orrne r1, r1, #0x20
    strneh r1, [r4, #0x30]
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5]
    add r1, r4, #0x50
    bl C3DVramMan_FreeRes
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_02097434(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    mov r9, #0
    bl C3DSprFile_TryFinalize_2
    cmp r0, #0
    bne @L_02097468
    ldrh r1, [r6, #0x30]
    tst r1, #0x10
    bne @L_02097474
@L_02097468:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097474:
    ldrb r0, [r6, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02097558
    b @L_02097558
    b @L_02097558
    b @L_020974a8
    b @L_02097558
    b @L_020974a8
    b @L_020974fc
    b @L_02097558
    b @L_0209754c
    b @L_0209754c
@L_020974a8:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r9
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #1
    ldr r0, [r6, #0x20]
    mov r1, r10
    bl PAC_GetPtr
    mov r8, r0
    ldr r0, [r6, #0x20]
    mov r1, r10
    bl PAC_GetSize
    str r5, [sp]
    mov r3, r0
    mov r0, r7
    mov r1, r6
    mov r2, r8
    stmib sp, {r4, r9}
    bl func_02097564
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020974fc:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r9
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r6, #0x20]
    mov r1, r9
    bl PAC_GetPtr
    mov r8, r0
    ldr r0, [r6, #0x20]
    mov r1, r9
    bl PAC_GetSize
    str r5, [sp]
    mov r3, r0
    mov r0, r7
    mov r1, r6
    mov r2, r8
    stmib sp, {r4, r9}
    bl func_02097564
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0209754c:
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097558:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_02097564(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6)
{
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = C3DSprFile_TryFinalize_2(arg0, (s32)arg1, arg2, arg3);
    if ((v0 != 0 || (*(u16 *)(arg1 + 0x30) & 0x10) == 0)) {
        return 0;
    } else {
        t0 = *(s32 *)(((u8 *)&g3DVramMan));
        v1 = func_02098dd8(t0, (s32)(arg1 + 0x44), arg6, arg2, arg3, arg4, arg5, (s32)(arg1 + 0x5C));
        return (v1 & 0xFF);
    }
}

extern "C" asm s32 func_020975e0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    mov r4, #0
    bl C3DSprFile_TryFinalize_2
    cmp r0, #0
    bne @L_02097614
    ldrh r1, [r7, #0x30]
    tst r1, #0x20
    bne @L_02097620
@L_02097614:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097620:
    ldrb r0, [r7, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02097748
    b @L_02097748
    b @L_02097748
    b @L_02097748
    b @L_02097704
    b @L_02097654
    b @L_020976ac
    b @L_02097748
    b @L_0209773c
    b @L_0209773c
@L_02097654:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #2
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl PAC_GetPtr
    mov r9, r0
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl PAC_GetSize
    str r6, [sp]
    mov r3, r0
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    mov r2, r9
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020976ac:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #1
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl PAC_GetPtr
    mov r9, r0
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl PAC_GetSize
    str r6, [sp]
    mov r3, r0
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    mov r2, r9
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097704:
    ldr r2, [r7, #0x20]
    ldr r3, [r7, #0x2c]
    cmp r2, #0
    addeq sp, sp, #0xc
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    str r6, [sp]
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0209773c:
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097748:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_02097754(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6)
{
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = C3DSprFile_TryFinalize_2(arg0, (s32)arg1, arg2, arg3);
    if ((v0 != 0 || (*(u16 *)(arg1 + 0x30) & 0x20) == 0)) {
        return 0;
    } else {
        t0 = *(s32 *)(((u8 *)&g3DVramMan));
        v1 = func_02098dd8(t0, (s32)(arg1 + 0x50), arg6, arg2, arg3, arg4, arg5, (s32)(arg1 + 0x5D));
        return (v1 & 0xFF);
    }
}

extern "C" s32 func_020977d0(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)data_020afd7c;
    MIi_CpuClearFast(0, (arg0 + 4), 8, (s32)data_020afd7c);
    MIi_CpuClearFast(0, (arg0 + 0xC), 0x10);
    return (s32)arg0;
}

extern "C" void **func_02097810(void **obj)
{
    obj[0] = data_020afd7c;
    C3DSprFile_Clear(obj);
    return obj;
}

extern "C" void **func_02097830(void **obj)
{
    obj[0] = data_020afd7c;
    C3DSprFile_Clear(obj);
    operator delete(obj);
    return obj;
}

extern "C" s32 func_02097858(s32 arg0)
{
    s32 r4;
    s32 v0;
    r4 = 0;
    v0 = func_02096ef4((arg0 + 4));
    if (v0 == 0) {
        r4 = (r4 + 1);
    }
    arg0 = 0;
    if (r4 <= 0) {
        arg0 = 1;
    }
    return arg0;
}

extern "C" void C3DSprFile_Clear(void *obj)
{
    func_02097c24(obj);
    func_02096f70((u8 *)obj + 4);
}

extern "C" asm void C3DSprFile_LoadFromPath(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r1
    mov r10, r0
    mov r8, r2
    mov r7, r3
    cmp r9, #1
    ldr r6, [sp, #0x4c]
    ldr r5, [sp, #0x50]
    blt @L_020978d0
    cmp r9, #6
    bgt @L_020978d0
    cmp r8, #0
    bne @L_020978dc
@L_020978d0:
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020978dc:
    mov r0, r8
    mov r1, #0x2f
    mov r11, r8
    bl strrchr
    cmp r0, #0
    addne r11, r0, #1
    mov r0, r8
    mov r1, #0x5c
    bl strrchr
    cmp r0, #0
    addne r11, r0, #1
    add r4, sp, #0x18
    mov r1, r11
    mov r2, r6
    mov r3, r5
    add r0, r10, #4
    str r4, [sp]
    bl func_0209700c
    movs r4, r0
    beq @L_02097944
    ldr r0, [sp, #0x18]
    mov r1, #1
    bl func_02096ed0
    add sp, sp, #0x1c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02097944:
    add r1, sp, #0x18
    add r0, r10, #4
    bl func_02096f9c
    str r0, [sp, #0x14]
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0
    ldr r1, [sp, #0x18]
    mov r0, r4
    mov r2, #0x60
    bl MIi_CpuClearFast
    cmp r7, #0
    beq @L_020979b8
    ldr r3, =gAllocator
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020979f4
    ldrb r4, [sp, #0x44]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    mov r4, #1
    add r2, sp, #0x48
    mov r1, r8
    str r4, [sp, #0xc]
    bl _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih
    b @L_020979f0
@L_020979b8:
    ldr r3, =gAllocator
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020979f4
    ldrb r1, [sp, #0x44]
    str r6, [sp]
    str r5, [sp, #4]
    str r1, [sp, #8]
    mov r4, #1
    str r4, [sp, #0xc]
    add r2, sp, #0x48
    mov r1, r8
    str r4, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020979f0:
    mov r4, r0
@L_020979f4:
    cmp r4, #0
    mov r8, #0
    addle sp, sp, #0x1c
    movle r0, r8
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x18]
    mov r1, r11
    mov r2, #0x20
    bl strncpy
    ldrb r0, [sp, #0x40]
    ldr r2, [sp, #0x48]
    ldr r1, [sp, #0x18]
    cmp r0, #0
    str r2, [r1, #0x20]
    ldr r1, [sp, #0x18]
    str r4, [r1, #0x2c]
    ldr r1, [sp, #0x18]
    str r6, [r1, #0x24]
    ldr r0, [sp, #0x18]
    movne r1, #1
    str r5, [r0, #0x28]
    ldr r0, [sp, #0x18]
    strh r8, [r0, #0x30]
    ldrne r0, [sp, #0x18]
    strneh r1, [r0, #0x30]
    ldr r0, [sp, #0x18]
    cmp r7, #0
    strb r9, [r0, #0x32]
    ldrne r0, [sp, #0x18]
    mov r1, #1
    ldreq r0, [sp, #0x18]
    moveq r1, #2
    strb r1, [r0, #0x33]
    ldr r0, [sp, #0x18]
    mov r1, #1
    bl func_02096ed0
    ldrsh r1, [r10, #0xa]
    ldr r0, [sp, #0x14]
    add r1, r1, #1
    strh r1, [r10, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
