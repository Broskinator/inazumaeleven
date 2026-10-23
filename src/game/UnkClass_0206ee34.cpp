#include "game/UnkClass_0206ee34.hpp"

extern "C" void func_020841d8(void *p);

void UnkClass_0206ee34::func_0206ee34(int a)
{
    unk_10 = 0;
    unk_1c[0] = 0;
    unk_1c[1] = 0;
    unk_1c[2] = 0;
    unk_1c[3] = 0;
    unk_1c[4] = 0;
    unk_1c[5] = 0;
    unk_1c[6] = 0;
    unk_1c[7] = 0;
    unk_2c = 0;
    unk_2d = 0;
    unk_30 = 0;
    unk_32 = 0;
    unk_88 = 0;
    func_020841d8(this);
    func_020841d8(unk_8);
    unk_2e = -1;
    unk_2f = a;
}

void UnkClass_0206ee34::func_0206ee98()
{
    flags |= 0x20;
}

BOOL UnkClass_0206ee34::func_0206eea8()
{
    return (flags & 0x2) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206eebc()
{
    return (flags & 0x4) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206eed0()
{
    return (flags & 0x8) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206eee4()
{
    return (flags & 0x10) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206eef8()
{
    return (flags & 0x80) ? FALSE : TRUE;
}

BOOL UnkClass_0206ee34::func_0206ef0c()
{
    return (flags & 0x100) ? FALSE : TRUE;
}

BOOL UnkClass_0206ee34::func_0206ef20(int side)
{
    u16 f = flags;

    if (side == 0) {
        return (f & 0x400) ? FALSE : TRUE;
    }
    return (f & 0x800) ? FALSE : TRUE;
}

BOOL UnkClass_0206ee34::func_0206ef4c()
{
    return (flags & 0x200) ? FALSE : TRUE;
}

BOOL UnkClass_0206ee34::func_0206ef60()
{
    return (flags & 0x20) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206ef74()
{
    return (flags & 0x2000) ? FALSE : TRUE;
}

BOOL UnkClass_0206ee34::func_0206ef88()
{
    return (flags & 0x4000) ? TRUE : FALSE;
}

BOOL UnkClass_0206ee34::func_0206ef9c()
{
    return (flags & 0x1000) ? TRUE : FALSE;
}

u8 UnkClass_0206ee34::func_0206efb0(int i)
{
    return unk_0[i].unk_0;
}

s8 UnkClass_0206ee34::func_0206efb8(int i)
{
    return unk_0[i].unk_1;
}

void UnkClass_0206ee34::func_0206efc4()
{
    flags |= 0xC;
}

void UnkClass_0206ee34::func_0206efd4()
{
    flags &= ~0xC;
}

void UnkClass_0206ee34::func_0206efec()
{
    flags |= 0x10;
}

void UnkClass_0206ee34::func_0206effc()
{
    flags &= ~0x10;
}

BOOL UnkClass_0206ee34::func_0206f014()
{
    return (flags & 0x40) ? TRUE : FALSE;
}
