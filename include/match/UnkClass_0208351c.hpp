#ifndef MATCH_UNKCLASS_0208351C_HPP
#define MATCH_UNKCLASS_0208351C_HPP

#include "nitro/types.h"
#include "match/MatchPlayerList.hpp"

// Derived from MatchPlayerList (vtable data_020af44c, the object data_020c49e0)
class UnkClass_0208351c : public MatchPlayerList {
public:
    UnkClass_0208351c *func_0208351c();
    UnkClass_0208351c *func_0208353c();
    UnkClass_0208351c *func_02083550();
    void func_0208356c();
    BOOL func_02083578(MatchPlayer *player);
    BOOL func_020835e0(int team);
    int func_02083634();
    static int func_02083750(int a, int b);
    static BOOL func_02083778(MatchPoint *out, MatchPoint *a, MatchPoint *b, MatchPoint *c);
    static BOOL func_020838d0(fx32 *a, fx32 *b, MatchPoint *out);
};

#endif // MATCH_UNKCLASS_0208351C_HPP
