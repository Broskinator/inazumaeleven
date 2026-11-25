#ifndef MATCH_MATCHBALLPHYSICS_HPP
#define MATCH_MATCHBALLPHYSICS_HPP

#include "nitro/types.h"
#include "nitro/fx.h"
#include "match/Match.hpp"

// The area an object moves in (only the bounds are known)
struct MatchArea {
    u8 unk_0[0xD4];
    fx32 unk_d4;
    fx32 unk_d8;        // (the halfway line)
    fx32 minX;          // 0xDC
    fx32 minY;          // 0xE0
    fx32 maxX;          // 0xE4
    fx32 maxY;          // 0xE8
    fx32 unk_ec[4];     // 0xEC
    fx32 unk_fc[4];     // 0xFC
    u8 unk_10c[0x14C - 0x10C];
    fx32 limits[4];     // 0x14C (per side, when func_ov087_02182248 says it has one: func_0206c23c)
};

// The data at 0x020c4ee0 (sizes of the field, in units of 0x1000)
struct UnkData_020c4ee0 {
    u8 unk_0[0x72];
    s16 unk_72;
    s16 unk_74;
};

// The ball's physics (data_020c475c; vtable data_020aeadc)
class MatchBallPhysics {
public:
    MatchBallPhysics *func_02061498();
    void func_020614b0();
    MatchBallPhysics *func_020614b4();
    void func_020614c8(MatchArea *area, fx32 value);
    BOOL func_020614d0(MatchBall *ball, fx32 *px, fx32 *py, u16 *outDir);
    void func_0206168c();
    BOOL func_020618d4(MatchBall *ball, BOOL inside, BOOL check);
    void func_02061a2c(VecFx32 *pos);
    fx32 func_02061a84(MatchBall *ball);
    void func_02061aa4(MatchBall *ball);
    void func_02061ab8(MatchBall *ball, fx32 x, fx32 y);
    void func_02061bac(MatchBall *ball);
    void func_02061bc0(MatchBall *ball, fx32 x, fx32 y, int kind, u8 sound);
    void func_02061dc4(MatchBall *ball, fx32 x, fx32 y, fx32 z);

    void *vtable;
    MatchArea *area;
    fx32 unk_8;
};

// A table of distances: entry (i, j) is the length of (i * stepX, j * stepY)
// (vtable data_020aeb28)
class DistanceTable {
public:
    DistanceTable *func_02061df8();
    void Release();
    BOOL Create(int width, int height);
    void Fill(fx32 stepX, fx32 stepY);
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
    BOOL Init();
    void CalcDistance();
    s32 GetDistance(int x, int y);
    fx32 ApproxDistance(fx32 x, fx32 y);
    fx32 ApproxDistanceAbs(fx32 x, fx32 y);
    fx32 DistanceBetween(VecFx32 *a, VecFx32 *b);
    void func_02062178();
    void func_02062184();
    fx32 DistanceToBall(MatchPlayer *player);     // (the distance to the ball)
    fx32 DistanceBetweenPlayers(MatchPlayer *a, MatchPlayer *b);
};

#endif // MATCH_MATCHBALLPHYSICS_HPP
