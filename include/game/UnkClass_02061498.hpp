#ifndef GAME_UNKCLASS_02061498_HPP
#define GAME_UNKCLASS_02061498_HPP

#include "nitro/types.h"
#include "nitro/fx.h"

// The area an object moves in (only the bounds are known)
struct UnkArea_02061498 {
    u8 unk_0[0xDC];
    fx32 minX;          // 0xDC
    fx32 minY;          // 0xE0
    fx32 maxX;          // 0xE4
    fx32 maxY;          // 0xE8
    fx32 unk_ec[4];     // 0xEC
    fx32 unk_fc[4];     // 0xFC
};

// A moving object, as UnkClass_02061498's methods see it
struct UnkObject_02061498 {
    VecFx32 pos;        // 0x00
    VecFx32 prevPos;    // 0x0C
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0x30 - 0x28];
    s32 unk_30;
    s32 unk_34;
    fx32 unk_38;
    fx32 unk_3c;
    s32 unk_40;
    fx32 unk_44;
    u8 unk_48[0x50 - 0x48];
    u16 unk_50;
    u16 unk_52;
    u16 unk_54;
    u8 unk_56;
    u8 unk_57;
    u8 unk_58;
    u8 unk_59;
    u8 unk_5a;
    u8 unk_5b;
};

// An object with a vector at 0xE8 (the distances between them are measured from it)
struct UnkPositioned_02061498 {
    u8 unk_0[0xE8];
    VecFx32 *pos;       // 0xE8
};

// A class with a vtable (data_020aeadc), made at 0x0209ee30: moves objects in an area
class UnkClass_02061498 {
public:
    UnkClass_02061498 *func_02061498();
    void func_020614b0();
    UnkClass_02061498 *func_020614b4();
    void func_020614c8(UnkArea_02061498 *area, fx32 value);
    void func_020614d0();
    void func_0206168c();
    void func_020618d4();
    void func_02061a2c(VecFx32 *pos);
    fx32 func_02061a84(UnkObject_02061498 *obj);
    void func_02061aa4(UnkObject_02061498 *obj);
    void func_02061ab8();
    void func_02061bac(UnkObject_02061498 *obj);
    void func_02061bc0();
    void func_02061dc4(UnkObject_02061498 *obj, fx32 x, fx32 y, fx32 z);

    void *vtable;
    UnkArea_02061498 *area;
    fx32 unk_8;
};

// A table of distances: entry (i, j) is the length of (i * stepX, j * stepY)
// (vtable data_020aeb28)
class DistanceTable {
public:
    DistanceTable *func_02061df8();
    void func_02061e24();
    BOOL func_02061e68(int width, int height);
    void func_02061ee0(fx32 stepX, fx32 stepY);
    DistanceTable *func_02061f9c();
    DistanceTable *func_02061fc4();

    void *vtable;
    s32 *table;
    s32 width;
    s32 height;
    s32 capacity;       // the size of the table's buffer, in bytes
    fx32 stepX;
    fx32 stepY;
};

// A 32x32 table of the distances in whole units: measures vectors (vtable data_020aeb50)
class DistanceTable32 : public DistanceTable {
public:
    DistanceTable32 *func_02061fe4();
    DistanceTable32 *func_02062004();
    DistanceTable32 *func_02062024();
    BOOL func_0206204c();
    void func_02062060();
    s32 func_02062074(int x, int y);
    fx32 func_02062084(fx32 x, fx32 y);
    fx32 func_0206212c(fx32 x, fx32 y);
    fx32 func_02062148(VecFx32 *a, VecFx32 *b);
    void func_02062178();
    void func_02062184();
    fx32 func_02062188(UnkPositioned_02061498 *obj);
    fx32 func_020621a0(UnkPositioned_02061498 *a, UnkPositioned_02061498 *b);
};

#endif // GAME_UNKCLASS_02061498_HPP
