#include "match/MatchEngine.hpp"
#include "game/UnkDeque_0207076c.hpp"
#include "nitro/mi.h"
extern "C" int func_0208051c(u8 *entry, u32 id);
extern "C" void func_02080b00(MatchPlayer *player, s16 a);
extern "C" void func_02080b1c(MatchPlayer *player, s16 a);
#include "data/EntryPool.hpp"
extern "C" int func_01ffee1c(MatchEngine *self, u8 a);
extern "C" int func_0208164c(int a, int level);
extern "C" void _ZN9EntryPool6RemoveEi(void);     // (for the asm functions)
#include "system/GameHeap.hpp"
extern "C" int func_ov015_021319b0(MatchPlayer *player);
extern "C" BOOL func_0208076c(u8 *entry, int i);
extern "C" BOOL func_02080328(u8 *entry, int i);
extern "C" int func_02080b90(MatchPlayer *player);
extern GameHeap gAllocator;
extern "C" void _ZN8GameHeap4FreeEPv(void);     // (for the asm functions)
extern "C" u8 func_ov015_02130e28(u16 angle);
#include "game/GameState.hpp"
#include "match/MatchBallPhysics.hpp"
#include "match/MatchFile.hpp"
static inline void UnkDeque_PopFront(UnkDequeBuffer_0207076c *b)
{
    if (++b->unk_4 == b->unk_c) {
        b->unk_4 = 0;
    }
    --b->size;
}
static inline int MatchWithLevel(int value, int level)
{
    value &= ~0xF000;
    if (level != 0) {
        value |= 0x1000 << (level - 1);
    }
    return value;
}
static inline int MatchAbs(int x)
{
    return x < 0 ? -x : x;
}
extern "C" int Random_RandA(int a);
extern "C" u8 data_020ca78c[];
extern "C" u8 data_020cb6e0[];
extern "C" int func_020808c4(void *team, int i);
extern "C" MatchPlayer *func_ov015_02130b14(int index, int a);


extern "C" void func_0208e9d4(void);     // (for the asm functions)
extern "C" void func_0208f2d0(u8 *obj);
extern "C" void func_0208f300(u8 *obj, u8 value);
extern "C" void func_0208f310(void);     // (for the asm functions)
extern "C" void func_0208f6ac(void);     // (for the asm functions)
extern "C" void func_0208e9b8(void);     // (for the asm functions)
extern "C" void func_02087500(void);     // (for the asm functions)
extern "C" void func_020877e0(void);     // (for the asm functions)
extern "C" void func_020878ac(void);     // (for the asm functions)
extern "C" void func_020879e4(void);     // (for the asm functions)
extern "C" void func_02086164(void);     // (for the asm functions)
extern "C" void func_0208620c(void);     // (for the asm functions)
extern "C" void func_020864f4(void);     // (for the asm functions)
extern "C" void func_020864fc(void);     // (for the asm functions)
extern "C" void func_02087464(void);     // (for the asm functions)
extern "C" void func_02085228(void);     // (for the asm functions)
extern "C" void func_020859c0(void);     // (for the asm functions)
extern "C" void func_02085b4c(void);     // (for the asm functions)
extern "C" void func_02085ba4(void);     // (for the asm functions)
extern "C" void func_02085bb4(void);     // (for the asm functions)
extern "C" void func_02085be8(void);     // (for the asm functions)
extern "C" void func_02085bfc(void);     // (for the asm functions)
extern "C" void func_02085d88(void);     // (for the asm functions)
extern "C" void func_02085e30(void);     // (for the asm functions)
extern "C" void func_02085ec0(void);     // (for the asm functions)
extern "C" void func_02083e34(void);     // (for the asm functions)
extern "C" void func_02083e44(void);     // (for the asm functions)
extern "C" void func_020841c8(void);     // (for the asm functions)
extern "C" void func_020841d8(MatchPoint *point);
extern "C" void func_02084788(void);     // (for the asm functions)
extern "C" void func_020847ec(void);     // (for the asm functions)
extern "C" BOOL func_02084870(MatchPlayer *player);
extern "C" void func_02084cf0(void);     // (for the asm functions)
extern "C" void func_02084e08(void);     // (for the asm functions)
extern "C" void func_02081f7c(void);     // (for the asm functions)
extern "C" int func_02082150(MatchEngine *engine, int id, int a);
extern "C" BOOL func_020823a0(MatchEngine *self, u16 id, int a);
extern "C" void func_02082604(void);     // (for the asm functions)
extern "C" BOOL func_02082c8c(void *a, int b);
extern "C" void func_02081b24(void);     // (for the asm functions)
extern "C" void func_02081b44(void);     // (for the asm functions)
extern "C" s32 func_02081b70(u8 *arg0, u8 *arg1);
extern "C" void func_020802a0(void);     // (for the asm functions)
extern "C" void func_020802ac(void);     // (for the asm functions)
extern "C" void func_020802b8(u8 *entry);
extern "C" void func_020802cc(u8 *entry, int i, u32 id);
extern "C" u16 func_0208033c(u8 *entry, int i);
extern "C" void func_02080368(void);     // (for the asm functions)
extern "C" void func_0208039c(void);     // (for the asm functions)
extern "C" void func_02080564(void);     // (for the asm functions)
extern "C" void func_02080730(u8 *entry, int i, u16 id, int a);
extern "C" u16 func_02080780(u8 *entry, u32 i);
extern "C" void func_020807ac(void);     // (for the asm functions)
extern "C" void func_020807b4(void);     // (for the asm functions)
extern "C" void func_020807d0(void);     // (for the asm functions)
extern "C" void func_02080804(void);     // (for the asm functions)
extern "C" void func_02080830(void);     // (for the asm functions)
extern "C" void func_0208084c(void);     // (for the asm functions)
extern "C" BOOL func_020808e8(MatchPlayer *player, u16 id);
extern "C" BOOL func_02080964(MatchPlayer *player, int slot, u16 id, int a);
extern "C" void func_020809e8(void);     // (for the asm functions)
extern "C" void func_02080a38(void);     // (for the asm functions)
extern "C" BOOL func_02080a80(void *team, int i);
extern "C" void func_02080abc(void);     // (for the asm functions)
extern "C" BOOL func_02080b38(MatchPlayer *player);
extern "C" void func_02080b74(void);     // (for the asm functions)
extern "C" void func_02080c64(void);     // (for the asm functions)
extern "C" void func_02080c6c(void);     // (for the asm functions)
extern "C" int func_02080cb8(MatchPlayer *player);
extern "C" BOOL func_02080cd0(MatchPlayer *player);
extern "C" void func_020812f4(void);     // (for the asm functions)
extern "C" void func_020812fc(void);     // (for the asm functions)
extern "C" void func_02081304(void);     // (for the asm functions)
extern "C" s32 func_0208130c(MatchPlayer *player, s32 a);
extern "C" int func_02081390(MatchPlayer *player, int value);
extern "C" void func_02081398(MatchPlayer *player, u8 value);
extern "C" int func_020813a0(MatchPlayer *player, int value);
extern "C" void func_02081438(void);     // (for the asm functions)
extern "C" void func_02081484(void);     // (for the asm functions)
extern "C" void func_020814d0(void);     // (for the asm functions)
extern "C" void func_0208151c(void);     // (for the asm functions)
extern "C" void func_02081568(void);     // (for the asm functions)
extern "C" void func_020815b4(void);     // (for the asm functions)
extern "C" void func_02081600(void);     // (for the asm functions)
extern "C" u8 func_02081678(u8 *table, int level);
extern "C" void _ZN11MatchEngine13func_02080288EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020632b4EP11MatchPlayerS1_Pl(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020640b4Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206707cEii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206befcEP10MatchPointS1_(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206e76cEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020728e0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020732b0EP11MatchPlayeriPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020738e4EPvi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207620cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076424EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076460EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078aacEiPtihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207aeacEim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207b160Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207bee8Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c65cEmiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207e6dcEP11MatchPlayerll(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207ef0cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207efd8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f07cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f38cEP11MatchPlayerhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f3ccEP11MatchPlayerm(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f3e0Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f42cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f4bcEP12MatchIdScoreih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f634EPtiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f730Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207ff44Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206e3d4Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02072fe8EP11MatchPlayerii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020747a0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020747b4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020768fcEm(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076f04Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077e78EPhPv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078450EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a78cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a820Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a854EtPa(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d378EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d394EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d3f8EPti(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d468EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d494EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d500EP11MatchPlayeri(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d538EP11MatchPlayeris(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d568EP11MatchPlayeri(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d60cEP11MatchPlayerii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d6bcEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d728Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207da34EP11MatchPlayeri(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207dac0Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207dbf4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207dc10EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207dec0Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207e19cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207e334Eiiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207e6dcEP11MatchPlayerll(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020685a8Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206dedcEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206deecEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206df08Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206e018Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206e100Eiiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f70cEt(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f9e0Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078aacEiPtihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078d84EiPtih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207bdf8Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207bee8Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c178Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c3d8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c65cEmiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c720EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c7f4EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207c8e0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207cbd8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d214Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207d378EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206dfa4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f98cEt(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077a80Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a5c0EiPv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a990Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207aa94Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207add4Eim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207aeacEim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207af84Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207b160Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207b28cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207b708EmP11MatchPlayeriii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207b780Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207bdf8Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207bee8Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206deecEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f430Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f4acEiPa(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a534Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a854EtPa(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207add4Eim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207ae40Eim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02063550EP11MatchPlayeriiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02068548Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02069344Eiiiihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020787e8EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078aacEiPtihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078d84EiPtih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078f14EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078fa4EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207903cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020790e8EP15MatchPlayerBodyt(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02079114EP15MatchPlayerBodyll(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207918cEP11MatchPlayerll(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020791ccEii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207922cEP11MatchPlayerll(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02079d2cEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02079e90Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02079f40Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02079f98EP11MatchPlayerii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207a350EP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfa8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206e1c4Ei(void);     // (for the asm functions)
extern "C" void func_020764f8(u8 *rec, int value);
extern "C" void func_02076530(u8 *rec, int value);
extern "C" void func_02076568(u8 *rec, int value);
extern "C" void func_020765a0(u8 *rec, int value);
extern "C" void _ZN11MatchEngine13func_020765d4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020767a4Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020768fcEm(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076ba0Emii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077064Emi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077148EPhPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020771d4EmPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077224Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077448EP11MatchPlayermi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207765cEP11MatchPlayermiPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020776f8EP11MatchPlayermPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020777e4EPhsmh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077830Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077b00EP11MatchPlayermi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077d18EPvi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077da8EPvi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077e58EPhm(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077e78EPhPv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077eb8EPhPv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02077f20EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020782f0Emi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078394Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078428EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078434EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078450EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078474EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020784b8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078520EiPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02078560EiPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02063550EP11MatchPlayeriiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206a970Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfa8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bff4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02075f7cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020760e4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076168Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207620cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076268Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020762c0Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207635cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076370EPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207649cEPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020764b4EPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020765d4Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020766e8Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020767a4Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020767bcEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020768fcEm(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076ba0Emii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076ddcEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076f04Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02076f34Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02069344Eiiiihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02069394Eiiiihi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206b4ccEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfa8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfecEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bff4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206de34Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020725acEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020732b0EP11MatchPlayeriPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020733d4EP11MatchPlayeriiiiiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02073fa0EP11MatchPlayeriii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074210EP11MatchPlayeriiiPii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207436cEP11MatchPlayeriiib(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0207455cEiim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074584Eiim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020745acEiim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020745d4Eiim(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020745e4Eiiiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074700Eiiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074728Eiiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074750Eiiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074778Eiiih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020747a0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020749c8EPsii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074a18EPsP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074aacEPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02074abcEPh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020751b8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020665a4Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206a8d8Eiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206a93cEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f500Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f9e0Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020728e0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02072914Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02072a5cEP11MatchPlayerS1_Ph(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02072bb8EP11MatchPlayerii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020730dcEP11MatchPlayeriih(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020731c4EP11MatchPlayerPhi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020732b0EP11MatchPlayeriPi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020733d4EP11MatchPlayeriiiiiii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020738e4EPvi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020739a8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020739ccEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02073a20EPviPt(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02073a9cEPviPti(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02073e3cEPviih(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070854Em(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070e34EPKc(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070e44Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02070f6cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020710f0Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020711fcEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071214Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020717acEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071978Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071b00Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071c68Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071d38Em(void);     // (for the asm functions)
extern "C" void _ZN23UnkDequeBuffer_0207076c13func_02071df8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071e2cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071ea8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02071fb0Ev(void);     // (for the asm functions)
extern "C" void _ZN23UnkDequeBuffer_0207076c13func_020720b0Ev(void);     // (for the asm functions)
extern "C" void _ZN25UnkDequeIterator_0207076c13func_020720e4Ei(void);     // (for the asm functions)
extern "C" void _ZNK25UnkDequeIterator_0207076c13func_02072128ERKS_(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_0207219cEv(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072230Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_020723a8Ev(void);     // (for the asm functions)
extern "C" void _ZN17UnkDeque_0207076c13func_02072478Ev(void);     // (for the asm functions)
extern "C" void _ZN25UnkDequeIterator_0207076c13func_020724f4Ei(void);     // (for the asm functions)
extern "C" void _ZNK25UnkDequeIterator_0207076c13func_02072538ERKS_(void);     // (for the asm functions)
extern "C" UnkSlot_020621b4 *func_ov015_02143750(MatchEngine *self, int id);
extern "C" char data_020af210[];
extern "C" UnkPair_020621b4 *func_ov015_02143664(MatchEngine *self);
extern "C" u8 *data_020c4824;
extern "C" MatchArea data_020c4de0;     // (the field)
extern "C" UnkData_020c4ee0 data_020c4ee0;
extern "C" char data_020c4eec[];
extern "C" char data_020c4ef4[];
extern "C" char data_020c6cac[];
extern "C" char data_020c6cad[];
extern "C" char data_020c6cae[];
extern "C" char data_020c6caf[];
extern "C" char data_020c6cb0[];
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN9EntryPool3GetEi(void);
extern "C" void func_01fff13c(void);
extern "C" void FX_Sqrt(void);
extern "C" void _s32_div_f(void);
extern "C" u32 Random_RandB(u32 max);
extern "C" int func_ov015_02131970(MatchPlayer *player);
extern "C" void func_ov015_02142824(void);
extern "C" void func_ov015_021436c0(void);

extern "C" void _ZN11MatchEngine13func_0206ad68Eii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020704b0Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020705b4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_02070760Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_020654ccEP11MatchPlayeriiP10MatchPointS3_i(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206707cEii(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206ace8Ev(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206b2c8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206b4a8Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206b4ccEi(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfa0Eh(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bfb4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206bff4Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206dedcEv(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f4acEiPa(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f500Ei(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206f8c8Em(void);     // (for the asm functions)
extern "C" void _ZN11MatchEngine13func_0206fed0Ev(void);     // (for the asm functions)
void MatchEngine::func_0206f028(s32 value)
{
    unk_118fc = value;
}

void MatchEngine::func_0206f034()
{
    unk_118fc = (unk_118fc + 1) & 0x7FFFFFFF;
}

u32 MatchEngine::func_0206f04c()
{
    return unk_118fc;
}

u8 MatchEngine::func_0206f058()
{
    return unk_118f4;
}

void MatchEngine::func_0206f064()
{
    if (++unk_bb3 == 1) {
        unk_bb2 = 1;
        unk_bb3 = 0;
    }
}

void MatchEngine::func_0206f08c()
{
    unk_bb2 = 0;
    unk_bb3 = 0;
}
extern "C" char g3DFieldSprite[];
extern "C" u8 data_020cb288[15][0x70];
extern "C" s32 func_ov015_0213a75c(s32 sprite, u8 *player, u8 a, s32 frame, u8 b);
extern "C" void func_ov015_0213b1f0(void *sprite);
extern "C" char data_020aeb84[];
extern "C" char data_020aeb88[];
extern "C" char data_020aeb8c[];
extern "C" char data_020aed90[];
extern "C" char data_020af230[];
extern "C" char data_020af248[];
extern "C" char data_020fc6f8[];
extern "C" char data_020fc6fc[];
extern "C" char data_020fc700[];
extern "C" void _ZdlPv(void);
extern "C" void _Znwm(void);
extern "C" void abort(void);
extern "C" void memmove(void);
extern "C" int func_0201a508(const char *format, ...);    // (printf)
extern "C" void _u32_div_f(void);
extern "C" char data_020a71d0[];
extern "C" char data_020af274[];
extern "C" void func_ov015_021318a4(void);
extern "C" void memset(void);
extern "C" char data_020c4808[];
extern "C" char data_020fa076[];
extern "C" char data_020fc704[];
extern "C" void func_01fff198(void);
extern "C" BOOL func_ov015_021317c8(void);
extern "C" int func_ov015_02131948(int team);
extern "C" void func_ov015_02131994(void);
extern "C" void func_ov087_0217e70c(void);
extern "C" void func_ov087_0217e9e8(void);
extern "C" char data_020af2c0[];
extern "C" char gWirelessUtil[];
extern "C" char gAudioPlayer[];
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" int func_01ff8ca4(MatchEngine *self, int team, int a, int b, int c, int d);
extern "C" void func_01ff9490(MatchEngine *self, MatchPlayer *player, int a);
extern "C" u16 FX_Atan2Idx(fx32 y, fx32 x);     // (the direction of (x, y))
extern "C" void _ffltu(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_ov015_02131704(void);
extern "C" void func_ov015_02131854(void);
extern "C" void func_ov015_02131910(void);
extern "C" int func_ov015_021319bc(void);
extern "C" BOOL func_ov015_02131bb4(int team);
extern "C" void func_ov015_02140958(void);
extern "C" void func_ov015_02140e74(void);
extern "C" void func_ov087_0217a324(void);
extern "C" void func_ov087_0217a640(void);
extern "C" void func_ov087_0217b3c8(void);
extern "C" char data_020a71f0[];
extern "C" char data_020af2d8[];
extern "C" char data_020af2f4[];
extern "C" char data_020af310[];
extern "C" char data_020af32c[];
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_01ffed54(void);
extern "C" void func_ov015_021313d4(void);
extern "C" BOOL func_ov015_0213178c(void);
extern "C" void func_ov015_021319fc(void);
extern "C" BOOL func_ov015_02134040(const char *name, void *file, int a, int size, int b);
extern "C" void func_ov087_0217f69c(void);
extern "C" int func_ov087_02181680(MatchEngine *match, MatchPlayer *player);    // (the player's index, 0 to 21)
extern "C" void func_ov087_021816dc(void);
extern "C" void rand(void);
extern "C" char data_020a7248[];
extern "C" int data_020c4828;
extern "C" char data_020ca716[];
extern "C" void _ZN9EntryPool12FindFreeSlotEii(void);
extern "C" void _ZN9EntryPool4MoveEii(void);
extern "C" void _ZN9EntryPool4SwapEii(void);
extern "C" void _ZN9EntryPool9DuplicateEii(void);
extern "C" void func_01ffe354(void);
extern "C" void func_01ffed20(void);
extern "C" fx32 func_01fff15c(MatchEngine *self, MatchPlayerBody *body, MatchPoint *point);
extern "C" void func_0209bf8c(void);
extern "C" void func_ov015_02130b94(void);
extern "C" u16 func_ov015_02130e40(u8 dir);
extern "C" BOOL func_ov015_02131a5c(MatchPlayer *player);
extern "C" BOOL func_ov087_0217ea64(MatchEngine *match);
extern "C" char data_020af360[];
extern "C" const char data_020af37c[];
extern "C" char data_020af398[];
extern "C" char g2DGChar[];
extern "C" char g2DAdventureLogic[];
extern "C" void func_01ffe1a4(void);
extern "C" int func_01ffe1e4(MatchEngine *self, int a);
extern "C" void func_01ffe22c(void);
extern "C" void func_01ffe3e4(void);
extern "C" char data_020a722c[];
#include "game/SceneManager.hpp"
static inline BOOL Move_HasFlag(u8 *move, u8 flag)
{
    return (move[0xF] & flag) ? TRUE : FALSE;
}

static inline BOOL Move_IsKind7Flag1(u8 *move)
{
    return move[0] == 7 && (move[0xF] & 1) ? TRUE : FALSE;
}

// the kinds func_0207c7f4 compares (data_020a722c)
struct UnkKinds_0207c7f4 {
    s32 kinds[7];
};

static inline void MatchPlayerState_SetBit_88(MatchPlayerState *state, int bit, BOOL set)
{
    state->unk_88 &= 0xFF - bit;
    if (set) {
        state->unk_88 |= (u8)bit;
    }
}

static inline BOOL UnkEntry_020739cc_HasFlag(u8 *entry, u8 flag)
{
    return (entry[0xF] & flag) ? TRUE : FALSE;
}

extern SceneStartInfo data_020c4ab4;
extern "C" void _Z22EntryPool_CompactFrontv(void);
extern "C" void _ZN10MatchRules13func_0206f014Ev(void);
extern "C" void func_01ffbc80(void);
extern "C" void func_01ffbcc8(void);
extern "C" void func_ov015_02130ce0(void);
extern "C" void func_ov087_0218099c(void);
extern "C" void func_ov087_02181cbc(void);
extern "C" char data_020c4ebc[];
extern "C" const char data_020af3b4[];
extern "C" char data_020cabe0[];
extern "C" int STD_CopyString(char *dst, const char *src);
extern "C" int STD_GetStringLength(const char *str);
extern "C" void _ll_udiv(void);


BOOL MatchEngine::func_0206f09c(MatchPlayer *player)
{
    s8 stat;
    s8 teamStat;
    u8 *info;
    u8 pos;
    s8 bonus;
    int i;
    int end;
    s16 chance;

    if (player == NULL) {
        return FALSE;
    }
    stat = player->unk_c1[0];
    info = GetTeamInfo(func_ov015_021319b0(player));
    if (info == NULL) {
        return FALSE;
    }
    teamStat = (s8)info[0x36];
    pos = func_02078f14(player);
    i = func_ov015_02131970(player) * 11;
    end = i + 11;
    bonus = 0;
    for (; i < end; i++) {
        if (pos == (u8)data_020c6cac[i * 0x88]) {
            bonus = (s8)data_020c6cad[i * 0x88];
            break;
        }
    }
    chance = stat + teamStat + bonus;
    if (chance > 100) {
        chance = 100;
    }
    return (s8)Random_RandB(100) < (s8)chance;
}

BOOL MatchEngine::func_0206f178(MatchPlayer *player)
{
    s8 stat;
    s8 teamStat;
    u8 *info;
    u8 pos;
    s8 bonus;
    int i;
    int end;
    s16 chance;

    if (player == NULL) {
        return FALSE;
    }
    if (func_02078fa4(player) && func_0207903c(player)) {
        return TRUE;
    }
    stat = player->unk_c1[1];
    info = GetTeamInfo(func_ov015_021319b0(player));
    if (info == NULL) {
        return FALSE;
    }
    teamStat = (s8)info[0x37];
    pos = func_02078f14(player);
    i = func_ov015_02131970(player) * 11;
    end = i + 11;
    bonus = 0;
    for (; i < end; i++) {
        if (pos == (u8)data_020c6cac[i * 0x88]) {
            bonus = (s8)data_020c6cae[i * 0x88];
            break;
        }
    }
    chance = stat + teamStat + bonus;
    if (chance > 100) {
        chance = 100;
    }
    return (s8)Random_RandB(100) < (s8)chance;
}

BOOL MatchEngine::func_0206f278(MatchPlayer *player)
{
    s8 stat;
    s8 teamStat;
    u8 *info;
    u8 pos;
    s8 bonus;
    int i;
    int end;
    s16 chance;

    if (player == NULL) {
        return FALSE;
    }
    stat = player->unk_c1[2];
    info = GetTeamInfo(func_ov015_021319b0(player));
    if (info == NULL) {
        return FALSE;
    }
    teamStat = (s8)info[0x38];
    pos = func_02078f14(player);
    i = func_ov015_02131970(player) * 11;
    end = i + 11;
    bonus = 0;
    for (; i < end; i++) {
        if (pos == (u8)data_020c6cac[i * 0x88]) {
            bonus = (s8)data_020c6caf[i * 0x88];
            break;
        }
    }
    chance = stat + teamStat + bonus;
    if (chance > 100) {
        chance = 100;
    }
    return (s8)Random_RandB(100) < (s8)chance;
}

BOOL MatchEngine::func_0206f354(MatchPlayer *player)
{
    s8 stat;
    s8 teamStat;
    u8 *info;
    u8 pos;
    s8 bonus;
    int i;
    int end;
    s16 chance;

    if (player == NULL) {
        return FALSE;
    }
    stat = player->unk_c1[3];
    info = GetTeamInfo(func_ov015_021319b0(player));
    if (info == NULL) {
        return FALSE;
    }
    teamStat = (s8)info[0x39];
    pos = func_02078f14(player);
    i = func_ov015_02131970(player) * 11;
    end = i + 11;
    bonus = 0;
    for (; i < end; i++) {
        if (pos == (u8)data_020c6cac[i * 0x88]) {
            bonus = (s8)data_020c6cb0[i * 0x88];
            break;
        }
    }
    chance = stat + teamStat + bonus;
    if (chance > 100) {
        chance = 100;
    }
    return (s8)Random_RandB(100) < (s8)chance;
}

void MatchEngine::func_0206f430()
{
    s8 data[0x50];
    int i;
    MatchPlayer *player;

    if (unk_bdc == NULL || unk_bec == NULL) {
        return;
    }
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && func_0207a854(player->unk_64, data)) {
            func_0206f4ac((u16)i, data);
        }
    }
}

void MatchEngine::func_0206f4ac(int index, s8 *data)
{
    MatchPlayer *player = func_ov015_02130ae8(index);

    if (player == NULL || data == NULL) {
        return;
    }
    if (player->unk_c0 != 0) {
        return;
    }
    player->unk_c0 = 1;
    player->unk_c1[0] = data[0x3E];
    player->unk_c1[1] = data[0x40];
    player->unk_c1[2] = data[0x42];
    player->unk_c1[3] = data[0x44];
}

int MatchEngine::func_0206f500(int id)
{
    int i;

    for (i = 0; i < 0x84; i++) {
        PoolEntry *entry = gEntryPool.Get(i);
        if (entry != NULL && (u16)id == *(u16 *)(entry->data1 + 4)) {
            return i;
        }
    }
    return -1;
}

// adds percent % of the player's unk_96 (mode 0) or of its maximum (mode 1) to it, within 0 and the maximum
int MatchEngine::func_0206f550(int id, int percent, int mode)
{
    MatchPlayer *player;
    s16 value;
    s16 base;
    int index = func_0206f500(id);

    if (index < 0) {
        return -1;
    }
    player = func_ov015_02130ae8(index);
    if (player == NULL) {
        return -1;
    }
    value = player->unk_96;
    if (func_0206ace8()) {
        return value;
    }
    switch (mode) {
    case 0:
    default:
        base = value;
        break;
    case 1:
        base = player->unk_d2;
        break;
    }
    value = value + (s16)(base * percent / 100);
    if (value < 0) {
        value = 0;
    }
    if (value > player->unk_d2) {
        value = player->unk_d2;
    }
    func_02080b1c(player, value);
    return value;
}

// adds percent % of the player's unk_94 (mode 0) or of its maximum (mode 1) to it, within 0 and the maximum
int MatchEngine::func_0206f600(int id, int percent, int mode)
{
    MatchPlayer *player;
    s16 value;
    s16 base;
    int index = func_0206f500(id);

    if (index < 0) {
        return -1;
    }
    player = func_ov015_02130ae8(index);
    if (player == NULL) {
        return -1;
    }
    value = player->unk_94;
    if (func_0206ace8()) {
        return value;
    }
    switch (mode) {
    case 0:
    default:
        base = value;
        break;
    case 1:
        base = player->unk_d0;
        break;
    }
    value = value + (s16)(base * percent / 100);
    if (value < 0) {
        value = 0;
    }
    if (value > player->unk_d0) {
        value = player->unk_d0;
    }
    func_02080b00(player, value);
    return value;
}

void MatchEngine::func_0206f6b0(int a, BOOL b)
{
    if (b == FALSE) {
        func_0206bfb4(6);
    } else {
        func_0206bfb4(1);
    }
    func_0206bff4(15);
    if (a == 1) {
        func_0206bfa0(0);
    } else {
        func_0206bfa0(1);
    }
    unk_1189c[3] = 1;
}

u16 MatchEngine::func_0206f70c(u16 id)
{
    int i;

    for (i = 0; i < unk_c24; i++) {
        if (id == unk_be0[i][1]) {
            return unk_be0[i][0];
        }
    }
    return 0;
}

u16 MatchEngine::func_0206f750(u16 id)
{
    int i;

    for (i = 0; i < unk_c24; i++) {
        if (id == unk_be0[i][0]) {
            return unk_be0[i][1];
        }
        if (id == unk_be0[i][1]) {
            return unk_be0[i][0];
        }
    }
    return 0;
}

BOOL MatchEngine::func_0206f7a4()
{
    if (unk_be0 == NULL) {
        u32 size = MatchLoadFile(data_020af210, (void **)&unk_be0, 0, 0);

        if (size == 0) {
            return FALSE;
        }
        unk_c24 = size / 4;
    }
    return TRUE;
}

void MatchEngine::func_0206f824(u32 id, BOOL second)
{
    int i;
    u32 high;
    u32 key;
    u32 other;

    func_0206f8c8(id);
    high = id & ~0xFFF;
    for (i = 0; i < unk_c24; i++) {
        key = id & 0xFFF;
        if (key == unk_be0[i][0] || key == unk_be0[i][1]) {
            other = second ? high | unk_be0[i][1] : high | unk_be0[i][0];
            if (id != 0 && other != 0 && id != other) {
                func_020823a0(this, id, 0);
            }
            return;
        }
    }
}

// (finds id among the pairs of unk_be0 and tries the other of its pair: 0 or 1 for the one found
// in use)
BOOL MatchEngine::func_0206f8c8(u32 id)
{
    u32 a = 0;
    u32 b = 0;
    int i;
    u32 high = id & ~0xFFF;

    for (i = 0; i < unk_c24; i++) {
        if ((id & 0xFFF) == unk_be0[i][0]) {
            a = id;
            b = high | unk_be0[i][1];
            break;
        }
        if ((id & 0xFFF) == unk_be0[i][1]) {
            b = id;
            a = high | unk_be0[i][0];
            break;
        }
    }
    if (a != 0 && func_0206f500(a) >= 0) {
        return FALSE;
    }
    if (b != 0 && func_0206f500(b) >= 0) {
        return TRUE;
    }
    return FALSE;
}

u16 MatchEngine::func_0206f98c(u16 id)
{
    int i;

    for (i = 0; i < unk_c24; i++) {
        if (id == unk_be0[i][0]) {
            id = unk_be0[i][0];
            break;
        }
        if (id == unk_be0[i][1]) {
            id = unk_be0[i][0];
            break;
        }
    }
    return id;
}

u32 MatchEngine::func_0206f9e0(u32 id)
{
    u32 a = 0;
    u32 b = 0;
    int i;
    u32 high = id & ~0xFFF;
    MatchPlayer *player;

    for (i = 0; i < unk_c24; i++) {
        if ((id & 0xFFF) == unk_be0[i][0]) {
            a = id;
            b = high | unk_be0[i][1];
            break;
        }
        if ((id & 0xFFF) == unk_be0[i][1]) {
            b = id;
            a = high | unk_be0[i][0];
            break;
        }
    }
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL) {
            if (a == player->unk_42) {
                return a;
            }
            if (b == player->unk_42) {
                return b;
            }
        }
    }
    return id;
}

BOOL MatchEngine::func_0206faa0(int index)
{
    BOOL r = FALSE;

    if (func_02080cd0(func_ov015_02130b14((u16)index, 0))) {
        r = TRUE;
    }
    return r;
}

void MatchEngine::func_0206facc()
{
}

asm void MatchEngine::func_0206fad0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r2
    mov r5, r3
    bl _ZN11MatchEngine13func_0206f500Ei
    mov r7, r0
    bl func_ov015_02130ae8
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_02080b90
    mov r6, r0
    mov r0, r9
    mov r1, r6
    bl _ZN11MatchEngine13func_0206b2c8Ei
    mov r4, r0
    strh r7, [r4, #4]
    mov r0, r9
    mov r1, r6
    strb r6, [r4, #6]
    bl _ZN11MatchEngine13func_0206b4a8Ei
    strb r0, [r4, #7]
    cmp r8, #0
    bne @L_0206fb40
    ldr r0, =gGameState
    ldrb r1, [r0, #0x7e]
    strb r1, [r4, #8]
    ldr r0, [r0]
    b @L_0206fb90
@L_0206fb40:
    cmp r8, #4
    addls pc, pc, r8, lsl #2
    b @L_0206fb80
    b @L_0206fb80
    b @L_0206fb60
    b @L_0206fb68
    b @L_0206fb70
    b @L_0206fb78
@L_0206fb60:
    mov r0, #1
    b @L_0206fb7c
@L_0206fb68:
    mov r0, #4
    b @L_0206fb7c
@L_0206fb70:
    mov r0, #7
    b @L_0206fb7c
@L_0206fb78:
    mov r0, #0xa
@L_0206fb7c:
    strb r0, [r4, #8]
@L_0206fb80:
    mov r0, #0x3c
    mul r1, r5, r0
    mov r0, #0x1e
    mul r0, r1, r0
@L_0206fb90:
    str r0, [r4]
    mov r0, #0
    bl func_020841c8
    strb r0, [r4, #9]
    mov r0, #1
    bl func_020841c8
    strb r0, [r4, #0xa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

void MatchEngine::func_0206fbb4(int i)
{
    u8 *entry = func_0206b4cc(i);

    if (entry != NULL) {
        entry[0xB]++;
    }
}

asm void MatchEngine::func_0206fbd0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    movs r8, r1
    mov r5, r0
    ldr r6, =0x51eb851f
    ldreq r0, =0x11900
    moveq r1, #0
    mov r4, r2
    streqh r1, [r5, r0]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r8
    bl func_02083e34
    mov r1, r0
    ldr r2, =data_020c4eec
    ldr r0, =data_020c4ef4
    ldr r3, [r2, r1, lsl #4]
    ldr r2, [r0, r1, lsl #4]
    mov r7, #0
    add r2, r3, r2
    add r3, r2, r2, lsr #31
    mov r0, r5
    mov r2, r7
    mov r9, r3, asr #1
    bl _ZN11MatchEngine13func_0206707cEii
    str r0, [sp]
    ldr r2, =data_020c4920
    mov r3, r9
    mov r0, r5
    ldmia r2, {r1, r2}
    bl func_01fff13c
    mov r2, r0, asr #0xb
    add r0, r0, r2, lsr #20
    mov r1, r8
    mov r8, r0, asr #0xc
    mov r0, r5
    bl func_ov015_02142824
    mov r1, r0, asr #0xb
    add r0, r0, r1, lsr #20
    mov r9, r0, asr #0xc
    mov r0, #0x64
    mul r0, r8, r0
    mov r1, r9
    bl _s32_div_f
    mov r1, r9
    mov r9, r0
    sub r0, r8, #1
    bl _s32_div_f
    cmp r0, #0
    movlt r0, r7
    cmp r4, #0
    mov r1, #0x14
    beq @L_0206fcc0
    ldrb r2, [r4]
    mov r3, #0
    cmp r2, #7
    bne @L_0206fcb8
    ldrb r2, [r4, #0xf]
    tst r2, #1
    movne r3, #1
@L_0206fcb8:
    cmp r3, #0
    bne @L_0206fd34
@L_0206fcc0:
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0206fd2c
    b @L_0206fcdc
    b @L_0206fcf4
    b @L_0206fcf8
    b @L_0206fd10
@L_0206fcdc:
    rsb r0, r9, #0x4b
    mul r2, r0, r1
    smull r1, r0, r6, r2
    mov r1, r2, lsr #0x1f
    add r0, r1, r0, asr #3
    b @L_0206fd84
@L_0206fcf4:
    b @L_0206fcf8
@L_0206fcf8:
    rsb r0, r9, #0
    mul r2, r0, r1
    smull r1, r0, r6, r2
    mov r1, r2, lsr #0x1f
    add r0, r1, r0, asr #5
    b @L_0206fd84
@L_0206fd10:
    sub r0, r9, #0x12c
    mul r2, r0, r1
    smull r0, r3, r6, r2
    mov r0, r2, lsr #0x1f
    add r3, r0, r3, asr #5
    sub r0, r1, #0x64
    b @L_0206fd70
@L_0206fd2c:
    mov r0, #0
    b @L_0206fd84
@L_0206fd34:
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0206fd80
    b @L_0206fd50
    b @L_0206fd54
    b @L_0206fd78
    b @L_0206fd7c
@L_0206fd50:
    b @L_0206fcdc
@L_0206fd54:
    mov r0, #0xa
    sub r1, r9, #0x64
    mul r2, r1, r0
    smull r1, r3, r6, r2
    mov r1, r2, lsr #0x1f
    add r3, r1, r3, asr #5
    sub r0, r0, #0x1e
@L_0206fd70:
    sub r0, r0, r3
    b @L_0206fd84
@L_0206fd78:
    b @L_0206fd54
@L_0206fd7c:
    b @L_0206fd54
@L_0206fd80:
    mvn r0, #0x31
@L_0206fd84:
    mov r0, r0, lsl #0x18
    ldr r1, =0x11900
    mov r0, r0, asr #0x18
    strh r0, [r5, r1]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

s16 MatchEngine::func_0206fdac()
{
    return unk_11900;
}

BOOL MatchEngine::func_0206fdbc(int team, fx32 y)
{
    if (func_0206b4a8(team) == 0) {
        return (data_020c4ee0.unk_72 << 12) + data_020c4de0.unk_d8 > y;
    }
    return -(data_020c4ee0.unk_72 << 12) + data_020c4de0.unk_d8 < y;
}

BOOL MatchEngine::func_0206fe28(int team, fx32 y)
{
    if (func_0206b4a8(team) == 0) {
        return (data_020c4ee0.unk_74 << 12) + data_020c4de0.unk_d8 > y;
    }
    return -(data_020c4ee0.unk_74 << 12) + data_020c4de0.unk_d8 < y;
}

void MatchEngine::func_0206fe94(int delta)
{
    unk_11900 += (s16)delta;
    if (unk_11900 < -90) {
        unk_11900 = -90;
    }
}

void MatchEngine::func_0206fec0(s16 value)
{
    unk_11900 = value;
}

asm void MatchEngine::func_0206fed0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r6, r1
    mov r7, r0
    mov r0, r6
    mov r8, r2
    mov r5, r3
    bl func_02081568
    ldr r1, [sp, #0x28]
    mov r2, r8
    str r1, [sp]
    ldr r1, [sp, #0x2c]
    ldr r8, =data_020c4824
    str r1, [sp, #4]
    mov r4, #0
    str r0, [sp, #8]
    ldr r0, [r8]
    mov r1, r4
    mov r3, r5
    bl func_0208e9d4
    ldr r0, [r8]
    mov r1, r4
    mov r2, r4
    bl func_0208e9b8
    mov r0, r7
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl func_ov015_02143664
    mov r9, r0
    mov r0, r6
    bl func_ov015_02131970
    mov r6, r0
    ldrsh r1, [r9, #8]
    mov r0, r7
    bl _ZN11MatchEngine13func_020739ccEi
    ldrb r0, [r0]
    cmp r0, #7
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    cmp r6, #0
    bne @L_0206ffac
    ldr r0, =data_020c4de0
    ldr r0, [r0, #0xd8]
    cmp r5, r0
    addlt sp, sp, #0xc
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8]
    mov r1, r4
    mov r2, #1
    bl func_0208e9b8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_0206ffac:
    ldr r0, =data_020c4de0
    ldr r0, [r0, #0xd8]
    cmp r5, r0
    addgt sp, sp, #0xc
    ldmgtia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8]
    mov r1, r4
    mov r2, #1
    bl func_0208e9b8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void MatchEngine::func_0206ffe0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    ldr r6, [sp, #0x88]
    ldr r5, [sp, #0x8c]
    mov r10, r0
    str r1, [sp, #0x14]
    str r2, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl _ZN11MatchEngine13func_02070760Ev
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_ov015_02143664
    mov r7, r0
    ldr r0, [sp, #0x14]
    bl func_02080b90
    mov r4, #1
    cmp r0, #0
    movne r4, #0
    cmp r6, #0x80000000
    str r0, [sp, #0x40]
    cmpne r5, #0x80000000
    beq @L_02070074
    ldr r1, [sp, #0x14]
    str r6, [sp]
    ldr r2, [sp, #0x18]
    ldr r3, [sp, #0x1c]
    mov r0, r10
    str r5, [sp, #4]
    bl _ZN11MatchEngine13func_0206fed0Ev
@L_02070074:
    ldrsb r0, [r7, #0xd]
    bl func_ov015_02130ae8
    cmp r0, #0
    mvneq r11, #0
    beq @L_020700cc
    ldr r1, [r0, #0xe8]
    add r0, sp, #0x50
    ldr r3, [r1]
    ldr r2, [r1, #4]
    add r1, sp, #0x54
    str r5, [sp]
    str r3, [sp, #4]
    str r2, [sp, #8]
    str r0, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r0, =data_020c4824
    ldr r1, [sp, #0x18]
    ldr r0, [r0]
    ldr r2, [sp, #0x1c]
    mov r3, r6
    bl func_0208f6ac
    mov r11, r0
@L_020700cc:
    ldr r0, [sp, #0x18]
    sub r8, r6, r0
    ldr r0, [sp, #0x1c]
    smull r2, r1, r8, r8
    sub r9, r5, r0
    smull r0, r3, r9, r9
    adds r7, r0, #0x800
    add r0, r9, r9, lsr #31
    add r5, r5, r0, asr #1
    str r5, [sp, #0x24]
    ldr r5, [sp, #0x1c]
    add r8, r8, r8, lsr #31
    sub r0, r5, r0, asr #1
    add r6, r6, r8, asr #1
    str r0, [sp, #0x2c]
    adc r0, r3, #0
    mov r3, r7, lsr #0xc
    str r6, [sp, #0x28]
    ldr r6, [sp, #0x18]
    adds r2, r2, #0x800
    orr r3, r3, r0, lsl #20
    adc r0, r1, #0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #20
    sub r6, r6, r8, asr #1
    add r0, r1, r3
    mov r1, #0
    str r6, [sp, #0x30]
    str r1, [sp, #0x20]
    bl FX_Sqrt
    str r0, [sp, #0x34]
    mov r0, r10
    bl func_ov015_021436c0
    str r0, [sp, #0x38]
    ldr r0, [sp, #0x20]
    cmp r4, #0
    sub r0, r0, #1
    strh r0, [sp, #0x58]
    ldr r0, [sp, #0x20]
    sub r0, r0, #0x80000001
    str r0, [sp, #0x5c]
    movne r0, #0xb
    strne r0, [sp, #0x20]
    mov r0, #0
    str r0, [sp, #0x3c]
    b @L_020703d8
@L_02070184:
    ldr r1, [sp, #0x20]
    mov r0, r10
    bl _ZN11MatchEngine13func_02079d2cEi
    movs r9, r0
    beq @L_020703c0
    bl func_02080b90
    ldr r1, [sp, #0x40]
    cmp r1, r0
    beq @L_020703c0
    ldrh r0, [r9, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020701d4
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    bne @L_020703c0
@L_020701d4:
    mov r0, r9
    bl func_02080b38
    cmp r0, #0
    bne @L_020703c0
    mov r0, r9
    bl func_02080abc
    cmp r0, #0
    beq @L_020703c0
    mov r8, #0
    mvn r0, #0
    mov r7, #1
    str r0, [sp, #0x44]
    mov r6, r8
    mov r4, r8
    mov r5, r7
    b @L_02070284
@L_02070214:
    add r0, r9, r8, lsl #1
    ldrh r1, [r0, #0x98]
    mov r0, r10
    bl _ZN11MatchEngine13func_020739ccEi
    cmp r0, #0
    beq @L_02070280
    ldrb r1, [r0, #0xf]
    tst r1, #2
    movne r1, r7
    moveq r1, r6
    cmp r1, #0
    bne @L_0207025c
    ldrb r1, [r0, #0xf]
    tst r1, #4
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02070280
@L_0207025c:
    ldrsh r4, [r9, #0x96]
    mov r1, r9
    bl _ZN11MatchEngine13func_02074a18EPsP11MatchPlayer
    cmp r4, r0
    ldrgesh r0, [r9, #0xf4]
    movge r0, r0, lsl #0x18
    movge r0, r0, asr #0x18
    strge r0, [sp, #0x44]
    b @L_0207028c
@L_02070280:
    add r8, r8, #1
@L_02070284:
    cmp r8, #6
    blt @L_02070214
@L_0207028c:
    ldr r0, [sp, #0x44]
    cmn r0, #1
    beq @L_020703c0
    mov r0, r9
    bl func_02081438
    ldr r2, =0x66666667
    mov r1, r0, lsr #0x1f
    smull r0, r3, r2, r0
    add r3, r1, r3, asr #1
    cmp r3, #0x14
    movgt r3, #0x14
    add r0, r3, #0xc
    mov r5, r0, lsl #0xc
    ldr r0, [r9, #0xe8]
    mov r7, #0
    ldmia r0, {r2, r3}
    ldr r4, =data_020c4824
    str r5, [sp]
    ldr r0, [r4]
    mov r1, r7
    bl func_0208f310
    movs r6, r0
    bmi @L_020703c0
    ldr r0, [r9, #0xe8]
    add r2, sp, #0x48
    ldmia r0, {r3, r12}
    ldr r0, [sp, #0x24]
    add r1, sp, #0x4c
    stmia sp, {r0, r3, r12}
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    ldr r0, [r4]
    ldr r1, [sp, #0x30]
    ldr r2, [sp, #0x2c]
    ldr r3, [sp, #0x28]
    bl func_0208f6ac
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x18]
    ldr r3, [sp, #0x4c]
    sub r0, r1, r0
    smull r2, r1, r0, r0
    ldr r0, [sp, #0x1c]
    sub r4, r3, r0
    smull r3, r0, r4, r4
    adds r4, r3, #0x800
    adc r3, r0, r7
    adds r2, r2, #0x800
    mov r0, r4, lsr #0xc
    adc r1, r1, r7
    mov r2, r2, lsr #0xc
    orr r0, r0, r3, lsl #20
    orr r2, r2, r1, lsl #20
    add r0, r2, r0
    bl FX_Sqrt
    cmp r11, #0
    cmpge r0, #0
    blt @L_02070378
    cmp r0, r11
    blt @L_0207038c
@L_02070378:
    cmp r11, #0
    ldrlt r1, [sp, #0x34]
    addlt r1, r5, r1
    cmplt r0, r1
    bge @L_020703c0
@L_0207038c:
    ldr r0, [sp, #0x5c]
    cmp r0, r6
    ble @L_020703c0
    ldrsh r2, [r9, #0xf4]
    ldr r1, [sp, #0x48]
    ldr r0, [sp, #0x4c]
    mov r1, r1, asr #0xc
    mov r0, r0, asr #0xc
    str r6, [sp, #0x5c]
    strh r8, [sp, #0x5a]
    strh r2, [sp, #0x58]
    strh r1, [sp, #0x60]
    strh r0, [sp, #0x62]
@L_020703c0:
    ldr r0, [sp, #0x3c]
    add r0, r0, #1
    str r0, [sp, #0x3c]
    ldr r0, [sp, #0x20]
    add r0, r0, #1
    str r0, [sp, #0x20]
@L_020703d8:
    ldr r0, [sp, #0x3c]
    cmp r0, #0xb
    blt @L_02070184
    ldrsh r1, [sp, #0x58]
    ldr r0, [sp, #0x38]
    ldrsh r3, [sp, #0x5a]
    strb r1, [r0, #0x1d]
    ldr r0, [sp, #0x14]
    ldrsh r2, [sp, #0x60]
    ldrsh r5, [r0, #0xf4]
    ldr r0, [sp, #0x38]
    ldrsh r1, [sp, #0x62]
    strb r5, [r0, #0x23]
    strh r3, [r0, #0x1e]
    strh r2, [r0, #0x24]
    strh r1, [r0, #0x26]
    ldrsb r0, [r0, #0x1d]
    mvn r4, #0
    mov r5, #0
    cmp r0, r4
    beq @L_0207048c
    bl func_ov015_02130ae8
    bl func_02084870
    cmp r0, #0
    beq @L_02070454
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer
@L_02070454:
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
    str r5, [sp]
    mov r2, #0xd
    str r5, [sp, #4]
    mov r1, r0
    mov r0, r10
    sub r3, r2, #0xe
    str r5, [sp, #8]
    bl _ZN11MatchEngine13func_020654ccEP11MatchPlayeriiP10MatchPointS3_i
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    bl func_ov015_02130ae8
@L_0207048c:
    ldr r0, [sp, #0x38]
    ldrsb r0, [r0, #0x1d]
    cmp r0, r4
    movne r0, #1
    moveq r0, #0
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_020704b0(BOOL a)
{
    UnkSlot_020621b4 *slot = func_ov015_02143750(this, a);

    if (slot == NULL) {
        return;
    }
    if (UnkSlot_020621b4_HasFlag(slot, 1) || a) {
        func_0208f2d0(data_020c4824);
        func_0208f300(data_020c4824, 0);
        if (a) {
            slot->flags = (u8)(slot->flags | 4);
        }
    }
    func_ov015_0213b1f0(*(void **)g3DFieldSprite);
}

void MatchEngine::func_02070548(int id)
{
    UnkSlot_020621b4 *slot = func_ov015_02143750(this, id);
    void *src;

    if (slot == NULL) {
        return;
    }
    if (id == 0) {
        src = func_ov015_02143664(this);
        MI_CpuCopy8(src, slot, sizeof(slot->unk_0));
        slot->unk_18 = src;
        slot->unk_1c = 0;
    } else {
        src = func_0207620c();
        MI_CpuCopy8(src, slot, sizeof(slot->unk_0));
        slot->unk_18 = src;
        slot->unk_1c = 1;
    }
}

void MatchEngine::func_020705b4(int id)
{
    UnkSlot_020621b4 *slot = func_ov015_02143750(this, id);

    if (slot == NULL || slot->unk_1c == 0xFF) {
        return;
    }
    MI_CpuCopy8(slot, slot->unk_18, sizeof(slot->unk_0));
}

void MatchEngine::func_020705dc(int id)
{
    func_020705b4(id);
    func_020704b0(0);
}

void MatchEngine::func_020705f8(u8 value)
{
    unk_11902 = value;
}

u8 MatchEngine::func_02070604()
{
    return unk_11902;
}

void MatchEngine::func_02070610(int amount)
{
    u8 value = unk_11904;
    u8 result;

    if ((value & 3) == 0 && (amount & 1) == 1) {
        amount += amount;
    }
    amount += value;
    if (amount > 120) {
        result = 100;
    } else {
        result = amount;
    }
    unk_11904 = result;
}

BOOL MatchEngine::func_02070644()
{
    return unk_11904 >= 100;
}

void MatchEngine::func_0207065c()
{
    unk_11904 = 0;
}

u8 MatchEngine::func_0207066c()
{
    return unk_11904;
}

void MatchEngine::func_02070678(BOOL value)
{
    unk_11914 = value != FALSE;
    if (unk_11914) {
        return;
    }
    func_0206ad68(TRUE, TRUE);
}

u8 MatchEngine::func_020706a8()
{
    return unk_11914;
}

void MatchEngine::func_020706b4(int index, int frame)
{
    MatchPlayer *player = func_ov015_02130ae8(index);

    if (frame >= 8) {
        frame %= 8;
    }
    if (frame < 0) {
        frame = 0;
    }
    func_ov015_0213a75c(*(s32 *)g3DFieldSprite, (u8 *)player, 0, frame, 1);
}

#pragma push
#pragma optimization_level 2
void MatchEngine::func_0207070c()
{
    s16 i;
    u8 *entry;

    for (i = 0; i < 15; i++) {
        entry = data_020cb288[i];
        if (entry[0x56] == 1) {
            MIi_CpuClearFast(0, entry, 0x70);
        }
    }
}
#pragma pop

s32 MatchEngine::func_02070760()
{
    return unk_11918;
}

void UnkDeque_0207076c::func_0207076c(const u32 &value)
{
    u32 *p;
    u32 capacity = blocks.size == 0 ? 0 : (blocks.size - 1) << 8;

    if (capacity - (start + count) == 0) {
        func_02070854(1);
    }
    p = func_02071d38(count).entry;
    if (p != NULL) {
        *p = value;
    }
    count++;
}

void UnkDeque_0207076c::func_020707e4()
{
    UnkDequeBuffer_0207076c *b = &blocks;

    count = 0;
    while (b->size > 2) {
        operator delete(b->data[b->unk_4]);
        UnkDeque_PopFront(b);
    }
    if (blocks.size != 0) {
        start = 0x80;
    }
}

asm void UnkDeque_0207076c::func_02070854(u32 n)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x13c
    mov r10, r0
    tst r1, #0xff
    mov r6, #0
    movne r0, #1
    moveq r0, r6
    add r7, r0, r1, lsr #8
    add r4, sp, #0x28
    b @L_020708e8
@L_0207087c:
    ldr r1, [r10, #0xc]
    ldr r2, [r10, #8]
    mov r0, r1
    ldr r5, [r2, r1, lsl #2]
    add r1, r0, #1
    ldr r0, [r10, #0x14]
    str r1, [r10, #0xc]
    cmp r1, r0
    streq r6, [r10, #0xc]
    ldr r1, [r10, #0x10]
    ldr r0, [r10, #0xc]
    sub r2, r1, #1
    add r0, r0, r2
    ldr r1, [r10, #0x14]
    sub r0, r0, #1
    str r2, [r10, #0x10]
    bl _u32_div_f
    ldr r2, [r10, #8]
    add r0, r10, #8
    str r5, [r2, r1, lsl #2]
    mov r1, r4
    str r6, [sp, #0x28]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    ldr r0, [r10]
    sub r7, r7, #1
    sub r0, r0, #0x100
    str r0, [r10]
@L_020708e8:
    cmp r7, #0
    beq @L_020708fc
    ldr r0, [r10]
    cmp r0, #0x100
    bhs @L_0207087c
@L_020708fc:
    cmp r7, #0
    addeq sp, sp, #0x13c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_020fc700
    ldr r0, [r1]
    tst r0, #1
    bne @L_02070930
    mov r3, #0x200
    orr r2, r0, #1
    ldr r0, =data_020aeb84
    rsb r3, r3, #0
    str r3, [r0]
    str r2, [r1]
@L_02070930:
    ldr r2, =data_020aeb84
    mov r0, r7, lsl #8
    ldr r1, [r2]
    cmp r1, r7, lsl #8
    blo @L_0207098c
    ldr r1, =data_020fc700
    ldr r3, [r1]
    tst r3, #1
    moveq r4, #0x200
    orreq r3, r3, #1
    rsbeq r4, r4, #0
    streq r3, [r1]
    streq r4, [r2]
    ldr r2, [r10, #0x10]
    ldr r1, =data_020aeb84
    cmp r2, #0
    ldr r3, [r1]
    moveq r1, #0
    subne r1, r2, #1
    movne r1, r1, lsl #8
    sub r0, r3, r0
    cmp r1, r0
    bls @L_02070994
@L_0207098c:
    ldr r0, =data_020af230
    bl _ZN17UnkDeque_0207076c13func_02070e34EPKc
@L_02070994:
    ldr r0, [r10, #0x14]
    mov r1, #0
    cmp r0, #0
    subne r1, r0, #1
    ldr r0, [r10, #0x10]
    add r0, r7, r0
    cmp r0, r1
    bhi @L_02070a28
    cmp r7, #0
    addeq sp, sp, #0x13c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_020aed90
    add r9, sp, #0x24
    mov r5, #0x400
@L_020709cc:
    mov r0, r5
    bl _Znwm
    movs r8, r0
    bne @L_020709e8
    mov r0, r4
    bl func_0201a508
    bl abort
@L_020709e8:
    ldr r2, [r10, #0xc]
    ldr r0, [r10, #0x10]
    ldr r1, [r10, #0x14]
    add r0, r2, r0
    sub r0, r0, #1
    bl _u32_div_f
    ldr r2, [r10, #8]
    add r0, r10, #8
    str r8, [r2, r1, lsl #2]
    mov r1, r9
    str r6, [sp, #0x24]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    subs r7, r7, #1
    bne @L_020709cc
    add sp, sp, #0x13c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02070a28:
    movs r1, #0
    add r4, sp, #0x12c
    str r1, [sp, #0x124]
    str r1, [sp, #0x128]
    str r1, [sp, #0xb4]
    str r1, [sp, #0xb8]
    str r1, [sp, #0xbc]
    str r1, [sp, #0xc0]
    str r1, [r4]
    str r1, [r4, #4]
    str r1, [r4, #8]
    str r1, [r4, #0xc]
    add r8, sp, #0xb4
    beq @L_02070a68
    add r0, r1, r1
    bl _u32_div_f
@L_02070a68:
    ldr r5, [r8]
    ldr r2, [r8, #4]
    ldr r0, [r8, #0xc]
    add r3, r5, r2, lsl #2
    add r2, r5, r0, lsl #2
    add r8, r5, r1, lsl #2
    ldrb r1, [sp, #0x10]
    add r0, sp, #0xc4
    str r8, [sp, #0xc4]
    str r5, [sp, #0xc8]
    str r5, [sp, #0xd8]
    str r3, [sp, #0xcc]
    str r2, [sp, #0xd0]
    str r0, [sp, #4]
    add r0, sp, #0xd4
    strb r1, [sp, #8]
    sub r5, sp, #0xc
    str r3, [sp, #0xd4]
    str r3, [sp, #0xdc]
    str r2, [sp, #0xe0]
    ldmia r0, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r4
    ldmia r5, {r1, r2, r3}
    bl _ZN17UnkDeque_0207076c13func_0207219cEv
    add r0, sp, #0xb4
    bl _ZN23UnkDequeBuffer_0207076c13func_020720b0Ev
    ldr r0, [r10, #0x10]
    mov r2, #0
    add r0, r7, r0
    add r0, r0, #1
    str r0, [sp, #0x1c]
    ldr r1, [r10, #0x14]
    add r9, sp, #0x12c
    cmp r1, #0
    subne r2, r1, #1
    cmp r0, r2, lsl #1
    addhi r0, sp, #0x1c
    mov r1, r2, lsl #1
    addls r0, sp, #0x20
    str r1, [sp, #0x20]
    ldr r1, [r0]
    mov r0, r9
    bl _ZN17UnkDeque_0207076c13func_02070e44Ev
    add r1, sp, #0x18
    mov r0, r9
    str r6, [sp, #0x18]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    cmp r7, #0
    beq @L_02070b90
    ldr r11, =data_020aed90
    add r4, sp, #0x14
    mov r5, #0x400
@L_02070b3c:
    mov r0, r5
    bl _Znwm
    movs r8, r0
    bne @L_02070b58
    mov r0, r11
    bl func_0201a508
    bl abort
@L_02070b58:
    ldr r2, [r9, #4]
    ldr r0, [r9, #8]
    ldr r1, [r9, #0xc]
    add r0, r2, r0
    sub r0, r0, #1
    bl _u32_div_f
    ldr r2, [r9]
    mov r0, r9
    str r8, [r2, r1, lsl #2]
    mov r1, r4
    str r6, [sp, #0x14]
    bl _ZN17UnkDeque_0207076c13func_02070f6cEv
    subs r7, r7, #1
    bne @L_02070b3c
@L_02070b90:
    ldr r0, [r10, #0x10]
    mov r5, #0
    cmp r0, #0
    beq @L_02070cf8
    ldr r1, [r10, #0x14]
    cmp r1, #0
    moveq r1, r5
    beq @L_02070bc0
    ldr r2, [r10, #0xc]
    ldr r0, [r10, #0x10]
    add r0, r2, r0
    bl _u32_div_f
@L_02070bc0:
    ldr r6, [r10, #8]
    ldr r3, [r10, #0xc]
    add r2, r6, r1, lsl #2
    ldr r0, [r10, #0x14]
    add r4, r6, r3, lsl #2
    add r3, r6, r0, lsl #2
    add r0, sp, #0xa4
    str r2, [sp, #0xa4]
    str r6, [sp, #0xa8]
    str r4, [sp, #0xac]
    str r3, [sp, #0xb0]
    mvn r1, #0
    str r2, [sp, #0xe4]
    str r6, [sp, #0xe8]
    str r4, [sp, #0xec]
    str r3, [sp, #0xf0]
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r1, [r10, #8]
    ldr r7, [sp, #0xa8]
    ldr r6, [sp, #0xac]
    ldr r8, [sp, #0xa4]
    ldr r3, [sp, #0xb0]
    ldr r0, [r10, #0xc]
    ldr r2, [r9]
    add r4, r1, r0, lsl #2
    ldr r0, [r10, #0x14]
    str r7, [sp, #0xf8]
    str r7, [sp, #0x40]
    str r7, [sp, #0x88]
    str r7, [sp, #0x74]
    add r7, r1, r0, lsl #2
    ldr r0, [r9, #4]
    str r6, [sp, #0xfc]
    str r6, [sp, #0x44]
    str r6, [sp, #0x8c]
    str r6, [sp, #0x78]
    add r6, r2, r0, lsl #2
    ldr r0, [r9, #0xc]
    and r5, r5, #0xff
    add r0, r2, r0, lsl #2
    str r3, [sp, #0x100]
    str r1, [sp, #0x108]
    str r3, [sp, #0x48]
    str r1, [sp, #0x30]
    str r3, [sp, #0x90]
    str r3, [sp, #0x7c]
    str r1, [sp, #0x98]
    str r1, [sp, #0x60]
    str r8, [sp, #0x70]
    add r1, sp, #0x4c
    str r2, [sp, #0x118]
    str r2, [sp, #0x50]
    add r2, sp, #0x5c
    str r0, [sp, #0x120]
    str r0, [sp, #0x58]
    add r3, sp, #0x70
    str r7, [sp, #0x68]
    mov r0, r9
    str r4, [sp, #0x5c]
    str r4, [sp, #0x64]
    str r6, [sp, #0x4c]
    str r6, [sp, #0x54]
    str r8, [sp, #0xf4]
    str r4, [sp, #0x104]
    str r4, [sp, #0x10c]
    str r8, [sp, #0x3c]
    str r4, [sp, #0x2c]
    str r4, [sp, #0x34]
    str r8, [sp, #0x84]
    str r4, [sp, #0x94]
    str r4, [sp, #0x9c]
    str r7, [sp, #0x110]
    str r6, [sp, #0x114]
    str r6, [sp, #0x11c]
    str r7, [sp, #0x38]
    str r7, [sp, #0xa0]
    strb r5, [sp]
    bl _ZN17UnkDeque_0207076c13func_02071214Ev
@L_02070cf8:
    ldr r2, [r10, #8]
    ldr r1, [r9]
    add r0, sp, #0x124
    str r1, [r10, #8]
    str r2, [r9]
    ldr r2, [r10, #0xc]
    ldr r1, [r9, #4]
    str r1, [r10, #0xc]
    str r2, [r9, #4]
    ldr r2, [r10, #0x10]
    ldr r1, [r9, #8]
    str r1, [r10, #0x10]
    str r2, [r9, #8]
    ldr r2, [r10, #0x14]
    ldr r1, [r9, #0xc]
    str r1, [r10, #0x14]
    ldr r1, [r9, #8]
    str r2, [r9, #0xc]
    sub r1, r1, r1
    str r1, [r9, #8]
    bl _ZN17UnkDeque_0207076c13func_02071c68Ev
    add sp, sp, #0x13c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02070d64()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r3, #0
    str r3, [r5, #4]
    cmp r0, #0
    beq @L_02070e20
    ldr r1, [r5, #0x14]
    cmp r1, #0
    beq @L_02070da4
    ldr r2, [r5, #0xc]
    ldr r0, [r5, #0x10]
    add r0, r2, r0
    bl _u32_div_f
    mov r3, r1
@L_02070da4:
    ldr r2, [r5, #8]
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x14]
    add r1, r2, r1, lsl #2
    add r0, r2, r0, lsl #2
    add r4, r2, r3, lsl #2
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    str r1, [sp, #4]
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    cmp r1, r4
    beq @L_02070e20
@L_02070de4:
    ldr r0, [sp, #4]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02070df8
    bl _ZdlPv
@L_02070df8:
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x10]
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [sp, #8]
    str r1, [sp, #4]
    streq r0, [sp, #4]
    ldr r0, [sp, #4]
    cmp r0, r4
    bne @L_02070de4
@L_02070e20:
    add r0, r5, #8
    bl _ZN23UnkDequeBuffer_0207076c13func_020720b0Ev
    mov r0, r5
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}

void UnkDeque_0207076c::func_02070e34(const char *message)
{
    func_0201a508(message);
    abort();
}

asm void UnkDeque_0207076c::func_02070e44()
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x38
    mov r6, r0
    ldr r0, [r6, #0xc]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    cmp r1, r0
    addls sp, sp, #0x38
    ldmlsia sp!, {r4, r5, r6, pc}
    mov r4, #0
    add r0, r6, #0xc
    str r0, [sp, #0x34]
    str r4, [sp, #0x24]
    str r4, [sp, #0x28]
    str r4, [sp, #0x2c]
    str r4, [sp, #0x30]
    sub r0, sp, #4
    strb r4, [r0]
    ldr r2, [r0]
    add r0, sp, #0x24
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r1, [r6, #0xc]
    cmp r1, #0
    beq @L_02070ebc
    ldr r2, [r6, #4]
    ldr r0, [r6, #8]
    add r0, r2, r0
    bl _u32_div_f
    mov r4, r1
@L_02070ebc:
    ldr r2, [r6]
    mov r5, #0
    add r0, r2, r4, lsl #2
    str r2, [sp, #8]
    str r0, [sp, #4]
    ldr r0, [r6, #4]
    add r4, sp, #0x24
    add r1, r2, r0, lsl #2
    str r1, [sp, #0xc]
    ldr r0, [r6, #0xc]
    add r0, r2, r0, lsl #2
    str r2, [sp, #0x18]
    str r0, [sp, #0x10]
    str r0, [sp, #0x20]
    str r1, [sp, #0x14]
    str r1, [sp, #0x1c]
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    add r1, sp, #0x14
    add r2, sp, #4
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071fb0Ev
    str r5, [r6, #8]
    ldr r1, [r6]
    ldr r0, [sp, #0x24]
    add r3, sp, #0x30
    str r0, [r6]
    str r1, [sp, #0x24]
    ldr r2, [r6, #4]
    ldr r1, [sp, #0x28]
    mov r0, r4
    str r1, [r6, #4]
    ldr r1, [sp, #0x2c]
    str r2, [sp, #0x28]
    str r1, [r6, #8]
    str r5, [sp, #0x2c]
    ldr r2, [r6, #0xc]
    ldr r1, [r3]
    str r1, [r6, #0xc]
    str r2, [r3]
    bl _ZN23UnkDequeBuffer_0207076c13func_02071df8Ev
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_02070f6c()
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x38
    mov r6, r0
    ldr r3, [r6, #8]
    mov r4, r1
    ldr r1, [r6, #0xc]
    add r2, r3, #1
    cmp r2, r1
    bhs @L_02070fc0
    ldr r0, [r6, #4]
    add r0, r0, r3
    bl _u32_div_f
    ldr r0, [r6]
    add sp, sp, #0x38
    adds r1, r0, r1, lsl #2
    ldrne r0, [r4]
    strne r0, [r1]
    ldr r0, [r6, #8]
    add r0, r0, #1
    str r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02070fc0:
    mov r5, #0
    add r2, r6, #0xc
    mov r1, #1
    str r5, [sp, #0x24]
    str r5, [sp, #0x28]
    str r5, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r2, [sp, #0x34]
    bl _ZN17UnkDeque_0207076c13func_020710f0Ev
    mov r1, r0
    sub r0, sp, #4
    strb r5, [r0]
    ldr r2, [r0]
    add r0, sp, #0x24
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r1, [r6, #8]
    ldr r0, [sp, #0x24]
    str r1, [sp, #0x28]
    adds r1, r0, r1, lsl #2
    ldrne r0, [r4]
    strne r0, [r1]
    ldr r0, [sp, #0x2c]
    add r0, r0, #1
    str r0, [sp, #0x2c]
    ldr r1, [r6, #0xc]
    cmp r1, #0
    moveq r1, #0
    beq @L_02071040
    ldr r2, [r6, #4]
    ldr r0, [r6, #8]
    add r0, r2, r0
    bl _u32_div_f
@L_02071040:
    ldr r2, [r6]
    mov r5, #0
    add r0, r2, r1, lsl #2
    str r2, [sp, #8]
    str r0, [sp, #4]
    ldr r0, [r6, #4]
    add r4, sp, #0x24
    add r1, r2, r0, lsl #2
    str r1, [sp, #0xc]
    ldr r0, [r6, #0xc]
    add r0, r2, r0, lsl #2
    str r2, [sp, #0x18]
    str r0, [sp, #0x10]
    str r0, [sp, #0x20]
    str r1, [sp, #0x14]
    str r1, [sp, #0x1c]
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    add r1, sp, #0x14
    add r2, sp, #4
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071ea8Ev
    str r5, [r6, #8]
    ldr r1, [r6]
    ldr r0, [sp, #0x24]
    add r3, sp, #0x30
    str r0, [r6]
    str r1, [sp, #0x24]
    ldr r2, [r6, #4]
    ldr r1, [sp, #0x28]
    mov r0, r4
    str r1, [r6, #4]
    ldr r1, [sp, #0x2c]
    str r2, [sp, #0x28]
    str r1, [r6, #8]
    str r5, [sp, #0x2c]
    ldr r2, [r6, #0xc]
    ldr r1, [r3]
    str r1, [r6, #0xc]
    str r2, [r3]
    bl _ZN23UnkDequeBuffer_0207076c13func_02071df8Ev
    add sp, sp, #0x38
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_020710f0()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r2, =data_020fc6fc
    mov r5, #0
    ldr r3, [r2]
    tst r3, #1
    orreq r3, r3, #1
    ldreq r1, =data_020aeb88
    mvneq r4, #0xc0000001
    streq r3, [r2]
    streq r4, [r1]
    ldr r1, [r0, #0xc]
    ldr r0, =data_020aeb88
    cmp r1, #0
    subne r5, r1, #1
    ldr r4, [r0]
    ldr r1, [sp, #0x1c]
    sub r0, r4, r5
    cmp r1, r0
    bls @L_02071148
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_02071148:
    ldr r0, =0xaaaaaaab
    umull r0, r1, r4, r0
    mov r1, r1, lsr #1
    cmp r5, r1
    bhs @L_0207119c
    add r1, r5, #1
    ldr r0, =0xcccccccd
    add r1, r1, r1, lsl #1
    umull r0, r2, r1, r0
    mov r2, r2, lsr #2
    ldr r0, [sp, #0x1c]
    str r2, [sp, #4]
    cmp r0, r2
    addhi r0, sp, #0x1c
    addls r0, sp, #4
    ldr r0, [r0]
    add sp, sp, #8
    add r0, r5, r0
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_0207119c:
    cmp r5, r1, lsl #1
    bhs @L_020711d8
    ldr r0, [sp, #0x1c]
    add r1, r5, #1
    mov r2, r1, lsr #1
    cmp r0, r1, lsr #1
    addhi r0, sp, #0x1c
    str r2, [sp]
    addls r0, sp, #0
    ldr r0, [r0]
    add sp, sp, #8
    add r0, r5, r0
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
@L_020711d8:
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}

void UnkDeque_0207076c::func_020711fc()
{
    func_0201a508(data_020af248);
    abort();
}

asm void UnkDeque_0207076c::func_02071214()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1b4
    mov r9, r2
    mov r8, r3
    ldrb r2, [r9, #0x10]
    ldrb r7, [r8, #0x10]
    mov r10, r0
    str r1, [sp]
    ldr r0, [r8, #8]
    ldr r1, [r8, #0xc]
    ldr r6, [r9]
    ldr r5, [r9, #4]
    ldr r4, [r9, #8]
    ldr r3, [r9, #0xc]
    ldr r12, [r8]
    ldr r11, [r8, #4]
    str r0, [sp, #0x170]
    str r0, [sp, #0x74]
    str r1, [sp, #0x174]
    str r1, [sp, #0x78]
    add r0, sp, #0x6c
    add r1, sp, #0x58
    str r12, [sp, #0x168]
    str r11, [sp, #0x16c]
    strb r7, [sp, #0x178]
    str r6, [sp, #0x17c]
    str r5, [sp, #0x180]
    strb r2, [sp, #0x18c]
    str r4, [sp, #0x184]
    str r12, [sp, #0x6c]
    str r11, [sp, #0x70]
    strb r7, [sp, #0x7c]
    str r3, [sp, #0x188]
    str r6, [sp, #0x58]
    str r5, [sp, #0x5c]
    str r4, [sp, #0x60]
    str r3, [sp, #0x64]
    strb r2, [sp, #0x68]
    bl _ZNK25UnkDequeIterator_0207076c13func_02072128ERKS_
    movs r4, r0
    addeq sp, sp, #0x1b4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp]
    ldr r3, [r10]
    ldr r1, [r10, #4]
    ldr r2, [r0]
    add r7, r3, r1, lsl #2
    sub r1, r2, r7
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    cmp r2, r7
    mov r5, r0, asr #2
    ldrlo r0, [r10, #0xc]
    mov r6, #0
    addlo r5, r5, r0
    ldr r0, [r10, #0xc]
    cmp r0, #0
    moveq r0, #0
    subne r0, r0, #1
    cmp r4, r0
    ldrls r2, [r10, #8]
    subls r0, r0, r4
    cmpls r2, r0
    bhi @L_020715f0
    str r7, [sp, #0x1a4]
    ldr r6, [r10]
    sub r0, r2, r5
    str r0, [sp, #8]
    str r6, [sp, #0x1a8]
    ldr r1, [sp, #8]
    ldr r0, [r10, #4]
    cmp r5, r1
    add r1, r6, r0, lsl #2
    str r1, [sp, #4]
    str r1, [sp, #0x1ac]
    ldr r1, [r10, #0xc]
    add r11, r6, r1, lsl #2
    str r11, [sp, #0x1b0]
    bhs @L_02071434
    add r0, sp, #0x1a4
    rsb r1, r4, #0
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r0, [r10, #8]
    ldr r3, [sp, #0x1a4]
    ldr r2, [r10]
    add r1, r0, r4
    sub r2, r3, r2
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r0, r0, asr #2
    stmib r10, {r0, r1}
    cmp r5, #0
    beq @L_02071564
    ldr r2, [sp, #0x1b0]
    ldr r10, [sp, #0x1a4]
    ldr r4, [sp, #0x1a8]
    ldr r3, [sp, #0x1ac]
    str r2, [sp, #0x134]
    ldr r2, [sp, #4]
    add r0, sp, #0x48
    mov r1, r5
    str r10, [sp, #0x128]
    str r4, [sp, #0x12c]
    str r3, [sp, #0x130]
    str r7, [sp, #0x48]
    str r6, [sp, #0x4c]
    str r2, [sp, #0x50]
    str r11, [sp, #0x54]
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r2, [r0]
    add r1, sp, #0x148
    str r2, [sp, #0x138]
    ldr r3, [r0, #4]
    add r2, sp, #0x138
    str r3, [sp, #0x13c]
    ldr r4, [r0, #8]
    add r3, sp, #0x128
    str r4, [sp, #0x140]
    ldr r4, [r0, #0xc]
    add r0, sp, #0x158
    str r4, [sp, #0x144]
    ldr r4, [sp, #4]
    str r7, [sp, #0x148]
    str r6, [sp, #0x14c]
    str r4, [sp, #0x150]
    str r11, [sp, #0x154]
    bl _ZN17UnkDeque_0207076c13func_02071b00Ev
    ldr r3, [sp, #0x158]
    ldr r2, [sp, #0x15c]
    ldr r1, [sp, #0x160]
    ldr r0, [sp, #0x164]
    str r3, [sp, #0x1a4]
    str r2, [sp, #0x1a8]
    str r1, [sp, #0x1ac]
    str r0, [sp, #0x1b0]
    b @L_02071564
@L_02071434:
    add r2, r2, r4
    cmp r1, #0
    str r2, [r10, #8]
    moveq r1, #0
    beq @L_02071450
    add r0, r0, r2
    bl _u32_div_f
@L_02071450:
    ldr r5, [r10]
    ldr r2, [r10, #4]
    ldr r0, [r10, #0xc]
    add r3, r5, r2, lsl #2
    add r2, r5, r0, lsl #2
    ldr r0, [sp, #8]
    add r1, r5, r1, lsl #2
    str r1, [sp, #0x1a4]
    str r5, [sp, #0x1a8]
    str r3, [sp, #0x1ac]
    str r2, [sp, #0x1b0]
    cmp r0, #0
    beq @L_02071558
    add r0, sp, #0x28
    str r1, [sp, #0xe8]
    str r1, [sp, #0x28]
    str r5, [sp, #0xec]
    str r3, [sp, #0xf0]
    str r2, [sp, #0xf4]
    str r5, [sp, #0x2c]
    str r3, [sp, #0x30]
    str r2, [sp, #0x34]
    rsb r1, r4, #0
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r2, [r0]
    ldr r1, [sp, #8]
    str r2, [sp, #0xf8]
    ldr r2, [r0, #4]
    add r1, r4, r1
    str r2, [sp, #0xfc]
    ldr r2, [r0, #8]
    ldr r6, [sp, #0x1a4]
    str r2, [sp, #0x100]
    ldr r7, [r0, #0xc]
    ldr r5, [sp, #0x1a8]
    ldr r3, [sp, #0x1ac]
    ldr r2, [sp, #0x1b0]
    add r0, sp, #0x38
    str r7, [sp, #0x104]
    str r6, [sp, #0x38]
    str r5, [sp, #0x3c]
    str r3, [sp, #0x40]
    str r2, [sp, #0x44]
    rsb r1, r1, #0
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r2, [r0]
    add r1, sp, #0x108
    str r2, [sp, #0x108]
    ldr r3, [r0, #4]
    add r2, sp, #0xf8
    str r3, [sp, #0x10c]
    ldr r5, [r0, #8]
    add r3, sp, #0xe8
    str r5, [sp, #0x110]
    ldr r5, [r0, #0xc]
    add r0, sp, #0x118
    str r5, [sp, #0x114]
    bl _ZN17UnkDeque_0207076c13func_02071978Ev
    ldr r0, [sp, #0x118]
    ldr r2, [sp, #0x11c]
    ldr r1, [sp, #0x120]
    str r0, [sp, #0x1a4]
    ldr r0, [sp, #0x124]
    str r2, [sp, #0x1a8]
    str r1, [sp, #0x1ac]
    str r0, [sp, #0x1b0]
@L_02071558:
    add r0, sp, #0x1a4
    rsb r1, r4, #0
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
@L_02071564:
    ldrb r0, [r8, #0x10]
    ldr r10, [sp, #0x1a4]
    ldr r7, [sp, #0x1a8]
    ldr r6, [sp, #0x1ac]
    ldr r5, [sp, #0x1b0]
    ldr r4, [r8]
    ldr r3, [r8, #4]
    ldr r2, [r8, #8]
    ldr r1, [r8, #0xc]
    strb r0, [sp, #0xc0]
    str r10, [sp, #0xa0]
    str r7, [sp, #0xa4]
    str r6, [sp, #0xa8]
    str r5, [sp, #0xac]
    str r4, [sp, #0xb0]
    str r3, [sp, #0xb4]
    str r2, [sp, #0xb8]
    str r1, [sp, #0xbc]
    ldr r1, [r9]
    add r0, sp, #0xd8
    str r1, [sp, #0xc4]
    ldr r2, [r9, #4]
    add r1, sp, #0xc4
    str r2, [sp, #0xc8]
    ldr r3, [r9, #8]
    add r2, sp, #0xb0
    str r3, [sp, #0xcc]
    ldr r4, [r9, #0xc]
    add r3, sp, #0xa0
    str r4, [sp, #0xd0]
    ldrb r4, [r9, #0x10]
    strb r4, [sp, #0xd4]
    bl _ZN17UnkDeque_0207076c13func_020717acEv
    add sp, sp, #0x1b4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020715f0:
    add r2, r10, #0xc
    mov r0, r10
    mov r1, r4
    str r6, [sp, #0x190]
    str r6, [sp, #0x194]
    str r6, [sp, #0x198]
    str r6, [sp, #0x19c]
    str r2, [sp, #0x1a0]
    bl _ZN17UnkDeque_0207076c13func_020710f0Ev
    mov r1, r0
    and r2, r6, #0xff
    sub r0, sp, #4
    strb r2, [r0]
    ldr r2, [r0]
    add r0, sp, #0x190
    bl _ZN17UnkDeque_0207076c13func_02071e2cEv
    ldr r0, [sp, #0x190]
    str r5, [sp, #0x194]
    cmp r4, #0
    add r0, r0, r5, lsl #2
    beq @L_020716a8
@L_02071644:
    ldr r5, [r9]
    ldr r1, [r9, #0xc]
    ldr r3, [r9, #4]
    ldr r2, [r9, #8]
    str r1, [sp, #0x24]
    ldr r1, [r5]
    cmp r0, #0
    strne r1, [r0]
    ldr r1, [sp, #0x198]
    str r2, [sp, #0x20]
    add r1, r1, #1
    str r1, [sp, #0x198]
    ldr r2, [r9]
    ldr r1, [r9, #0xc]
    add r2, r2, #4
    cmp r2, r1
    ldreq r1, [r9, #4]
    str r2, [r9]
    sub r4, r4, #1
    streq r1, [r9]
    str r5, [sp, #0x18]
    str r3, [sp, #0x1c]
    add r0, r0, #4
    cmp r4, #0
    bne @L_02071644
@L_020716a8:
    ldr r1, [r10, #0xc]
    cmp r1, #0
    moveq r1, #0
    beq @L_020716c8
    ldr r2, [r10, #4]
    ldr r0, [r10, #8]
    add r0, r2, r0
    bl _u32_div_f
@L_020716c8:
    ldr r2, [r10]
    add r4, sp, #0x190
    add r0, r2, r1, lsl #2
    str r2, [sp, #0x94]
    str r0, [sp, #0x90]
    ldr r0, [r10, #4]
    sub r1, sp, #4
    add r0, r2, r0, lsl #2
    str r0, [sp, #0x98]
    ldr r0, [r10, #0xc]
    add r0, r2, r0, lsl #2
    str r0, [sp, #0x9c]
    and r0, r6, #0xff
    strb r0, [r1]
    ldr r3, [r1]
    ldr r1, [sp]
    add r2, sp, #0x90
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071fb0Ev
    ldr r3, [r10]
    ldr r0, [r10, #4]
    sub r1, sp, #4
    add r0, r3, r0, lsl #2
    str r0, [sp, #0x80]
    str r0, [sp, #0x88]
    str r3, [sp, #0x84]
    ldr r2, [r10, #0xc]
    and r0, r6, #0xff
    add r2, r3, r2, lsl #2
    str r2, [sp, #0x8c]
    strb r0, [r1]
    ldr r3, [r1]
    ldr r2, [sp]
    add r1, sp, #0x80
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02071ea8Ev
    str r6, [r10, #8]
    ldr r1, [r10]
    ldr r0, [sp, #0x190]
    add r3, sp, #0x19c
    str r0, [r10]
    str r1, [sp, #0x190]
    ldr r2, [r10, #4]
    ldr r1, [sp, #0x194]
    mov r0, r4
    str r1, [r10, #4]
    ldr r1, [sp, #0x198]
    str r2, [sp, #0x194]
    str r1, [r10, #8]
    str r6, [sp, #0x198]
    ldr r2, [r10, #0xc]
    ldr r1, [r3]
    str r1, [r10, #0xc]
    str r2, [r3]
    bl _ZN23UnkDequeBuffer_0207076c13func_02071df8Ev
    add sp, sp, #0x1b4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_020717ac()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    mov r6, r1
    ldr r7, [r6]
    ldr r4, [r2]
    mov r11, r0
    mov r5, r3
    cmp r7, r4
    beq @L_02071950
    mov r0, r2
    bl _ZNK25UnkDequeIterator_0207076c13func_02072128ERKS_
    str r0, [sp, #0xc]
@L_020717dc:
    ldr r2, [r5, #0xc]
    ldr r0, [r5]
    ldr r1, [sp, #0xc]
    sub r2, r2, r0
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r2, r0, asr #2
    cmp r1, r0, asr #2
    addle r0, sp, #0xc
    str r2, [sp, #8]
    addgt r0, sp, #8
    ldr r4, [r0]
    ldr r1, [r6]
    add r0, sp, #0x20
    str r1, [sp, #0x20]
    ldr r2, [r6, #4]
    mov r1, r4
    str r2, [sp, #0x24]
    ldr r2, [r6, #8]
    str r2, [sp, #0x28]
    ldr r2, [r6, #0xc]
    str r2, [sp, #0x2c]
    ldrb r2, [r6, #0x10]
    strb r2, [sp, #0x30]
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldrb r12, [sp, #0x30]
    ldr r9, [sp, #0x20]
    ldr r8, [sp, #0x24]
    ldr r7, [sp, #0x28]
    ldr lr, [sp, #0x2c]
    ldr r10, [r6]
    ldrb r0, [r6, #0x10]
    ldr r3, [r6, #4]
    ldr r2, [r6, #8]
    ldr r1, [r6, #0xc]
    str r3, [sp, #0x4c]
    strb r12, [sp, #0x6c]
    str r9, [sp, #0x5c]
    str r8, [sp, #0x60]
    str r7, [sp, #0x64]
    str r7, [sp, #0x3c]
    str lr, [sp, #0x68]
    str r9, [sp, #0x34]
    str r8, [sp, #0x38]
    str lr, [sp, #0x40]
    strb r12, [sp, #0x44]
    str r10, [sp, #0x48]
    str r2, [sp, #0x50]
    str r1, [sp, #0x54]
    strb r0, [sp, #0x58]
    cmp r10, r9
    ldr r7, [r5]
    add r3, sp, #0x48
    beq @L_020718fc
@L_020718b4:
    ldr r8, [r3]
    ldr r2, [r3, #4]
    ldr r0, [r3, #0xc]
    add r8, r8, #4
    str r8, [r3]
    cmp r8, r0
    ldr r1, [r3, #8]
    ldr r12, [r10]
    streq r2, [r3]
    str r10, [sp, #0x10]
    ldr r10, [r3]
    str r12, [r7]
    str r2, [sp, #0x14]
    str r1, [sp, #0x18]
    str r0, [sp, #0x1c]
    add r7, r7, #4
    cmp r10, r9
    bne @L_020718b4
@L_020718fc:
    ldr r0, [sp, #0xc]
    sub r1, r4, #1
    sub r0, r0, r4
    str r0, [sp, #0xc]
    ldr r2, [r5]
    ldr r0, [r5, #0xc]
    add r1, r2, r1, lsl #2
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [r5, #4]
    str r1, [r5]
    streq r0, [r5]
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02071950
    add r0, sp, #0x5c
    ldmia r0, {r0, r1, r2, r3}
    stmia r6, {r0, r1, r2, r3}
    ldrb r4, [sp, #0x6c]
    strb r4, [r6, #0x10]
    b @L_020717dc
@L_02071950:
    ldr r0, [r5]
    str r0, [r11]
    ldr r0, [r5, #4]
    str r0, [r11, #4]
    ldr r0, [r5, #8]
    str r0, [r11, #8]
    ldr r0, [r5, #0xc]
    str r0, [r11, #0xc]
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071978()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r1
    mov r8, r2
    ldr r2, [r8]
    ldr r1, [r9]
    mov r10, r0
    mov r7, r3
    cmp r1, r2
    beq @L_02071ad8
    add r4, sp, #8
    mov r11, #0
    mov r5, #1
@L_020719ac:
    ldr r0, [r8, #4]
    mov r6, r5
    cmp r2, r0
    ldreq r0, [r8, #0xc]
    mov r12, #1
    streq r0, [r8]
    ldr r0, [r8]
    sub r0, r0, #4
    str r0, [r8]
    ldr r1, [r7]
    ldr r0, [r7, #4]
    cmp r1, r0
    ldreq r0, [r7, #0xc]
    ldr r1, [r7, #8]
    streq r0, [r7]
    ldr r0, [r7]
    sub r0, r0, #4
    cmp r0, r1
    ldrlo r1, [r7, #4]
    str r0, [r7]
    sub r1, r0, r1
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    str r0, [sp, #8]
    ldr r3, [r9]
    ldr r2, [r9, #8]
    ldr r1, [r8, #8]
    cmp r3, r2
    ldr r2, [r8]
    movlo r6, r11
    cmp r2, r1
    movlo r12, #0
    cmp r6, r12
    bne @L_02071a5c
    sub r2, r2, r3
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp, #4]
    addge r0, sp, #4
    b @L_02071a84
@L_02071a5c:
    cmp r2, r1
    ldrlo r1, [r8, #4]
    sub r2, r2, r1
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp]
    addge r0, sp, #0
@L_02071a84:
    ldr r6, [r0]
    ldr r1, [r8]
    add r0, r6, #1
    sub r1, r1, r6, lsl #2
    mov r2, r0, lsl #2
    str r1, [r8]
    ldr r3, [r7]
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    add r3, r3, #4
    mov r2, r0, asr #2
    sub r0, r3, r2, lsl #2
    mov r2, r2, lsl #2
    bl memmove
    ldr r0, [r7]
    sub r0, r0, r6, lsl #2
    str r0, [r7]
    ldr r2, [r8]
    ldr r0, [r9]
    cmp r0, r2
    bne @L_020719ac
@L_02071ad8:
    ldr r0, [r7]
    str r0, [r10]
    ldr r0, [r7, #4]
    str r0, [r10, #4]
    ldr r0, [r7, #8]
    str r0, [r10, #8]
    ldr r0, [r7, #0xc]
    str r0, [r10, #0xc]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071b00()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r9, r1
    mov r8, r2
    ldr r2, [r9]
    ldr r1, [r8]
    mov r10, r0
    mov r7, r3
    cmp r2, r1
    beq @L_02071c40
    add r4, sp, #8
    mov r11, #0
    mov r5, #1
@L_02071b34:
    ldr r1, [r7, #0xc]
    ldr r0, [r7]
    mov r6, r5
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    str r0, [sp, #8]
    ldr r2, [r9]
    ldr r1, [r9, #8]
    ldr r3, [r8]
    cmp r2, r1
    ldr r1, [r8, #8]
    movlo r6, r11
    cmp r3, r1
    movhs r1, #1
    movlo r1, #0
    cmp r6, r1
    bne @L_02071ba4
    sub r2, r3, r2
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp, #4]
    addge r0, sp, #4
    b @L_02071bc8
@L_02071ba4:
    ldr r1, [r9, #0xc]
    sub r2, r1, r2
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    movlt r0, r4
    str r2, [sp]
    addge r0, sp, #0
@L_02071bc8:
    ldr r6, [r0]
    mov r1, r6, lsl #2
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    mov r0, r0, asr #2
    mov r2, r0, lsl #2
    ldr r1, [r9]
    ldr r0, [r7]
    bl memmove
    ldr r1, [r9]
    sub r0, r6, #1
    add r1, r1, r0, lsl #2
    add r2, r1, #4
    ldr r1, [r9, #0xc]
    str r2, [r9]
    cmp r2, r1
    ldreq r1, [r9, #4]
    streq r1, [r9]
    ldr r2, [r7]
    ldr r1, [r7, #0xc]
    add r0, r2, r0, lsl #2
    add r0, r0, #4
    str r0, [r7]
    cmp r0, r1
    ldreq r0, [r7, #4]
    streq r0, [r7]
    ldr r1, [r9]
    ldr r0, [r8]
    cmp r1, r0
    bne @L_02071b34
@L_02071c40:
    ldr r0, [r7]
    str r0, [r10]
    ldr r0, [r7, #4]
    str r0, [r10, #4]
    ldr r0, [r7, #8]
    str r0, [r10, #8]
    ldr r0, [r7, #0xc]
    str r0, [r10, #0xc]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void UnkDeque_0207076c::func_02071c68()
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x24
    mov r5, r0
    ldr r0, [r5, #0x10]
    mov r3, #0
    str r3, [r5, #4]
    cmp r0, #0
    beq @L_02071d24
    ldr r1, [r5, #0x14]
    cmp r1, #0
    beq @L_02071ca8
    ldr r2, [r5, #0xc]
    ldr r0, [r5, #0x10]
    add r0, r2, r0
    bl _u32_div_f
    mov r3, r1
@L_02071ca8:
    ldr r2, [r5, #8]
    ldr r1, [r5, #0xc]
    ldr r0, [r5, #0x14]
    add r1, r2, r1, lsl #2
    add r0, r2, r0, lsl #2
    add r4, r2, r3, lsl #2
    str r4, [sp, #0x14]
    str r2, [sp, #0x18]
    str r1, [sp, #0x1c]
    str r0, [sp, #0x20]
    str r1, [sp, #4]
    str r2, [sp, #8]
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
    cmp r1, r4
    beq @L_02071d24
@L_02071ce8:
    ldr r0, [sp, #4]
    ldr r0, [r0]
    cmp r0, #0
    beq @L_02071cfc
    bl _ZdlPv
@L_02071cfc:
    ldr r1, [sp, #4]
    ldr r0, [sp, #0x10]
    add r1, r1, #4
    cmp r1, r0
    ldreq r0, [sp, #8]
    str r1, [sp, #4]
    streq r0, [sp, #4]
    ldr r0, [sp, #4]
    cmp r0, r4
    bne @L_02071ce8
@L_02071d24:
    add r0, r5, #8
    bl _ZN23UnkDequeBuffer_0207076c13func_020720b0Ev
    mov r0, r5
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, pc}
}

asm UnkDequePos_0207076c UnkDeque_0207076c::func_02071d38(u32 index)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x30
    mov r5, r1
    ldr lr, [r5, #8]
    ldr r3, [r5, #0xc]
    ldr r1, [r5, #0x14]
    add r12, lr, r3, lsl #2
    ldr r7, [r5]
    add r3, lr, r1, lsl #2
    mov r4, r2
    add r4, r4, r7
    mov r6, r0
    add r0, sp, #0
    str r12, [sp]
    str lr, [sp, #4]
    str r12, [sp, #8]
    str r3, [sp, #0xc]
    mov r1, r4, lsr #8
    str r12, [sp, #0x10]
    str lr, [sp, #0x14]
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl _ZN25UnkDequeIterator_0207076c13func_020720e4Ei
    ldr r0, [r5, #0x10]
    ldr r12, [sp]
    ldr r3, [sp, #4]
    ldr r2, [sp, #8]
    ldr r1, [sp, #0xc]
    cmp r0, #0
    mov r5, #0
    str r3, [sp, #0x24]
    str r2, [sp, #0x28]
    str r1, [sp, #0x2c]
    str r12, [sp, #0x20]
    mov r0, r4, lsl #0x18
    ldrne r5, [r12]
    ldr r4, [sp, #0x20]
    ldr r3, [sp, #0x24]
    ldr r2, [sp, #0x28]
    ldr r1, [sp, #0x2c]
    add r0, r5, r0, lsr #22
    str r4, [r6]
    str r3, [r6, #4]
    str r2, [r6, #8]
    str r1, [r6, #0xc]
    str r0, [r6, #0x10]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

// (clears the buffer: the count goes through a reference, which keeps the subtraction)
static inline void UnkDeque_Erase(UnkDequeBuffer_0207076c *b, const int &n) { b->size -= n; }

// (nonmatching: the original keeps 4 unused stack bytes (push r3, sub sp); the body is the same)
#ifdef NONMATCHING
UnkDequeBuffer_0207076c *UnkDequeBuffer_0207076c::func_02071df8()
{
    if (data != NULL) {
        UnkDeque_Erase(this, size);
        ::operator delete(data);
    }
    return this;
}
#else
asm UnkDequeBuffer_0207076c *UnkDequeBuffer_0207076c::func_02071df8()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02071e20
    ldr r1, [r4, #8]
    sub r1, r1, r1
    str r1, [r4, #8]
    bl _ZdlPv
@L_02071e20:
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
#endif

asm void UnkDeque_0207076c::func_02071e2c()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =data_020fc6f8
    mov r5, r0
    ldr r3, [r2]
    mov r4, r1
    tst r3, #1
    orreq r1, r3, #1
    ldreq r0, =data_020aeb8c
    mvneq r3, #0xc0000001
    streq r3, [r0]
    ldr r0, =data_020aeb8c
    streq r1, [r2]
    ldr r0, [r0]
    cmp r4, r0
    bls @L_02071e6c
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_02071e6c:
    add r0, r4, #1
    mov r0, r0, lsl #2
    bl _Znwm
    movs r6, r0
    bne @L_02071e8c
    ldr r0, =data_020aed90
    bl func_0201a508
    bl abort
@L_02071e8c:
    add r0, r4, #1
    str r6, [r5]
    str r0, [r5, #0xc]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void UnkDeque_0207076c::func_02071ea8()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    ldr r3, [r7]
    ldr r0, [r7, #4]
    ldr r2, [r5]
    ldr r1, [r6]
    add r0, r3, r0, lsl #2
    cmp r1, r2
    bhi @L_02071f1c
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r3, r2, asr #2
    mov r2, r3, lsl #2
    sub r0, r0, r3, lsl #2
    bl memmove
    ldr r1, [r5]
    ldr r0, [r6]
    ldr r2, [r7, #8]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    ldr r1, [r7, #4]
    add r2, r2, r0, asr #2
    sub r0, r1, r0, asr #2
    stmib r7, {r0, r2}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02071f1c:
    ldr r1, [r5, #4]
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r2, r2, asr #2
    sub r4, r0, r2, lsl #2
    mov r0, r4
    mov r2, r2, lsl #2
    bl memmove
    ldr r1, [r6]
    ldr r0, [r6, #0xc]
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r0, r0, asr #2
    mov r2, r0, lsl #2
    sub r0, r4, r0, lsl #2
    bl memmove
    ldr r1, [r6, #0xc]
    ldr r0, [r6]
    ldr r4, [r5]
    ldr r3, [r5, #4]
    sub r2, r1, r0
    sub r3, r4, r3
    mov r1, r2, asr #1
    mov r0, r3, asr #1
    add r1, r2, r1, lsr #30
    add r0, r3, r0, lsr #30
    mov r2, r1, asr #2
    ldr r1, [r7, #4]
    add r2, r2, r0, asr #2
    ldr r0, [r7, #8]
    sub r1, r1, r2
    add r0, r0, r2
    str r1, [r7, #4]
    str r0, [r7, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void UnkDeque_0207076c::func_02071fb0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    ldr r3, [r7, #4]
    ldr r0, [r7, #8]
    mov r6, r1
    ldr r1, [r7, #0xc]
    add r0, r3, r0
    mov r5, r2
    bl _u32_div_f
    ldr r2, [r7]
    ldr r0, [r5]
    add r4, r2, r1, lsl #2
    ldr r1, [r6]
    cmp r1, r0
    bhi @L_0207202c
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r2, r0, asr #2
    mov r0, r4
    mov r2, r2, lsl #2
    bl memmove
    ldr r1, [r5]
    ldr r0, [r6]
    ldr r2, [r7, #8]
    sub r1, r1, r0
    mov r0, r1, asr #1
    add r0, r1, r0, lsr #30
    add r0, r2, r0, asr #2
    str r0, [r7, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207202c:
    ldr r2, [r6, #0xc]
    mov r0, r4
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r8, r2, asr #2
    mov r2, r8, lsl #2
    bl memmove
    ldr r1, [r5, #4]
    ldr r2, [r5]
    add r0, r4, r8, lsl #2
    sub r3, r2, r1
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r2, r2, asr #2
    mov r2, r2, lsl #2
    bl memmove
    ldr r1, [r5]
    ldr r0, [r5, #4]
    ldr r4, [r6, #0xc]
    ldr r3, [r6]
    sub r2, r1, r0
    sub r3, r4, r3
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r0, r3, asr #1
    add r0, r3, r0, lsr #30
    mov r1, r1, asr #2
    ldr r2, [r7, #8]
    add r0, r1, r0, asr #2
    add r0, r2, r0
    str r0, [r7, #8]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

// (nonmatching: the original keeps 4 unused stack bytes (push r3, sub sp); the body is the same)
#ifdef NONMATCHING
UnkDequeBuffer_0207076c *UnkDequeBuffer_0207076c::func_020720b0()
{
    if (data != NULL) {
        UnkDeque_Erase(this, size);
        ::operator delete(data);
    }
    return this;
}
#else
asm UnkDequeBuffer_0207076c *UnkDequeBuffer_0207076c::func_020720b0()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_020720d8
    ldr r1, [r4, #8]
    sub r1, r1, r1
    str r1, [r4, #8]
    bl _ZdlPv
@L_020720d8:
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
#endif

void UnkDequeIterator_0207076c::func_020720e4(int n)
{
    int size = end - begin;

    n += cur - begin;
    if (n < 0) {
        n += size;
    } else if (n >= size) {
        n -= size;
    }
    cur = begin + n;
}

int UnkDequeIterator_0207076c::func_02072128(const UnkDequeIterator_0207076c &other) const
{
    int n;
    void **s = start;

    n = cur - other.cur;
    if (cur >= s) {
        if (other.cur < s) {
            n -= end - begin;
        }
    } else if (other.cur >= s) {
        n += end - begin;
    }
    return n;
}

asm void UnkDeque_0207076c::func_0207219c()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    ldr r1, [sp, #0x4c]
    mov r4, r0
    ldmia r1, {r0, r1, r2, r3}
    add r12, sp, #0x14
    stmia r12, {r0, r1, r2, r3}
    add r6, sp, #0x3c
    add r5, sp, #4
    ldmia r6, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    mov r0, r12
    mov r1, r5
    bl _ZNK25UnkDequeIterator_0207076c13func_02072538ERKS_
    movs r1, r0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r3, r4, r5, r6, lr}
    addeq sp, sp, #0x10
    bxeq lr
    mov r5, #0
    sub r0, sp, #4
    strb r5, [r0]
    ldr r2, [r0]
    mov r0, r4
    bl _ZN17UnkDeque_0207076c13func_02072478Ev
    sub r0, sp, #4
    strb r5, [r0]
    ldr r3, [r0]
    ldr r2, [sp, #0x4c]
    mov r0, r4
    mov r1, r6
    bl _ZN17UnkDeque_0207076c13func_02072230Ev
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkDeque_0207076c::func_02072230()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x5c
    mov r7, r0
    ldr r4, [r7]
    mov r6, r1
    cmp r4, #0
    mov r5, r2
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r2, [r7, #4]
    ldr r0, [r7, #8]
    ldr r1, [r7, #0xc]
    add r0, r2, r0
    bl _u32_div_f
    add r4, r4, r1, lsl #2
    mov r0, r5
    mov r1, r6
    bl _ZNK25UnkDequeIterator_0207076c13func_02072538ERKS_
    str r0, [sp, #0x18]
    ldr r2, [r7]
    ldr r1, [r7, #0xc]
    ldr r12, [r6]
    add r1, r2, r1, lsl #2
    sub r2, r1, r4
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r2, r1, asr #2
    cmp r0, r1, asr #2
    addlt r1, sp, #0x18
    str r2, [sp, #0x14]
    addge r1, sp, #0x14
    ldr r1, [r1]
    ldr r3, [r6, #8]
    str r1, [sp, #0x14]
    ldr r1, [r7, #8]
    ldr r2, [r6, #0xc]
    add r0, r1, r0
    str r0, [r7, #8]
    ldr r8, [r6, #4]
    ldr r1, [sp, #0x14]
    add r0, sp, #0x2c
    str r12, [sp, #0x2c]
    str r3, [sp, #0x34]
    str r2, [sp, #0x38]
    str r8, [sp, #0x30]
    bl _ZN25UnkDequeIterator_0207076c13func_020724f4Ei
    ldr r8, [r0]
    ldr r3, [r0, #4]
    ldr r2, [r0, #8]
    ldr r1, [r0, #0xc]
    str r8, [sp, #0x4c]
    add r0, sp, #0x4c
    mov r8, sp
    str r3, [sp, #0x50]
    str r2, [sp, #0x54]
    str r1, [sp, #0x58]
    ldmia r0, {r0, r1, r2, r3}
    stmia r8, {r0, r1, r2, r3}
    str r4, [sp, #0x10]
    ldmia r6, {r0, r1, r2, r3}
    bl _ZN17UnkDeque_0207076c13func_020723a8Ev
    ldr r1, [sp, #0x14]
    ldr r0, [sp, #0x18]
    subs r0, r0, r1
    str r0, [sp, #0x18]
    addeq sp, sp, #0x5c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r8, [r6]
    ldr r4, [r6, #4]
    ldr r3, [r6, #8]
    ldr r2, [r6, #0xc]
    add r0, sp, #0x1c
    str r8, [sp, #0x1c]
    str r4, [sp, #0x20]
    str r3, [sp, #0x24]
    str r2, [sp, #0x28]
    bl _ZN25UnkDequeIterator_0207076c13func_020724f4Ei
    ldmia r0, {r8, lr}
    ldr r12, [r0, #8]
    ldr r6, [r0, #0xc]
    mov r4, sp
    ldmia r5, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r4, [r7]
    str r8, [sp, #0x3c]
    add r0, sp, #0x3c
    str lr, [sp, #0x40]
    str r12, [sp, #0x44]
    str r6, [sp, #0x48]
    ldmia r0, {r0, r1, r2, r3}
    str r4, [sp, #0x10]
    bl _ZN17UnkDeque_0207076c13func_020723a8Ev
    add sp, sp, #0x5c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void UnkDeque_0207076c::func_020723a8()
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r0, [sp, #0x28]
    ldr r7, [sp, #0x38]
    ldr r10, [sp, #0x48]
    cmp r0, r7
    ldr r8, [sp, #0x40]
    beq @L_02072468
    ldr r6, [sp, #0x38]
    mov r11, #1
    add r4, sp, #0x28
@L_020723d4:
    ldr r1, [sp, #0x30]
    mov r2, #1
    cmp r0, r1
    movhs r1, r11
    movlo r1, #0
    cmp r7, r8
    movlo r2, #0
    cmp r1, r2
    ldrne r1, [sp, #0x34]
    subeq r2, r6, r0
    subne r2, r1, r0
    mov r1, r2, asr #1
    add r1, r2, r1, lsr #30
    mov r9, r1, asr #2
    ldr r1, [sp, #0x28]
    add r0, r0, r9, lsl #2
    sub r2, r0, r1
    mov r0, r2, asr #1
    add r0, r2, r0, lsr #30
    mov r5, r0, asr #2
    mov r2, r5, lsl #2
    mov r0, r10
    bl memmove
    ldr r1, [r4]
    sub r0, r9, #1
    add r2, r1, r0, lsl #2
    ldr r0, [sp, #0x34]
    add r1, r2, #4
    str r2, [r4]
    cmp r1, r0
    ldreq r0, [sp, #0x2c]
    str r1, [sp, #0x28]
    streq r0, [sp, #0x28]
    ldr r0, [sp, #0x28]
    add r10, r10, r5, lsl #2
    cmp r0, r7
    bne @L_020723d4
@L_02072468:
    mov r0, r10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

asm void UnkDeque_0207076c::func_02072478()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =data_020fc6fc
    mov r5, r0
    ldr r3, [r2]
    mov r4, r1
    tst r3, #1
    orreq r1, r3, #1
    ldreq r0, =data_020aeb88
    mvneq r3, #0xc0000001
    streq r3, [r0]
    ldr r0, =data_020aeb88
    streq r1, [r2]
    ldr r0, [r0]
    cmp r4, r0
    bls @L_020724b8
    bl _ZN17UnkDeque_0207076c13func_020711fcEv
@L_020724b8:
    add r0, r4, #1
    mov r0, r0, lsl #2
    bl _Znwm
    movs r6, r0
    bne @L_020724d8
    ldr r0, =data_020aed90
    bl func_0201a508
    bl abort
@L_020724d8:
    add r0, r4, #1
    str r6, [r5]
    str r0, [r5, #0xc]
    ldmia sp!, {r4, r5, r6, pc}
}

void UnkDequeIterator_0207076c::func_020724f4(int n)
{
    int size = end - begin;

    n += cur - begin;
    if (n < 0) {
        n += size;
    } else if (n >= size) {
        n -= size;
    }
    cur = begin + n;
}

int UnkDequeIterator_0207076c::func_02072538(const UnkDequeIterator_0207076c &other) const
{
    int n;
    void **s = start;

    n = cur - other.cur;
    if (cur >= s) {
        if (other.cur < s) {
            n -= end - begin;
        }
    } else if (other.cur >= s) {
        n += end - begin;
    }
    return n;
}

asm void MatchEngine::func_020725ac()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r9, r1
    mov r10, r0
    str r2, [sp, #8]
    mov r6, r3
    ldr r8, [sp, #0x54]
    mov r5, #0
    bl func_ov015_02143664
    mov r11, r0
    mov r0, r9
    bl func_ov015_021319b0
    add r0, r10, r0
    add r0, r0, #0x11000
    ldrb r0, [r0, #0x7d6]
    add r4, sp, #0xc
    mov r1, #0
    tst r0, #1
    movne r7, #1
    mov r0, r8
    mov r2, #0x20
    moveq r7, r5
    bl MI_CpuFill8
    mov r1, #0
    mov r2, #0x20
    mov r0, r4
    bl MI_CpuFill8
    ldr r0, [sp, #0x50]
    mov r1, #0
    cmp r0, #0
    orreq r5, r5, #1
    ldr r0, [sp, #8]
    orrne r5, r5, #2
    cmp r0, #0
    bne @L_020726f8
    cmp r6, #0
    mov r6, r1
    mov r0, r10
    mov r1, r9
    mov r2, r6
    bne @L_020726a4
    mov r3, r5
    bl _ZN11MatchEngine13func_0207455cEiim
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN11MatchEngine13func_0207455cEiim
    str r0, [r4, #4]
    add r4, r4, #8
@L_02072678:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN11MatchEngine13func_02074700Eiiih
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072678
    b @L_0207284c
@L_020726a4:
    mov r3, r5
    bl _ZN11MatchEngine13func_02074584Eiim
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN11MatchEngine13func_02074584Eiim
    str r0, [r4, #4]
    add r4, r4, #8
@L_020726cc:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN11MatchEngine13func_02074728Eiiih
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_020726cc
    b @L_0207284c
@L_020726f8:
    cmp r0, #2
    bne @L_02072758
    cmp r6, #1
    bne @L_02072740
    orr r5, r5, #0x40
    mov r6, r1
    mov r11, #6
@L_02072714:
    mov r0, r10
    mov r1, r9
    mov r2, r11
    mov r3, r6
    stmia sp, {r5, r7}
    bl _ZN11MatchEngine13func_020745e4Eiiiih
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072714
    b @L_0207284c
@L_02072740:
    mov r0, r1
@L_02072744:
    add r0, r0, #1
    cmp r0, #6
    str r1, [r4], #4
    blt @L_02072744
    b @L_0207284c
@L_02072758:
    cmp r6, #0
    bne @L_020727ec
    ldrb r0, [r11, #0xf]
    mov r6, #0
    mov r2, r6
    tst r0, #0x20
    movne r1, #1
    cmp r1, #0
    orrne r5, r5, #0x20
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    orrne r5, r5, #0x10
    mov r0, r10
    mov r1, r9
    mov r3, r5
    bl _ZN11MatchEngine13func_020745acEiim
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN11MatchEngine13func_020745acEiim
    str r0, [r4, #4]
    add r4, r4, #8
@L_020727c0:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN11MatchEngine13func_02074750Eiiih
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_020727c0
    b @L_0207284c
@L_020727ec:
    mov r6, r1
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    bl _ZN11MatchEngine13func_020745d4Eiim
    str r0, [r4]
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, r5
    bl _ZN11MatchEngine13func_020745d4Eiim
    str r0, [r4, #4]
    add r4, r4, #8
@L_02072824:
    mov r0, r10
    mov r1, r9
    mov r2, r6
    mov r3, r5
    str r7, [sp]
    bl _ZN11MatchEngine13func_02074778Eiiih
    add r6, r6, #1
    cmp r6, #6
    str r0, [r4], #4
    blt @L_02072824
@L_0207284c:
    ldr r0, [sp, #8]
    mov r2, #0
    mov r6, r2
    cmp r0, #2
    streq r6, [r8, #4]
    add r5, sp, #0xc
    streq r6, [r8]
    beq @L_02072880
@L_0207286c:
    ldr r0, [r5], #4
    str r0, [r8, r6, lsl #2]
    add r6, r6, #1
    cmp r6, #2
    blt @L_0207286c
@L_02072880:
    cmp r6, #8
    addge sp, sp, #0x2c
    mov r0, r6
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072890:
    mov r3, r2
    b @L_020728a8
@L_02072898:
    ldr r1, [r8, r3, lsl #2]
    add r3, r3, #1
    cmp r4, r1
    streq r2, [r5]
@L_020728a8:
    ldr r4, [r5]
    cmp r4, #0
    beq @L_020728bc
    cmp r3, r0
    blt @L_02072898
@L_020728bc:
    add r6, r6, #1
    cmp r4, #0
    strne r4, [r8, r0, lsl #2]
    addne r0, r0, #1
    cmp r6, #8
    add r5, r5, #4
    blt @L_02072890
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_020728e0(int value)
{
    if (value == 4) {
        return 4;
    }
    if (value == 5) {
        return 3;
    }
    if (value == 6) {
        return 2;
    }
    return value == 7;
}

asm void MatchEngine::func_02072914()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r3
    mov r5, r2
    ldrb r2, [r4, #2]
    ldrb r12, [r4]
    mov r3, #0
    cmp r2, #0xa
    moveq r3, #1
    cmp r12, #0xa
    addls pc, pc, r12, lsl #2
    b @L_02072a54
    b @L_0207296c
    b @L_02072974
    b @L_02072988
    b @L_0207299c
    b @L_020729c0
    b @L_020729c0
    b @L_020729c0
    b @L_020729c0
    b @L_02072a0c
    b @L_02072a24
    b @L_02072a3c
@L_0207296c:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_02072974:
    ldrh r0, [r4, #4]
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072988:
    ldrh r0, [r4, #4]
    cmp r5, r0
    movge r0, #1
    movlt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0207299c:
    ldrh r0, [r4, #4]
    cmp r5, r0
    blt @L_020729b8
    ldrh r0, [r4, #6]
    cmp r5, r0
    movle r0, #1
    ldmleia sp!, {r3, r4, r5, pc}
@L_020729b8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020729c0:
    cmp r3, #0
    cmpeq r5, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r12
    bl _ZN11MatchEngine13func_020728e0Ei
    cmp r0, #0
    mov r2, #0
    ble @L_02072a04
@L_020729e4:
    add r1, r4, r2, lsl #1
    ldrh r1, [r1, #4]
    cmp r5, r1
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    add r2, r2, #1
    cmp r2, r0
    blt @L_020729e4
@L_02072a04:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a0c:
    ldr r3, [sp, #0x10]
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a24:
    ldr r3, [sp, #0x10]
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    cmp r5, r0
    movle r0, #1
    movgt r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a3c:
    ldr r3, [sp, #0x10]
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    cmp r5, r0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02072a54:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm BOOL MatchEngine::func_02072a5c(MatchPlayer *player, MatchPlayer *target, u8 *req)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r5, r2
    movs r7, r1
    cmpne r5, #0
    mov r6, r0
    mov r4, r3
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r4
    bl _ZN11MatchEngine13func_02074aacEPh
    cmp r0, #1
    bne @L_02072ab0
    ldrh r1, [r7, #0x42]
    ldrh r0, [r5, #0x42]
    cmp r1, r0
    beq @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072ab0:
    cmp r0, #5
    bne @L_02072ad8
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    bne @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072ad8:
    ldrh r2, [r7, #0x42]
    ldrh r1, [r5, #0x42]
    cmp r2, r1
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r0, #2
    bne @L_02072b18
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    bne @L_02072b3c
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072b18:
    cmp r0, #3
    bne @L_02072b3c
    mov r0, r7
    mov r1, r5
    bl func_ov015_021318a4
    cmp r0, #0
    addne sp, sp, #4
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02072b3c:
    ldrb r0, [r4, #2]
    mov r8, #1
    cmp r0, #0xe
    moveq r8, #6
    beq @L_02072b58
    cmp r0, #0xd
    moveq r8, #6
@L_02072b58:
    cmp r8, #0
    mov r7, #0
    ble @L_02072bac
@L_02072b64:
    ldrb r2, [r4, #2]
    mov r0, r6
    mov r1, r5
    mov r3, r7
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    mov r2, r0
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r7, [sp]
    bl _ZN11MatchEngine13func_02072914Ev
    cmp r0, #0
    addne sp, sp, #4
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r7, r7, #1
    cmp r7, r8
    blt @L_02072b64
@L_02072bac:
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void MatchEngine::func_02072bb8(MatchPlayer *player, int id, int slot)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x88
    add r5, sp, #0x24
    mov r4, #0
    mov r10, r0
    str r1, [sp, #8]
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    strh r4, [r5]
    strh r4, [r5, #2]
    movs r0, r1
    beq @L_02072bfc
    mov r1, r3
    bl func_020808c4
    ldr r1, [sp, #0xc]
    cmp r1, r0
    beq @L_02072c08
@L_02072bfc:
    add sp, sp, #0x88
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072c08:
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    mov r2, r4
    mov r3, r4
    bl func_02080830
    ldr r1, [sp, #0xc]
    mov r0, r10
    bl _ZN11MatchEngine13func_020739ccEi
    str r0, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x88
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r0, #0xa]
    cmp r0, #0
    addeq sp, sp, #0x88
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072c50:
    ldr r0, [sp, #0x10]
    cmp r4, r0
    beq @L_02072cbc
    ldr r0, [sp, #8]
    mov r1, r4
    bl func_020808c4
    ldr r1, [sp, #0xc]
    cmp r1, r0
    bne @L_02072cbc
    ldr r0, [sp, #8]
    mov r1, r4
    mov r2, #0
    bl func_0208084c
    mov r5, #1
    mov r6, r0
    ldr r0, [sp, #8]
    mov r1, r4
    mov r2, r5
    bl func_0208084c
    mov r3, r0
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    mov r2, r6
    bl func_02080830
    add sp, sp, #0x88
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072cbc:
    add r4, r4, #1
    cmp r4, #6
    blt @L_02072c50
    mov r0, #0
    str r0, [sp, #0x14]
    add r5, sp, #0x48
    mov r4, #0x20
    ldr r1, [sp, #0x14]
    mov r0, r5
    mov r2, r4
    bl memset
    ldr r1, [sp, #0x14]
    mov r2, r4
    add r0, sp, #0x68
    bl memset
    ldr r0, [sp, #8]
    bl func_02080b90
    ldr r1, [sp, #0x14]
    mov r2, r5
    str r1, [sp]
    mov r1, r0
    mov r0, #0x80
    str r0, [sp, #4]
    mov r0, r10
    mov r3, #0x10
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    str r0, [sp, #0x1c]
    ldr r0, [sp, #8]
    bl func_020802a0
    add r5, sp, #0x28
    ldr r7, =data_020a71d0
    mov r8, r0
    mov r4, r5
    ldmia r7!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r7, {r0, r1, r2, r3}
    stmia r5, {r0, r1, r2, r3}
    ldr r9, [sp, #0x14]
@L_02072d54:
    ldr r0, [r4, r9, lsl #2]
    cmp r8, r0
    streq r9, [sp, #0x18]
    add r9, r9, #1
    cmp r9, #0x20
    blo @L_02072d54
    ldr r0, [sp, #8]
    mov r7, #1
    ldrh r0, [r0, #0x42]
    add r4, sp, #0x28
    add r5, sp, #0x48
    strh r0, [sp, #0x68]
@L_02072d84:
    ldr r1, [sp, #0x18]
    ldr r0, [sp, #0x14]
    mov r9, #0
    add r11, r1, r0
    sub r8, r1, r0
@L_02072d98:
    mov r0, r9, lsl #1
    ldrh r1, [r5, r0]
    cmp r1, #0
    beq @L_02072e08
    mov r0, r10
    bl _ZN11MatchEngine13func_0206f500Ei
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02072e08
    bl func_020802a0
    mov r2, #0
@L_02072dc4:
    ldr r1, [r4, r2, lsl #2]
    cmp r0, r1
    moveq r6, r2
    add r2, r2, #1
    cmp r2, #0x20
    blo @L_02072dc4
    cmp r6, r11
    cmpne r6, r8
    bne @L_02072e08
    mov r3, r9, lsl #1
    ldrh r2, [r5, r3]
    mov r1, r7, lsl #1
    add r0, sp, #0x68
    strh r2, [r0, r1]
    mov r0, #0
    add r7, r7, #1
    strh r0, [r5, r3]
@L_02072e08:
    add r9, r9, #1
    cmp r9, #0x10
    blt @L_02072d98
    ldr r0, [sp, #0x14]
    cmp r7, #0x10
    add r0, r0, #1
    str r0, [sp, #0x14]
    beq @L_02072e30
    cmp r0, #0x20
    blo @L_02072d84
@L_02072e30:
    ldr r0, [sp, #0x1c]
    mov r7, #0
    mov r9, r7
    cmp r0, #0
    mov r6, r7
    ble @L_02072ec8
    add r4, sp, #0x24
    add r8, sp, #0x68
@L_02072e50:
    mov r0, r9, lsl #1
    ldrh r0, [r8, r0]
    mov r1, r6
    bl func_ov015_02130b14
    movs r5, r0
    ldrne r0, [sp, #8]
    ldrneh r1, [r5, #0x42]
    ldrneh r0, [r0, #0x42]
    cmpne r1, r0
    beq @L_02072eb8
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    mov r0, r10
    mov r3, r5
    str r6, [sp]
    bl _ZN11MatchEngine13func_02073e3cEPviih
    cmp r0, #0
    bne @L_02072eb8
    ldr r0, [sp, #0x20]
    mov r1, r7, lsl #1
    ldrh r2, [r5, #0x42]
    ldrb r0, [r0, #0xa]
    add r7, r7, #1
    strh r2, [r4, r1]
    cmp r7, r0
    beq @L_02072ec8
@L_02072eb8:
    ldr r0, [sp, #0x1c]
    add r9, r9, #1
    cmp r9, r0
    blt @L_02072e50
@L_02072ec8:
    ldr r0, [sp, #0x20]
    mov r4, #1
    ldrb r0, [r0, #0xa]
    cmp r7, r0
    bge @L_02072fc4
    ldr r0, [sp, #8]
    bl func_02080b90
    mov r8, #0
    add r6, sp, #0x68
    mov r1, r0
    str r8, [sp]
    mov r0, #0x80
    str r0, [sp, #4]
    mov r0, r10
    mov r2, r6
    mov r3, #0x10
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    mov r9, r0
    mov r0, r10
    mov r1, r6
    mov r2, r9
    mov r3, #0x81
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207f634EPtiih
    cmp r9, #0
    ble @L_02072fac
    add r11, sp, #0x24
    mov r5, r8
@L_02072f38:
    mov r0, r8, lsl #1
    ldrh r0, [r6, r0]
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    ldrne r0, [sp, #8]
    ldrneh r1, [r4, #0x42]
    ldrneh r0, [r0, #0x42]
    cmpne r1, r0
    beq @L_02072fa0
    ldr r1, [sp, #8]
    ldr r2, [sp, #0xc]
    mov r0, r10
    mov r3, r4
    str r5, [sp]
    bl _ZN11MatchEngine13func_02073e3cEPviih
    cmp r0, #0
    bne @L_02072fa0
    ldr r0, [sp, #0x20]
    mov r1, r7, lsl #1
    ldrh r2, [r4, #0x42]
    ldrb r0, [r0, #0xa]
    add r7, r7, #1
    strh r2, [r11, r1]
    cmp r7, r0
    beq @L_02072fac
@L_02072fa0:
    add r8, r8, #1
    cmp r8, r9
    blt @L_02072f38
@L_02072fac:
    ldr r0, [sp, #0x20]
    ldrb r0, [r0, #0xa]
    cmp r7, r0
    addlt sp, sp, #0x88
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02072fc4:
    ldrh r2, [sp, #0x24]
    ldrh r3, [sp, #0x26]
    ldr r0, [sp, #8]
    ldr r1, [sp, #0x10]
    bl func_02080830
    mov r0, #1
    add sp, sp, #0x88
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_02072fe8(MatchPlayer *player, int id, BOOL first)
{
    int slot = -1;
    int i;
    int end;
    int v;

    if (player == NULL) {
        return 0;
    }
    if (first) {
        i = 0;
        end = 4;
    } else {
        i = 4;
        end = 6;
    }
    for (; i < end; i++) {
        v = func_020808c4(player, i);
        if (v == id) {
            return 0;
        }
        if (slot < 0 && v == 0) {
            slot = i;
        }
    }
    if (slot < 0) {
        return 0;
    }
    return func_020730dc(player, id, slot, 0);
}

int MatchEngine::func_02073094(int index, int a, int b)
{
    int result = 0;
    MatchPlayer *player = func_ov015_02130b14(index, 0);

    if (player != NULL) {
        result = func_020730dc(player, a, b, 0);
    }
    return result;
}

BOOL MatchEngine::func_020730dc(MatchPlayer *player, int id, int slot, u8 force)
{
    u8 *move;
    int i;
    BOOL ok;

    if (player == NULL) {
        return FALSE;
    }
    move = func_020739cc(id);
    if (move == NULL) {
        return FALSE;
    }
    if (!func_020731c4(player, move, TRUE) && !force) {
        return FALSE;
    }
    if (slot != 4 && slot != 5) {
        ok = func_020808e8(player, id);
        if (ok) {
            for (i = 0; i < 4; i++) {
                if (id == func_020808c4(player, i)) {
                    slot = i;
                    break;
                }
            }
        }
    } else {
        ok = func_02080964(player, slot, id, 1);
    }
    if (!ok) {
        return FALSE;
    }
    func_02072bb8(player, id, slot);
    return TRUE;
}

BOOL MatchEngine::func_020731c4(MatchPlayer *player, u8 *move, BOOL any)
{
    u8 req[12];
    int i;
    int count;

    if (move[7] == 0) {
        return TRUE;
    }
    if (!func_020738e4(req, move[7])) {
        return FALSE;
    }
    if (func_02074aac(req) == 1) {
        return func_02072a5c(player, player, req);
    }
    if (any) {
        return TRUE;
    }
    count = 0;
    for (i = 0; i < 0x16; i++) {
        if (func_02072a5c(player, func_02079d2c(i), req)) {
            count++;
            if (count >= func_02074abc(req)) {
                break;
            }
        }
    }
    return count >= func_02074abc(req);
}

// a move that exists (its kind is set and its value not negative)
static inline BOOL Move_IsValid(u8 *move)
{
    return move[0] != 0 && *(s16 *)(move + 4) >= 0;
}

BOOL MatchEngine::func_020732b0(MatchPlayer *player, int id, int *error)
{
    u8 *move;
    s16 tp;
    int i;
    u16 out[2];

    move = func_020739cc(id);
    if (error != NULL) {
        *error = 1;
    }
    if (move == NULL || !Move_IsValid(move)) {
        if (error != NULL) {
            *error = 3;
        }
        return FALSE;
    }
    tp = player->unk_96;
    if (tp < func_02074a18((s16 *)move, player)) {
        if (error != NULL) {
            *error = 4;
        }
        return FALSE;
    }
    if (move[0xA] != 0) {
        for (i = 0; i < 6; i++) {
            if (id == func_020808c4(player, i)) {
                if (!func_02073a20(player, id, out)) {
                    if (error != NULL) {
                        *error = 8;
                    }
                    return FALSE;
                }
                break;
            }
        }
    }
    if (error != NULL) {
        *error = 0;
    }
    return TRUE;
}

asm BOOL MatchEngine::func_020733d4(MatchPlayer *player, int a, int id, int b, int c, BOOL flag, int d, int e)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r3
    mov r10, r1
    mov r1, r9
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    ldr r8, [sp, #0x40]
    ldr r7, [sp, #0x44]
    ldr r6, [sp, #0x4c]
    bl _ZN11MatchEngine13func_020739ccEi
    mov r4, r0
    ldrb r0, [r4]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    beq @L_02073468
    mov r5, #0
@L_02073428:
    mov r0, r10
    mov r1, r5
    bl func_020808c4
    cmp r9, r0
    beq @L_02073448
    add r5, r5, #1
    cmp r5, #6
    blt @L_02073428
@L_02073448:
    cmp r5, #6
    bne @L_02073468
    cmp r6, #0
    movne r0, #2
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073468:
    ldr r0, [sp, #0x14]
    mov r1, r10
    mov r2, r9
    mov r3, r6
    bl _ZN11MatchEngine13func_020732b0EP11MatchPlayeriPi
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [sp, #0x48]
    cmp r0, #0
    bne @L_020734c4
    mov r0, r10
    mov r1, r9
    bl func_02080a38
    cmp r0, #0
    beq @L_020734c4
    cmp r6, #0
    movne r0, #9
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020734c4:
    cmp r8, #0
    mov r3, #0
    bne @L_02073514
    ldrb r0, [r4]
    add r1, r0, #0xff
    and r2, r1, #0xff
    cmp r2, #5
    bhi @L_020734f4
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x33
    movne r3, r1
@L_020734f4:
    cmp r3, #0
    bne @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073514:
    cmp r8, #2
    ldrb r0, [r4]
    bne @L_02073590
    mov r2, #1
    cmp r0, #7
    bne @L_02073544
    ldrb r1, [r4, #0xf]
    tst r1, #4
    movne r1, r2
    moveq r1, r3
    cmp r1, #0
    movne r3, #1
@L_02073544:
    cmp r3, #0
    bne @L_02073570
    cmp r0, #6
    bne @L_0207356c
    ldrb r1, [r4, #0xf]
    tst r1, #2
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    bne @L_02073570
@L_0207356c:
    mov r2, #0
@L_02073570:
    cmp r2, #0
    bne @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073590:
    add r1, r0, #0xff
    and r2, r1, #0xff
    cmp r2, #5
    bhi @L_020735b0
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x33
    movne r3, r1
@L_020735b0:
    cmp r3, #0
    beq @L_020735d0
    cmp r6, #0
    movne r0, #0xa
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020735d0:
    cmp r8, #2
    beq @L_0207365c
    add r1, r0, #0xff
    cmp r7, #0
    mov r3, #0
    and r2, r1, #0xff
    bne @L_02073624
    cmp r2, #6
    bhi @L_02073604
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x55
    movne r3, r1
@L_02073604:
    cmp r3, #0
    bne @L_0207365c
    cmp r6, #0
    movne r0, #0xb
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073624:
    cmp r2, #6
    bhi @L_0207363c
    mov r1, #1
    mov r2, r1, lsl r2
    tst r2, #0x55
    movne r3, r1
@L_0207363c:
    cmp r3, #0
    beq @L_0207365c
    cmp r6, #0
    movne r0, #0xb
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207365c:
    ldr r1, [r10, #0xec]
    ldrh r3, [r1, #0x32]
    cmp r3, #0
    beq @L_02073730
    ldr r1, =0x1ff
    cmp r3, r1
    bne @L_020736d8
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    mov r5, #0
    movls r0, #1
    movhi r0, r5
    cmp r0, #0
    bne @L_02073730
    str r7, [sp]
    str r5, [sp, #4]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0x18]
    mov r1, r10
    mov r3, r8
    str r5, [sp, #8]
    bl _ZN11MatchEngine13func_02074210EP11MatchPlayeriiiPii
    cmp r0, #0
    beq @L_02073730
    cmp r6, #0
    movne r0, #0xc
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020736d8:
    cmp r9, r3
    mov r0, #0
    beq @L_02073730
    ldrb r1, [sp, #0x48]
    str r8, [sp]
    str r7, [sp, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    ldrb r5, [sp, #0x50]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0x18]
    mov r1, r10
    str r5, [sp, #0x10]
    bl _ZN11MatchEngine13func_020733d4EP11MatchPlayeriiiiiii
    cmp r0, #0
    beq @L_02073730
    cmp r6, #0
    movne r0, #0xc
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073730:
    mov r11, #1
    mov r5, #0
@L_02073738:
    mov r0, r10
    mov r1, r5
    bl func_020808c4
    cmp r9, r0
    bne @L_02073764
    ldr r0, [r10, #0xec]
    ldrb r0, [r0, #0x88]
    tst r0, r11, lsl r5
    addne sp, sp, #0x1c
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073764:
    add r5, r5, #1
    cmp r5, #6
    blt @L_02073738
    ldr r0, [sp, #0x18]
    mov r5, #0
    cmp r0, #0
    beq @L_020737dc
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, r5
    cmp r0, #0
    beq @L_020737dc
    ldr r0, [sp, #0x14]
    ldr r1, [sp, #0x18]
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    cmpne r8, #2
    beq @L_020737dc
    ldrb r0, [r4]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #1
    bhi @L_020737dc
    cmp r6, #0
    movne r0, #5
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020737dc:
    ldrb r0, [r4, #7]
    cmp r0, #0
    beq @L_0207380c
    ldr r0, [sp, #0x14]
    mov r1, r10
    mov r2, r4
    mov r3, r5
    bl _ZN11MatchEngine13func_020731c4EP11MatchPlayerPhi
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207380c:
    cmp r7, #0
    ldreqb r0, [sp, #0x50]
    cmpeq r0, #1
    bne @L_02073858
    ldrb r0, [r4]
    cmp r0, #7
    bne @L_02073838
    ldrb r0, [r4, #0xf]
    tst r0, #1
    movne r0, #1
    bne @L_0207383c
@L_02073838:
    mov r0, #0
@L_0207383c:
    cmp r0, #0
    bne @L_02073858
    cmp r9, #0x14
    cmpne r9, #0x16
    addne sp, sp, #0x1c
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073858:
    cmp r9, #0x15
    bne @L_020738d4
    ldr r0, [sp, #0x14]
    bl func_ov015_02143664
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r0, #0xf]
    tst r0, #1
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_020738a8
    cmp r6, #0
    movne r0, #6
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020738a8:
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020738d4
    cmp r6, #0
    movne r0, #7
    strne r0, [r6]
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020738d4:
    mov r0, #1
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// copies entry index (0xc bytes) into buffer: from the table in memory when there is one, else
// from the file
BOOL MatchEngine::func_020738e4(void *buffer, int index)
{
    u8 *entry;

    if (buffer == NULL) {
        return FALSE;
    }
    entry = func_020739a8(index);
    if (entry != NULL) {
        MI_CpuCopy8(entry, buffer, 0xC);
        return TRUE;
    }
    if (MatchLoadFile(data_020af274, &buffer, index * 0xC, 0xC) == 0) {
        return FALSE;
    }
    return TRUE;
}

u8 *MatchEngine::func_020739a8(int i)
{
    if (unk_be4 == NULL) {
        return NULL;
    }
    if ((u32)i >= 64) {
        return NULL;
    }
    return unk_be4[i];
}

u8 *MatchEngine::func_020739cc(int i)
{
    if ((u32)i >= 0x200) {
        return NULL;
    }
    return unk_bb8[i];
}

u8 MatchEngine::func_020739e4(void *team, int i)
{
    u8 *entry;

    if (team == NULL) {
        return 0;
    }
    entry = func_020739cc(func_020808c4(team, i));
    if (entry != NULL) {
        return entry[0xA];
    }
    return 0;
}

int MatchEngine::func_02073a20(void *team, int id, u16 *out)
{
    int i;

    if (team == NULL) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (id == func_020808c4(team, i)) {
            break;
        }
    }
    if (i == 6) {
        return 0;
    }
    return func_02073a9c(team, i, out, 1);
}

asm int MatchEngine::func_02073a9c(void *team, int i, u16 *out, int b)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x6c
    mov r8, r3
    movs r9, r1
    mov r10, r0
    ldr r7, [sp, #0x90]
    cmpne r8, #0
    mov r0, #0
    mov r11, r2
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    strneh r0, [r8, #2]
    ldrneh r0, [r8, #2]
    mov r1, r11
    strneh r0, [r8]
    mov r0, r9
    bl func_020808c4
    str r0, [sp, #0x10]
    ldr r1, [sp, #0x10]
    mov r0, r10
    bl _ZN11MatchEngine13func_020739ccEi
    movs r4, r0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r4, #0xa]
    cmp r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0
    mov r6, r5
    ble @L_02073be4
@L_02073b24:
    mov r0, r9
    mov r1, r11
    mov r2, r6
    bl func_0208084c
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206f9e0Em
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    beq @L_02073bd4
    ldrb r3, [r4, #0xa]
    mov r2, #0
    cmp r3, #0
    ble @L_02073b78
@L_02073b5c:
    mov r1, r2, lsl #1
    ldrh r1, [r8, r1]
    cmp r0, r1
    beq @L_02073b78
    add r2, r2, #1
    cmp r2, r3
    blt @L_02073b5c
@L_02073b78:
    cmp r2, r3
    bne @L_02073bd4
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02073bd4
    cmp r7, #0
    beq @L_02073bb0
    ldrh r1, [r0, #0xf0]
    tst r1, #8
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_02073bd4
@L_02073bb0:
    ldrh r1, [r0, #0x42]
    mov r0, r6, lsl #1
    add r5, r5, #1
    strh r1, [r8, r0]
    ldrb r0, [r4, #0xa]
    cmp r5, r0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073bd4:
    ldrb r0, [r4, #0xa]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02073b24
@L_02073be4:
    cmp r7, #0
    mov r11, #0
    addeq sp, sp, #0x6c
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r4, #0xb]
    cmp r0, #0x51
    addeq sp, sp, #0x6c
    moveq r0, r11
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r9, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, r11
    cmp r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0
    mov r7, r6
@L_02073c34:
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_02079d2cEi
    cmp r9, r0
    bne @L_02073c68
    mov r0, r10
    bl _ZN11MatchEngine13func_0206a93cEv
    mov r2, r0
    mov r0, r10
    mov r1, r7
    mov r3, r11
    bl _ZN11MatchEngine13func_0206a8d8Eiii
    mov r6, r0
@L_02073c68:
    add r7, r7, #1
    cmp r7, #0x16
    blt @L_02073c34
    cmp r6, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, sp, #0x14
    add r7, sp, #0x40
    str r1, [sp]
    ldr r0, =0x60001
    mov r1, r6
    str r0, [sp, #4]
    mov r0, r10
    mov r3, r7
    mov r2, #0xb
    str r9, [sp, #8]
    bl _ZN11MatchEngine13func_020665a4Ev
    str r0, [sp, #0xc]
    cmp r0, #0
    mov r6, #0
    ble @L_02073cd8
@L_02073cc0:
    ldr r0, [r7, r6, lsl #2]
    bl func_ov015_02130ae8
    ldr r0, [sp, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_02073cc0
@L_02073cd8:
    ldrb r0, [r4, #0xb]
    cmp r0, #0
    beq @L_02073de4
    ldr r0, [sp, #0xc]
    mov r11, #0
    cmp r0, #0
    ble @L_02073de4
@L_02073cf4:
    add r0, sp, #0x40
    ldr r0, [r0, r11, lsl #2]
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02073dd4
    ldrh r0, [r6, #0x42]
    ldr r3, =0xfff
    ldrh r1, [r9, #0x42]
    and r0, r0, r3
    mov r0, r0, lsl #0x10
    and r2, r1, r3
    mov r1, r0, lsr #0x10
    mov r0, r2, lsl #0x10
    cmp r1, r0, lsr #16
    beq @L_02073dd4
    ldrb r2, [r4, #0xa]
    mov r0, #0
    cmp r2, #0
    ble @L_02073d60
@L_02073d40:
    mov r7, r0, lsl #1
    ldrh r7, [r8, r7]
    and r7, r7, r3
    cmp r7, r1
    beq @L_02073d60
    add r0, r0, #1
    cmp r0, r2
    blt @L_02073d40
@L_02073d60:
    cmp r0, r2
    bne @L_02073dd4
    ldr r2, [sp, #0x10]
    mov r7, #0
    mov r0, r10
    mov r1, r9
    mov r3, r6
    str r7, [sp]
    bl _ZN11MatchEngine13func_02073e3cEPviih
    cmp r0, #0
    bne @L_02073dd4
    ldrb r2, [r4, #0xa]
    cmp r2, #0
    ble @L_02073dbc
@L_02073d98:
    mov r1, r7, lsl #1
    ldrh r0, [r8, r1]
    cmp r0, #0
    ldreqh r0, [r6, #0x42]
    streqh r0, [r8, r1]
    beq @L_02073dbc
    add r7, r7, #1
    cmp r7, r2
    blt @L_02073d98
@L_02073dbc:
    ldrb r0, [r4, #0xa]
    add r5, r5, #1
    cmp r5, r0
    addeq sp, sp, #0x6c
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02073dd4:
    ldr r0, [sp, #0xc]
    add r11, r11, #1
    cmp r11, r0
    blt @L_02073cf4
@L_02073de4:
    mov r0, #0
    add sp, sp, #0x6c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_02073df8(void *team, int i, int a, u8 b)
{
    return func_02073e3c(team, func_020808c4(team, i), a, b);
}

asm int MatchEngine::func_02073e3c(void *team, int id, int a, u8 b)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    cmp r1, #0
    mov r9, r3
    mov r8, #0
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #0
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r3, [r1, #0x42]
    ldrh r1, [r9, #0x42]
    cmp r3, r1
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r2
    bl _ZN11MatchEngine13func_020739ccEi
    movs r4, r0
    moveq r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r4, #0xa]
    cmp r0, #0
    moveq r0, #5
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [sp, #0x20]
    cmp r0, #0
    beq @L_02073ec4
    ldrh r0, [r9, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, r8
    cmp r0, #0
    moveq r0, #2
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02073ec4:
    ldrb r7, [r4, #0xb]
    cmp r7, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r7, #0x51
    bne @L_02073f00
    ldrsh r3, [r4, #0xc]
    mov r0, r10
    mov r1, r9
    mov r2, r7
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    mov r8, #1
    cmp r0, #0
    moveq r8, #0
    b @L_02073f90
@L_02073f00:
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_0207f730Ei
    cmp r0, #0
    beq @L_02073f6c
    mov r6, #1
    cmp r7, #0xe
    moveq r6, #6
    beq @L_02073f2c
    cmp r7, #0xd
    moveq r6, #6
@L_02073f2c:
    cmp r6, #0
    mov r5, #0
    ble @L_02073f90
@L_02073f38:
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r5
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    ldrsh r1, [r4, #0xc]
    cmp r1, r0
    moveq r8, #1
    beq @L_02073f90
    add r5, r5, #1
    cmp r5, r6
    blt @L_02073f38
    b @L_02073f90
@L_02073f6c:
    mov r8, #0
    mov r0, r10
    mov r1, r9
    mov r2, r7
    mov r3, r8
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    ldrsh r1, [r4, #0xc]
    cmp r0, r1
    movge r8, #1
@L_02073f90:
    mov r0, #4
    cmp r8, #0
    movne r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MatchEngine::func_02073fa0(MatchPlayer *player, int id, int a, int b)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r4, r2
    movs r5, r1
    ldr r9, [sp, #0x28]
    cmpne r4, #0
    mov r6, r0
    mov r8, r3
    mov r10, #0
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r1, r4
    bl _ZN11MatchEngine13func_020739ccEi
    movs r7, r0
    addeq sp, sp, #4
    moveq r0, r10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r7, #0xa]
    cmp r0, #0
    addeq sp, sp, #4
    moveq r0, r10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    moveq r8, r10
    beq @L_02074034
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r8
    str r10, [sp]
    bl _ZN11MatchEngine13func_02073e3cEPviih
    cmp r0, #0
    addne sp, sp, #4
    movne r0, r10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r8, [r8, #0x42]
@L_02074034:
    ldrb r0, [r7, #0xa]
    mov r7, #0
    cmp r0, #2
    bne @L_02074078
    cmp r9, #0
    beq @L_02074078
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r9
    str r7, [sp]
    bl _ZN11MatchEngine13func_02073e3cEPviih
    cmp r0, #0
    addne sp, sp, #4
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r7, [r9, #0x42]
@L_02074078:
    mov r9, #0
    mov r6, r9
@L_02074080:
    mov r0, r5
    mov r1, r6
    bl func_020808c4
    cmp r4, r0
    bne @L_020740ac
    mov r0, r5
    mov r1, r6
    mov r2, r8
    mov r3, r7
    bl func_02080830
    add r9, r9, #1
@L_020740ac:
    add r6, r6, #1
    cmp r6, #6
    blt @L_02074080
    mov r0, #1
    cmp r9, #0
    movle r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

BOOL MatchEngine::func_020740cc(MatchPlayer *player, int i, int a, int b)
{
    int index;

    if (player == NULL) {
        return FALSE;
    }
    func_02073fa0(player, func_020808c4(player, i), a, b);
    if (gGameState.unk_000[0x1A] != 0) {
        index = player->unk_f4;
        if (index >= 0 && index < 0x20) {
            gGameState.unk_078 |= 1 << index;
        }
    }
    return TRUE;
}

// (the player's first four ids into first, the last two into second; gives how many it put)
int MatchEngine::func_02074154(MatchPlayer *player, int *first, int nfirst, int *second, int nsecond)
{
    int n = 0;
    int m = 0;
    int i;
    int v;

    for (i = 0; i < nfirst; i++) {
        first[i] = 0;
    }
    for (i = 0; i < nsecond; i++) {
        second[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        v = func_020808c4(player, i);
        if (n < nfirst) {
            first[n++] = v;
        }
    }
    for (; i < 6; i++) {
        v = func_020808c4(player, i);
        if (m < nsecond) {
            second[m++] = v;
        }
    }
    return n + m;
}

int MatchEngine::func_02074210(MatchPlayer *player, int a, int b, int c, int *out, int max)
{
    int i;
    int count = 0;
    int id;
    bool flag;

    if (player == NULL) {
        return count;
    }
    flag = (unk_117d6[func_ov015_021319b0(player)] & 1) != 0;
    for (i = 0; i < 6; i++) {
        id = func_0207436c(player, b, c, i, flag);
        if (id != 0 && func_020733d4(player, a, id, b, c, flag, 0, 0)) {
            if (out != NULL && count < max) {
                out[count] = id;
            }
            count++;
        }
    }
    return count;
}

BOOL MatchEngine::func_020742f0(MatchPlayer *player, int a, int b)
{
    int i;
    bool flag = (unk_117d6[func_ov015_021319b0(player)] & 1) != 0;

    for (i = 0; i < 6; i++) {
        if (func_0207436c(player, a, b, i, flag)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MatchEngine::func_0207436c(MatchPlayer *player, int a, int b, int i, bool flag)
{
    if (player == NULL) {
        return FALSE;
    }
    if (a == 0) {
        if (b == 0) {
            return func_02074700((int)player, i, 0, flag);
        }
        return func_02074728((int)player, i, 0, flag);
    }
    if (a == 2) {
        if (b != 1) {
            return FALSE;
        }
        return func_020745e4((int)player, 6, i, 0x40, flag);
    }
    if (b == 0) {
        return func_02074750((int)player, i, 0, flag);
    }
    return func_02074778((int)player, i, 0, flag);
}

BOOL MatchEngine::func_02074424(MatchPlayer *player, int a, int b, int c)
{
    bool flag = (unk_117d6[func_ov015_021319b0(player)] & 1) != 0;
    int i;
    int id;

    for (i = 0; i < 6; i++) {
        id = func_0207436c(player, b, c, i, flag);
        if (id != 0 && func_020733d4(player, a, id, b, c, flag, 0, 0)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL MatchEngine::func_020744d4(int a)
{
    int i;
    int id;
    s32 out;

    for (i = 0; i < 6; i++) {
        id = func_020745e4(a, 7, i, 0x20, 0);
        if (id == 0) {
            return FALSE;
        }
         if (func_020732b0((MatchPlayer *)a, id, (int *)&out)) {
            return TRUE;
        }
    }
    return FALSE;
}

// (nonmatching: the order of two instructions differs)
#ifdef NONMATCHING
int MatchEngine::func_0207455c(int a, BOOL b, u32 flags)
{
    int result;

    if (flags & 0x1) {
        result = 1;
        if (b) {
            result = 2;
        }
        return result;
    }
    result = 3;
    if (b) {
        result = 2;
    }
    return result;
}
#else
asm int MatchEngine::func_0207455c(int a, BOOL b, u32 flags)
{
    tst r3, #1
    beq @L_02074574
    mov r0, #1
    cmp r2, #0
    movne r0, #2
    bx lr
@L_02074574:
    mov r0, #3
    cmp r2, #0
    movne r0, #2
    bx lr
}
#endif

// (nonmatching: the order of two instructions differs)
#ifdef NONMATCHING
int MatchEngine::func_02074584(int a, BOOL b, u32 flags)
{
    int result;

    if (flags & 0x1) {
        result = 12;
        if (b) {
            result = 11;
        }
        return result;
    }
    result = 10;
    if (b) {
        result = 11;
    }
    return result;
}
#else
asm int MatchEngine::func_02074584(int a, BOOL b, u32 flags)
{
    tst r3, #1
    beq @L_0207459c
    mov r0, #0xc
    cmp r2, #0
    movne r0, #0xb
    bx lr
@L_0207459c:
    mov r0, #0xa
    cmp r2, #0
    movne r0, #0xb
    bx lr
}
#endif

int MatchEngine::func_020745ac(int a, BOOL b, u32 flags)
{
    int result;

    if (flags & 0x10) {
        result = 22;
        if (b) {
            result = 23;
        }
        return result;
    }
    result = 20;
    if (b) {
        result = 21;
    }
    return result;
}

int MatchEngine::func_020745d4(int a, BOOL b, u32 flags)
{
    int result = 30;

    if (b) {
        result = 31;
    }
    return result;
}

int MatchEngine::func_020745e4(int a, int kind, int b, int c, u8 d)
{
    int id;
    int i;
    int found = 0;
    u8 *move;

    for (i = 0; i < 6; i++) {
        id = func_020808c4((void *)a, i);
        if (id == 0) {
            continue;
        }
        if (!d && func_02080a80((void *)a, i)) {
            continue;
        }
        move = func_020739cc(id);
        if (c & 0x40) {
            if (move != NULL) {
                if (Move_HasFlag(move, 2) != TRUE) {
                    if (Move_HasFlag(move, 4) == TRUE) {
                        goto found;
                    }
                    continue;
                }
            }
        } else {
            if (move == NULL || move[0] != kind) {
                continue;
            }
            if ((c & 0x20) && !Move_IsKind7Flag1(move)) {
                continue;
            }
        }
    found:
        if (found == b) {
            return id;
        }
        found++;
    }
    return 0;
}

int MatchEngine::func_02074700(int a, int b, int c, u8 d)
{
    return func_020745e4(a, 5, b, c, d);
}

int MatchEngine::func_02074728(int a, int b, int c, u8 d)
{
    return func_020745e4(a, 6, b, c, d);
}

int MatchEngine::func_02074750(int a, int b, int c, u8 d)
{
    return func_020745e4(a, 7, b, c, d);
}

int MatchEngine::func_02074778(int a, int b, int c, u8 d)
{
    return func_020745e4(a, 8, b, c, d);
}

s8 MatchEngine::func_020747a0(int i)
{
    s8 *table = unk_be8;

    if (table != NULL) {
        return table[i];
    }
    return 0;
}

BOOL MatchEngine::func_020747b4(int i, int value)
{
    s8 *table = unk_be8;

    if (table == NULL) {
        return FALSE;
    }
    if (value > 127) {
        value = 127;
    }
    if (value < -127) {
        value = -127;
    }
    table[i] = value;
    return TRUE;
}

BOOL MatchEngine::func_020747e4(int index, u32 value)
{
    MatchPlayer *player = func_ov015_02130b14(index, 0);
    MatchPlayer *p = player;

    if (player == NULL) {
        return FALSE;
    }
    // (checked a second time, as in TextFont::SetFont: the copy keeps the 0 out of a register)
    if (player != NULL) {
        p = player;
    }
    if (value >= 0x200) {
        return FALSE;
    }
    p->state->unk_32 = value;
    return TRUE;
}

// sets or clears the state bit of the player's skill in slot (all its skills for slot -1)
void MatchEngine::func_02074820(int id, int slot, BOOL set)
{
    int i;
    MatchPlayer *player = func_ov015_02130b14(id, 0);

    if (player == NULL) {
        return;
    }
    if (slot == -1) {
        for (i = 0; i < 6; i++) {
            if (func_020808c4(player, i)) {
                MatchPlayerState_SetBit_88(player->state, 1 << i, set);
            }
        }
    } else {
        for (i = 0; i < 6; i++) {
            if (slot == func_020808c4(player, i)) {
                MatchPlayerState_SetBit_88(player->state, 1 << i, set);
                return;
            }
        }
    }
}

// (for an entry with flag 2 or 4: the first entry from 0x1C2 whose value at 0x18 is in the same
// ten as its own)
int MatchEngine::func_020748fc(int id)
{
    u8 *entry = func_020739cc(id);
    u32 base;
    u32 value;
    int i;

    if (entry == NULL) {
        return 0;
    }
    if (UnkEntry_020739cc_HasFlag(entry, 2)) {
        value = *(u32 *)(entry + 0x18);
        base = value - value % 10;
    } else if (UnkEntry_020739cc_HasFlag(entry, 4)) {
        value = *(u32 *)(entry + 0x18);
        base = value - value % 10;
    } else {
        return 0;
    }
    for (i = 0x1C2; i < 0x200; i++) {
        entry = func_020739cc(i);
        value = *(u32 *)(entry + 0x18);
        if (base == value - value % 10) {
            return i;
        }
    }
    return 0;
}

u16 MatchEngine::func_020749c8(s16 *values, BOOL reduce, int percent)
{
    u16 v = values[2] < 0 ? -values[2] : values[2];

    if (reduce) {
        v = v * 3 / 4;
    }
    return v * percent / 100;
}

u16 MatchEngine::func_02074a18(s16 *values, MatchPlayer *player)
{
    BOOL reduce = FALSE;
    int percent = 100;

    if (player != NULL && (data_020e88a0.unk_117d6[func_02080b90(player)] & 2)) {
        reduce = TRUE;
    }
    if (player->unk_f8 & 0x200) {
        percent = data_020e88a0.func_020739cc(0x3C)[6];
    }
    if (player->unk_f8 & 0x400) {
        percent = (u8)(percent * 120 / 100);
    }
    return func_020749c8(values, reduce, percent);
}

int MatchEngine::func_02074aac(u8 *req)
{
    return (req[1] >> 5) & 7;
}

int MatchEngine::func_02074abc(u8 *req)
{
    return req[1] & 0x1F;
}

u8 MatchEngine::func_02074ac8(u8 *req)
{
    return req[0];
}

// (a table of pairs of bytes after one byte: the pair of index i, from 2 to 20, at 1 + (i - 2) * 2)
extern "C" u8 func_02074ad0(u8 *table, u32 i)
{
    u8 *p;

    if (i == 0 || i > 20) {
        return 0;
    }
    if (i == 1) {
        return 0;
    }
    p = table + (i - 2) * 2;
    return p[1];
}

extern "C" u8 func_02074b00(u8 *table, u32 i)
{
    u8 *p;

    if (i == 0 || i > 20) {
        return 0;
    }
    if (i == 1) {
        return 0;
    }
    p = table + (i - 2) * 2;
    return p[2];
}

asm void MatchEngine::func_02074b30()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r9, r0
    mov r8, r1
    mov r7, r2
    add r4, sp, #0xc
    bl func_ov015_021317c8
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl _ZN11MatchEngine13func_0206bfecEv
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mvn r5, #0x80000000
    mov r6, #0
    sub r1, r5, #0x80000000
    add r3, sp, #0x2c
    add r2, sp, #0x3c
    add r0, sp, #0x1c
    b @L_02074bb0
@L_02074b9c:
    str r5, [r3, r6, lsl #2]
    str r1, [r4, r6, lsl #2]
    str r5, [r2, r6, lsl #2]
    str r1, [r0, r6, lsl #2]
    add r6, r6, #1
@L_02074bb0:
    cmp r6, #4
    blt @L_02074b9c
    ldr r4, =data_020c4920
    mov r11, #1
    ldr r0, [r4, #0x48]
    bl func_ov015_02131948
    ldr r1, [r4, #0x48]
    add r4, sp, #0xc
    add r2, sp, #0x2c
    mov r3, #0x80000000
    str r3, [r2, r0, lsl #4]
    str r1, [r4, r0, lsl #4]
    mov r5, #0
    ldr r10, =data_020c4920
    b @L_02074cf8
@L_02074bec:
    mov r0, r5
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02074cf4
    ldrh r0, [r6, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02074cf4
    ldrh r0, [r6, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrne r0, [r10, #0x48]
    cmpne r5, r0
    beq @L_02074cf4
    mov r0, r6
    bl func_02080abc
    cmp r0, #0
    beq @L_02074cf4
    ldr r1, [r6, #0xe8]
    ldr r0, [r10]
    ldr r1, [r1]
    subs r2, r1, r0
    ldr r0, [r6, #0xe8]
    rsbmi r2, r2, #0
    ldr r1, [r0, #4]
    ldr r0, [r10, #4]
    subs r0, r1, r0
    rsbmi r0, r0, #0
    cmp r2, #0x30000
    cmple r0, #0x30000
    bgt @L_02074cf4
    ldr r0, [r6, #0xe8]
    ldr r1, [r0, #4]
    ldr r3, [r0]
    mov r0, r9
    str r1, [sp]
    ldmia r10, {r1, r2}
    bl func_01fff198
    mov r6, r0
    cmp r6, #0x30000
    bgt @L_02074cf4
    mov r0, r5
    bl func_ov015_02131948
    add r1, sp, #0x2c
    add r12, r1, r0, lsl #4
    add r3, r4, r0, lsl #4
    str r6, [r12, #0xc]
    str r5, [r3, #0xc]
    mov lr, #2
    b @L_02074cec
@L_02074cc4:
    ldr r2, [r12, lr, lsl #2]
    cmp r2, r6
    ble @L_02074cf4
    ldr r0, [r3, lr, lsl #2]
    add r1, lr, #1
    str r2, [r12, r1, lsl #2]
    str r0, [r3, r1, lsl #2]
    str r6, [r12, lr, lsl #2]
    str r5, [r3, lr, lsl #2]
    sub lr, lr, #1
@L_02074cec:
    cmp lr, #0
    bge @L_02074cc4
@L_02074cf4:
    add r5, r5, #1
@L_02074cf8:
    cmp r5, #0x20
    blt @L_02074bec
    mov r5, #1
    add r6, sp, #0x1c
    b @L_02074da0
@L_02074d0c:
    ldr r0, [r4, r5, lsl #2]
    bl func_ov015_02130ae8
    sub r1, r5, #1
    ldr r2, [r4, r1, lsl #2]
    ldr r1, [r4, r5, lsl #2]
    cmp r2, r1
    beq @L_02074d48
    cmp r0, #0
    beq @L_02074d54
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02074d54
@L_02074d48:
    add r0, r5, #1
    ldr r0, [r4, r0, lsl #2]
    str r0, [r4, r5, lsl #2]
@L_02074d54:
    ldr r0, [r6, r5, lsl #2]
    bl func_ov015_02130ae8
    sub r1, r5, #1
    ldr r2, [r6, r1, lsl #2]
    ldr r1, [r6, r5, lsl #2]
    cmp r2, r1
    beq @L_02074d90
    cmp r0, #0
    beq @L_02074d9c
    ldrh r0, [r0, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02074d9c
@L_02074d90:
    add r0, r5, #1
    ldr r0, [r6, r0, lsl #2]
    str r0, [r6, r5, lsl #2]
@L_02074d9c:
    add r5, r5, #1
@L_02074da0:
    cmp r5, #3
    blt @L_02074d0c
    mov r0, r9
    mov r4, #0
    bl _ZN11MatchEngine13func_02076168Ev
    mov r6, r0
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl _ZN11MatchEngine13func_020760e4Eii
    cmp r0, #0
    ldrb r0, [r6, #0x12]
    orrne r0, r0, #8
    andeq r0, r0, #0xf7
    strb r0, [r6, #0x12]
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x48]
    bl func_ov015_02131948
    mov r1, r8, lsl #0x18
    mov r10, r1, asr #0x18
    add r1, sp, #0xc
    mov r2, #1
    cmp r0, #0
    add r11, r1, r0, lsl #4
    movne r2, #0
    mov r0, r1
    add r3, r0, r2, lsl #4
    mov r0, r7, lsl #0x18
    mov r1, r0, asr #0x18
    mov r5, #0
    mov r0, #2
    b @L_02074ef8
@L_02074e20:
    ldr r2, [r11, r5, lsl #2]
    cmp r2, #0
    blt @L_02074e8c
    cmp r8, r2
    bne @L_02074e68
    ldrb r2, [r6, #0x10]
    cmp r2, #0
    beq @L_02074e58
    add r2, r6, r2
    ldrsb r12, [r6, #4]
    strb r12, [r2, #4]
    ldrb r2, [r6, #0x10]
    add r2, r6, r2
    strb r4, [r2, #0xa]
@L_02074e58:
    strb r10, [r6, #4]
    mov r2, #1
    strb r2, [r6, #0xa]
    b @L_02074e80
@L_02074e68:
    ldrb r12, [r6, #0x10]
    add r12, r6, r12
    strb r2, [r12, #4]
    ldrb r2, [r6, #0x10]
    add r2, r6, r2
    strb r4, [r2, #0xa]
@L_02074e80:
    ldrb r2, [r6, #0x10]
    add r2, r2, #1
    strb r2, [r6, #0x10]
@L_02074e8c:
    ldr r2, [r3, r5, lsl #2]
    cmp r2, #0
    blt @L_02074ef4
    cmp r7, r2
    bne @L_02074ed0
    ldrb r2, [r6, #0x11]
    cmp r2, #0
    beq @L_02074ec4
    add r2, r6, r2
    ldrsb r12, [r6, #7]
    strb r12, [r2, #7]
    ldrb r2, [r6, #0x11]
    add r2, r6, r2
    strb r4, [r2, #0xd]
@L_02074ec4:
    strb r1, [r6, #7]
    strb r0, [r6, #0xd]
    b @L_02074ee8
@L_02074ed0:
    ldrb r12, [r6, #0x11]
    add r12, r6, r12
    strb r2, [r12, #7]
    ldrb r2, [r6, #0x11]
    add r2, r6, r2
    strb r4, [r2, #0xd]
@L_02074ee8:
    ldrb r2, [r6, #0x11]
    add r2, r2, #1
    strb r2, [r6, #0x11]
@L_02074ef4:
    add r5, r5, #1
@L_02074ef8:
    cmp r5, #3
    blt @L_02074e20
    ldrsb r0, [r6, #4]
    bl func_ov015_02130ae8
    mov r8, r0
    ldrsb r0, [r6, #7]
    bl func_ov015_02130ae8
    mov r5, #0
    mov r4, #1
    mov r7, r0
    str r5, [sp]
    stmib sp, {r4, r7}
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN11MatchEngine13func_02069344Eiiiihi
    mov r1, r0
    mov r0, r6
    bl func_02076568
    str r5, [sp]
    mov r1, r7
    mov r2, r5
    mov r0, r9
    mov r3, #3
    stmib sp, {r4, r8}
    bl _ZN11MatchEngine13func_02069344Eiiiihi
    mov r1, r0
    mov r0, r6
    bl func_020765a0
    mov r0, r9
    bl func_ov087_0217e70c
    mov r0, r9
    mov r1, r4
    bl _ZN11MatchEngine13func_0206bff4Ei
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02074f90()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    mov r6, r0
    mov r8, r1
    mov r5, r2
    add r7, sp, #0x14
    bl _ZN11MatchEngine13func_02076268Ev
    mov r9, r0
    mov r0, r6
    bl _ZN11MatchEngine13func_020762c0Ev
    str r0, [sp, #0x10]
    mov r0, #0x64
    bl Random_RandB
    mov r11, r0
    mov r0, #2
    bl Random_RandB
    str r0, [sp, #0xc]
    mov r0, r6
    bl _ZN11MatchEngine13func_0207620cEv
    ldrb r0, [r0, #0x12]
    mov r4, #1
    tst r0, #8
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    mov r0, r9
    moveq r4, #0
    bl func_ov015_02131994
    cmp r8, r0
    bne @L_020750d4
    mov r0, r9
    bl func_ov015_02130ae8
    mov r10, r0
    ldr r0, [sp, #0x10]
    bl func_ov015_02130ae8
    mov r9, #0
    mov r2, r0
    str r9, [sp]
    add r7, sp, #0x14
    mov r0, #4
    str r7, [sp, #4]
    str r0, [sp, #8]
    mov r0, r6
    mov r1, r10
    mov r3, r9
    bl _ZN11MatchEngine13func_02074210EP11MatchPlayeriiiPii
    mov r8, r0
    mov r0, r6
    mov r1, r10
    mov r2, r8
    bl func_ov087_0217e9e8
    ldr r1, [r10, #0xec]
    ldrh r2, [r1, #0x32]
    cmp r2, #0
    cmpne r8, #0
    ble @L_02075090
@L_02075070:
    ldr r1, [r7, r9, lsl #2]
    cmp r1, r2
    addeq sp, sp, #0x34
    streq r1, [r5]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r9, r9, #1
    cmp r9, r8
    blt @L_02075070
@L_02075090:
    cmp r8, #0
    add r7, sp, #0x14
    ble @L_020750c0
    cmp r11, r0
    bhs @L_020750c0
    mov r0, r11
    mov r1, r8
    bl _u32_div_f
    ldr r0, [r7, r1, lsl #2]
    add sp, sp, #0x34
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020750c0:
    mov r2, #0
    mov r0, r6
    mov r1, r10
    mov r3, r2
    b @L_02075198
@L_020750d4:
    ldr r0, [sp, #0x10]
    bl func_ov015_02130ae8
    mov r8, r0
    mov r0, r9
    bl func_ov015_02130ae8
    mov r2, r0
    mov r0, #1
    stmia sp, {r0, r7}
    mov r0, #4
    mov r10, #0
    str r0, [sp, #8]
    mov r0, r6
    mov r1, r8
    mov r3, r10
    bl _ZN11MatchEngine13func_02074210EP11MatchPlayeriiiPii
    mov r9, r0
    mov r0, r6
    mov r1, r8
    mov r2, r9
    bl func_ov087_0217e9e8
    ldr r1, [r8, #0xec]
    ldrh r2, [r1, #0x32]
    cmp r2, #0
    cmpne r9, #0
    ble @L_02075158
@L_02075138:
    ldr r1, [r7, r10, lsl #2]
    cmp r1, r2
    addeq sp, sp, #0x34
    streq r1, [r5]
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r10, r10, #1
    cmp r10, r9
    blt @L_02075138
@L_02075158:
    cmp r9, #0
    add r7, sp, #0x14
    ble @L_02075188
    cmp r11, r0
    bhs @L_02075188
    mov r0, r11
    mov r1, r9
    bl _u32_div_f
    ldr r0, [r7, r1, lsl #2]
    add sp, sp, #0x34
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075188:
    mov r0, r6
    mov r1, r8
    mov r2, #0
    mov r3, #1
@L_02075198:
    stmia sp, {r4, r7}
    bl _ZN11MatchEngine13func_020725acEv
    ldr r0, [sp, #0xc]
    add r1, sp, #0x14
    ldr r0, [r1, r0, lsl #2]
    str r0, [r5]
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_020751b8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r7, r3
    ldrh r3, [r7, #0xf0]
    mov r4, #1
    mov r10, r0
    tst r3, #0x80
    movne r0, r4
    moveq r0, #0
    mov r9, r1
    mov r8, r2
    ldr r6, [sp, #0x30]
    mov r5, #2
    cmp r0, #0
    beq @L_02075228
    mov r0, r7
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206de34Ei
    cmp r0, #0
    beq @L_02075228
    mov r0, r9
    mov r1, r5
    bl _ZN11MatchEngine13func_02076370EPhi
    add sp, sp, #0xc
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075228:
    ldrh r0, [r8, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02075274
    mov r0, r8
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206de34Ei
    cmp r0, #0
    beq @L_02075274
    mov r0, r9
    mov r1, r4
    bl _ZN11MatchEngine13func_02076370EPhi
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075274:
    ldrb r0, [r6]
    mov r1, #0
    add r0, r0, #0xff
    and r0, r0, #0xff
    cmp r0, #6
    bhi @L_02075298
    mov r0, r4, lsl r0
    tst r0, #0x55
    movne r1, r4
@L_02075298:
    cmp r1, #0
    movne r5, r6
    mov r0, r8
    ldrne r6, [sp, #0x34]
    ldreq r5, [sp, #0x34]
    bl _ZN11MatchEngine13func_0207f3e0Ev
    mov r4, r0
    ldrsh r1, [r9]
    mov r0, r10
    bl _ZN11MatchEngine13func_020747a0Ei
    add r4, r4, r0
    mov r0, r7
    bl _ZN11MatchEngine13func_0207f3e0Ev
    mov r11, r0
    ldrsh r1, [r9, #2]
    mov r0, r10
    bl _ZN11MatchEngine13func_020747a0Ei
    add r0, r11, r0
    cmp r4, r0
    ble @L_02075304
    mov r4, #1
    mov r0, r9
    mov r1, r4
    bl _ZN11MatchEngine13func_02076370EPhi
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075304:
    cmp r4, r0
    mov r0, #2
    mov r4, #0
    bge @L_02075330
    mov r4, r0
    mov r0, r9
    mov r1, r4
    bl _ZN11MatchEngine13func_02076370EPhi
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02075330:
    ldrb r1, [r5]
    add r1, r1, #0xfb
    and r1, r1, #0xff
    cmp r1, #3
    movls r1, #1
    movhi r1, r4
    str r4, [sp]
    cmp r1, #0
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r8
    beq @L_0207536c
    mov r2, r5
    mov r3, #0x19
    b @L_02075374
@L_0207536c:
    mov r2, r5
    mov r3, #1
@L_02075374:
    str r7, [sp, #8]
    bl _ZN11MatchEngine13func_02069394Eiiiihi
    ldrb r1, [r6]
    mov r5, r0
    mov r0, #2
    add r1, r1, #0xfb
    and r1, r1, #0xff
    cmp r1, #3
    movls r1, #1
    movhi r1, #0
    str r4, [sp]
    cmp r1, #0
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r7
    beq @L_020753c0
    mov r2, r6
    mov r3, #0x1b
    b @L_020753c8
@L_020753c0:
    mov r2, r6
    mov r3, #3
@L_020753c8:
    str r8, [sp, #8]
    bl _ZN11MatchEngine13func_02069394Eiiiihi
    mov r4, r0
    cmp r5, #1
    movlt r5, #1
    cmp r4, #1
    movlt r4, #1
    cmp r5, r4
    bne @L_020753fc
    cmp r4, #2
    movlt r5, #1
    movlt r4, #2
    subge r5, r5, #1
@L_020753fc:
    mov r0, r9
    mov r1, r5
    bl func_020764f8
    mov r0, r9
    mov r1, r4
    bl func_02076530
    mov r0, #1
    cmp r5, r4
    movle r0, #2
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02075428()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    mov r9, r1
    mov r8, r3
    bl _ZN11MatchEngine13func_0207620cEv
    mov r4, r0
    ldrsb r0, [r4, #4]
    bl func_ov015_02130ae8
    mov r5, r0
    ldrsb r0, [r4, #7]
    bl func_ov015_02130ae8
    str r0, [sp, #0xc]
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_020739ccEi
    str r0, [sp, #8]
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_020739ccEi
    mov r11, r0
    mov r0, r5
    bl func_ov015_021319b0
    cmp r0, #0
    mov r6, #0
    streqh r9, [r4]
    streqh r8, [r4, #2]
    strneh r8, [r4]
    strneh r9, [r4, #2]
    ldrb r1, [r4, #0x10]
    ldrb r2, [r4, #0x11]
    mov r7, r6
    mov r0, r6
@L_020754ac:
    cmp r0, r1
    bge @L_020754c4
    add r3, r4, r0
    ldrb r3, [r3, #0xa]
    cmp r3, #0
    addeq r6, r6, #1
@L_020754c4:
    cmp r0, r2
    bge @L_020754dc
    add r3, r4, r0
    ldrb r3, [r3, #0xd]
    cmp r3, #0
    addeq r7, r7, #1
@L_020754dc:
    add r0, r0, #1
    cmp r0, #3
    blt @L_020754ac
    cmp r6, #1
    cmpgt r7, #1
    ble @L_02075548
    mov r0, #0
    mov r6, #3
    mov r1, #4
@L_02075500:
    ldrb r2, [r4, #0x10]
    cmp r0, r2
    bge @L_0207551c
    add r3, r4, r0
    ldrb r2, [r3, #0xa]
    cmp r2, #0
    streqb r6, [r3, #0xa]
@L_0207551c:
    ldrb r2, [r4, #0x11]
    cmp r0, r2
    bge @L_02075538
    add r3, r4, r0
    ldrb r2, [r3, #0xd]
    cmp r2, #0
    streqb r1, [r3, #0xd]
@L_02075538:
    add r0, r0, #1
    cmp r0, #3
    blt @L_02075500
    b @L_0207558c
@L_02075548:
    cmp r6, #0
    cmpgt r7, #0
    ble @L_0207558c
    mov r0, #2
    bl Random_RandA
    cmp r6, #1
    cmpne r0, #0
    moveq r1, #3
    streqb r1, [r4, #0xb]
    movne r1, #3
    strneb r1, [r4, #0xc]
    cmp r7, #1
    cmpne r0, #0
    moveq r0, #4
    streqb r0, [r4, #0xe]
    movne r0, #4
    strneb r0, [r4, #0xf]
@L_0207558c:
    mov r0, #0
    mov r6, #5
    mov r1, #6
@L_02075598:
    ldrb r2, [r4, #0x10]
    cmp r0, r2
    bge @L_020755b4
    add r3, r4, r0
    ldrb r2, [r3, #0xa]
    cmp r2, #0
    streqb r6, [r3, #0xa]
@L_020755b4:
    ldrb r2, [r4, #0x11]
    cmp r0, r2
    bge @L_020755d0
    add r3, r4, r0
    ldrb r2, [r3, #0xd]
    cmp r2, #0
    streqb r1, [r3, #0xd]
@L_020755d0:
    add r0, r0, #1
    cmp r0, #3
    blt @L_02075598
    mov r0, r10
    mov r6, #1
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    bne @L_02075600
    bl func_ov015_021317c8
    cmp r0, #0
    addeq r0, r10, #0x11000
    streqb r6, [r0, #0x89a]
@L_02075600:
    ldrb r0, [r4, #0x12]
    ldr r3, [sp, #0xc]
    mov r6, #1
    tst r0, #8
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    ldr r0, [sp, #8]
    mov r1, r4
    str r0, [sp]
    mov r0, r10
    mov r2, r5
    ldr r7, =data_020fc704
    moveq r6, #0
    str r11, [sp, #4]
    bl _ZN11MatchEngine13func_020751b8Ev
    ldr r1, =data_020c4808
    str r0, [r7]
    ldrb r0, [r1]
    cmp r0, #0
    beq @L_0207575c
    bl func_ov015_021317c8
    cmp r0, #0
    bne @L_0207575c
    ldr r0, [sp, #8]
    ldr r7, =data_020fc704
    ldrb r0, [r0]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    bne @L_0207575c
    ldrb r0, [r11]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #3
    movls r0, #1
    movhi r0, #0
    cmp r0, #0
    bne @L_0207575c
    ldr r0, =0x117fe
    ldrh r0, [r10, r0]
    tst r0, #0x200
    beq @L_0207575c
    ldrh r0, [r5, #0xf0]
    mov r2, #0
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020756ec
    add r10, sp, #0x10
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r3, r2
    stmia sp, {r6, r10}
    b @L_02075704
@L_020756ec:
    add r5, sp, #0x10
    str r6, [sp]
    ldr r0, =data_020e88a0
    ldr r1, [sp, #0xc]
    mov r3, #1
    str r5, [sp, #4]
@L_02075704:
    bl _ZN11MatchEngine13func_020725acEv
    ldr r0, [sp, #0x10]
    cmp r0, r9
    cmpne r0, r8
    bne @L_02075730
    ldrb r1, [r4, #0x12]
    mov r0, #2
    orr r1, r1, #0x20
    strb r1, [r4, #0x12]
    str r0, [r7]
    b @L_02075750
@L_02075730:
    ldr r0, [sp, #0x14]
    cmp r0, r9
    cmpne r0, r8
    ldreqb r1, [r4, #0x12]
    moveq r0, #2
    orreq r1, r1, #0x40
    streqb r1, [r4, #0x12]
    streq r0, [r7]
@L_02075750:
    ldr r1, [r7]
    mov r0, r4
    bl _ZN11MatchEngine13func_02076370EPhi
@L_0207575c:
    ldr r0, =data_020fc704
    ldr r0, [r0]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_0207577c(UnkRecord_02076168 *record)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    mov r10, r0
    mov r9, r1
    mov r8, r7
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r0, [r9, #4]
    bl func_ov015_02130ae8
    mov r4, r0
    ldrsb r0, [r9, #7]
    bl func_ov015_02130ae8
    mov r5, r0
    ldrsh r1, [r9]
    mov r0, r10
    bl _ZN11MatchEngine13func_020739ccEi
    mov r11, r0
    ldrsh r1, [r9, #2]
    mov r0, r10
    bl _ZN11MatchEngine13func_020739ccEi
    mov r6, r0
    cmp r4, #0
    beq @L_020757f4
    mov r0, r4
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206b4ccEi
    mov r7, r0
@L_020757f4:
    cmp r5, #0
    beq @L_02075814
    mov r0, r5
    bl func_ov015_021319b0
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_0206b4ccEi
    mov r8, r0
@L_02075814:
    mov r0, r9
    bl _ZN11MatchEngine13func_0207649cEPh
    str r0, [sp]
    mov r0, r9
    bl _ZN11MatchEngine13func_020764b4EPh
    ldr r1, [sp]
    cmp r1, r0
    movge r0, #1
    movlt r0, #2
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    cmp r0, #1
    bne @L_020758e0
    cmp r4, #0
    beq @L_020758b8
    ldr r0, [r4, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #0x4000
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_020758b8
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x89d]
    cmp r0, #0
    beq @L_020758b8
    mov r0, r11
    mov r1, r4
    ldrsh r5, [r4, #0x96]
    bl _ZN11MatchEngine13func_02074a18EPsP11MatchPlayer
    mov r1, #0x64
    mul r1, r0, r1
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    sub r0, r5, r3
    mov r1, r0, lsl #0x10
    mov r0, r4
    mov r1, r1, asr #0x10
    bl func_02080b1c
@L_020758b8:
    cmp r11, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r11]
    cmp r0, #5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0
    ldrneh r0, [r7, #4]
    addne r0, r0, #1
    strneh r0, [r7, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020758e0:
    cmp r5, #0
    beq @L_02075950
    ldr r0, [r5, #0xe8]
    ldrh r0, [r0, #0x16]
    tst r0, #0x4000
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_02075950
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x89d]
    cmp r0, #0
    beq @L_02075950
    mov r0, r6
    mov r1, r5
    ldrsh r4, [r5, #0x96]
    bl _ZN11MatchEngine13func_02074a18EPsP11MatchPlayer
    mov r1, #0x64
    mul r1, r0, r1
    ldr r2, =0x51eb851f
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #5
    sub r0, r4, r3
    mov r1, r0, lsl #0x10
    mov r0, r5
    mov r1, r1, asr #0x10
    bl func_02080b1c
@L_02075950:
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r6]
    cmp r0, #6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    ldrneh r0, [r8, #6]
    addne r0, r0, #1
    strneh r0, [r8, #6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_0207597c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r9, r0
    str r1, [sp, #8]
    bl _ZN11MatchEngine13func_0207620cEv
    mov r6, r0
    mov r0, #0
    str r0, [sp, #0x14]
    ldr r1, =data_020fc704
    mov r0, r0
    ldr r1, [r1]
    str r0, [sp, #0x10]
    cmp r1, #1
    ldrsb r4, [r6, #4]
    ldrsb r7, [r6, #7]
    bne @L_020759f0
    mov r0, r4
    str r7, [sp, #0x20]
    bl func_ov015_02130ae8
    mov r5, r0
    mov r0, r7
    bl func_ov015_02130ae8
    str r0, [sp, #0x1c]
    ldrsh r1, [r6]
    mov r0, r9
    bl _ZN11MatchEngine13func_020739ccEi
    str r0, [sp, #0x18]
    ldrsh r0, [r6]
    b @L_02075a20
@L_020759f0:
    mov r0, r7
    str r4, [sp, #0x20]
    bl func_ov015_02130ae8
    mov r5, r0
    mov r0, r4
    bl func_ov015_02130ae8
    str r0, [sp, #0x1c]
    ldrsh r1, [r6, #2]
    mov r0, r9
    bl _ZN11MatchEngine13func_020739ccEi
    str r0, [sp, #0x18]
    ldrsh r0, [r6, #2]
@L_02075a20:
    str r0, [sp, #0xc]
    bl func_ov015_021317c8
    cmp r0, #0
    bne @L_02075a78
    ldrb r0, [r6, #0x12]
    mov r2, #0
    tst r0, #0x40
    movne r2, #3
    bne @L_02075a4c
    tst r0, #0x20
    movne r2, #2
@L_02075a4c:
    cmp r2, #0
    beq @L_02075a78
    mov r0, #1
    str r0, [sp]
    str r2, [sp, #4]
    mov r0, r9
    mov r1, r7
    mov r2, r4
    mov r3, #2
    bl func_ov087_0217a640
    str r0, [sp, #0x14]
@L_02075a78:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02075aa4
    ldr r0, =gWirelessUtil
    ldrb r0, [r0, #0x64]
    cmp r0, #0
    ldrne r0, [sp, #0x18]
    ldrneb r0, [r0, #1]
    cmpne r0, #0
    beq @L_02075b20
@L_02075aa4:
    mov r0, #0x64
    bl Random_RandB
    ldr r1, [sp, #0x1c]
    and r4, r0, #0xff
    ldr r1, [r1, #0xf8]
    ldr r0, [sp, #0x18]
    tst r1, #0x40
    ldrb r0, [r0, #1]
    beq @L_02075ae8
    mov r0, r9
    mov r1, #0x39
    bl _ZN11MatchEngine13func_020739ccEi
    ldr r1, [sp, #0x18]
    ldrb r0, [r0, #6]
    ldrb r1, [r1, #1]
    add r0, r1, r0
    and r0, r0, #0xff
@L_02075ae8:
    cmp r0, r4
    bls @L_02075b20
    ldr r1, [sp, #0x18]
    mov r0, r9
    bl _ZN11MatchEngine13func_0207635cEv
    str r0, [sp]
    mov r3, #2
    str r3, [sp, #4]
    ldr r2, [sp, #0x1c]
    ldrsh r1, [r5, #0xf4]
    ldrsh r2, [r2, #0xf4]
    mov r0, r9
    bl func_ov087_0217a640
    str r0, [sp, #0x14]
@L_02075b20:
    mvn r0, #0
    mov r8, #0
    str r0, [sp, #0x24]
    b @L_02075d6c
@L_02075b30:
    cmp r8, #3
    bge @L_02075b50
    ldrb r0, [r6, #0x10]
    cmp r8, r0
    bge @L_02075d68
    add r0, r6, r8
    ldrsb r10, [r0, #4]
    b @L_02075b68
@L_02075b50:
    sub r1, r8, #3
    ldrb r0, [r6, #0x11]
    cmp r1, r0
    bge @L_02075d68
    add r0, r6, r1
    ldrsb r10, [r0, #7]
@L_02075b68:
    mov r0, r10
    bl func_ov015_02130ae8
    mov r4, r0
    ldr r0, [sp, #0x20]
    mov r1, r10
    bl func_ov015_02131854
    cmp r0, #0
    beq @L_02075d14
    cmp r10, r7
    ldreq r0, [sp, #8]
    cmpeq r0, #0
    bne @L_02075be8
    mov r0, r7
    bl func_ov015_02131910
    cmp r0, #0
    beq @L_02075bb4
    ldr r0, =gAudioPlayer
    mov r1, #0x20
    b @L_02075bbc
@L_02075bb4:
    ldr r0, =gAudioPlayer
    mov r1, #0x1f
@L_02075bbc:
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r4, #0xe8]
    cmp r1, #0
    beq @L_02075c00
    mov r0, #3
    strb r0, [r1, #0x1c]
    mov r0, #0x3c
    strh r0, [r1, #0x12]
    mov r0, #0
    strh r0, [r1, #0x14]
    b @L_02075c00
@L_02075be8:
    ldr r1, [r4, #0xe8]
    cmp r1, #0
    movne r0, #0
    strneb r0, [r1, #0x1c]
    strneh r0, [r1, #0x12]
    strneh r0, [r1, #0x14]
@L_02075c00:
    mov r0, #0
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    mov r0, r9
    mov r1, r4
    mov r2, #0x5a
    mov r3, #1
    bl _ZN11MatchEngine13func_02063550EP11MatchPlayeriiii
    mov r0, r9
    mov r1, r4
    mov r2, #0
    bl func_01ff9490
    ldr r1, [r4, #0xec]
    cmp r1, #0
    beq @L_02075c5c
    mov r0, #0
    strb r0, [r1, #0x84]
    ldr r1, [r4, #0xec]
    strb r0, [r1, #0x85]
    ldr r1, [r4, #0xec]
    ldr r0, [sp, #0x24]
    strh r0, [r1, #0x86]
@L_02075c5c:
    ldr r1, [r5, #0xe8]
    ldr r0, [r4, #0xe8]
    ldr r3, [r1]
    ldr r2, [r1, #4]
    ldr r1, [r0]
    ldr r0, [r0, #4]
    sub r1, r1, r3
    sub r0, r0, r2
    bl FX_Atan2Idx
    mov r0, r0, asr #4
    mov r1, r0, lsl #1
    add r0, r1, #1
    mov r2, r0, lsl #1
    ldr r0, =FX_SinCosTable_
    mov r1, r1, lsl #1
    ldrsh r10, [r0, r2]
    ldrsh r1, [r0, r1]
    ldr r2, [r4, #0xe8]
    mov r3, r10, asr #0x1f
    mov r0, r1, asr #0x1f
    str r0, [sp, #0x28]
    mov r0, #0xa000
    umull lr, r12, r10, r0
    mov r0, #0xa000
    mla r12, r3, r0, r12
    adds r3, lr, #0x800
    ldr r11, [r2]
    adc r0, r12, #0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
    add r0, r11, r3
    str r0, [r2]
    mov r2, #0xa000
    umull r10, r3, r1, r2
    ldr r1, [sp, #0x28]
    mov r2, #0xa000
    mla r3, r1, r2, r3
    adds r2, r10, #0x800
    ldr r0, [r4, #0xe8]
    adc r1, r3, #0
    mov r2, r2, lsr #0xc
    orr r2, r2, r1, lsl #20
    ldr r1, [r0, #4]
    add r1, r1, r2
    str r1, [r0, #4]
    b @L_02075d50
@L_02075d14:
    ldr r1, [r4, #0xe8]
    mov r2, #0
    cmp r1, #0
    movne r0, #0
    strneb r0, [r1, #0x1c]
    strneh r0, [r1, #0x12]
    strneh r0, [r1, #0x14]
    mov r0, #0
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    mov r0, r9
    mov r1, r4
    mov r3, r2
    bl _ZN11MatchEngine13func_02063550EP11MatchPlayeriiii
@L_02075d50:
    ldrsh r1, [r4, #0x94]
    mov r0, r4
    sub r1, r1, #5
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    bl func_02080b00
@L_02075d68:
    add r8, r8, #1
@L_02075d6c:
    cmp r8, #6
    blt @L_02075b30
    ldr r0, [sp, #0x1c]
    ldr r1, [r0, #0xe8]
    mov r0, r9
    ldmia r1, {r2, r3}
    mov r1, r5
    bl _ZN11MatchEngine13func_0207922cEP11MatchPlayerll
    cmp r0, #0
    ldr r0, [r5, #0xe8]
    mov r2, #0
    ldrb r3, [r0, #0x1a]
    beq @L_02075db8
    ldr r0, =g3DFieldSprite
    str r2, [sp]
    mov r1, r5
    ldr r0, [r0]
    mov r2, #2
    b @L_02075dcc
@L_02075db8:
    ldr r0, =g3DFieldSprite
    str r2, [sp]
    ldr r0, [r0]
    mov r1, r5
    mov r2, #3
@L_02075dcc:
    bl func_ov015_0213a75c
    cmp r5, #0
    mov r4, #0
    beq @L_02075e18
    ldr r0, [sp, #0x14]
    cmp r0, #0
    bne @L_02075e18
    mov r0, #0x64
    bl Random_RandA
    ldr r1, [sp, #0x18]
    ldrb r1, [r1, #9]
    cmp r0, r1
    bhs @L_02075e18
    mov r0, r9
    mov r1, r5
    bl _ZN11MatchEngine13func_0207903cEP11MatchPlayer
    cmp r0, #0
    moveq r0, #1
    streq r0, [sp, #0x10]
@L_02075e18:
    ldr r0, =data_020fc704
    ldr r0, [r0]
    cmp r0, #2
    bne @L_02075e48
    mov r2, #1
    str r4, [sp]
    ldr r4, [sp, #0x10]
    mov r0, r9
    mov r1, r7
    mov r3, r2
    str r4, [sp, #4]
    bl func_01ff8ca4
@L_02075e48:
    ldr r0, [sp, #0x10]
    mov r4, #1
    cmp r0, #0
    beq @L_02075e68
    mov r0, r9
    mov r1, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_02075f7cEv
@L_02075e68:
    cmp r5, #0
    beq @L_02075e9c
    ldr r0, [sp, #0x14]
    cmp r0, #0
    bne @L_02075e9c
    mov r0, r5
    bl func_02080b90
    add r1, r9, #0x48
    add r2, r1, #0x11800
    mov r1, r0, lsl #1
    ldrh r0, [r2, r1]
    add r0, r0, #1
    strh r0, [r2, r1]
@L_02075e9c:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_02075ec4
    ldr r0, [sp, #0x14]
    cmp r0, #0
    bne @L_02075ec4
    mov r0, r9
    mov r2, r5
    mov r1, #2
    bl func_ov087_0217a324
@L_02075ec4:
    ldr r0, [sp, #0x14]
    cmp r0, #0
    ldreq r0, =gGameState
    ldreqb r0, [r0, #0x1a]
    cmpeq r0, #0
    bne @L_02075f30
    mov r2, #0
    b @L_02075f28
@L_02075ee4:
    add r0, r5, r2, lsl #1
    ldrh r1, [r0, #0x98]
    ldr r0, [sp, #0xc]
    cmp r0, r1
    bne @L_02075f1c
    add r0, r5, r2
    ldrb r0, [r0, #0xa4]
    mov r1, #0xff
    add r0, r0, #1
    cmp r0, #0xff
    andle r1, r0, #0xff
    add r0, r5, r2
    strb r1, [r0, #0xa4]
    b @L_02075f30
@L_02075f1c:
    add r0, r2, #1
    mov r0, r0, lsl #0x10
    mov r2, r0, asr #0x10
@L_02075f28:
    cmp r2, #6
    blt @L_02075ee4
@L_02075f30:
    ldrb r2, [r6, #0x12]
    mov r0, r9
    mov r1, #0
    orr r2, r2, #0x80
    strb r2, [r6, #0x12]
    bl _ZN11MatchEngine13func_0206bff4Ei
    mov r0, r9
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    addeq r0, r9, #0x11000
    streqb r4, [r0, #0x89a]
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02075f7c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_ov015_02143664
    mov r7, #5
    mov r0, r7
    bl Random_RandA
    adds r0, r0, #0x19
    mov r0, r7
    beq @L_02075fcc
    bl Random_RandA
    add r0, r0, #0x19
    mov r0, r0, lsl #0xc
    bl _ffltu
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02075fe4
@L_02075fcc:
    bl Random_RandA
    add r0, r0, #0x19
    mov r0, r0, lsl #0xc
    bl _ffltu
    mov r1, #0x3f000000
    bl _fsub
@L_02075fe4:
    bl _ffix
    ldr r1, [r5, #0xe8]
    mov r9, r0
    ldrh r7, [r1, #0x18]
    mov r0, #0x6000
    bl Random_RandA
    sub r0, r0, #0x3000
    add r1, r7, #0x10000
    add r0, r1, r0
    mov r1, r0, lsl #0x10
    mov r0, #5
    mov r7, r1, lsr #0x10
    bl Random_RandA
    add r2, r0, #0xa
    mov r3, r2, lsl #0x10
    ldr r1, =0x6c16c16d
    mov r0, r6
    umull r1, r8, r3, r1
    rsb r1, r8, r2, lsl #16
    add r8, r8, r1, lsr #1
    mov r1, r8, lsl #8
    mov r8, r1, lsr #0x10
    mov r1, r5
    mov r10, #9
    mov r2, r10
    bl func_ov015_02140e74
    cmp r9, r0
    ble @L_02076068
    mov r0, r6
    mov r1, r5
    mov r2, r10
    bl func_ov015_02140e74
    mov r9, r0
@L_02076068:
    mov r0, #6
    bl func_ov015_02131704
    str r7, [sp]
    ldr r7, =data_020c4920
    str r8, [sp, #4]
    mov r8, #9
    str r8, [sp, #8]
    mov r3, #0
    str r3, [sp, #0xc]
    str r3, [sp, #0x10]
    mov r0, r6
    mov r1, r7
    mov r2, r5
    str r3, [sp, #0x14]
    mov r3, r9
    bl func_ov015_02140958
    ldrb r1, [r4, #0x12]
    mov r0, r6
    orr r1, r1, #4
    strb r1, [r4, #0x12]
    bl _ZN11MatchEngine13func_0206bfa8Ev
    mov r1, r5
    mov r2, r7
    mov r3, r8
    str r0, [sp]
    mov r0, r6
    bl func_ov087_0217b3c8
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

BOOL MatchEngine::func_020760e4(int a, int b)
{
    MatchPlayer *pa = func_ov015_02130ae8(a);
    MatchPlayer *pb = func_ov015_02130ae8(b);
    int da;
    int db;

    if (pa == NULL || pb == NULL) {
        return FALSE;
    }
    db = pb->body->unk_1a;
    da = pa->body->unk_1a;
    return da == (db + 4) % 8 || da == (db + 5) % 8 || da == (db + 3) % 8;
}

UnkRecord_02076168 *MatchEngine::func_02076168()
{
    UnkRecord_02076168 *rec;
    int i;

    if (func_ov015_021317c8()) {
        unk_b84.unk_2 = 0;
        return &unk_116a4[0];
    }
    unk_b84.unk_2++;
    if (unk_b84.unk_2 >= 4) {
        unk_b84.unk_2 = 0;
    }
    rec = &unk_116a4[unk_b84.unk_2];
    MI_CpuFill8(rec, 0, sizeof(UnkRecord_02076168));
    for (i = 0; i < 3; i++) {
        rec->unk_4[i] = -1;
        rec->unk_7[i] = -1;
    }
    return &unk_116a4[unk_b84.unk_2];
}

UnkRecord_02076168 *MatchEngine::func_0207620c()
{
    int i = (s8)unk_b84.unk_2;

    if (func_ov015_021317c8()) {
        return &unk_116a4[0];
    }
    if (func_0206ace8()) {
        i = (s8)func_0206a970()->unk_2;
    }
    if (i < 0) {
        return NULL;
    }
    return &unk_116a4[i];
}

s8 MatchEngine::func_02076268()
{
    int i = (s8)func_0206a970()->unk_2;

    if (i < 0) {
        return -1;
    }
    if ((unk_116a4[i].unk_12 & 0x80) ? TRUE : FALSE) {
        return -1;
    }
    return unk_116a4[i].unk_4[0];
}

s8 MatchEngine::func_020762c0()
{
    int i = (s8)func_0206a970()->unk_2;

    if (i < 0) {
        return -1;
    }
    if ((unk_116a4[i].unk_12 & 0x80) ? TRUE : FALSE) {
        return -1;
    }
    return unk_116a4[i].unk_7[0];
}

void MatchEngine::func_02076318(int a, int b, int mode)
{
    UnkRecord_02076168 *rec = func_02076168();

    rec->unk_10 = 1;
    rec->unk_11 = 1;
    rec->unk_4[0] = a;
    rec->unk_7[0] = b;
    func_02076370((u8 *)rec, mode);
    rec->unk_12 |= 0x80;
}

BOOL MatchEngine::func_0207635c()
{
    Random_RandA(100);
    return TRUE;
}

void MatchEngine::func_02076370(u8 *rec, int mode)
{
    int a = Random_RandA(99) + 1;
    int b = Random_RandA(99) + 1;
    int t;

    if (a < b) {
        t = a;
        a = b;
        b = t;
    } else if (a == b) {
        if (b > 1) {
            b--;
        } else {
            a++;
        }
    }
    if (mode == 1) {
        func_020764f8(rec, a);
        func_02076530(rec, b);
    } else if (mode == 2) {
        func_020764f8(rec, b);
        func_02076530(rec, a);
    } else {
        func_020764f8(rec, 1);
        func_02076530(rec, 1);
    }
}

s8 MatchEngine::func_02076424(u8 *data)
{
    s8 side = func_0207649c(data) >= func_020764b4(data) ? 1 : 2;

    if (side == 1) {
        return ((s8 *)data)[4];
    }
    return ((s8 *)data)[7];
}

s8 MatchEngine::func_02076460(u8 *data)
{
    s8 side = func_0207649c(data) >= func_020764b4(data) ? 1 : 2;

    if (side == 1) {
        return ((s8 *)data)[7];
    }
    return ((s8 *)data)[4];
}

int MatchEngine::func_0207649c(u8 *data)
{
    return (((data[0x17] & 0xC0) >> 6) << 8) | data[0x13];
}

int MatchEngine::func_020764b4(u8 *data)
{
    return (((data[0x17] & 0x30) >> 4) << 8) | data[0x14];
}

int MatchEngine::func_020764cc(u8 *data)
{
    return (((data[0x17] & 0xC) >> 2) << 8) | data[0x15];
}

int MatchEngine::func_020764e4(u8 *data)
{
    return ((u32)(data[0x17] << 30) >> 22) | data[0x16];
}

// (four values from 1 to 999: their low bytes at 0x13-0x16, the top two bits of each in 0x17)
extern "C" void func_020764f8(u8 *rec, int value)
{
    if (value < 1) {
        value = 1;
    }
    if (value > 999) {
        value = 999;
    }
    rec[0x17] = (((value & 0x300) >> 8) << 6) | (rec[0x17] & 0x3F);
    rec[0x13] = value;
}

extern "C" void func_02076530(u8 *rec, int value)
{
    if (value < 1) {
        value = 1;
    }
    if (value > 999) {
        value = 999;
    }
    rec[0x17] = (((value & 0x300) >> 8) << 4) | (rec[0x17] & 0xCF);
    rec[0x14] = value;
}

extern "C" void func_02076568(u8 *rec, int value)
{
    if (value < 1) {
        value = 1;
    }
    if (value > 999) {
        value = 999;
    }
    rec[0x17] = (((value & 0x300) >> 8) << 2) | (rec[0x17] & 0xF3);
    rec[0x15] = value;
}

extern "C" void func_020765a0(u8 *rec, int value)
{
    if (value < 1) {
        value = 1;
    }
    if (value > 999) {
        value = 999;
    }
    rec[0x16] = value;
    rec[0x17] = ((value & 0x300) >> 8) | (rec[0x17] & 0xFC);
}

// (nonmatching: the ROM loads data_020ca78c's address a second time for the store, the
// attempt keeps it in a register; about 10 forms tried)
#ifdef NONMATCHING
int MatchEngine::func_020765d4(int i, int n)
{
    int v;

    if (i < 1 || i >= 0x400) {
        return 13;
    }
    v = data_020ca78c[i];
    if (v >= 99) {
        return 27;
    }
    v += n;
    if (v >= 99) {
        v = 99;
    }
    data_020ca78c[i] = v;
    return 0;
}
#else
asm int MatchEngine::func_020765d4(int i, int n)
{
    cmp r1, #1
    blt @L_020765e4
    cmp r1, #0x400
    blt @L_020765ec
@L_020765e4:
    mov r0, #0xd
    bx lr
@L_020765ec:
    ldr r0, =data_020ca78c
    ldrb r0, [r0, r1]
    cmp r0, #0x63
    movge r0, #0x1b
    bxge lr
    add r3, r0, r2
    cmp r3, #0x63
    ldr r2, =data_020ca78c
    movge r3, #0x63
    mov r0, #0
    strb r3, [r2, r1]
    bx lr
}
#endif

// buys n of item id (fewer when the count would pass 99): 0, or 13 (no such item), 3 (not for
// sale), 14 (not enough money)
int MatchEngine::func_02076620(u32 id, int n)
{
    u8 *entry = func_020768fc(id);
    u32 money;
    s32 value;

    if (entry == NULL) {
        return 0xD;
    }
    if (*(u16 *)(entry + 0x24) == 0) {
        return 3;
    }
    if (func_020766e8(id) + n > 99) {
        n = 99 - func_020766e8(id);
    }
    money = func_020767bc();
    if (money < *(u16 *)(entry + 0x24) * n) {
        return 0xE;
    }
    value = -(*(u16 *)(entry + 0x24) * n);
    value = gGameState.profile.unk_14 + value;
    if (value < 0) {
        gGameState.profile.unk_14 = 0;
    } else if (value > 999999) {
        gGameState.profile.unk_14 = 999999;
    } else {
        gGameState.profile.unk_14 = value;
    }
    data_020ca78c[id] += n;
    return 0;
}

// how many of item i there are: the stock, the team's (GetTeamInfo, 0x34) and the ones in the
// slots of the players with state flags 1 and 0x20
int MatchEngine::func_020766e8(u32 i)
{
    u8 *info;
    int n;
    int count;
    int slot;
    MatchPlayer *player;

    count = func_020767a4(i);
    info = GetTeamInfo(func_ov015_021319bc());
    if (info != NULL && *(u16 *)(info + 0x34) == i) {
        count++;
    }
    for (n = 0; n < 0x84; n++) {
        player = func_ov015_02130ae8(n);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && MatchPlayer_HasFlag(player, 0x20)) {
            for (slot = 0; slot < 4; slot++) {
                if (i == func_0207f3cc(player, slot)) {
                    count++;
                }
            }
        }
    }
    return count;
}

u8 MatchEngine::func_020767a4(u32 i)
{
    if (i >= 0x400) {
        return 0;
    }
    return data_020ca78c[i];
}

u32 MatchEngine::func_020767bc()
{
    return *(u32 *)(((u8 *)&gGameState) + 0x4C0);
}

// (adds to the profile's counter at 0x14, kept between 0 and 999999)
s32 MatchEngine::func_020767cc(s32 amount)
{
    s32 value = gGameState.profile.unk_14 + amount;

    if (value < 0) {
        gGameState.profile.unk_14 = 0;
    } else if (value > 999999) {
        gGameState.profile.unk_14 = 999999;
    } else {
        gGameState.profile.unk_14 = value;
    }
    return gGameState.profile.unk_14;
}

void MatchEngine::func_02076808(u8 value)
{
    ((u8 *)&gGameState)[0x531] = value;
}

u8 MatchEngine::func_02076818()
{
    return ((u8 *)&gGameState)[0x531];
}

void MatchEngine::func_02076828(u32 value)
{
    if (value == 0) {
        value = 1;
    }
    if (value >= 5) {
        value = 4;
    }
    ((u8 *)&gGameState)[0x532] = value;
}

u8 MatchEngine::func_02076848()
{
    return ((u8 *)&gGameState)[0x532];
}

u32 MatchEngine::func_02076858()
{
    return *(u32 *)(((u8 *)&gGameState) + 0x4C4);
}

s32 MatchEngine::func_02076868(s32 value)
{
    if (value < 0) {
        gGameState.profile.unk_18 = 0;
    } else if (value > 999999) {
        gGameState.profile.unk_18 = 999999;
    } else {
        gGameState.profile.unk_18 = value;
    }
    return gGameState.profile.unk_18;
}

s32 MatchEngine::func_020768a8(s32 amount)
{
    s32 value = gGameState.profile.unk_18 + amount;

    if (value < 0) {
        gGameState.profile.unk_18 = 0;
    } else if (value > 999999) {
        gGameState.profile.unk_18 = 999999;
    } else {
        gGameState.profile.unk_18 = value;
    }
    return gGameState.profile.unk_18;
}

u8 *MatchEngine::func_020768e4(u8 *team, int i)
{
    return func_020768fc(((u16 *)(team + 0x70))[i + 1]);
}

u8 *MatchEngine::func_020768fc(u32 i)
{
    if (i >= 0x400) {
        return NULL;
    }
    return unk_bbc[i];
}

u8 *MatchEngine::func_02076914(u8 *team)
{
    return func_020768fc(*(u16 *)(team + 0x70));
}

int MatchEngine::func_02076924(u16 *out, int max)
{
    int i;
    int n;

    if (out == NULL) {
        return 0;
    }
    n = 0;
    for (i = 0; i < 0x400; i++) {
        if (func_020767a4(i)) {
            if (n < max) {
                out[n] = i;
            }
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207697c(int kind, u16 *out, int max)
{
    int i;
    int n;
    u8 *entry;

    if (out == NULL) {
        return 0;
    }
    n = 0;
    for (i = 0; i < 0x400; i++) {
        entry = func_020768fc(i);
        if (entry[0x21] == kind && func_020767a4(i) != 0) {
            if (n < max) {
                out[n] = i;
            }
            n++;
        }
    }
    return n;
}

int MatchEngine::func_020769f0(u16 *out, int max)
{
    int i;
    int n;
    u8 *entry;

    if (out == NULL) {
        return 0;
    }
    n = 0;
    for (i = 0; i < 0x400; i++) {
        if (func_020767a4(i) != 0) {
            entry = func_020768fc(i);
            if (entry != NULL && *(u16 *)(entry + 0x24) != 0) {
                if (n < max) {
                    out[n] = i;
                }
                n++;
            }
        }
    }
    return n;
}

BOOL MatchEngine::func_02076a64(u8 a, u8 b)
{
    data_020cb6e0[0x269] = a;
    data_020cb6e0[0x268] = b;
    return FALSE;
}

// (nonmatching, at optimization level 2, 11 words: the ROM reads gAllocator.fileManager twice, for the check and for
// the call; only a read of another type for the check (here a cast) keeps MWCC from reusing it, and the
// prologue's order still differs)
#ifdef NONMATCHING
static inline int MatchLoadEntry(const char *name, void **buffer, int index, int size)
{
    const char *path = name;

    if (*(void **)&gAllocator == NULL) {
        return 0;
    }
    return gAllocator.fileManager->Load(path, buffer, &gAllocator, index * size, size, FALSE, 1, TRUE);
}

#pragma push
#pragma optimization_level 2
int MatchEngine::func_02076a7c(u16 *out, int max, int *error)
{
    u16 ids[0x20];
    void *buffer = ids;
    int n = 0;
    int i;
    u8 *entry;

    if (MatchLoadEntry(data_020af2c0, &buffer, data_020cb6e0[0x268], 0x40) == 0) {
        if (error != NULL) {
            *error = 0x18;
        }
        return 0;
    }
    for (i = 0; i < 0x20; i++) {
        if (ids[i] == 0) {
            continue;
        }
        entry = func_020768fc(ids[i]);
        if (*(u16 *)(entry + 0x24) == 0) {
            continue;
        }
        if (entry[0x29] != 0 && !func_02077f20(entry)) {
            continue;
        }
        if (n < max) {
            out[n] = ids[i];
        }
        n++;
    }
    if (error != NULL) {
        *error = 0;
    }
    return n;
}
#pragma pop
#else
asm int MatchEngine::func_02076a7c(u16 *out, int max, int *error)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x58
    add r5, sp, #0x18
    mov r9, r1
    mov r7, r3
    ldr r3, =gAllocator
    str r5, [sp, #0x14]
    ldr r4, [r3]
    ldr r1, =data_020cb6e0
    mov r10, r0
    ldrb r0, [r1, #0x268]
    mov r5, #0
    cmp r4, #0
    mov r8, r2
    ldr r1, =data_020af2c0
    moveq r0, r5
    beq @L_02076ae8
    mov r0, r0, lsl #6
    str r0, [sp]
    mov r0, #0x40
    stmib sp, {r0, r5}
    mov r0, #1
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, [r3]
    add r2, sp, #0x14
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_02076ae8:
    cmp r0, #0
    bne @L_02076b08
    cmp r7, #0
    movne r0, #0x18
    strne r0, [r7]
    add sp, sp, #0x58
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02076b08:
    mov r6, #0
    add r4, sp, #0x18
    b @L_02076b74
@L_02076b14:
    mov r0, r6, lsl #1
    ldrh r1, [r4, r0]
    cmp r1, #0
    beq @L_02076b70
    mov r0, r10
    bl _ZN11MatchEngine13func_020768fcEm
    mov r1, r0
    ldrh r0, [r1, #0x24]
    cmp r0, #0
    beq @L_02076b70
    ldrb r0, [r1, #0x29]
    cmp r0, #0
    beq @L_02076b58
    mov r0, r10
    bl _ZN11MatchEngine13func_02077f20EPh
    cmp r0, #0
    beq @L_02076b70
@L_02076b58:
    cmp r5, r8
    movlt r0, r6, lsl #1
    ldrlth r1, [r4, r0]
    movlt r0, r5, lsl #1
    add r5, r5, #1
    strlth r1, [r9, r0]
@L_02076b70:
    add r6, r6, #1
@L_02076b74:
    cmp r6, #0x20
    blt @L_02076b14
    cmp r7, #0
    movne r0, #0
    strne r0, [r7]
    mov r0, r5
    add sp, sp, #0x58
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
#endif

int MatchEngine::func_02076ba0(u32 id, int cost, BOOL force)
{
    u8 *entry = func_020768fc(id);

    if (entry == NULL) {
        return 0xD;
    }
    if (func_020767a4(id) < cost) {
        return 0xC;
    }
    if (!force && *(u16 *)(entry + 0x24) == 0) {
        return 3;
    }
    data_020ca78c[id] = data_020ca78c[id] - cost;
    return 0;
}

int MatchEngine::func_02076c08(MatchPlayer *player, u32 id)
{
    u8 *rec;
    u8 buffer[0x10];

    if (player == NULL) {
        return 0x1C;
    }
    func_0207e334((int)player, 0, 0, 3);
    rec = func_020768fc(id);
    if (rec == NULL) {
        return 0xD;
    }
    if (func_02078450(rec) && func_02077e78(rec, buffer) == 0) {
        func_02081b70((u8 *)&player->unk_d0, buffer);
    }
    return 0;
}

asm void MatchEngine::func_02076c98()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r2
    mov r9, r1
    mov r1, r4
    mov r10, r0
    mov r5, #0
    bl _ZN11MatchEngine13func_020768fcEm
    cmp r0, #0
    beq @L_02076cc8
    ldrb r0, [r0, #0x21]
    cmp r0, #0x17
    beq @L_02076cd0
@L_02076cc8:
    mov r0, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02076cd0:
    mov r0, r9
    bl func_ov015_02131bb4
    cmp r0, #0
    beq @L_02076cf8
    mov r0, r10
    mov r1, r4
    bl _ZN11MatchEngine13func_020767a4Em
    cmp r0, #0
    moveq r0, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02076cf8:
    mov r0, r10
    mov r1, r9
    mov r2, #0
    bl _ZN11MatchEngine13func_02076ddcEv
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine11GetTeamInfoEi
    strh r4, [r0, #0x34]
    mov r0, r9
    bl func_ov015_02131bb4
    cmp r0, #0
    beq @L_02076d4c
    mov r2, #1
    mov r0, r10
    mov r1, r4
    mov r3, r2
    bl _ZN11MatchEngine13func_02076ba0Emii
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02076d4c:
    mov r6, #1
    mov r8, #0
    mov r11, r6
    mov r4, #3
@L_02076d5c:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r7, r0
    cmpne r7, #0
    beq @L_02076dc8
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    beq @L_02076dc8
    mov r0, r7
    bl func_02080b90
    cmp r9, r0
    bne @L_02076dc8
    ldrh r0, [r7, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, r5
    cmp r0, #0
    beq @L_02076dc8
    mov r0, r10
    mov r1, r7
    mov r2, #1
    mov r3, r5
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_02076dc8:
    add r8, r8, #1
    cmp r8, #0x84
    blt @L_02076d5c
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02076ddc()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    mov r5, r2
    mov r6, #0
    bl _ZN11MatchEngine13func_02076f04Ei
    cmp r0, #0
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_ov015_02131bb4
    cmp r0, #0
    beq @L_02076e34
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r4, r0
    ldrh r1, [r4, #0x34]
    mov r0, r10
    mov r2, #1
    bl _ZN11MatchEngine13func_020765d4Eii
    strh r6, [r4, #0x34]
@L_02076e34:
    cmp r5, #0
    beq @L_02076ec0
    mov r5, #1
    mov r8, #0
    mov r11, r5
    mov r4, #3
@L_02076e4c:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_02076eb4
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, r5
    moveq r0, r6
    cmp r0, #0
    beq @L_02076eb4
    mov r0, r7
    bl func_02080b90
    cmp r9, r0
    bne @L_02076eb4
    ldrh r0, [r7, #0xf0]
    tst r0, #0x80
    movne r0, r11
    moveq r0, r6
    cmp r0, #0
    beq @L_02076eb4
    mov r0, r10
    mov r1, r7
    mov r2, #1
    mov r3, r6
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_02076eb4:
    add r8, r8, #1
    cmp r8, #0x84
    blt @L_02076e4c
@L_02076ec0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

u16 MatchEngine::func_02076ec8(MatchPlayer *player)
{
    if (!MatchPlayer_HasFlag(player, 0x80)) {
        return 0;
    }
    return func_02076f04(func_ov015_021319b0(player));
}

u16 MatchEngine::func_02076f04(int i)
{
    return *(u16 *)(GetTeamInfo(i) + 0x34);
}

u8 *MatchEngine::func_02076f14(MatchPlayer *player)
{
    return func_02076f34(func_ov015_021319b0(player));
}

u8 *MatchEngine::func_02076f34(int i)
{
    return func_020768fc(func_02076f04(i));
}

asm void MatchEngine::func_02076f50()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    mov r8, r1
    mov r5, r2
    bl _ZN11MatchEngine13func_020768fcEm
    movs r4, r0
    moveq r0, #0xd
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    mov r1, r8
    bl _ZN11MatchEngine13func_020767a4Em
    cmp r0, r5
    movlt r0, #0xc
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r0, [r4, #0x24]
    cmp r0, #0
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r7, #1
    mov r0, r6
    mov r1, r8
    mov r2, r5
    mov r3, r7
    bl _ZN11MatchEngine13func_02076ba0Emii
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r0, [r4, #0x21]
    cmp r0, #0x15
    bne @L_02077000
    mov r0, r6
    mov r1, r8
    bl _ZN11MatchEngine13func_020767a4Em
    cmp r0, #0
    bgt @L_02077000
    bl func_ov015_021319bc
    mov r1, r0
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine11GetTeamInfoEi
    cmp r0, #0
    beq @L_02077000
    ldrh r2, [r0, #0x3a]
    ldrh r1, [r4, #0x2a]
    cmp r2, r1
    streqh r7, [r0, #0x3a]
@L_02077000:
    add r0, r6, #0xb00
    ldrh r1, [r4, #0x24]
    ldrh r0, [r0, #0x92]
    ldr r2, =0x51eb851f
    ldr r3, =gGameState
    mul r4, r1, r0
    mov r0, r4, lsr #0x1f
    smull r1, r4, r2, r4
    add r4, r0, r4, asr #5
    mul r1, r5, r4
    ldr r0, [r3, #0x4c0]
    adds r1, r0, r1
    movmi r0, #0
    strmi r0, [r3, #0x4c0]
    bmi @L_0207704c
    ldr r0, =0xf423f
    cmp r1, r0
    strgt r0, [r3, #0x4c0]
    strle r1, [r3, #0x4c0]
@L_0207704c:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

BOOL MatchEngine::func_02077064(u32 item, int n)
{
    if (func_020768fc(item) != NULL) {
        return func_020766e8(item) + n <= 99;
    }
    return FALSE;
}

BOOL MatchEngine::func_020770a8(u32 id, int count)
{
    u8 *entry = func_020768fc(id);

    if (entry == NULL) {
        return FALSE;
    }
    if (func_020767bc() < *(u16 *)(entry + 0x24) * count) {
        return FALSE;
    }
    return count + func_020766e8(id) <= 99;
}

BOOL MatchEngine::func_02077104(u32 item, int n)
{
    u8 *info = func_020768fc(item);

    if (info == NULL || *(u16 *)(info + 0x24) == 0) {
        return FALSE;
    }
    return func_020767a4(item) >= n;
}

BOOL MatchEngine::func_02077148(u8 *data, int *error)
{
    int dummy;

    if (error == NULL) {
        error = &dummy;
    }
    if (data == NULL) {
        *error = 0xD;
        return FALSE;
    }
    switch (data[0x21]) {
    case 1: case 2: case 3: case 6: case 7:
        *error = 0;
        return TRUE;
    }
    *error = 7;
    return FALSE;
}

BOOL MatchEngine::func_020771d4(u32 id, int *error)
{
    if (func_020767a4(id) == 0) {
        if (error != NULL) {
            *error = 0xC;
        }
        return FALSE;
    }
    return func_02077148(func_020768fc(id), error);
}

asm void MatchEngine::func_02077224()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, r2
    mov r4, r3
    mov r5, r1
    mov r6, #0
    mov r1, r7
    mov r2, r4
    mov r8, r0
    str r6, [sp]
    bl _ZN11MatchEngine13func_020771d4EmPi
    cmp r0, #0
    addeq sp, sp, #4
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r4, #0
    addeq r4, sp, #0
    cmp r5, #0
    moveq r0, #0x1c
    streq r0, [r4]
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r1, r7
    bl _ZN11MatchEngine13func_020768fcEm
    ldrb r1, [r0, #0x21]
    cmp r1, #0x1e
    addls pc, pc, r1, lsl #2
    b @L_02077434
    b @L_02077434
    b @L_02077318
    b @L_02077334
    b @L_02077350
    b @L_02077434
    b @L_02077434
    b @L_02077378
    b @L_02077378
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_0207738c
    b @L_020773a0
    b @L_02077434
    b @L_02077434
    b @L_020773b4
    b @L_02077410
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
    b @L_02077434
@L_02077318:
    ldrsh r1, [r5, #0x94]
    ldrsh r0, [r5, #0xd0]
    add sp, sp, #4
    cmp r1, r0
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077334:
    ldrsh r1, [r5, #0x96]
    ldrsh r0, [r5, #0xd2]
    add sp, sp, #4
    cmp r1, r0
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077350:
    ldrsh r1, [r5, #0x94]
    ldrsh r0, [r5, #0xd0]
    add sp, sp, #4
    cmp r1, r0
    ldrgesh r1, [r5, #0x96]
    ldrgesh r0, [r5, #0xd2]
    cmpge r1, r0
    movlt r0, #1
    movge r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077378:
    mov r0, #0x1f
    str r0, [r4]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207738c:
    mov r0, #0x1f
    str r0, [r4]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_020773a0:
    mov r0, #0x1f
    str r0, [r4]
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_020773b4:
    bl _ZN11MatchEngine13func_02078474EPh
    movs r7, r0
    moveq r0, #9
    streq r0, [r4]
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r6, #0
@L_020773d4:
    mov r0, r5
    mov r1, r6
    bl func_020808c4
    cmp r7, r0
    moveq r0, #8
    streq r0, [r4]
    addeq sp, sp, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r6, r6, #1
    cmp r6, #6
    blt @L_020773d4
    add sp, sp, #4
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077410:
    mov r0, r5
    bl func_02080804
    cmp r0, #0
    moveq r0, #0xf
    streq r0, [r4]
    moveq r0, #0
    add sp, sp, #4
    movne r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077434:
    mov r0, #7
    str r0, [r4]
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm int MatchEngine::func_02077448(MatchPlayer *player, u32 id, int a)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r5, r3
    add r3, sp, #0
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl _ZN11MatchEngine13func_02077224Ev
    cmp r0, #0
    ldreq r0, [sp]
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r1, r6
    bl _ZN11MatchEngine13func_020768fcEm
    mov r4, r0
    ldrb r1, [r4, #0x21]
    cmp r1, #0x10
    addls pc, pc, r1, lsl #2
    b @L_0207761c
    b @L_0207761c
    b @L_020774dc
    b @L_020774fc
    b @L_0207751c
    b @L_0207761c
    b @L_0207761c
    b @L_0207754c
    b @L_02077558
    b @L_0207761c
    b @L_0207761c
    b @L_0207761c
    b @L_0207761c
    b @L_0207761c
    b @L_0207761c
    b @L_0207761c
    b @L_02077564
    b @L_02077594
@L_020774dc:
    ldrsh r4, [r7, #0x94]
    bl _ZN11MatchEngine13func_02078474EPh
    add r0, r4, r0
    mov r1, r0, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_02080b00
    b @L_02077628
@L_020774fc:
    ldrsh r4, [r7, #0x96]
    bl _ZN11MatchEngine13func_02078474EPh
    add r0, r4, r0
@L_02077508:
    mov r1, r0, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_02080b1c
    b @L_02077628
@L_0207751c:
    ldrsh r5, [r7, #0x94]
    bl _ZN11MatchEngine13func_02078474EPh
    add r0, r5, r0
    mov r1, r0, lsl #0x10
    mov r0, r7
    mov r1, r1, asr #0x10
    bl func_02080b00
    ldrsh r5, [r7, #0x96]
    mov r0, r4
    bl _ZN11MatchEngine13func_02078474EPh
    add r0, r5, r0
    b @L_02077508
@L_0207754c:
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077558:
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077564:
    bl _ZN11MatchEngine13func_02078474EPh
    mov r2, r0, lsl #0x10
    mov r0, r7
    add r1, r5, #4
    mov r2, r2, lsr #0x10
    mov r3, #1
    bl func_02080964
    cmp r0, #0
    bne @L_02077628
    add sp, sp, #4
    mov r0, #0x1f
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077594:
    mov r0, r7
    add r1, r5, #4
    bl func_020808c4
    movs r6, r0
    addeq sp, sp, #4
    moveq r0, #0xf
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r4, #0
@L_020775b4:
    mov r0, r8
    mov r1, r4
    bl _ZN11MatchEngine13func_020768fcEm
    cmp r0, #0
    ldrneb r1, [r0, #0x21]
    cmpne r1, #0xf
    beq @L_020775dc
    bl _ZN11MatchEngine13func_02078474EPh
    cmp r6, r0
    beq @L_020775e8
@L_020775dc:
    add r4, r4, #1
    cmp r4, #0x400
    blt @L_020775b4
@L_020775e8:
    cmp r4, #0x400
    addeq sp, sp, #4
    moveq r0, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r7
    add r1, r5, #4
    bl func_020809e8
    mov r0, r8
    mov r1, r4
    mov r2, #1
    bl _ZN11MatchEngine13func_020765d4Eii
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207761c:
    add sp, sp, #4
    mov r0, #0x1f
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02077628:
    mov r0, r7
    bl func_ov015_021319b0
    bl func_ov015_02131bb4
    cmp r0, #0
    beq @L_02077650
    mov r2, #1
    mov r0, r8
    mov r1, r6
    mov r3, r2
    bl _ZN11MatchEngine13func_02076ba0Emii
@L_02077650:
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

BOOL MatchEngine::func_0207765c(MatchPlayer *player, u32 id, int mode, int *error)
{
    u8 *entry;
    u8 *other = NULL;

    if (!func_020776f8(player, id, error)) {
        return FALSE;
    }
    entry = func_020768fc(id);
    if (mode == 1) {
        other = func_020768fc(player->unk_70[2]);
    } else if (mode == 2) {
        other = func_020768fc(player->unk_70[1]);
    }
    if (other != NULL && entry[0x21] == other[0x21]) {
        if (error != NULL) {
            *error = 0x19;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL MatchEngine::func_020776f8(MatchPlayer *player, u32 id, int *error)
{
    int result = 0;
    u8 *entry;
    u16 ids[8];
    int i;
    int mask = 0xFFF;

    if (error == NULL) {
        error = &result;
    }
    if (player == NULL) {
        *error = 0x1C;
        return FALSE;
    }
    entry = func_020768fc(id);
    if (entry == NULL) {
        *error = 0xD;
        return FALSE;
    }
    result = func_02077eb8(entry, ids);
    if (result == 2) {
        *error = 0;
        return TRUE;
    }
    if (result == 0) {
        for (i = 0; i < 4; i++) {
            if (ids[i] == (u16)(player->unk_42 & mask)) {
                break;
            }
        }
        if (i == 4) {
            result = 5;
        }
    }
    *error = result;
    return result == 0;
}

int MatchEngine::func_020777e4(u8 *team, s16 value, u32 i, u8 update)
{
    if (team == NULL) {
        return 28;
    }
    if (i >= 4) {
        return 30;
    }
    ((s16 *)(team + 0x70))[i] = value;
    if (update) {
        func_0207e334((int)team, 1, 0, 3);
    }
    return 0;
}

asm void MatchEngine::func_02077830()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r6, r0
    mov r0, r1
    mov r1, #0
    mov r5, r2
    mov r4, r3
    bl func_ov015_02130b14
    mov r7, r0
    bl func_02080b90
    mov r1, r0
    mov r0, r6
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r0, [r0, #0x30]
    cmp r0, r5
    beq @L_02077890
    mov r0, r6
    mov r1, r5
    mov r2, #1
    bl _ZN11MatchEngine13func_02077064Emi
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0x13
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_02077890:
    add r12, sp, #4
    mov r0, r6
    mov r1, r7
    mov r2, r5
    mov r3, r4
    str r12, [sp]
    bl _ZN11MatchEngine13func_0207765cEP11MatchPlayermiPi
    cmp r0, #0
    bne @L_020778cc
    mov r0, r6
    mov r1, r5
    mov r2, #1
    bl _ZN11MatchEngine13func_020765d4Eii
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020778cc:
    mov r8, #0
    mov r0, r6
    mov r1, r7
    mov r2, r4
    mov r3, r8
    bl _ZN11MatchEngine13func_02077b00EP11MatchPlayermi
    str r0, [sp, #4]
    cmp r0, #0
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r12, [sp, #0x20]
    mov r0, r6
    mov r1, r7
    mov r2, r5
    mov r3, r4
    str r12, [sp]
    bl _ZN11MatchEngine13func_020777e4EPhsmh
    str r0, [sp, #4]
    cmp r0, #0
    beq @L_02077930
    mov r0, r6
    mov r1, r5
    mov r2, #1
    bl _ZN11MatchEngine13func_020765d4Eii
    mov r8, r0
@L_02077930:
    mov r0, r8
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MatchEngine::func_0207793c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r9, r1
    mov r6, #0
    mov r10, r0
    mov r0, r9
    mov r1, r6
    mov r8, r2
    mov r7, r3
    bl func_ov015_02130b14
    bl func_ov015_021319b0
    mov r4, r0
    mov r0, r10
    mov r1, r4
    mov r5, #1
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrh r0, [r0, #0x30]
    cmp r0, r8
    mov r0, r4
    moveq r6, r5
    bl func_ov015_02131bb4
    cmp r0, #0
    moveq r5, #0
    cmp r5, #0
    beq @L_020779c4
    cmp r6, #0
    bne @L_020779c4
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_020767a4Em
    cmp r0, #0
    addeq sp, sp, #4
    moveq r0, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020779c4:
    cmp r5, #0
    beq @L_020779e8
    cmp r6, #0
    bne @L_020779e8
    mov r2, #1
    mov r0, r10
    mov r1, r8
    mov r3, r2
    bl _ZN11MatchEngine13func_02076ba0Emii
@L_020779e8:
    cmp r5, #0
    beq @L_02077a40
    ldrb r4, [sp, #0x28]
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    str r4, [sp]
    bl _ZN11MatchEngine13func_02077830Ev
    movs r4, r0
    beq @L_02077a74
    cmp r5, #0
    beq @L_02077a34
    cmp r6, #0
    bne @L_02077a34
    mov r0, r10
    mov r1, r8
    mov r2, #1
    bl _ZN11MatchEngine13func_020765d4Eii
@L_02077a34:
    add sp, sp, #4
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02077a40:
    mov r0, r9
    mov r1, #0
    bl func_ov015_02130b14
    ldrb r4, [sp, #0x28]
    mov r1, r0
    mov r0, r10
    mov r2, r8
    mov r3, r7
    str r4, [sp]
    bl _ZN11MatchEngine13func_020777e4EPhsmh
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02077a74:
    mov r0, #0
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

int MatchEngine::func_02077a80(int index, BOOL update)
{
    int i;
    int result;
    MatchPlayer *player;

    player = func_ov015_02130b14(index, 0);
    if (player == NULL) {
        return 28;
    }
    for (i = 0; i < 4; i++) {
        result = func_02077b00(player, i, FALSE);
        if (result != 0) {
            break;
        }
    }
    if (update) {
        func_0207e334((int)player, 1, 0, 3);
    }
    return result;
}

// empties the player's item slot (0x1c: no player, 0x1e: no such slot); the item's count goes up
// by one first when func_ov015_02131bb4 holds for the player's team
int MatchEngine::func_02077b00(MatchPlayer *player, u32 slot, BOOL flag)
{
    u16 id;

    if (player == NULL) {
        return 0x1C;
    }
    if (slot >= 4) {
        return 0x1E;
    }
    id = player->unk_70[slot];
    if (id != 0 && func_ov015_02131bb4(func_ov015_021319b0(player))) {
        func_020765d4(id, 1);
    }
    player->unk_70[slot] = 0;
    if (flag) {
        func_0207e334((int)player, 1, 0, 3);
    }
    return 0;
}

int MatchEngine::func_02077ba0(int index, u32 slot, BOOL flag)
{
    return func_02077b00(func_ov015_02130b14(index, 0), slot, flag);
}

BOOL MatchEngine::func_02077bd4()
{
    if (unk_bc0 != NULL) {
        return TRUE;
    }
    if (MatchLoadFile(data_020af2d8, &unk_bc0, 0, 0) != 0x1000) {
        return FALSE;
    }
    return TRUE;
}

BOOL MatchEngine::func_02077c4c(void **file)
{
    if (unk_bc0 != NULL) {
        return TRUE;
    }
    unk_bc0 = gAllocator.Alloc(0x1000, 0, TRUE);
    if (unk_bc0 == NULL) {
        return FALSE;
    }
    *file = unk_bc0;
    if (func_ov015_02134040(data_020af2f4, file, 0, 0x1000, 0)) {
        return TRUE;
    }
    gAllocator.Free(unk_bc0);
    unk_bc0 = NULL;
    return FALSE;
}

BOOL MatchEngine::func_02077ce4()
{
    if (unk_bc0 == NULL) {
        return TRUE;
    }
    gAllocator.Free(unk_bc0);
    unk_bc0 = NULL;
    return TRUE;
}

int MatchEngine::func_02077d18(void *buffer, int index)
{
    void *p = buffer;

    if (unk_bc0 != NULL) {
        MIi_CpuCopy32((u8 *)unk_bc0 + index * 16, buffer, 16);
        return 0;
    }
    if (MatchLoadFile(data_020af310, &p, index * 16, 16) == 0) {
        return 0x16;
    }
    return 0;
}

int MatchEngine::func_02077da8(void *buffer, int index)
{
    void *p = buffer;

    if (MatchLoadFile(data_020af32c, &p, index * 16, 16) == 0) {
        return 0x17;
    }
    return 0;
}

BOOL MatchEngine::func_02077e14(u8 *team, int value)
{
    int i;

    for (i = 0; i < 4; i++) {
        if (value == func_02077e58(team, i)) {
            return TRUE;
        }
    }
    return FALSE;
}

u16 MatchEngine::func_02077e58(u8 *team, u32 i)
{
    if (team == NULL) {
        return 0;
    }
    if (i >= 4) {
        return 0;
    }
    return ((u16 *)(team + 0x70))[i];
}

int MatchEngine::func_02077e78(u8 *entry, void *buffer)
{
    int value;

    if (entry == NULL || buffer == NULL) {
        return 0x14;
    }
    value = func_02078450(entry);
    if (value == 0) {
        return 1;
    }
    return func_02077d18(buffer, value);
}

int MatchEngine::func_02077eb8(u8 *data, void *buffer)
{
    if (data == NULL || buffer == NULL) {
        return 0x14;
    }
    if (data[0x28] == 0) {
        return 2;
    }
    return func_02077da8(buffer, data[0x28]);
}

int MatchEngine::func_02077eec(int index, u32 id, int a)
{
    return func_02077448(func_ov015_02130b14(index, 0), id, a);
}

// (nonmatching: the ROM reads data[0x29] again for the second range, and the mask and the flags byte swap registers; 17 words)
#ifdef NONMATCHING
BOOL MatchEngine::func_02077f20(u8 *data)
{
    BOOL r;

    if (data[0x29] == 0) {
        return TRUE;
    }
    if (data[0x29] >= 1 && data[0x29] < 101) {
        r = TRUE;
        if (!(((u8 *)&gGameState.block8)[0] & (u8)(1 << (data[0x29] - 1)))) {
            r = FALSE;
        }
        return r;
    }
    if (data[0x29] >= 101) {
        r = TRUE;
        if (!(((u8 *)&gGameState.block8)[3] & (u8)(1 << (data[0x29] - 101)))) {
            r = FALSE;
        }
        return r;
    }
    return TRUE;
}
#else
asm BOOL MatchEngine::func_02077f20(u8 *data)
{
    ldrb r0, [r1, #0x29]
    cmp r0, #0
    moveq r0, #1
    bxeq lr
    cmp r0, #1
    blo @L_02077f64
    cmp r0, #0x65
    bhs @L_02077f64
    ldr r1, =gGameState
    sub r2, r0, #1
    mov r0, #1
    mov r2, r0, lsl r2
    ldrb r1, [r1, #0x9c0]
    and r2, r2, #0xff
    tst r1, r2
    moveq r0, #0
    bx lr
@L_02077f64:
    ldrb r0, [r1, #0x29]
    cmp r0, #0x65
    blo @L_02077f94
    ldr r1, =gGameState
    sub r2, r0, #0x65
    mov r0, #1
    mov r2, r0, lsl r2
    ldrb r1, [r1, #0x9c3]
    and r2, r2, #0xff
    tst r1, r2
    moveq r0, #0
    bx lr
@L_02077f94:
    mov r0, #1
    bx lr
}
#endif

asm void MatchEngine::func_02077fa0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r10, r0
    cmp r1, #1
    mov r4, #0
    blt @L_02077fc0
    cmp r1, #0x64
    ble @L_02077fcc
@L_02077fc0:
    add sp, sp, #0x40
    mov r0, #0xb
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02077fcc:
    mvn r6, #0
    mov r7, r4
    ldr r3, =data_020a71f0
    b @L_02078004
@L_02077fdc:
    add r5, r7, r7, lsl #1
    add r2, r3, r5
    ldrb r0, [r2, #1]
    cmp r0, r1
    bgt @L_02078000
    ldrb r0, [r2, #2]
    cmp r0, r1
    ldrgeb r6, [r3, r5]
    bge @L_0207800c
@L_02078000:
    add r7, r7, #1
@L_02078004:
    cmp r7, #0xa
    blt @L_02077fdc
@L_0207800c:
    cmn r6, #1
    addeq sp, sp, #0x40
    moveq r0, #0xb
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207801c:
    add r5, sp, #0
    mov r7, #0
    mov r0, r5
    mov r1, r7
    mov r2, #0x40
    bl MI_CpuFill8
    mov r8, r7
    b @L_02078060
@L_0207803c:
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_020768fcEm
    ldrb r0, [r0, #0x2c]
    cmp r0, r6
    moveq r0, r7, lsl #1
    streqh r8, [r5, r0]
    addeq r7, r7, #1
    add r8, r8, #1
@L_02078060:
    cmp r8, #0x400
    blt @L_0207803c
    mov r8, r7
    ldr r11, =data_020ca78c
    mov r9, #0
    add r5, sp, #0
    b @L_020780c8
@L_0207807c:
    mov r0, r9, lsl #1
    ldrh r1, [r5, r0]
    ldrb r0, [r11, r1]
    cmp r0, #0
    bne @L_020780c4
    mov r0, r10
    mov r2, #1
    bl _ZN11MatchEngine13func_020782f0Emi
    cmp r0, #0
    bne @L_020780c4
    mov r0, r9, lsl #1
    ldrh r1, [r5, r0]
    mov r0, r10
    bl _ZN11MatchEngine13func_02078394Em
    cmp r0, #0
    moveq r0, r9, lsl #1
    streqh r4, [r5, r0]
    subeq r7, r7, #1
@L_020780c4:
    add r9, r9, #1
@L_020780c8:
    cmp r9, r8
    blt @L_0207807c
    cmp r7, #1
    bge @L_020780f0
    cmp r6, #1
    addle sp, sp, #0x40
    movle r0, #0xb
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r6, r6, #1
    b @L_0207801c
@L_020780f0:
    bl rand
    mov r1, r7
    bl _s32_div_f
    mov r3, #0
    add r2, sp, #0
    b @L_0207812c
@L_02078108:
    mov r0, r3, lsl #1
    ldrh r0, [r2, r0]
    cmp r0, #0
    beq @L_02078128
    cmp r1, #0
    addeq sp, sp, #0x40
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r1, r1, #1
@L_02078128:
    add r3, r3, #1
@L_0207812c:
    cmp r3, #0x20
    blt @L_02078108
    mov r0, #0xb
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02078148()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x40
    mov r10, r0
    cmp r1, #1
    blt @L_02078164
    cmp r1, #0x64
    ble @L_02078170
@L_02078164:
    add sp, sp, #0x40
    mov r0, #0x15
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02078170:
    mvn r5, #0
    mov r6, #0xa
    ldr r3, =data_020a71f0
    b @L_020781a8
@L_02078180:
    add r4, r6, r6, lsl #1
    add r2, r3, r4
    ldrb r0, [r2, #1]
    cmp r0, r1
    bgt @L_020781a4
    ldrb r0, [r2, #2]
    cmp r0, r1
    ldrgeb r5, [r3, r4]
    bge @L_020781b0
@L_020781a4:
    add r6, r6, #1
@L_020781a8:
    cmp r6, #0x14
    blt @L_02078180
@L_020781b0:
    cmn r5, #1
    addeq sp, sp, #0x40
    moveq r0, #0x15
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020781c0:
    add r4, sp, #0
    mov r6, #0
    mov r0, r4
    mov r1, r6
    mov r2, #0x40
    bl MI_CpuFill8
    mov r7, r6
    b @L_02078204
@L_020781e0:
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_020768fcEm
    ldrb r0, [r0, #0x2c]
    cmp r0, r5
    moveq r0, r6, lsl #1
    streqh r7, [r4, r0]
    addeq r6, r6, #1
    add r7, r7, #1
@L_02078204:
    cmp r7, #0x400
    blt @L_020781e0
    mov r9, #0
    mov r7, r6
    ldr r8, =data_020ca78c
    mov r11, r9
    add r4, sp, #0
    b @L_02078270
@L_02078224:
    mov r0, r9, lsl #1
    ldrh r1, [r4, r0]
    ldrb r0, [r8, r1]
    cmp r0, #0
    bne @L_0207826c
    mov r0, r10
    mov r2, #1
    bl _ZN11MatchEngine13func_020782f0Emi
    cmp r0, #0
    bne @L_0207826c
    mov r0, r9, lsl #1
    ldrh r1, [r4, r0]
    mov r0, r10
    bl _ZN11MatchEngine13func_02078394Em
    cmp r0, #0
    moveq r0, r9, lsl #1
    streqh r11, [r4, r0]
    subeq r6, r6, #1
@L_0207826c:
    add r9, r9, #1
@L_02078270:
    cmp r9, r7
    blt @L_02078224
    cmp r6, #1
    bge @L_02078298
    cmp r5, #0x65
    addle sp, sp, #0x40
    movle r0, #0x15
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r5, r5, #1
    b @L_020781c0
@L_02078298:
    bl rand
    mov r1, r6
    bl _s32_div_f
    mov r3, #0
    add r2, sp, #0
    b @L_020782d4
@L_020782b0:
    mov r0, r3, lsl #1
    ldrh r0, [r2, r0]
    cmp r0, #0
    beq @L_020782d0
    cmp r1, #0
    addeq sp, sp, #0x40
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r1, r1, #1
@L_020782d0:
    add r3, r3, #1
@L_020782d4:
    cmp r3, #0x20
    blt @L_020782b0
    mov r0, #0x15
    add sp, sp, #0x40
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// (whether a player outside 0x10-0x20 holds the value of entry id, a kind 0xF one)
BOOL MatchEngine::func_020782f0(u32 id, BOOL last)
{
    u8 *entry = func_020768fc(id);
    int value;
    int i;
    int j;
    MatchPlayer *player;

    if (entry == NULL) {
        return FALSE;
    }
    if (entry[0x21] != 0xF) {
        return FALSE;
    }
    value = func_02078474(entry);
    for (i = 0; i < 0x84; i++) {
        if (i < 0x10 || i > 0x20) {
            player = func_ov015_02130ae8(i);
            if (player != NULL) {
                j = 0;
                if (last) {
                    j = 4;
                }
                for (; j <= 5; j++) {
                    if (value == player->unk_98[j]) {
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL MatchEngine::func_02078394(u32 id)
{
    u8 *entry = func_020768fc(id);
    int i;
    int j;
    MatchPlayer *player;

    if (entry == NULL) {
        return FALSE;
    }
    if (entry[0x21] < 0x16 || entry[0x21] > 0x1E) {
        return FALSE;
    }
    for (i = 0; i < 0x84; i++) {
        if (i < 0x10 || i > 0x20) {
            player = func_ov015_02130ae8(i);
            if (player != NULL) {
                for (j = 0; j < 4; j++) {
                    if (id == player->unk_70[j]) {
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

int MatchEngine::func_02078428(u8 *entry)
{
    return *(u16 *)(entry + 0x22) >> 14;
}

int MatchEngine::func_02078434(u8 *entry)
{
    u16 value = *(u16 *)(entry + 0x22);
    int result = value & 0x3FF;

    if (value & 0x400) {
        result = -result;
    }
    return result;
}

int MatchEngine::func_02078450(u8 *entry)
{
    if (func_02078428(entry) != 1)
        return 0;
    return func_02078434(entry);
}

int MatchEngine::func_02078474(u8 *entry)
{
    if (func_02078428(entry) != 0)
        return 0;
    return func_02078434(entry);
}

void MatchEngine::func_02078498()
{
    func_020784b8(0);
    func_020784b8(1);
}

void MatchEngine::func_020784b8(int team)
{
    int i = team * 11;
    int end = i + 11;

    for (; i < end; i++) {
        func_020841d8(&unk_ac[i]);
    }
}

BOOL MatchEngine::func_020784ec(MatchPlayer *player, fx32 x, fx32 y)
{
    int i;

    if (player == NULL) {
        return FALSE;
    }
    i = func_ov087_02181680(this, player);
    unk_ac[i].x = x;
    unk_ac[i].y = y;
    return TRUE;
}

MatchPoint *MatchEngine::func_02078520(int team, u8 *data)
{
    switch (func_0206e1c4(team)) {
    case 0:
        break;
    case 1:
        return (MatchPoint *)(data + 0x58);
    case 2:
        return (MatchPoint *)(data + 0x68);
    }
    return (MatchPoint *)(data + 0x18);
}

MatchPoint *MatchEngine::func_02078560(int team, u8 *data)
{
    switch (func_0206e1c4(team)) {
    case 0:
        break;
    case 1:
        return (MatchPoint *)(data + 0x60);
    case 2:
        return (MatchPoint *)(data + 0x70);
    }
    return (MatchPoint *)(data + 0x20);
}

int MatchEngine::func_020785a0(int team)
{
    MatchPlayer *player;
    u8 *entry;
    int i;
    int count;
    int slot;

    entry = unk_34c[team];
    if (!func_ov015_0213178c()) {
        return 0;
    }
    func_020802b8(entry);
    count = 0;
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player == NULL) {
            continue;
        }
        if (!MatchPlayer_HasFlag(player, 1) || !MatchPlayer_HasFlag(player, 2)) {
            continue;
        }
        if (team != func_02080b90(player)) {
            continue;
        }
        slot = func_0208130c(player, 3);
        if (slot == 0) {
            continue;
        }
        func_020802cc(entry, slot - 1, player->unk_42);
        count++;
    }
    return count;
}

asm void MatchEngine::func_02078664()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r5, r1
    mov r6, r0
    mov r4, r2
    mov r8, r3
    bl func_ov087_02181680
    ldrh r1, [r5, #0xf0]
    mov r7, r0
    tst r1, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    addeq sp, sp, #0xc
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    bne @L_020786d4
    add r0, r6, #0xac
    add r0, r0, r7, lsl #3
    bl func_02084788
    cmp r0, #0
    bne @L_020786d4
    add r1, r6, r7, lsl #3
    ldr r0, [r1, #0xac]
    str r0, [r4]
    ldr r0, [r1, #0xb0]
    b @L_02078794
@L_020786d4:
    mov r0, r6
    mov r1, r5
    bl func_ov087_021816dc
    ldrh r1, [r5, #0xf0]
    mov r7, r0
    mov r0, r6
    tst r1, #0x80
    movne r8, #1
    moveq r8, #0
    bl _ZN11MatchEngine13func_0206bfa8Ev
    mov r9, r0
    mov r0, r5
    bl func_ov015_02131970
    mov r10, r0
    mov r0, r5
    bl func_02080b90
    mov r1, #1
    cmp r8, #0
    moveq r1, #0
    stmia sp, {r0, r1}
    mov r0, r6
    mov r1, r9
    mov r2, r10
    mov r3, r7
    str r4, [sp, #8]
    bl func_ov087_0217f69c
    cmp r0, #0
    bne @L_02078798
    mov r0, r6
    mov r1, r5
    bl func_01ffed54
    cmp r0, #0
    mov r0, r5
    beq @L_02078774
    bl func_02080b90
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl _ZN11MatchEngine13func_02078520EiPh
    b @L_02078788
@L_02078774:
    bl func_02080b90
    mov r1, r0
    mov r0, r6
    mov r2, r7
    bl _ZN11MatchEngine13func_02078560EiPh
@L_02078788:
    ldr r1, [r0]
    str r1, [r4]
    ldr r0, [r0, #4]
@L_02078794:
    str r0, [r4, #4]
@L_02078798:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    bne @L_020787b8
    bl func_ov015_021317c8
    cmp r0, #0
    beq @L_020787d8
    b @L_020787d0
@L_020787b8:
    bl func_ov015_021319bc
    mov r5, r0
    mov r0, #0
    bl func_ov015_021319fc
    cmp r5, r0
    beq @L_020787d8
@L_020787d0:
    mov r0, r4
    bl func_ov015_021313d4
@L_020787d8:
    mov r0, #1
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

MatchPlayerInfo *MatchEngine::func_020787e8(MatchPlayer *player)
{
    return &unk_bb4[player->state->unk_1c];
}

int MatchEngine::func_02078800(int a, BOOL b, int c)
{
    if (b) {
        return func_02069344(a, 0, 11, 0, 0, 0);
    }
    return func_02069344(a, 0, 12, 0, 0, c);
}

asm void MatchEngine::func_02078844()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r1
    add r0, r0, #0x3ac
    movs r9, r2
    add r5, r0, r10, lsl #4
    mov r11, r3
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, #0
    mov r0, r9
    mov r1, r7
    mov r2, r11, lsl #1
    bl MI_CpuFill8
    mov r6, r7
    ldrb r4, [sp, #0x28]
    b @L_02078938
@L_02078884:
    cmp r7, r11
    bge @L_02078940
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    beq @L_020788ac
    mov r0, r5
    mov r1, r6
    bl func_0208076c
    b @L_020788dc
@L_020788ac:
    cmp r4, #0
    cmpeq r10, #1
    mov r0, r5
    bne @L_020788d4
    mov r1, r6
    bl func_0208076c
    orr r0, r0, #0x8000
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    b @L_020788e0
@L_020788d4:
    mov r1, r6
    bl func_02080780
@L_020788dc:
    mov r8, r0
@L_020788e0:
    cmp r8, #0
    beq @L_02078934
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_02078934
    bl func_02080cb8
    cmp r0, #0
    bne @L_02078934
    cmp r4, #0
    cmpeq r10, #1
    ldreq r0, =gGameState
    add r7, r7, #1
    ldreqb r0, [r0, #0x1b]
    cmpeq r0, #0
    orreq r1, r8, #0x8000
    moveq r0, r6, lsl #1
    streqh r1, [r9, r0]
    movne r0, r6, lsl #1
    strneh r8, [r9, r0]
@L_02078934:
    add r6, r6, #1
@L_02078938:
    cmp r6, #4
    blt @L_02078884
@L_02078940:
    cmp r11, #4
    ble @L_02078984
    mov r0, r5
    bl func_020807ac
    cmp r0, #0
    beq @L_02078984
    ldrb r0, [sp, #0x28]
    cmp r0, #0
    cmpeq r10, #1
    mov r0, r5
    bne @L_02078978
    bl func_020807ac
    orr r0, r0, #0x8000
    b @L_0207897c
@L_02078978:
    bl func_020807b4
@L_0207897c:
    strh r0, [r9, #8]
    add r7, r7, #1
@L_02078984:
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02078990()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    str r0, [sp, #4]
    mov r10, r1
    add r0, r0, #0x34c
    ldr r7, [sp, #0x30]
    movs r9, r2
    add r11, r0, r10, lsl #5
    mov r8, r3
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0
    mov r0, r9
    mov r1, r6
    mov r2, r8, lsl #1
    bl MI_CpuFill8
    mov r5, r6
@L_020789d8:
    cmp r6, r8
    bge @L_02078a80
    mov r0, r5
    bl func_ov015_02130ae8
    movs r4, r0
    beq @L_02078a74
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02078a74
    mov r0, r4
    bl func_02080b90
    cmp r10, r0
    bne @L_02078a74
    mov r0, r4
    bl func_02080cb8
    cmp r0, #0
    bne @L_02078a74
    ldrh r2, [r4, #0x42]
    ldr r1, =0xfff
    mov r0, r11
    and r1, r2, r1
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0208039c
    cmp r0, #0
    bne @L_02078a74
    cmp r7, #0
    ldreqh r1, [r4, #0x42]
    moveq r0, r6, lsl #1
    streqh r1, [r9, r0]
    ldrneh r2, [r4, #0x42]
    ldrne r0, =0xfff
    movne r1, r6, lsl #1
    andne r0, r2, r0
    strneh r0, [r9, r1]
    add r6, r6, #1
@L_02078a74:
    add r5, r5, #1
    cmp r5, #0x84
    blt @L_020789d8
@L_02078a80:
    ldr r0, [sp, #4]
    mov r4, #1
    mov r1, r9
    mov r2, r6
    mov r3, #0x80
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207f634EPtiih
    mov r0, r6
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm int MatchEngine::func_02078aac(int team, u16 *out, int max, u8 flag, int key)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    str r0, [sp, #4]
    movs r9, r2
    mov r10, r1
    add r0, r0, #0x34c
    add r4, r0, r10, lsl #5
    mov r8, r3
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0
    mov r0, r9
    mov r1, r6
    mov r2, r8, lsl #1
    bl MI_CpuFill8
    mov r5, r6
    ldrb r11, [sp, #0x30]
    b @L_02078b88
@L_02078af8:
    cmp r6, r8
    bge @L_02078b90
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    beq @L_02078b20
    mov r0, r4
    mov r1, r5
    bl func_02080328
    b @L_02078b50
@L_02078b20:
    cmp r11, #0
    cmpeq r10, #1
    mov r0, r4
    bne @L_02078b48
    mov r1, r5
    bl func_02080328
    orr r0, r0, #0x8000
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    b @L_02078b54
@L_02078b48:
    mov r1, r5
    bl func_0208033c
@L_02078b50:
    mov r7, r0
@L_02078b54:
    ldr r0, =0xfff
    tst r7, r0
    beq @L_02078b84
    mov r0, r7
    bl func_ov015_02130b94
    cmp r0, #0
    beq @L_02078b84
    bl func_02080cb8
    cmp r0, #0
    moveq r0, r6, lsl #1
    streqh r7, [r9, r0]
    addeq r6, r6, #1
@L_02078b84:
    add r5, r5, #1
@L_02078b88:
    cmp r5, #0x10
    blt @L_02078af8
@L_02078b90:
    ldr r3, [sp, #0x34]
    mov r4, #1
    ldr r0, [sp, #4]
    mov r1, r9
    mov r2, r6
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207f634EPtiih
    mov r0, r6
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// (the ids of up to max of the 22 players func_02079f98 does not rule out for player and flags)
int MatchEngine::func_02078bc0(MatchPlayer *player, void *buffer, int max, int flags, BOOL mask)
{
    u16 *out = (u16 *)buffer;
    int i;
    int n;
    MatchPlayer *other;
    int id;

    if (out == NULL) {
        return 0;
    }
    n = 0;
    MI_CpuFill8(out, 0, max * 2);
    for (i = 0; i < 0x16; i++) {
        if (n >= max) {
            break;
        }
        other = func_02079d2c(i);
        if (other != NULL && !func_02079f98(other, flags, (int)player)) {
            id = other->unk_42;
            if (mask) {
                id = (u16)(id & 0xFFF);
            }
            out[n] = id;
            n++;
        }
    }
    return n;
}

asm void MatchEngine::func_02078c70()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r7, [sp, #0x30]
    movs r9, r2
    str r0, [sp, #4]
    mov r10, r1
    mov r8, r3
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r6, #0
    mov r0, r9
    mov r1, r6
    mov r2, r8, lsl #1
    bl MI_CpuFill8
    ldr r11, =0xfff
    mov r5, r6
@L_02078cb4:
    cmp r6, r8
    bge @L_02078d50
    mov r0, r5
    bl func_ov015_02130ae8
    movs r4, r0
    beq @L_02078d44
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02078d44
    mov r0, r4
    bl func_02080b90
    cmp r10, r0
    bne @L_02078d44
    mov r0, r4
    bl func_02080cb8
    cmp r0, #0
    bne @L_02078d44
    mov r0, r4
    mov r1, #0
    bl func_0208130c
    cmp r0, #0
    ble @L_02078d44
    cmp r0, #0x10
    bgt @L_02078d44
    cmp r7, #0
    ldrneh r0, [r4, #0x42]
    andne r0, r0, r11
    movne r0, r0, lsl #0x10
    movne r1, r0, lsr #0x10
    ldreqh r1, [r4, #0x42]
    mov r0, r6, lsl #1
    add r6, r6, #1
    strh r1, [r9, r0]
@L_02078d44:
    add r5, r5, #1
    cmp r5, #0x84
    blt @L_02078cb4
@L_02078d50:
    ldr r3, [sp, #0x34]
    cmp r3, #0
    beq @L_02078d74
    ldr r0, [sp, #4]
    mov r4, #1
    mov r1, r9
    mov r2, r6
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207f634EPtiih
@L_02078d74:
    mov r0, r6
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// (nonmatching, at optimization level 2, 19 words: the ROM loads the flag argument after MI_CpuFill8 (ldrb r4) and
// keeps the player in r7, the attempt loads the flag first, into r7)
#ifdef NONMATCHING
#pragma push
#pragma optimization_level 2
int MatchEngine::func_02078d84(int team, u16 *out, int max, u8 flag)
{
    MatchPlayer *player;
    int i;
    int n = 0;
    u16 id;

    if (out == NULL) {
        return n;
    }
    MI_CpuFill8(out, 0, max * 2);
    for (i = 0; i < 0x84; i++) {
        if (n >= max) {
            break;
        }
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player) && !func_02080cb8(player)) {
            id = player->unk_42 & 0xFFF;
            if (gGameState.unk_000[0x1B] != 0) {
                out[n] = player->unk_42;
            } else if (flag == 0 && team == 1) {
                out[n] = id | 0x8000;
            } else {
                out[n] = id;
            }
            n++;
            if (n >= max) {
                break;
            }
        }
    }
    func_0207f634(out, n, 0x80, 1);
    return n;
}
#pragma pop
#else
asm int MatchEngine::func_02078d84(int team, u16 *out, int max, u8 flag)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    movs r9, r2
    str r0, [sp, #4]
    mov r6, #0
    mov r10, r1
    mov r8, r3
    addeq sp, sp, #8
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    mov r1, r6
    mov r2, r8, lsl #1
    bl MI_CpuFill8
    mov r5, r6
    ldrb r4, [sp, #0x30]
    ldr r11, =gGameState
    b @L_02078e70
@L_02078dcc:
    cmp r6, r8
    bge @L_02078e78
    mov r0, r5
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_02078e6c
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_02078e6c
    mov r0, r7
    bl func_02080b90
    cmp r10, r0
    bne @L_02078e6c
    mov r0, r7
    bl func_02080cb8
    cmp r0, #0
    bne @L_02078e6c
    ldrh r2, [r7, #0x42]
    ldr r0, =0xfff
    ldrb r1, [r11, #0x1b]
    and r0, r2, r0
    mov r0, r0, lsl #0x10
    cmp r1, #0
    mov r1, r0, lsr #0x10
    movne r0, r6, lsl #1
    strneh r2, [r9, r0]
    bne @L_02078e60
    cmp r4, #0
    cmpeq r10, #1
    orreq r1, r1, #0x8000
    moveq r0, r6, lsl #1
    streqh r1, [r9, r0]
    movne r0, r6, lsl #1
    strneh r1, [r9, r0]
@L_02078e60:
    add r6, r6, #1
    cmp r6, r8
    bge @L_02078e78
@L_02078e6c:
    add r5, r5, #1
@L_02078e70:
    cmp r5, #0x84
    blt @L_02078dcc
@L_02078e78:
    ldr r0, [sp, #4]
    mov r4, #1
    mov r1, r9
    mov r2, r6
    mov r3, #0x80
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207f634EPtiih
    mov r0, r6
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

BOOL MatchEngine::func_02078ea8(int id)
{
    u16 list[0x64];
    int n;
    int i;

    n = data_020e88a0.func_02078d84(func_ov015_021319bc(), list, 0x64, 0);
    for (i = 0; i < n; i++) {
        if (id == list[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

u8 MatchEngine::func_02078f14(MatchPlayer *player)
{
    int pos;
    int team;

    if (player == NULL) {
        return 0;
    }
    pos = func_0208130c(player, 0);
    team = func_ov015_02131970(player);
    if (pos <= 0 || pos > 11) {
        return 0;
    }
    return unk_117a4[0][team * 11 + pos - 1];
}

BOOL MatchEngine::func_02078f74(MatchPlayer *player)
{
    return func_02078f14(player) == 2;
}

BOOL MatchEngine::func_02078f8c(MatchPlayer *player)
{
    return func_02078f14(player) == 4;
}

BOOL MatchEngine::func_02078fa4(MatchPlayer *player)
{
    if (func_ov087_0217ea64(this)) {
        if (MatchPlayer_HasFlag(player, 0x80)) {
            return FALSE;
        }
    }
    if (MatchPlayer_HasFlag(player, 0x80)) {
        return TRUE;
    }
    return FALSE;
}

BOOL MatchEngine::func_02078ff4(MatchPlayer *player)
{
    return func_02078f14(player) == 3;
}

BOOL MatchEngine::func_0207900c(MatchPlayer *player)
{
    return func_02078f14(player) == 6;
}

BOOL MatchEngine::func_02079024(MatchPlayer *player)
{
    return func_02078f14(player) == 8;
}

BOOL MatchEngine::func_0207903c(MatchPlayer *player)
{
    return func_02068548(func_ov015_02131948(player->unk_f4), (int)player->body);
}

BOOL MatchEngine::func_02079064(MatchPlayer *player)
{
    MatchPlayerState *state;
    MatchPlayerBody *body;
    BOOL moving;

    if (func_02080b38(player)) {
        return FALSE;
    }
    if (func_02084870(player)) {
        return TRUE;
    }
    state = player->state;
    if (state->unk_0 == (fx32)0x80000000) {
        return FALSE;
    }
    body = player->body;
    moving = TRUE;
    if (state->unk_0 == body->pos.x && state->unk_4 == body->pos.y) {
        moving = FALSE;
    }
    return moving;
}

u8 MatchEngine::func_020790cc(MatchPlayerBody *body, fx32 x, fx32 y)
{
    return func_ov015_02130e28(func_02079114(body, x, y) + 0xC000);
}

u16 MatchEngine::func_020790e8(MatchPlayerBody *body, u16 dir)
{
    int angle = dir;

    angle -= func_ov015_02130e40(body->unk_1a);
    while (angle < 0) {
        angle += 0x10000;
    }
    return angle;
}

u16 MatchEngine::func_02079114(MatchPlayerBody *body, fx32 x, fx32 y)
{
    int angle = FX_Atan2Idx(y - body->pos.y, x - body->pos.x);

    return func_020790e8(body, angle);
}

u8 MatchEngine::func_02079148(MatchPlayerBody *body, u8 *data)
{
    u16 dir = (data[0x27] << 8) | 0x7F;
    u16 back = dir + 0x8000;

    // (the int and back again: the ROM narrows it to 16 bits twice)
    return func_ov015_02130e28(func_020790e8(body, (u16)(int)back) + 0xC000);
}

u16 MatchEngine::func_0207918c(MatchPlayer *player, fx32 x, fx32 y)
{
    // (pos.y for both: x - pos.y is in the original)
    int angle = FX_Atan2Idx(y - player->body->pos.y, x - player->body->pos.y);

    angle -= player->body->direction;
    while (angle < 0) {
        angle += 0x10000;
    }
    return angle;
}

int MatchEngine::func_020791cc(int a, int b)
{
    int d;

    if (a < 0) {
        a += 0x10000;
    }
    if (b < 0) {
        b += 0x10000;
    }
    d = (u16)b - (u16)a;
    while (d < -0x8000) {
        d += 0x10000;
    }
    while (d > 0x8000) {
        d -= 0x10000;
    }
    return d > 0;
}

int MatchEngine::func_0207922c(MatchPlayer *player, fx32 x, fx32 y)
{
    return func_020791cc(0, func_0207918c(player, x, y));
}

void MatchEngine::func_0207924c(int team, BOOL on)
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_ov015_021319b0(player)) {
            if (on) {
                player->unk_f0 |= 0x40;
            } else {
                player->unk_f0 &= (u16)~0x40;
            }
        }
    }
}

void MatchEngine::func_020792cc(int team, BOOL on)
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_ov015_021319b0(player)) {
            if (on) {
                player->unk_f0 |= 0x20;
            } else {
                player->unk_f0 &= (u16)~0x20;
            }
        }
    }
}

void MatchEngine::func_0207934c()
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1)) {
            if (func_ov015_02131a5c(player)) {
                player->unk_f0 |= 0x20;
            } else {
                player->unk_f0 &= (u16)~0x20;
            }
        }
    }
}

asm void MatchEngine::func_020793bc()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x74
    ldr r2, =gGameState
    mov r4, #0
    ldrh r3, [r2, #0x80]
    ldrh r6, [r2, #0x82]
    mov r1, r4
    strh r3, [sp]
    mov r3, r3
    strh r6, [r2, #0x80]
    mov r5, r0
    strh r6, [sp, #2]
    strh r3, [r2, #0x82]
    bl _ZN11MatchEngine11GetTeamInfoEi
    add r9, sp, #0x34
    mov r8, #0x40
    mov r1, r9
    mov r2, r8
    bl MI_CpuCopy8
    mov r0, r9
    mov r1, r8
    bl DC_FlushRange
    mov r7, #1
    mov r0, r5
    mov r1, r7
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r6, r0
    mov r0, r5
    mov r1, r4
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r1, r0
    mov r0, r6
    mov r2, r8
    bl MI_CpuCopy8
    mov r0, r5
    mov r1, r4
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r1, r8
    bl DC_FlushRange
    mov r0, r5
    mov r1, r7
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r1, r0
    mov r0, r9
    mov r2, r8
    bl MI_CpuCopy8
    mov r1, r7
    mov r0, r5
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r1, r8
    bl DC_FlushRange
    add r7, sp, #4
    mov r6, #0x20
    add r0, r5, #0x34c
    mov r1, r7
    mov r2, r6
    bl MI_CpuCopy8
    mov r0, r7
    mov r1, r6
    bl DC_FlushRange
    add r0, r5, #0x36c
    add r1, r5, #0x34c
    mov r2, r6
    bl MI_CpuCopy8
    add r0, r5, #0x34c
    mov r1, r6
    bl DC_FlushRange
    mov r0, r7
    add r1, r5, #0x36c
    mov r2, r6
    bl MI_CpuCopy8
    mov r1, r6
    add r0, r5, #0x36c
    bl DC_FlushRange
    add r7, sp, #0x24
    mov r6, #0x10
    mov r1, r7
    mov r2, r6
    add r0, r5, #0x3ac
    bl MI_CpuCopy8
    mov r0, r7
    mov r1, r6
    bl DC_FlushRange
    mov r2, r6
    add r0, r5, #0x3bc
    add r1, r5, #0x3ac
    bl MI_CpuCopy8
    add r0, r5, #0x3ac
    mov r1, r6
    bl DC_FlushRange
    mov r0, r7
    add r1, r5, #0x3bc
    mov r2, r6
    bl MI_CpuCopy8
    add r0, r5, #0x3bc
    mov r1, r6
    bl DC_FlushRange
    mov r5, r4
    mov r6, #1
    b @L_020795a0
@L_0207954c:
    mov r0, r4
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_0207959c
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    beq @L_0207959c
    mov r0, r7
    bl func_02080b90
    cmp r0, #2
    beq @L_0207959c
    mov r0, r7
    bl func_02080b90
    bl func_02083e44
    mov r1, r0
    mov r0, r7
    bl func_02080c64
@L_0207959c:
    add r4, r4, #1
@L_020795a0:
    cmp r4, #0x84
    blt @L_0207954c
    add sp, sp, #0x74
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void MatchEngine::func_020795b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    str r1, [sp]
    mov r10, r0
    ldr r0, [sp]
    add r1, r10, #0x34c
    add r9, r1, r0, lsl #5
    add r5, sp, #0x10
    mov r4, #0x20
    mov r7, r2
    mov r0, r9
    mov r1, r5
    mov r2, r4
    mov r6, r3
    bl MI_CpuCopy8
    add r0, r10, #0x34c
    add r0, r0, r7, lsl #5
    str r0, [sp, #4]
    mov r1, r9
    mov r2, r4
    bl MI_CpuCopy8
    ldr r1, [sp, #4]
    mov r0, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r7, #0
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine11GetTeamInfoEi
    str r0, [sp, #8]
    mvn r0, r6
    ldr r5, =gEntryPool
    mov r11, r0, lsl #0x10
    mvn r4, #0
@L_0207963c:
    ldr r0, =data_020a7248
    ldr r8, [r0, r7, lsl #2]
    mov r0, r9
    sub r1, r8, #1
    bl func_02080328
    mov r1, #0
    bl func_ov015_02130b14
    movs r6, r0
    beq @L_020796dc
    ldrh r0, [r6, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_020796dc
    ldr r1, [sp]
    mov r0, r6
    bl func_02080c64
    ldrh r0, [r6, #0xf0]
    cmp r8, #1
    and r0, r0, r11, lsr #16
    strh r0, [r6, #0xf0]
    ldrh r0, [r6, #0xf0]
    orr r0, r0, #3
    strh r0, [r6, #0xf0]
    blt @L_020796b4
    cmp r8, #0xb
    ldrleh r0, [r6, #0xf0]
    orrle r0, r0, #0x1c
    strleh r0, [r6, #0xf0]
@L_020796b4:
    cmp r8, #1
    ldreqh r0, [r6, #0xf0]
    orreq r0, r0, #0x80
    streqh r0, [r6, #0xf0]
    ldr r0, =data_020a7248
    ldr r1, [r0, r7, lsl #2]
    mov r0, r5
    strb r1, [r6, #0xb7]
    ldrsh r2, [r6, #0xf4]
    b @L_02079714
@L_020796dc:
    mov r0, r5
    mov r1, #0x20
    mov r2, #0x83
    bl _ZN9EntryPool12FindFreeSlotEii
    mov r2, r0
    cmp r2, r4
    bne @L_02079710
    mov r0, r10
    mov r1, #1
    bl func_01ffe354
    mov r2, r0
    cmp r2, r4
    beq @L_0207971c
@L_02079710:
    mov r0, r5
@L_02079714:
    mov r1, r7
    bl _ZN9EntryPool4SwapEii
@L_0207971c:
    add r7, r7, #1
    cmp r7, #0x10
    blt @L_0207963c
    ldr r8, =0xfff7
    ldr r5, =data_020a7248
    mov r7, #0
    mvn r6, #0
    add r9, r8, #6
    add r10, r8, #4
    add r4, sp, #0xc
@L_02079744:
    ldr r1, [r5, r7, lsl #2]
    ldr r0, [sp, #4]
    sub r1, r1, #1
    str r6, [sp, #0xc]
    bl func_02080328
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_020797a0
    ldr r1, [sp, #0xc]
    cmp r1, #0
    blt @L_020797a0
    ldrh r2, [r0, #0xf0]
    ldr r1, [r5, r7, lsl #2]
    and r2, r2, r8
    strh r2, [r0, #0xf0]
    ldrh r2, [r0, #0xf0]
    and r2, r2, r9
    strh r2, [r0, #0xf0]
    ldrh r2, [r0, #0xf0]
    and r2, r2, r10
    strh r2, [r0, #0xf0]
    bl func_020813a0
@L_020797a0:
    add r7, r7, #1
    cmp r7, #0x10
    blt @L_02079744
    ldr r0, [sp, #8]
    ldrh r2, [r0, #0x22]
    ldrh r1, [r0, #0x3e]
    strh r1, [r0, #0x22]
    strh r2, [r0, #0x3e]
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_020797d4()
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1)) {
            player->unk_42 = (player->unk_42 & ~0x8000) | ((u32)(func_02080b90(player) << 31) >> 16);
        }
    }
}

// (nonmatching: the ROM tests the flag with constants it does not keep in registers and needs fewer registers (r3-r7))
#ifdef NONMATCHING
void MatchEngine::func_02079838(int level)
{
    int i;
    int j;
    MatchPlayer *player;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1)) {
            player->unk_42 = MatchWithLevel(player->unk_42, level);
            for (j = 0; j < 12; j++) {
                player->unk_7c[j] = MatchWithLevel(player->unk_7c[j], level);
            }
        }
    }
}
#else
asm void MatchEngine::func_02079838(int level)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    sub r4, r7, #1
    mov r6, #0
    mov r5, #0x1000
@L_0207984c:
    mov r0, r6
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_020798b0
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, #1
    moveq r1, #0
    cmp r1, #0
    beq @L_020798b0
    ldrh r1, [r0, #0x42]
    cmp r7, #0
    mov r3, #0
    bic r1, r1, #0xf000
    orrne r1, r1, r5, lsl r4
    strh r1, [r0, #0x42]
@L_0207988c:
    add r2, r0, r3, lsl #1
    ldrh r1, [r2, #0x7c]
    cmp r7, #0
    add r3, r3, #1
    bic r1, r1, #0xf000
    orrne r1, r1, r5, lsl r4
    strh r1, [r2, #0x7c]
    cmp r3, #0xc
    blt @L_0207988c
@L_020798b0:
    add r6, r6, #1
    cmp r6, #0x84
    blt @L_0207984c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

void MatchEngine::func_020798c0(int team, int level)
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player)) {
            u32 v = player->unk_42 & ~0xF000;

            if (level == 0) {
                player->unk_42 = v;
            } else {
                player->unk_42 = v | (0x1000 << (level - 1));
            }
        }
    }
}

void MatchEngine::func_02079940(int team, int level)
{
    u16 bits;
    int i;
    u8 *entry;
    int id;

    if (level > 0) {
        bits = 0x1000 << (level - 1);
    } else {
        bits = 0;
    }
    entry = unk_34c[team];
    for (i = 0; i < 16; i++) {
        id = func_02080328(entry, i);
        if (id != 0) {
            id = (u16)((id & 0xFFF) | bits);
        }
        func_020802cc(entry, i, id);
    }
}

asm void MatchEngine::func_020799b4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bl func_ov015_021319bc
    ldr r1, =gGameState
    mov r6, r0
    ldrb r0, [r1, #0x1b]
    mov r4, #0
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =gWirelessUtil
    mov r0, r5
    bl func_0209bf8c
    cmp r0, #0
    beq @L_02079a04
    mov r0, r5
    bl func_0209bf8c
    sub r0, r0, #1
    mov r1, #0x1000
    mov r0, r1, lsl r0
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
@L_02079a04:
    ldr r0, =data_020ca716
    mov r5, #0
    mov r10, #1
    add r8, r0, r6, lsl #5
    mov r9, r5
    mov r11, r5
    mov r7, r10
    ldr r6, =gEntryPool
    b @L_02079ac4
@L_02079a28:
    mov r0, r5
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02079ac0
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r10
    moveq r1, r9
    cmp r1, #0
    beq @L_02079ac0
    mov r2, r11
    mov r1, r11
    ldr r3, =0xfff
    b @L_02079aa4
@L_02079a60:
    mov r12, r1, lsl #1
    ldrh r12, [r12, r8]
    cmp r12, #0
    beq @L_02079aa0
    and lr, r12, #0xf000
    cmp r4, lr
    ldreqh lr, [r0, #0x42]
    andeq r12, r12, r3
    andeq lr, lr, r3
    moveq lr, lr, lsl #0x10
    cmpeq r12, lr, lsr #16
    ldreqh r1, [r0, #0xf0]
    moveq r2, r7
    orreq r1, r1, #0x22
    streqh r1, [r0, #0xf0]
    beq @L_02079aac
@L_02079aa0:
    add r1, r1, #1
@L_02079aa4:
    cmp r1, #0x10
    blt @L_02079a60
@L_02079aac:
    cmp r2, #0
    bne @L_02079ac0
    mov r0, r6
    mov r1, r5
    bl _ZN9EntryPool6RemoveEi
@L_02079ac0:
    add r5, r5, #1
@L_02079ac4:
    cmp r5, #0x84
    blt @L_02079a28
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_02079ae4()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, #0
    bl func_ov015_021319bc
    ldr r1, =gGameState
    mov r4, r0
    ldrb r0, [r1, #0x1b]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =gWirelessUtil
    mov r0, r5
    bl func_0209bf8c
    cmp r0, #0
    beq @L_02079b34
    mov r0, r5
    bl func_0209bf8c
    sub r0, r0, #1
    mov r1, #0x1000
    mov r0, r1, lsl r0
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
@L_02079b34:
    ldr r0, =data_020ca716
    mov r9, #0
    mov r5, r9
    add r11, r0, r4, lsl #5
    mov r6, #1
    b @L_02079be8
@L_02079b4c:
    mov r0, r9, lsl #1
    ldrh r1, [r0, r11]
    cmp r1, #0
    beq @L_02079be4
    and r0, r1, #0xf000
    cmp r7, r0
    bne @L_02079be4
    ldr r4, =0xfff
    mov r10, #0
    and r0, r1, r4
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    b @L_02079bdc
@L_02079b80:
    mov r0, r10
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02079bd8
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r6
    moveq r1, r5
    cmp r1, #0
    beq @L_02079bd8
    ldrh r0, [r0, #0x42]
    and r0, r0, r4
    mov r0, r0, lsl #0x10
    cmp r8, r0, lsr #16
    bne @L_02079bd8
    cmp r9, r10
    beq @L_02079be4
    ldr r0, =gEntryPool
    mov r1, r9
    mov r2, r10
    bl _ZN9EntryPool4SwapEii
    b @L_02079be4
@L_02079bd8:
    add r10, r10, #1
@L_02079bdc:
    cmp r10, #0x84
    blt @L_02079b80
@L_02079be4:
    add r9, r9, #1
@L_02079be8:
    cmp r9, #0x10
    blt @L_02079b4c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

// (nonmatching: the ROM clears copy->unk_f0 with ldrh; and #0; strh, MWCC folds it into a store of 0 (all else matches at optimization level 2))
#ifdef NONMATCHING
#pragma push
#pragma optimization_level 2
void MatchEngine::func_02079c08()
{
    int i;
    MatchPlayer *player;
    MatchPlayer *copy;

    if (gGameState.unk_000[0x1B] == 0) {
        return;
    }
    for (i = 0; i < 0x20; i++) {
        player = func_ov015_02130ae8(i);
        if (player == NULL) {
            continue;
        }
        if (!MatchPlayer_HasFlag(player, 1)) {
            continue;
        }
        if (!func_02082c8c(this, player->unk_42)) {
            continue;
        }
        if (!func_020823a0(this, player->unk_42, 0)) {
            continue;
        }
        copy = (MatchPlayer *)gEntryPool.Duplicate(i, i + 0x20);
        if (copy == NULL) {
            continue;
        }
        copy->unk_f0 &= 0;
        if (func_020823a0(this, player->unk_42, 0)) {
            copy->unk_f0 |= 1;
            copy->unk_b6 = 2;
        }
    }
}
#pragma pop
#else
asm void MatchEngine::func_02079c08()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r1, =gGameState
    mov r10, r0
    ldrb r0, [r1, #0x1b]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r8, #0
    mov r11, r8
    mov r7, #1
    mov r4, #2
    mov r6, r8
    b @L_02079cd8
@L_02079c38:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r9, r0
    beq @L_02079cd4
    ldrh r0, [r9, #0xf0]
    tst r0, #1
    movne r0, r7
    moveq r0, r11
    cmp r0, #0
    beq @L_02079cd4
    ldrh r1, [r9, #0x42]
    mov r0, r10
    bl func_02082c8c
    cmp r0, #0
    beq @L_02079cd4
    ldrh r1, [r9, #0x42]
    mov r0, r10
    mov r2, r6
    bl func_020823a0
    cmp r0, #0
    beq @L_02079cd4
    ldr r0, =gEntryPool
    mov r1, r8
    add r2, r8, #0x20
    bl _ZN9EntryPool9DuplicateEii
    movs r5, r0
    beq @L_02079cd4
    ldrh r1, [r5, #0xf0]
    mov r0, r10
    mov r2, r6
    and r1, r1, #0
    strh r1, [r5, #0xf0]
    ldrh r1, [r9, #0x42]
    bl func_020823a0
    cmp r0, #0
    ldrneh r0, [r5, #0xf0]
    orrne r0, r0, #1
    strneh r0, [r5, #0xf0]
    strneb r4, [r5, #0xb6]
@L_02079cd4:
    add r8, r8, #1
@L_02079cd8:
    cmp r8, #0x20
    blt @L_02079c38
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
#endif

void MatchEngine::func_02079cec()
{
    int i;

    for (i = 0; i < 16; i++) {
        gEntryPool.Move(i, i + 16);
    }
}

void MatchEngine::func_02079d1c()
{
    unk_b80->func_020831f8();
}

MatchPlayer *MatchEngine::func_02079d2c(int index)
{
    return unk_b80->func_020832a8(index);
}

int MatchEngine::func_02079d3c(int team)
{
    int n = 0;
    int i;
    MatchPlayer *player;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && team == func_02080b90(player) && MatchPlayer_HasFlag(player, 8)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_02079d9c(MatchPlayer *player)
{
    int i;

    for (i = 0; i < 22; i++) {
        if (func_02079d2c(i) == player) {
            return i;
        }
    }
    return -1;
}

// (sorts the 22 players by their distance to the ball, nearest first)
// (nonmatching: 40 words: the ROM enters each loop through its test (b); -O2 (#pragma optimization_level 2) gives that shape with other registers)
#ifdef NONMATCHING
#pragma push
#pragma optimization_level 2
void MatchEngine::func_02079dd8(u8 *order)
{
    fx32 dist[0x16];
    int i;
    int j;
    MatchPlayer *player;
    u8 t;

    for (i = 0; i < 0x16; i++) {
        player = func_02079d2c(i);
        if (player == NULL) {
            dist[i] = 10000 * FX32_ONE;
        } else {
            dist[i] = func_01fff15c(this, player->body, (MatchPoint *)&data_020c4920);
        }
        order[i] = i;
    }
    for (i = 0; i < 0x15; i++) {
        for (j = i + 1; j < 0x16; j++) {
            if (dist[order[i]] > dist[order[j]]) {
                t = order[i];
                order[i] = order[j];
                order[j] = t;
            }
        }
    }
}
#pragma pop
#else
asm void MatchEngine::func_02079dd8(u8 *order)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x58
    mov r9, r0
    mov r4, r1
    mov r8, #0
    ldr r5, =0x2710000
    add r6, sp, #0
    ldr r7, =data_020c4920
    b @L_02079e30
@L_02079dfc:
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_02079d2cEi
    cmp r0, #0
    streq r5, [r6, r8, lsl #2]
    beq @L_02079e28
    ldr r1, [r0, #0xe8]
    mov r0, r9
    mov r2, r7
    bl func_01fff15c
    str r0, [r6, r8, lsl #2]
@L_02079e28:
    strb r8, [r4, r8]
    add r8, r8, #1
@L_02079e30:
    cmp r8, #0x16
    blt @L_02079dfc
    mov r5, #0
    add r3, sp, #0
    b @L_02079e78
@L_02079e44:
    add r6, r5, #1
    b @L_02079e6c
@L_02079e4c:
    ldrb r12, [r4, r5]
    ldrb r1, [r4, r6]
    ldr r2, [r3, r12, lsl #2]
    ldr r0, [r3, r1, lsl #2]
    cmp r2, r0
    strgtb r1, [r4, r5]
    strgtb r12, [r4, r6]
    add r6, r6, #1
@L_02079e6c:
    cmp r6, #0x16
    blt @L_02079e4c
    add r5, r5, #1
@L_02079e78:
    cmp r5, #0x15
    blt @L_02079e44
    add sp, sp, #0x58
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

MatchPlayer *MatchEngine::func_02079e90(int team, int i)
{
    return unk_b80->func_020832b4(team, i);
}

MatchPlayer *MatchEngine::func_02079ea0(int team, int value, int kind)
{
    int i;
    MatchPlayer *player;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_ov015_021319b0(player) && value == func_0208130c(player, kind)) {
            return player;
        }
    }
    return NULL;
}

int MatchEngine::func_02079f20(int a, int flags, int b)
{
    return func_02079f40(a, flags | 0x20000, b);
}

int MatchEngine::func_02079f30(int a, int flags, int b)
{
    return func_02079f40(a, flags | 0x20000, b);
}

int MatchEngine::func_02079f40(int a, int flags, int b)
{
    int i;
    int n = 0;

    for (i = 0; i < 22; i++) {
        MatchPlayer *player = func_02079d2c(i);

        if (player != NULL && func_02079f98(player, flags, a) == FALSE) {
            n++;
        }
    }
    return n;
}

asm BOOL MatchEngine::func_02079f98(MatchPlayer *player, int a, int b)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r5, r2
    mov r7, r0
    mov r6, r1
    mov r4, r3
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r0, [r6, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    tst r5, #9
    beq @L_0207a010
    mov r0, r6
    bl func_02080b38
    cmp r0, #0
    beq @L_0207a010
    tst r5, #8
    beq @L_0207a008
    ldr r0, [r6, #0xec]
    ldrh r0, [r0, #0x1e]
    cmp r0, #0x1e
    bls @L_0207a010
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a008:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a010:
    tst r5, #2
    beq @L_0207a02c
    mov r0, r6
    bl func_02084870
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a02c:
    tst r5, #0x10
    beq @L_0207a050
    ldrh r0, [r6, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a050:
    tst r5, #0x80000
    beq @L_0207a070
    ldr r0, =data_020c4920
    ldrsh r1, [r6, #0xf4]
    ldr r0, [r0, #0x48]
    cmp r1, r0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a070:
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    tst r5, #0x10000
    beq @L_0207a0a4
    mov r0, r6
    bl func_02080b90
    mov r8, r0
    mov r0, r4
    bl func_02080b90
    cmp r8, r0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a0a4:
    tst r5, #0x20000
    beq @L_0207a0cc
    mov r0, r6
    bl func_02080b90
    mov r8, r0
    mov r0, r4
    bl func_02080b90
    cmp r8, r0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a0cc:
    tst r5, #0x40000
    beq @L_0207a0e8
    ldrh r1, [r4, #0x42]
    ldrh r0, [r6, #0x42]
    cmp r0, r1
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a0e8:
    tst r5, #0x100000
    beq @L_0207a110
    ldr r1, [r6, #0xe8]
    mov r0, r7
    ldr r2, [r1, #4]
    mov r1, r4
    bl func_01ffed20
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a110:
    tst r5, #0x200000
    beq @L_0207a138
    ldr r1, [r6, #0xe8]
    mov r0, r7
    ldr r2, [r1, #4]
    mov r1, r4
    bl func_01ffed20
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207a138:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MatchEngine::func_0207a144()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r1
    ldr r4, [r7, #0xe8]
    movs r6, r2
    mov r8, r0
    mov r5, r3
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r7, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    tst r6, #1
    beq @L_0207a194
    ldrh r0, [r4, #0x16]
    tst r0, #0x100
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a194:
    tst r6, #0x10
    beq @L_0207a1b8
    ldrh r0, [r7, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a1b8:
    tst r6, #0x80000
    ldrne r0, [sp, #0x20]
    cmpne r0, #0
    beq @L_0207a1dc
    ldrsh r1, [r7, #0xf4]
    ldrsh r0, [r0, #0x1c]
    cmp r1, r0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a1dc:
    cmp r5, #0
    cmpne r7, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    tst r6, #0x10000
    beq @L_0207a214
    mov r0, r7
    bl func_02080b90
    mov r9, r0
    mov r0, r5
    bl func_02080b90
    cmp r9, r0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a214:
    tst r6, #0x20000
    beq @L_0207a23c
    mov r0, r7
    bl func_02080b90
    mov r9, r0
    mov r0, r5
    bl func_02080b90
    cmp r9, r0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a23c:
    tst r6, #0x40000
    beq @L_0207a258
    ldrh r1, [r7, #0x42]
    ldrh r0, [r5, #0x42]
    cmp r1, r0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a258:
    tst r6, #0x100000
    beq @L_0207a27c
    ldr r2, [r4, #4]
    mov r0, r8
    mov r1, r5
    bl func_01ffed20
    cmp r0, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a27c:
    tst r6, #0x200000
    beq @L_0207a2a0
    ldr r2, [r4, #4]
    mov r0, r8
    mov r1, r5
    bl func_01ffed20
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207a2a0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

MatchPlayer *MatchEngine::func_0207a2a8(int team)
{
    int i;

    for (i = 0; i < 11; i++) {
        MatchPlayer *player = func_02079e90(team, i);
        if (player != NULL && MatchPlayer_HasFlag(player, 0x80)) {
            return player;
        }
    }
    return NULL;
}

void MatchEngine::func_0207a304(MatchPlayer *player)
{
    if (func_0207a350(player)) {
        if (player->body != NULL) {
            player->body->unk_16 |= 0x200;
        }
    } else {
        if (player->body != NULL) {
            player->body->unk_16 &= ~0x200;
        }
    }
}

BOOL MatchEngine::func_0207a350(MatchPlayer *player)
{
    if (unk_117d6[func_ov015_021319b0(player)] & 1) {
        return FALSE;
    }
    return player->unk_94 * 2 < player->unk_d0;
}

BOOL MatchEngine::func_0207a394(MatchPlayer *player)
{
    if (unk_117d6[func_ov015_021319b0(player)] & 1) {
        return FALSE;
    }
    return player->unk_94 * 100 < player->unk_d0 * 20;
}

s32 MatchEngine::func_0207a3e8(MatchPlayer *player)
{
    BOOL flag;

    if (func_02080b38(player)) {
        return 0;
    }
    if (!func_02084870(player)) {
        flag = MatchPlayer_HasFlag(player, 0x40);
        if (flag && (unk_11896[1] & 1)) {
            return 0;
        }
        if (!flag && (unk_11896[1] & 2)) {
            return 0;
        }
    }
    return player->state->unk_10;
}

BOOL MatchEngine::func_0207a46c(MatchPlayer *player)
{
    MatchPlayerInfo *info;

    if (player == NULL) {
        return FALSE;
    }
    info = func_020787e8(player);
    if (info != NULL && (info->unk_12 & 0x80)) {
        return TRUE;
    }
    return FALSE;
}

void MatchEngine::func_0207a4a0(MatchPlayer *player)
{
    MatchPlayerBody *body = player->body;

    if (body != NULL) {
        body->unk_1c = 2;
        body->unk_12 = 30;
        body->unk_14 = 0;
    }
    func_02063550(player, 30, 0, 0, 1);
    func_01ff9490(this, player, 0);
}

BOOL MatchEngine::func_0207a510(MatchPlayer *a, MatchPlayer *b)
{
    BOOL same = a->unk_f4 == b->unk_f4;

    return same ? TRUE : FALSE;
}

// (nonmatching: the key and the table's address in each other's registers (ip/lr))
#ifdef NONMATCHING
int MatchEngine::func_0207a534(u32 id)
{
    u16 key = id & 0xFFF;
    int lo;
    int hi;
    int mid;
    s16 v;

    if (key == 0) {
        return 0;
    }
    lo = 0;
    hi = data_020c4828 - 1;
    while (lo <= hi) {
        mid = lo + ((hi - lo) >> 1);
        v = unk_bec[mid];
        if (v == 0) {
            if (mid == 0) {
                return -1;
            }
            hi = mid - 1;
        } else if (v > key) {
            hi = mid - 1;
        } else if (v < key) {
            lo = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
#else
asm int MatchEngine::func_0207a534(u32 id)
{
    stmdb sp!, {r3, lr}
    ldr r2, =0xfff
    and r1, r1, r2
    mov r1, r1, lsl #0x10
    movs r12, r1, lsr #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, =data_020c4828
    mov r2, #0
    ldr r1, [r1]
    subs r3, r1, #1
    bmi @L_0207a5b0
    ldr lr, [r0, #0xbec]
@L_0207a568:
    sub r0, r3, r2
    add r0, r2, r0, asr #1
    mov r1, r0, lsl #1
    ldrsh r1, [lr, r1]
    cmp r1, #0
    bne @L_0207a594
    cmp r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, pc}
    sub r3, r0, #1
    b @L_0207a5a8
@L_0207a594:
    cmp r1, r12
    subgt r3, r0, #1
    bgt @L_0207a5a8
    ldmgeia sp!, {r3, pc}
    add r2, r0, #1
@L_0207a5a8:
    cmp r2, r3
    ble @L_0207a568
@L_0207a5b0:
    mvn r0, #0
    ldmia sp!, {r3, pc}
}
#endif

asm int MatchEngine::func_0207a5c0(int id, void *out)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    movs r6, r2
    mov r8, r0
    mov r7, r1
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r9, =0xfff
    and r7, r7, r9
    mov r1, r7
    bl _ZN11MatchEngine13func_0207a534Em
    movs r5, r0
    addmi sp, sp, #0x18
    movmi r0, #0
    ldmmiia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r4, #0
    mov r0, r7
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_0207a630
    mov r1, r6
    mov r2, #0x60
    bl MI_CpuCopy8
    add sp, sp, #0x18
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0207a630:
    ldr r0, [r8, #0xbf0]
    sub r1, r4, #1
    add r2, r9, #0xf000
@L_0207a63c:
    ldrh r3, [r0, #0x42]
    mov r10, #0
    and r3, r3, r9
    mov r3, r3, lsl #0x10
    cmp r7, r3, lsr #16
    ldrh r3, [r0, #0x60]
    moveq r1, r4
    add r4, r4, #1
    cmp r3, r2
    addlo r3, r3, #1
    strloh r3, [r0, #0x60]
    cmp r4, #0x40
    add r0, r0, #0x64
    blt @L_0207a63c
    cmp r1, #0
    blt @L_0207a6a8
    ldr r2, [r8, #0xbf0]
    mov r0, #0x64
    mla r4, r1, r0, r2
    mov r0, r4
    mov r1, r6
    mov r2, #0x60
    bl MI_CpuCopy8
    add sp, sp, #0x18
    strh r10, [r4, #0x60]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0207a6a8:
    ldr r1, [r8, #0xbf0]
    mvn r2, #0
    mov r0, r2
    mov r3, r1
    mov r4, r10
    add r7, r2, #0x1000
@L_0207a6c0:
    ldrh r9, [r3, #0x42]
    and r9, r9, r7
    mov r9, r9, lsl #0x10
    movs r9, r9, lsr #0x10
    moveq r2, r4
    beq @L_0207a6f8
    ldrh r9, [r3, #0x60]
    add r3, r3, #0x64
    cmp r9, r0
    movgt r2, r4
    add r4, r4, #1
    movgt r0, r9
    cmp r4, #0x40
    blt @L_0207a6c0
@L_0207a6f8:
    mov r0, #0x64
    mul r7, r2, r0
    ldr r3, =gAllocator
    add r1, r1, r7
    ldr r0, [r3]
    str r1, [sp, #0x14]
    mov r4, #0
    cmp r0, #0
    ldr r1, =data_020af360
    moveq r0, r4
    beq @L_0207a748
    mov r2, #0x60
    mul r9, r5, r2
    str r9, [sp]
    stmib sp, {r2, r4}
    mov r5, #1
    str r5, [sp, #0xc]
    add r2, sp, #0x14
    str r5, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_0207a748:
    cmp r0, #0
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [sp, #0x14]
    mov r1, r6
    mov r2, #0x60
    bl MI_CpuCopy8
    ldr r0, [r8, #0xbf0]
    add r0, r0, r7
    strh r4, [r0, #0x60]
    mov r0, #1
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

BOOL MatchEngine::func_0207a78c()
{
    if (unk_bdc != NULL) {
        return TRUE;
    }
    if (MatchLoadFile(data_020af37c, &unk_bdc, 0, 0) != 0x2EE00) {
        return FALSE;
    }
    func_0206f430();
    return TRUE;
}

BOOL MatchEngine::func_0207a820()
{
    if (unk_bdc == NULL) {
        return TRUE;
    }
    gAllocator.Free(unk_bdc);
    unk_bdc = NULL;
    return TRUE;
}

BOOL MatchEngine::func_0207a854(u16 id, s8 *data)
{
    int index = func_0207a534(id);

    if (index < 0) {
        return FALSE;
    }
    if (unk_bdc != NULL) {
        MI_CpuCopy8((u8 *)unk_bdc + index * 0x50, data, 0x50);
        func_0206f4ac((u16)index, data);
        return TRUE;
    }
    if (MatchLoadFile(data_020af398, (void **)&data, index * 0x50, 0x50) == 0) {
        return FALSE;
    }
    func_0206f4ac((u16)index, data);
    return TRUE;
}

BOOL MatchEngine::func_0207a950(MatchPlayer *player)
{
    u8 *entry = GetTeamInfo(func_ov015_021319b0(player));

    if (entry != NULL) {
        return entry[0x2C] ? TRUE : FALSE;
    }
    return TRUE;
}

// whether no player of the team (without state flag 1) has n (1 to 16; at most 4 for kind 2,
// and for kind 0 when func_0206deec) as its func_0208130c(kind)
BOOL MatchEngine::func_0207a990(int team, int n, int kind)
{
    int i;
    MatchPlayer *player;

    if (n <= 0 || n > 16) {
        return FALSE;
    }
    if (kind == 2 || (kind == 0 && func_0206deec())) {
        if (n > 4) {
            return FALSE;
        }
    }
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        // (player is tested twice in the ROM too)
        if (player != NULL && !MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player)
            && player != NULL && n == func_0208130c(player, kind)) {
            return FALSE;
        }
    }
    return TRUE;
}

int MatchEngine::func_0207aa58(int team)
{
    int i;
    int n = 0;
    u8 *entry = unk_3ac[team];

    for (i = 0; i < 4; i++) {
        if (func_0208076c(entry, i)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207aa94(int team)
{
    int i;
    int n = 0;

    for (i = 0; i < 0x84; i++) {
        MatchPlayer *player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207aaf4(int team, int kind)
{
    int i;
    int n = 0;
    MatchPlayer *player;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player) && kind == player->unk_41) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207ab64(int team)
{
    int i;
    int n = 0;
    u8 *entry = unk_34c[team];

    for (i = 0; i < 16; i++) {
        if (func_02080328(entry, i)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207aba0(int team)
{
    int i;
    int n = 0;
    u8 *entry = unk_34c[team];
    MatchPlayer *player;

    for (i = 0; i < 16; i++) {
        int id = func_02080328(entry, i);

        if (id != 0) {
            player = func_ov015_02130b14(id, 0);
            if (player != NULL && MatchPlayer_HasFlag(player, 1)) {
                n++;
            }
        }
    }
    return n;
}

int MatchEngine::func_0207ac0c(int team, int kind)
{
    MatchPlayer *player;
    int i;
    int n = 0;
    s32 v;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_ov015_021319b0(player)) {
            v = func_0208130c(player, kind);
            if (v >= 1 && v <= 11) {
                n++;
            }
        }
    }
    return n;
}

int MatchEngine::func_0207ac90(int team)
{
    int i;
    int n = 0;
    MatchPlayer *player;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 4) && team == func_ov015_021319b0(player)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207acf0(int team)
{
    MatchPlayer *player;
    int i;
    int n = 0;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 0x10) && team == func_ov015_021319b0(player) && MatchPlayer_HasFlag(player, 0x100)) {
            n++;
        }
    }
    return n;
}

int MatchEngine::func_0207ad74(int team)
{
    int i;
    int n = 0;
    MatchPlayer *player;

    for (i = 0; i < 0x20; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 8) && team == func_02080b90(player)) {
            n++;
        }
    }
    return n;
}

#pragma push
#pragma optimization_level 2
int MatchEngine::func_0207add4(int team, u32 id)
{
    int i;

    if (gGameState.unk_000[0x1B] == 0) {
        id &= 0xFFF;
        if (team == 1) {
            id |= 0x8000;
        }
    }
    for (i = 0; i < 4; i++) {
        if (id == func_0208076c(unk_3ac[team], i)) {
            return i + 1;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma optimization_level 2
int MatchEngine::func_0207ae40(int team, u32 id)
{
    int i;

    if (gGameState.unk_000[0x1B] == 0) {
        id &= 0xFFF;
        if (team == 1) {
            id |= 0x8000;
        }
    }
    for (i = 0; i < 16; i++) {
        if (id == func_02080328(unk_34c[team], i)) {
            return i + 1;
        }
    }
    return 0;
}
#pragma pop

BOOL MatchEngine::func_0207aeac(int team, u32 id)
{
    return func_0207add4(team, id) ? TRUE : FALSE;
}

BOOL MatchEngine::func_0207aec4(int team, u32 id)
{
    return func_0207ae40(team, id) ? TRUE : FALSE;
}

BOOL MatchEngine::func_0207aedc(int team, int id)
{
    int i;
    MatchPlayer *player;
    u16 kind;

    id &= 0xFFF;
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_ov015_021319b0(player)) {
            kind = player->unk_42 & 0xFFF;
            if ((kind == 0x849 || kind == 0x854) && (id == 0x849 || id == 0x854)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// (nonmatching: the key and the 0/1 of MatchPlayer_HasFlag in other registers (r4 for the key in the ROM))
#ifdef NONMATCHING
BOOL MatchEngine::func_0207af84(int team, int id)
{
    MatchPlayer *player;
    u16 key = id & 0xFFF;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && key == (u16)(player->unk_42 & 0xFFF) && team == func_ov015_021319b0(player)) {
            return TRUE;
        }
    }
    return FALSE;
}
#else
asm BOOL MatchEngine::func_0207af84(int team, int id)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r9, =0xfff
    mov r7, #0
    and r0, r2, r9
    mov r0, r0, lsl #0x10
    mov r8, r1
    mov r5, r7
    mov r4, r0, lsr #0x10
    mov r6, #1
@L_0207afa8:
    mov r0, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0207aff4
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r6
    moveq r1, r5
    cmp r1, #0
    beq @L_0207aff4
    ldrh r1, [r0, #0x42]
    and r1, r1, r9
    mov r1, r1, lsl #0x10
    cmp r4, r1, lsr #16
    bne @L_0207aff4
    bl func_ov015_021319b0
    cmp r8, r0
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207aff4:
    add r7, r7, #1
    cmp r7, #0x84
    blt @L_0207afa8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
#endif

asm void MatchEngine::func_0207b00c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    ldr r4, =0xfff
    mov r5, r2
    and r5, r5, r4
    mov r2, r5
    mov r7, r0
    mov r6, r1
    mov r4, r3
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    addne sp, sp, #0x18
    movne r0, #2
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    mov r1, r6
    bl _ZN11MatchEngine13func_0207aa94Ei
    cmp r6, #0
    bne @L_0207b060
    cmp r0, #0x64
    bge @L_0207b070
@L_0207b060:
    cmp r6, #1
    bne @L_0207b07c
    cmp r0, #0x10
    blt @L_0207b07c
@L_0207b070:
    add sp, sp, #0x18
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0207b07c:
    ldrb r0, [sp, #0x38]
    mov r1, #0
    strh r5, [sp, #0x10]
    strb r1, [sp, #0x12]
    strb r0, [sp, #0x13]
    cmp r6, #0
    bne @L_0207b0b8
    cmp r4, #0
    mov r0, r7
    beq @L_0207b0ac
    bl func_01ffe22c
    b @L_0207b0b4
@L_0207b0ac:
    mov r1, #1
    bl func_01ffe354
@L_0207b0b4:
    b @L_0207b0c0
@L_0207b0b8:
    mov r0, r7
    bl func_01ffe3e4
@L_0207b0c0:
    mov r2, r0
    add r1, sp, #0x10
    str r1, [sp]
    ldr r0, [sp, #0x3c]
    mov r9, #0
    str r0, [sp, #4]
    str r9, [sp, #8]
    mov r0, r7
    mov r1, r5
    mov r3, r6
    str r9, [sp, #0xc]
    bl func_01ffe1a4
    mov r1, r9
    mov r8, r0
    bl func_ov015_02130b14
    movs r5, r0
    addeq sp, sp, #0x18
    moveq r0, #5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [sp, #0x3c]
    mov r0, r7
    mov r1, r8
    bl func_02081f7c
    mov r0, r7
    mov r1, r5
    bl _ZN11MatchEngine13func_0207ef0cEP11MatchPlayer
    cmp r4, #0
    beq @L_0207b150
    ldrb r5, [sp, #0x40]
    mov r0, r7
    mov r1, r6
    mov r2, r8
    mov r3, r4
    str r5, [sp]
    bl _ZN11MatchEngine13func_0207b28cEv
    mov r9, r0
@L_0207b150:
    mov r0, r9
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

u8 MatchEngine::func_0207b160(int team)
{
    MatchPlayer *player;
    int i;
    u16 spare = 0;
    u8 used[16] = {0};
    u8 number;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player == NULL) {
            continue;
        }
        if (!MatchPlayer_HasFlag(player, 1)) {
            continue;
        }
        if (team != func_02080b90(player)) {
            continue;
        }
        number = player->unk_b8[0];
        if (number == 0 || number > 16) {
            continue;
        }
        used[number - 1] = TRUE;
        if (!MatchPlayer_HasFlag(player, 2) && spare == 0) {
            spare = player->unk_42;
        }
    }
    for (i = 0; i < 16; i++) {
        if (used[i] == 0) {
            return i + 1;
        }
    }
    if (spare != 0) {
        player = func_ov015_02130b14(spare, 0);
        if (player == NULL) {
            return 0;
        }
        number = player->unk_b8[0];
        player->unk_b8[0] = 0;
        return number;
    }
    return 0;
}

asm void MatchEngine::func_0207b28c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    movs r4, r3
    mov r9, r1
    add r0, r10, #0x34c
    mov r8, r2
    sub r5, r4, #1
    add r7, r0, r9, lsl #5
    bmi @L_0207b2bc
    cmp r5, #0x10
    blt @L_0207b2c8
@L_0207b2bc:
    add sp, sp, #0x10
    mov r0, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b2c8:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    bne @L_0207b2f0
    ldr r0, =0xfff
    cmp r9, #1
    and r0, r8, r0
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    orreq r8, r8, #0x8000
@L_0207b2f0:
    mov r0, r8
    mov r1, #0
    bl func_ov015_02130b14
    movs r6, r0
    addeq sp, sp, #0x10
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_020812fc
    str r0, [sp, #8]
    mov r0, r6
    bl func_02081304
    ldr r1, =gGameState
    mov r11, r0
    ldrb r0, [r1, #0x1a]
    cmp r0, #0
    bne @L_0207b370
    cmp r9, #0
    bne @L_0207b34c
    ldrh r1, [r6, #0xf0]
    ldr r0, =0xffbf
    orr r1, r1, #0x20
    and r0, r1, r0
    b @L_0207b36c
@L_0207b34c:
    cmp r9, #1
    bne @L_0207b370
    ldrh r1, [r6, #0xf0]
    ldr r0, =0xffdf
    and r0, r1, r0
    strh r0, [r6, #0xf0]
    ldrh r0, [r6, #0xf0]
    orr r0, r0, #0x40
@L_0207b36c:
    strh r0, [r6, #0xf0]
@L_0207b370:
    cmp r6, #0
    beq @L_0207b398
    mov r1, r9
    cmp r9, #2
    moveq r1, #0
    mov r0, r10
    mov r2, r8
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    bne @L_0207b3a4
@L_0207b398:
    add sp, sp, #0x10
    mov r0, #3
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b3a4:
    cmp r4, #0
    bne @L_0207b3e8
    cmp r9, #0
    cmpne r9, #1
    ldreqh r1, [r6, #0xf0]
    ldreq r0, =0xfff1
    andeq r0, r1, r0
    streqh r0, [r6, #0xf0]
    ldrsh r0, [r6, #0xf4]
    cmp r0, #0x10
    ble @L_0207b3dc
    mov r0, r6
    mov r1, #0
    bl func_02081390
@L_0207b3dc:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b3e8:
    cmp r5, #0
    blt @L_0207b40c
    mov r0, r7
    mov r1, r5
    bl func_02080328
    cmp r8, r0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b40c:
    cmp r9, #0
    beq @L_0207b41c
    cmp r9, #1
    bne @L_0207b44c
@L_0207b41c:
    ldrb r0, [r6, #0xb8]
    cmp r0, #0
    beq @L_0207b43c
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0207f42cEP11MatchPlayer
    cmp r0, #0
    beq @L_0207b44c
@L_0207b43c:
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207b160Ei
    strb r0, [r6, #0xb8]
@L_0207b44c:
    cmp r5, #0
    blt @L_0207b558
    mov r0, r7
    mov r1, r5
    bl func_02080328
    str r0, [sp, #0xc]
    cmp r0, #0
    bne @L_0207b4a8
    mov r0, r7
    mov r1, r5
    mov r2, r8
    bl func_020802cc
    ldr r0, [sp, #8]
    mov r1, r9
    str r0, [sp]
    mov r0, r10
    mov r2, r6
    add r3, r5, #1
    str r11, [sp, #4]
    bl _ZN11MatchEngine13func_0207b708EmP11MatchPlayeriii
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b4a8:
    ldrb r0, [sp, #0x38]
    cmp r0, #0
    beq @L_0207b558
    mov r0, r7
    mov r1, r5
    mov r2, r8
    bl func_020802cc
    cmp r9, #0
    cmpne r9, #1
    bne @L_0207b4ec
    ldr r3, [sp, #8]
    mov r0, r10
    mov r1, r6
    add r2, r5, #1
    str r11, [sp]
    bl _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii
    b @L_0207b4f8
@L_0207b4ec:
    mov r0, r6
    add r1, r5, #1
    bl func_020813a0
@L_0207b4f8:
    ldr r0, [sp, #0xc]
    mov r1, #0
    mov r4, r1
    bl func_ov015_02130b14
    mov r5, r0
    cmp r9, #0
    bne @L_0207b52c
    ldrsh r1, [r6, #0xf4]
    cmp r1, #0x10
    blt @L_0207b52c
    ldrsh r2, [r5, #0xf4]
    ldr r0, =gEntryPool
    bl _ZN9EntryPool4SwapEii
@L_0207b52c:
    mov r0, r5
    bl func_020812fc
    ldr r2, [sp, #0xc]
    mov r3, r0
    mov r0, r10
    mov r1, r9
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207b28cEv
    add sp, sp, #0x10
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b558:
    cmp r4, #2
    blt @L_0207b5cc
    cmp r4, #0xb
    bgt @L_0207b5cc
    mov r4, #1
    b @L_0207b5c4
@L_0207b570:
    mov r0, r7
    mov r1, r4
    bl func_02080328
    cmp r0, #0
    bne @L_0207b5c0
    mov r0, r7
    mov r1, r4
    mov r2, r8
    bl func_020802cc
    ldr r0, [sp, #8]
    mov r1, r9
    str r0, [sp]
    mov r0, r10
    mov r2, r6
    add r3, r5, #1
    str r11, [sp, #4]
    bl _ZN11MatchEngine13func_0207b708EmP11MatchPlayeriii
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b5c0:
    add r4, r4, #1
@L_0207b5c4:
    cmp r4, #0xb
    blt @L_0207b570
@L_0207b5cc:
    mov r4, #0xb
    b @L_0207b628
@L_0207b5d4:
    mov r0, r7
    mov r1, r4
    bl func_02080328
    cmp r0, #0
    bne @L_0207b624
    mov r0, r7
    mov r1, r4
    mov r2, r8
    bl func_020802cc
    ldr r0, [sp, #8]
    mov r1, r9
    str r0, [sp]
    mov r0, r10
    mov r2, r6
    add r3, r5, #1
    str r11, [sp, #4]
    bl _ZN11MatchEngine13func_0207b708EmP11MatchPlayeriii
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b624:
    add r4, r4, #1
@L_0207b628:
    cmp r4, #0x10
    blt @L_0207b5d4
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_0207b6a4
    mov r4, #0
    b @L_0207b69c
@L_0207b648:
    mov r0, r7
    mov r1, r4
    bl func_02080328
    cmp r0, #0
    bne @L_0207b698
    mov r0, r7
    mov r1, r4
    mov r2, r8
    bl func_020802cc
    ldr r0, [sp, #8]
    mov r1, r9
    str r0, [sp]
    mov r0, r10
    mov r2, r6
    add r3, r5, #1
    str r11, [sp, #4]
    bl _ZN11MatchEngine13func_0207b708EmP11MatchPlayeriii
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b698:
    add r4, r4, #1
@L_0207b69c:
    cmp r4, #0xc
    blt @L_0207b648
@L_0207b6a4:
    cmp r6, #0
    beq @L_0207b6d8
    cmp r9, #0
    cmpne r9, #1
    bne @L_0207b6d8
    mov r2, #0
    strb r2, [r6, #0xb8]
    mov r0, r10
    mov r1, r6
    mov r3, r2
    str r2, [sp]
    bl _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii
    b @L_0207b6e4
@L_0207b6d8:
    mov r0, r6
    mov r1, #0
    bl func_020813a0
@L_0207b6e4:
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_0207b708(u32 mode, MatchPlayer *player, int a, int b, int c)
{
    if (mode == 0 && player->unk_f4 >= 0x10) {
        gEntryPool.Move(player->unk_f4, func_01ffe1e4(this, 0));
    }
    if (mode <= 1) {
        return func_0207c478(player, a, b, c);
    }
    return func_020813a0(player, a);
}

asm void MatchEngine::func_0207b780()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r9, r0
    ldr r6, [sp, #0x4c]
    mov r0, r3
    sub r10, r0, #1
    mov r8, r1
    add r1, r9, #0x3ac
    str r3, [sp, #0xc]
    mov r0, #0
    cmp r6, #0
    strneh r0, [r6]
    ldr r0, [sp, #0xc]
    mov r7, r2
    add r4, r1, r8, lsl #4
    ldr r5, [sp, #0x50]
    cmp r0, #0
    bge @L_0207b7d8
    cmp r0, #4
    addge sp, sp, #0x20
    movge r0, #4
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b7d8:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    bne @L_0207b800
    ldr r0, =0xfff
    cmp r8, #1
    and r0, r7, r0
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    orreq r7, r7, #0x8000
@L_0207b800:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl _ZN11MatchEngine13func_0207af84Eii
    cmp r0, #0
    addeq sp, sp, #0x20
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r7
    mov r1, #0
    bl func_ov015_02130b14
    mov r11, r0
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl _ZN11MatchEngine13func_0207aeacEim
    cmp r0, #0
    beq @L_0207b910
    ldrb r0, [sp, #0x48]
    cmp r0, #0
    addeq sp, sp, #0x20
    moveq r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl _ZN11MatchEngine13func_0207add4Eim
    sub r0, r0, #1
    str r0, [sp, #0x10]
    mov r0, r4
    mov r1, r10
    bl func_0208076c
    mov r2, r7
    mov r7, r0
    mov r1, r10
    mov r0, r4
    mov r3, #0
    bl func_02080730
    ldr r1, [sp, #0x10]
    mov r0, r4
    mov r3, #0
    mov r2, r7
    bl func_02080730
    cmp r6, #0
    mov r0, r11
    strneh r7, [r6]
    mov r4, #2
    bl func_020812fc
    cmp r0, #0
    bne @L_0207b904
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN11MatchEngine13func_0207a990Eiii
    cmp r0, #0
    bne @L_0207b8f8
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r5, r0
@L_0207b8f8:
    mov r0, r11
    mov r1, r5
    bl func_02081398
@L_0207b904:
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b910:
    cmp r10, #0
    blt @L_0207ba4c
    mov r0, r4
    mov r1, r10
    bl func_0208076c
    cmp r0, #0
    bne @L_0207b94c
    mov r0, r4
    mov r1, r10
    mov r2, r7
    mov r3, #0
    bl func_02080730
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207b94c:
    ldrb r0, [sp, #0x48]
    cmp r0, #0
    beq @L_0207ba4c
    mov r0, r4
    mov r1, r10
    bl func_0208076c
    str r0, [sp, #0x14]
    mov r1, #0
    bl func_ov015_02130b14
    str r0, [sp, #0x18]
    bl func_020812fc
    str r0, [sp, #0x1c]
    ldr r2, [sp, #0x14]
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_0207bdf8Eii
    mov r1, r10
    mov r2, r7
    mov r0, r4
    mov r3, #0
    bl func_02080730
    mov r0, #0
    str r0, [sp]
    str r0, [sp, #4]
    str r0, [sp, #8]
    ldr r3, [sp, #0xc]
    ldr r2, [sp, #0x14]
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_0207b780Ev
    ldr r1, [sp, #0x14]
    mov r0, r4
    bl func_020807d0
    cmp r0, #0
    beq @L_0207b9e4
    ldr r0, [sp, #0x18]
    ldr r1, [sp, #0x1c]
    bl func_02081398
@L_0207b9e4:
    cmp r6, #0
    ldrne r0, [sp, #0x14]
    mov r4, #2
    strneh r0, [r6]
    mov r0, r11
    bl func_020812fc
    cmp r0, #0
    bne @L_0207ba40
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN11MatchEngine13func_0207a990Eiii
    cmp r0, #0
    bne @L_0207ba34
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r5, r0
@L_0207ba34:
    mov r0, r11
    mov r1, r5
    bl func_02081398
@L_0207ba40:
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207ba4c:
    mov r10, #0
    b @L_0207badc
@L_0207ba54:
    mov r0, r4
    mov r1, r10
    bl func_0208076c
    cmp r0, #0
    bne @L_0207bad8
    mov r0, r4
    mov r1, r10
    mov r2, r7
    mov r3, #0
    mov r4, #2
    bl func_02080730
    mov r0, r11
    bl func_020812fc
    cmp r0, #0
    bne @L_0207bacc
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN11MatchEngine13func_0207a990Eiii
    cmp r0, #0
    bne @L_0207bac0
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r5, r0
@L_0207bac0:
    mov r0, r11
    mov r1, r5
    bl func_02081398
@L_0207bacc:
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207bad8:
    add r10, r10, #1
@L_0207badc:
    cmp r10, #4
    blt @L_0207ba54
    ldrb r0, [sp, #0x48]
    cmp r0, #0
    beq @L_0207bb88
    mov r0, r4
    mov r1, #3
    bl func_0208076c
    mov r10, r0
    mov r0, r9
    mov r1, r8
    mov r2, r10
    bl _ZN11MatchEngine13func_0207bdf8Eii
    mov r0, r4
    mov r1, #3
    mov r2, r7
    mov r3, #0
    bl func_02080730
    cmp r6, #0
    mov r0, r11
    strneh r10, [r6]
    mov r4, #2
    bl func_020812fc
    cmp r0, #0
    bne @L_0207bb7c
    mov r0, r9
    mov r1, r8
    mov r2, r5
    mov r3, r4
    bl _ZN11MatchEngine13func_0207a990Eiii
    cmp r0, #0
    bne @L_0207bb70
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl _ZN11MatchEngine13func_0206dfa4Eii
    mov r5, r0
@L_0207bb70:
    mov r0, r11
    mov r1, r5
    bl func_02081398
@L_0207bb7c:
    add sp, sp, #0x20
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207bb88:
    mov r0, #1
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_0207bb9c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x98
    mov r5, #0
    mov r10, r0
    mov r9, r5
    mov r6, #1
    b @L_0207bddc
@L_0207bbb8:
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_0207d214Eii
    cmp r0, #0
    bne @L_0207bdd8
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl _ZN11MatchEngine13func_0206dfa4Eii
    movs r8, r0
    addeq sp, sp, #0x98
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, r9
    b @L_0207bdd0
@L_0207bbf4:
    mov r0, r7
    bl func_ov015_02130ae8
    movs r4, r0
    beq @L_0207bdcc
    ldrh r2, [r4, #0x42]
    mov r0, r10
    mov r1, r5
    bl _ZN11MatchEngine13func_0207aeacEim
    cmp r0, #0
    bne @L_0207bdcc
    ldrh r2, [r4, #0x42]
    mov r1, #0
    mov r0, r10
    str r1, [sp]
    str r1, [sp, #4]
    mov r1, r5
    mov r3, r6
    str r8, [sp, #8]
    bl _ZN11MatchEngine13func_0207b780Ev
    cmp r0, #0
    addne sp, sp, #0x98
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r4
    mov r1, r8
    bl func_02081398
    cmp r4, #0
    ldrh r8, [r4, #0x42]
    ldrneh r9, [r4, #0x6e]
    bne @L_0207bc88
    ldr r0, =data_020e88a0
    add r2, sp, #0x38
    mov r1, r8
    bl _ZN11MatchEngine13func_0207a5c0EiPv
    cmp r0, #0
    addeq sp, sp, #0x98
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r9, [sp, #0x88]
@L_0207bc88:
    ldr r0, =data_020e88a0
    mov r1, r8
    bl _ZN11MatchEngine13func_0206f98cEt
    mov r0, r0, lsl #0x10
    mov r8, r0, lsr #0x10
    mov r0, #0x32
    ldr r11, =g2DAdventureLogic
    str r0, [sp]
    ldr r0, [r11]
    mov r1, r8
    mov r2, #0
    mov r3, r9
    bl func_020859c0
    mov r4, r0
    mov r2, #0
    ldr r0, [r11]
    mov r1, r4
    sub r2, r2, #1
    bl func_02086164
    ldr r0, [r11]
    mov r1, r4
    bl func_02085ba4
    mov r1, #1
    bl func_02084e08
    ldr r0, [r11]
    bl func_020864f4
    mov r1, r4
    bl func_02085228
    mov r2, r0
    ldr r1, [r11]
    add r0, sp, #0x20
    bl func_020864fc
    ldr r1, [sp, #0x28]
    ldr r3, [sp, #0x20]
    ldr r2, [sp, #0x24]
    str r1, [sp, #0x34]
    mov r1, #0
    stmia sp, {r1, r2}
    str r1, [sp, #8]
    mov r1, #1
    str r1, [sp, #0xc]
    str r1, [sp, #0x10]
    str r2, [sp, #0x30]
    ldr r1, [r11]
    add r0, sp, #0x14
    mov r2, r4
    str r3, [sp, #0x2c]
    bl func_02085ec0
    ldr r2, [sp, #0x34]
    ldr r0, [r11]
    mov r2, r2, lsl #0x10
    mov r1, r4
    mov r2, r2, lsr #0x10
    bl func_02085e30
    ldr r0, [r11]
    mov r1, r4
    bl func_02085bfc
    mov r1, #0x32
    str r1, [sp]
    ldr r11, =g2DGChar
    mov r4, r0
    ldr r0, [r11]
    mov r1, r8
    mov r2, r9
    mov r3, #0
    bl func_020878ac
    str r9, [sp]
    mov r0, #0
    str r0, [sp, #4]
    mov r0, #0x32
    str r0, [sp, #8]
    ldr r0, [r11]
    mov r1, r4
    mov r2, r8
    mov r3, #0
    bl func_02087500
    ldr r0, [r11]
    mov r1, #1
    bl func_020879e4
    add r9, r7, #1
    b @L_0207bdd8
@L_0207bdcc:
    add r7, r7, #1
@L_0207bdd0:
    cmp r7, #0x10
    blt @L_0207bbf4
@L_0207bdd8:
    add r6, r6, #1
@L_0207bddc:
    cmp r6, #4
    ble @L_0207bbb8
    add sp, sp, #0x98
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm int MatchEngine::func_0207bdf8(int team, int id)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r3, =0xfff
    mov r4, r2
    mov r6, #0
    mov r5, r1
    add r0, r0, #0x3ac
    add r8, r0, r5, lsl #4
    and r4, r4, r3
    mov r7, r6
    b @L_0207be50
@L_0207be20:
    mov r0, r8
    mov r1, r7
    bl func_02080780
    cmp r4, r0
    bne @L_0207be4c
    mov r2, #0
    mov r0, r8
    mov r1, r7
    mov r3, r2
    bl func_02080730
    b @L_0207be58
@L_0207be4c:
    add r7, r7, #1
@L_0207be50:
    cmp r7, #4
    blt @L_0207be20
@L_0207be58:
    cmp r7, #4
    bne @L_0207be8c
    mov r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207be68:
    mov r0, r8
    add r1, r7, #1
    bl func_0208076c
    mov r2, r0
    mov r0, r8
    mov r1, r7
    mov r3, r6
    bl func_02080730
    add r7, r7, #1
@L_0207be8c:
    cmp r7, #3
    blt @L_0207be68
    mov r2, #0
    mov r0, r8
    mov r3, r2
    mov r1, #3
    bl func_02080730
    ldr r0, =gGameState
    mov r1, r6
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    cmpeq r5, #1
    orreq r4, r4, #0x8000
    mov r0, r4
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_0207bed8
    mov r1, r6
    bl func_02081398
@L_0207bed8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

#pragma push
#pragma optimization_level 2
int MatchEngine::func_0207bee8(int team, int id, int shift)
{
    int i;
    u8 *entry;
    MatchPlayer *player;

    entry = unk_34c[team];
    id &= 0xFFF;
    for (i = 0; i < 16; i++) {
        if (id == func_0208033c(entry, i)) {
            func_020802cc(entry, i, 0);
            break;
        }
    }
    if (i == 16) {
        return 3;
    }
    if (shift) {
        for (; i < 15; i++) {
            func_020802cc(entry, i, func_02080328(entry, i + 1));
        }
        func_020802cc(entry, 15, 0);
    }
    if (gGameState.unk_000[0x1B] == 0 && team == 1) {
        id |= 0x8000;
    }
    player = func_ov015_02130b14(id, 0);
    if (player != NULL) {
        player->unk_b8[0] = 0;
    }
    return 0;
}
#pragma pop

// (nonmatching: 2 words: the ROM keeps the 0 of func_02077a80 in r5 and picks 3 or r5 into r0; the attempt sets r5 to 3)
#ifdef NONMATCHING
int MatchEngine::func_0207bfd0(int team, int id, int value)
{
    if (gGameState.unk_000[0x1B] == 0) {
        id &= 0xFFF;
        if (team == 1) {
            id |= 0x8000;
        }
    }
    func_0207bdf8(team, id);
    func_0207bee8(team, id, value);
    func_02077a80(id, 0);
    if (!func_0207c178(team, id)) {
        return 3;
    }
    return 0;
}
#else
asm int MatchEngine::func_0207bfd0(int team, int id, int value)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r12, =gGameState
    mov r4, r0
    ldrb r0, [r12, #0x1b]
    mov r7, r1
    mov r6, r2
    mov r5, r3
    cmp r0, #0
    bne @L_0207c004
    ldr r0, =0xfff
    cmp r7, #1
    and r6, r6, r0
    orreq r6, r6, #0x8000
@L_0207c004:
    mov r0, r4
    mov r1, r7
    mov r2, r6
    bl _ZN11MatchEngine13func_0207bdf8Eii
    mov r0, r4
    mov r1, r7
    mov r2, r6
    mov r3, r5
    bl _ZN11MatchEngine13func_0207bee8Eiii
    mov r5, #0
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl _ZN11MatchEngine13func_02077a80Eii
    mov r0, r4
    mov r1, r7
    mov r2, r6
    bl _ZN11MatchEngine13func_0207c178Eii
    cmp r0, #0
    moveq r0, #3
    movne r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

#pragma push
#pragma optimization_level 2
int MatchEngine::func_0207c064(int team, int id)
{
    int i;
    u8 *entry;
    MatchPlayer *player;

    entry = unk_3ac[team];
    id &= 0xFFF;
    for (i = 0; i < 4; i++) {
        if (id == func_02080780(entry, i)) {
            func_02080730(entry, i, 0, 0);
            break;
        }
    }
    if (i == 4) {
        return 3;
    }
    if (gGameState.unk_000[0x1B] == 0 && team == 1) {
        id |= 0x8000;
    }
    player = func_ov015_02130b14(id, 0);
    if (player != NULL) {
        func_02081398(player, 0);
    }
    return 0;
}
#pragma pop

int MatchEngine::func_0207c110(int team, u32 id)
{
    int key;
    int i;
    u8 *entry = unk_34c[team];

    for (i = 0; i < 16; i++) {
        key = id;
        key &= 0xFFF;
        if ((u16)key == func_0208033c(entry, i)) {
            func_020802cc(entry, i, 0);
            break;
        }
    }
    return i == 16 ? 3 : 0;
}

BOOL MatchEngine::func_0207c178(int a, int index)
{
    MatchPlayer *player = func_ov015_02130b14(index, 0);

    if (player == NULL) {
        return FALSE;
    }
    gEntryPool.Remove(player->unk_f4);
    return TRUE;
}

asm void MatchEngine::func_0207c1b0()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x50
    mov r10, r1
    mov r5, #0
    mov r6, r0
    mov r0, r10
    mov r1, r5
    bl func_ov015_02130b14
    movs r4, r0
    addeq sp, sp, #0x50
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r2, [r4, #0xba]
    ldr r1, =0xdfff
    mov r0, r6
    and r2, r2, r1
    strh r2, [r4, #0xba]
    ldrh r3, [r4, #0xba]
    sub r2, r1, #0x2000
    mov r1, r5
    and r3, r3, r2
    mov r2, r10
    strh r3, [r4, #0xba]
    bl _ZN11MatchEngine13func_0207bdf8Eii
    mov r7, r0
    mov r0, r6
    mov r1, r5
    mov r2, r10
    mov r3, #1
    bl _ZN11MatchEngine13func_0207bee8Eiii
    mov r0, r4
    bl func_02081304
    str r0, [sp]
    mov r0, r6
    mov r1, r10
    mov r2, r5
    mov r3, r5
    bl _ZN11MatchEngine13func_0207c65cEmiii
    mov r0, r6
    mov r1, r5
    bl func_01ffe354
    movs r2, r0
    addmi sp, sp, #0x50
    movmi r0, r5
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =gEntryPool
    ldrsh r1, [r4, #0xf4]
    mov r0, r5
    bl _ZN9EntryPool4MoveEii
    mov r0, r5
    bl _Z22EntryPool_CompactFrontv
    cmp r7, #0
    bne @L_0207c3b8
    ldr r0, =data_020e88a0
    mov r1, r10
    bl _ZN11MatchEngine13func_0206f70cEt
    cmp r0, #0
    movne r10, r0
    ldr r4, =g2DAdventureLogic
    mov r9, #0
    ldr r0, [r4]
    mov r1, r10
    mov r2, r9
    bl func_02085d88
    str r0, [sp, #4]
    ldr r0, [r4]
    bl func_020864f4
    ldr r1, [sp, #4]
    mov r8, r0
    bl func_02085228
    add r6, sp, #0x14
    add r5, sp, #8
    mov r11, #0xc
    b @L_0207c320
@L_0207c2d8:
    ldr r0, [r4]
    mov r1, r9
    bl func_02085bb4
    movs r7, r0
    beq @L_0207c31c
    bl func_02084cf0
    mul r2, r9, r11
    ldr r3, [r0]
    ldr r1, [r0, #4]
    ldrh r12, [r7, #0x6a]
    mov r7, r9, lsl #1
    str r3, [r6, r2]
    add r2, r6, r2
    ldr r0, [r0, #8]
    str r1, [r2, #4]
    str r0, [r2, #8]
    strh r12, [r5, r7]
@L_0207c31c:
    add r9, r9, #1
@L_0207c320:
    ldr r0, [r8, #0x10]
    cmp r9, r0
    blt @L_0207c2d8
    ldr r0, =g2DAdventureLogic
    ldr r0, [r0]
    bl func_02085be8
    movs r4, r0
    beq @L_0207c364
    bl func_02084cf0
    ldrh r1, [r4, #0x6a]
    ldr r3, [r0]
    ldr r2, [r0, #4]
    ldr r0, [r0, #8]
    str r3, [sp, #0x44]
    str r2, [sp, #0x48]
    str r0, [sp, #0x4c]
    strh r1, [sp, #0x10]
@L_0207c364:
    ldr r4, =g2DAdventureLogic
    mov r5, #1
    ldr r0, [r4]
    ldr r1, [sp, #4]
    mov r2, r5
    bl func_0208620c
    ldr r0, [r4]
    ldr r1, [sp, #4]
    bl func_02085b4c
    ldr r4, =g2DGChar
    mov r1, r10
    ldr r0, [r4]
    mov r2, #0
    bl func_02087464
    mov r1, r0
    ldr r0, [r4]
    mov r2, r5
    bl func_020877e0
    ldr r0, [r4]
    mov r1, r5
    bl func_020879e4
@L_0207c3b8:
    mov r0, #1
    add sp, sp, #0x50
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_0207c3d8(int team)
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player)) {
            player->unk_f0 &= ~0x19E;
            if (!func_0206df08()) {
                func_02081390(player, 0);
            } else {
                func_020813a0(player, 0);
            }
        }
    }
}

asm int MatchEngine::func_0207c478(MatchPlayer *player, int a, int b, int c)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r6, [sp, #0x30]
    movs r9, r1
    mov r10, r0
    mov r8, r2
    mov r7, r3
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    blt @L_0207c4ac
    cmp r8, #0x10
    ble @L_0207c4b0
@L_0207c4ac:
    mov r8, #0
@L_0207c4b0:
    cmp r7, #0
    blt @L_0207c4c0
    cmp r7, #0x10
    ble @L_0207c4c4
@L_0207c4c0:
    mov r7, #0
@L_0207c4c4:
    cmp r6, #0
    blt @L_0207c4d4
    cmp r6, #0x10
    ble @L_0207c4d8
@L_0207c4d4:
    mov r6, #0
@L_0207c4d8:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206deecEv
    cmp r0, #0
    movne r4, r7
    movne r11, #2
    bne @L_0207c50c
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    movne r4, r6
    movne r11, #3
    moveq r4, r8
    moveq r11, #1
@L_0207c50c:
    mov r0, #0
    str r0, [sp, #8]
    ldr r1, [sp, #8]
    mov r0, r9
    str r1, [sp, #4]
    bl func_02080b90
    mov r5, #1
    mov r1, r0
    mov r0, r10
    mov r2, r4
    mov r3, r5
    str r11, [sp]
    bl _ZN11MatchEngine13func_0206e100Eiiii
    cmp r0, #0
    beq @L_0207c564
    str r5, [sp, #8]
    cmp r4, #1
    blt @L_0207c55c
    cmp r4, #0xb
    ble @L_0207c560
@L_0207c55c:
    mov r5, #0
@L_0207c560:
    str r5, [sp, #4]
@L_0207c564:
    mov r0, r9
    mov r1, r8
    bl func_02081390
    mov r0, r9
    mov r1, r7
    bl func_02081398
    mov r0, r9
    mov r1, r6
    bl func_020813a0
    ldr r0, [sp, #8]
    ldrh r1, [r9, #0xf0]
    cmp r0, #0
    orr r0, r1, #1
    strh r0, [r9, #0xf0]
    beq @L_0207c5c8
    ldrh r2, [r9, #0xf0]
    mov r0, r10
    mov r1, r9
    orr r2, r2, #2
    strh r2, [r9, #0xf0]
    mov r5, #3
    mov r2, #1
    mov r3, #0
    str r5, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_0207c5c8:
    ldr r0, [sp, #4]
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r1, [r9, #0xf0]
    mov r0, r9
    orr r1, r1, #0x1c
    strh r1, [r9, #0xf0]
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    mov r2, r4
    mov r3, #0
    bl _ZN11MatchEngine13func_020685a8Eiii
    cmp r0, #0
    beq @L_0207c638
    mov r0, r9
    bl func_ov015_02131970
    mov r1, r0
    mov r0, r10
    bl func_ov087_02181cbc
    cmp r0, #0
    mov r0, r10
    mov r1, r9
    beq @L_0207c634
    bl func_01ffbc80
    b @L_0207c638
@L_0207c634:
    bl func_01ffbcc8
@L_0207c638:
    mov r4, #3
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, #0
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_0207c65c(u32 id, int a, int b, int c)
{
    if ((id & 0xFFF) == 0) {
        return;
    }
    func_0207c478(func_ov015_02130b14(id, 0), a, b, c);
}

void MatchEngine::func_0207c6b4(int a, BOOL update, BOOL force)
{
    if (update) {
        if (func_0206dedc()) {
            data_020c4ab4.unk_70 = 1;
        } else {
            data_020c4ab4.unk_70 = 0;
        }
    }
    if (unk_118ba == 0 && force == FALSE) {
        return;
    }
    func_0207cbd8(a);
    func_0207c8e0(a);
}

// makes the player (with state flag 1, func_02080cb8 aside) the team's captain: flag 0x400, and
// its id in the team's info (0x2e)
void MatchEngine::func_0207c720(MatchPlayer *player)
{
    MatchPlayer *other;
    int i;
    int team;

    if (player == NULL) {
        return;
    }
    if (!MatchPlayer_HasFlag(player, 1)) {
        return;
    }
    if (func_02080cb8(player)) {
        return;
    }
    team = func_02080b90(player);
    for (i = 0; i < 0x84; i++) {
        other = func_ov015_02130ae8(i);
        if (other != NULL && MatchPlayer_HasFlag(other, 1) && team == func_02080b90(other)) {
            other->unk_f0 &= ~0x400;
        }
    }
    player->unk_f0 |= 0x400;
    *(u16 *)(GetTeamInfo(team) + 0x2E) = player->unk_42 & 0xFFF;
}

// marks, for the player's team, the kind (of data_020a722c) with the player's best
// func_0207f7cc, with 8% of that value
void MatchEngine::func_0207c7f4(MatchPlayer *player)
{
    UnkKinds_0207c7f4 list = *(UnkKinds_0207c7f4 *)data_020a722c;
    int i;
    s32 best;
    int bestIdx;
    int team;
    int base;
    s32 v;

    best = -1;
    bestIdx = 0;
    if (player == NULL) {
        return;
    }
    if (!MatchPlayer_HasFlag(player, 1)) {
        return;
    }
    team = func_02080b90(player);
    base = team * 7;
    MI_CpuFill8(&unk_118e4[base], 0, 7);
    for (i = 0; i < 7; i++) {
        v = func_0207f7cc(player, list.kinds[i], 0);
        if (v > best) {
            bestIdx = i;
            best = v;
        }
    }
    if (best < 0) {
        best = 0;
    }
    unk_118e4[base + bestIdx] = best * 8 / 100;
}

asm void MatchEngine::func_0207c8e0(int a)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r0
    mov r9, r1
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r5, #0
    str r0, [sp]
    add r1, sp, #4
    mov r8, r5
    mov r0, #4
@L_0207c908:
    strb r5, [r1]
    strb r5, [r1, #1]
    strb r5, [r1, #2]
    strb r5, [r1, #3]
    add r1, r1, #4
    subs r0, r0, #1
    bne @L_0207c908
    mov r6, #0
    add r0, sp, #4
    mov r1, r6
    mov r2, #0x10
    bl MI_CpuFill8
    mov r11, r6
@L_0207c93c:
    mov r0, r6
    bl func_ov015_02130ae8
    movs r4, r0
    beq @L_0207c9ec
    ldrh r0, [r4, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0207c9ec
    mov r0, r4
    bl func_02080b90
    cmp r9, r0
    bne @L_0207c9ec
    ldrh r0, [r4, #0xf0]
    ldrb r7, [r4, #0xb8]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_0207c9a4
    mov r0, r10
    bl _ZN11MatchEngine13func_0206dedcEv
    cmp r0, #0
    streqb r11, [r4, #0xb8]
    b @L_0207c9d4
@L_0207c9a4:
    cmp r7, #0
    ble @L_0207c9d4
    cmp r7, #0x10
    bgt @L_0207c9d4
    add r0, sp, #4
    add r1, r0, r7
    ldrb r0, [r1, #-1]
    cmp r0, #0
    moveq r0, #1
    streqb r0, [r1, #-1]
    movne r0, #0
    strneb r0, [r4, #0xb8]
@L_0207c9d4:
    cmp r7, #0
    blt @L_0207c9e4
    cmp r7, #0x10
    ble @L_0207c9ec
@L_0207c9e4:
    mov r0, #0
    strb r0, [r4, #0xb8]
@L_0207c9ec:
    add r6, r6, #1
    cmp r6, #0x84
    blt @L_0207c93c
    ldr r0, [sp]
    mov r11, #1
    ldrh r1, [r0, #0x2e]
    ldr r0, =0xfff
    mov r6, #0
    and r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
@L_0207ca18:
    mov r0, r6
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_0207cb40
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0207cb40
    mov r0, r7
    bl func_02080b90
    cmp r9, r0
    bne @L_0207cb40
    ldrh r0, [r7, #0xf0]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0207caac
    ldrb r0, [r7, #0xb8]
    cmp r0, #0
    beq @L_0207ca7c
    cmp r0, #0x10
    bls @L_0207caac
@L_0207ca7c:
    mov r2, #0
    add r1, sp, #4
@L_0207ca84:
    ldrb r0, [r1, r2]
    cmp r0, #0
    addeq r0, r2, #1
    streqb r0, [r7, #0xb8]
    moveq r0, #1
    streqb r0, [r1, r2]
    beq @L_0207caac
    add r2, r2, #1
    cmp r2, #0x10
    blt @L_0207ca84
@L_0207caac:
    ldrh r0, [r7, #0xf0]
    tst r0, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    add r0, r10, #0x22c
    movne r5, r7
    bl _ZN10MatchRules13func_0206f014Ev
    cmp r0, #0
    beq @L_0207caf8
    cmp r4, #0
    beq @L_0207cb40
    ldrh r1, [r7, #0x42]
    ldr r0, =0xfff
    and r0, r1, r0
    mov r0, r0, lsl #0x10
    cmp r4, r0, lsr #16
    bne @L_0207cb40
    b @L_0207cb30
@L_0207caf8:
    cmp r4, #0
    beq @L_0207cb40
    ldrh r1, [r7, #0x42]
    ldr r0, =0xfff
    and r0, r1, r0
    mov r0, r0, lsl #0x10
    cmp r4, r0, lsr #16
    bne @L_0207cb40
    ldrh r0, [r7, #0xf0]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0207cb40
@L_0207cb30:
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_0207c720EP11MatchPlayer
    mov r8, #1
@L_0207cb40:
    add r6, r6, #1
    cmp r6, #0x84
    blt @L_0207ca18
    cmp r8, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    beq @L_0207cb74
    mov r0, r10
    mov r1, r5
    bl _ZN11MatchEngine13func_0207c720EP11MatchPlayer
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207cb74:
    mov r4, #0
@L_0207cb78:
    mov r0, r4
    bl func_ov015_02130ae8
    movs r5, r0
    beq @L_0207cbc0
    bl func_02080b90
    cmp r9, r0
    bne @L_0207cbc0
    ldrh r0, [r5, #0xf0]
    tst r0, #2
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_0207cbc0
    mov r0, r10
    mov r1, r5
    bl _ZN11MatchEngine13func_0207c720EP11MatchPlayer
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207cbc0:
    add r4, r4, #1
    cmp r4, #0x84
    blt @L_0207cb78
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_0207cbd8(int a)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r9, r1
    add r4, sp, #0x2c
    add r2, sp, #0x2c
    mov r10, r0
    mov r1, #4
@L_0207cbf4:
    mov r0, #0
    strh r0, [r2]
    strh r0, [r2, #2]
    strh r0, [r2, #4]
    strh r0, [r2, #6]
    add r2, r2, #8
    subs r1, r1, #1
    bne @L_0207cbf4
    add r0, r10, #0x22c
    bl _ZN10MatchRules13func_0206f014Ev
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207c3d8Ei
    mov r0, r10
    bl _ZN11MatchEngine13func_0206deecEv
    cmp r0, #0
    bne @L_0207cf14
    ldr r0, =gGameState
    mov r5, #0
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_0207cc68
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    movne r5, #1
@L_0207cc68:
    cmp r5, #0
    movne r0, #2
    strne r0, [sp, #0x14]
    streq r9, [sp, #0x14]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    mov r6, #0
    cmp r0, #0
    mov r5, #0x84
    ldr r1, [sp, #0x14]
    movne r5, #0x86
    str r6, [sp]
    mov r0, r10
    mov r2, r4
    mov r3, #0x10
    str r5, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    movs r11, r0
    str r6, [sp, #0x18]
    addeq sp, sp, #0x4c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    add r1, r10, #0x34c
    add r0, r1, r0, lsl #5
    str r0, [sp, #0x1c]
    add r0, r10, #0x11000
    mov r5, r6
    str r0, [sp, #0x28]
    b @L_0207cdc4
@L_0207ccdc:
    mov r0, r5, lsl #1
    ldrh r1, [r4, r0]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206f9e0Em
    mov r1, r5, lsl #1
    strh r0, [r4, r1]
    ldrh r0, [r4, r1]
    mov r1, #0
    bl func_ov015_02130b14
    mov r7, r0
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    mov r0, r5, lsl #1
    ldrh r1, [r4, r0]
    bne @L_0207cd28
    ldr r0, [sp, #0x1c]
    bl func_0208051c
    b @L_0207cd30
@L_0207cd28:
    ldr r0, [sp, #0x1c]
    bl func_02080564
@L_0207cd30:
    movs r8, r0
    beq @L_0207cdc0
    ldr r0, [sp, #0x28]
    ldrb r0, [r0, #0x89e]
    cmp r0, #0
    bne @L_0207cd58
    mov r0, r8
    bl func_020847ec
    cmp r0, #0
    bne @L_0207cdc0
@L_0207cd58:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    strne r8, [sp, #0x10]
    bne @L_0207cd78
    mov r0, r7
    bl func_02081304
    str r0, [sp, #0x10]
@L_0207cd78:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    beq @L_0207cd94
    mov r0, r7
    bl func_020812f4
    mov r8, r0
@L_0207cd94:
    mov r0, r7
    bl func_020812fc
    ldr r1, [sp, #0x10]
    mov r3, r0
    str r1, [sp]
    mov r1, r5, lsl #1
    ldrh r1, [r4, r1]
    mov r2, r8
    mov r0, r10
    bl _ZN11MatchEngine13func_0207c65cEmiii
    add r6, r6, #1
@L_0207cdc0:
    add r5, r5, #1
@L_0207cdc4:
    cmp r5, r11
    blt @L_0207ccdc
    add r0, r10, #0x11000
    ldrb r0, [r0, #0x89e]
    add r4, sp, #0x2c
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x14]
    add r1, r10, #0x34c
    add r0, r1, r0, lsl #5
    mov r5, #0
    str r0, [sp, #0x20]
    b @L_0207cf08
@L_0207cdfc:
    mov r0, r5, lsl #1
    ldrh r0, [r4, r0]
    mov r1, #0
    bl func_ov015_02130b14
    mov r1, #0
    mov r7, r0
    bl func_0208130c
    cmp r0, #0
    bne @L_0207cf04
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    mov r0, r5, lsl #1
    ldrh r1, [r4, r0]
    bne @L_0207ce44
    ldr r0, [sp, #0x20]
    bl func_0208051c
    b @L_0207ce4c
@L_0207ce44:
    ldr r0, [sp, #0x20]
    bl func_02080564
@L_0207ce4c:
    movs r8, r0
    beq @L_0207ce64
    mov r0, r8
    bl func_020847ec
    cmp r0, #0
    beq @L_0207ce80
@L_0207ce64:
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, #0
    bl _ZN11MatchEngine13func_0206e018Eiii
    movs r8, r0
    beq @L_0207cf04
@L_0207ce80:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    strne r8, [sp, #0xc]
    bne @L_0207cea0
    mov r0, r7
    bl func_02081304
    str r0, [sp, #0xc]
@L_0207cea0:
    mov r0, r10
    bl _ZN11MatchEngine13func_0206df08Ev
    cmp r0, #0
    streq r8, [sp, #8]
    beq @L_0207cec0
    mov r0, r7
    bl func_020812f4
    str r0, [sp, #8]
@L_0207cec0:
    mov r0, r7
    bl func_020812fc
    ldr r1, [sp, #0xc]
    ldr r2, [sp, #8]
    str r1, [sp]
    mov r1, r5, lsl #1
    mov r3, r0
    ldrh r1, [r4, r1]
    mov r0, r10
    bl _ZN11MatchEngine13func_0207c65cEmiii
    mov r0, r8
    bl func_020847ec
    cmp r0, #0
    ldrne r0, [sp, #0x18]
    addeq r6, r6, #1
    addne r0, r0, #1
    strne r0, [sp, #0x18]
@L_0207cf04:
    add r5, r5, #1
@L_0207cf08:
    cmp r5, r11
    blt @L_0207cdfc
    b @L_0207d098
@L_0207cf14:
    mov r6, #0
    mov r0, r10
    mov r1, r9
    mov r2, r4
    str r6, [sp]
    mov r5, #0x80
    mov r3, #0x10
    str r5, [sp, #4]
    bl _ZN11MatchEngine13func_02078aacEiPtihi
    mov r5, r6
    b @L_0207cfa8
@L_0207cf40:
    mov r0, r5, lsl #1
    ldrh r0, [r4, r0]
    mov r1, #0
    bl func_ov015_02130b14
    movs r7, r0
    beq @L_0207cfa4
    bl func_020812fc
    cmp r0, #0
    beq @L_0207cfa4
    mov r0, r7
    ldrh r8, [r7, #0x42]
    bl func_020812f4
    mov r11, r0
    mov r0, r7
    bl func_020812fc
    str r0, [sp, #0x24]
    mov r0, r7
    bl func_02081304
    str r0, [sp]
    ldr r3, [sp, #0x24]
    mov r1, r8
    mov r2, r11
    mov r0, r10
    bl _ZN11MatchEngine13func_0207c65cEmiii
    add r6, r6, #1
@L_0207cfa4:
    add r5, r5, #1
@L_0207cfa8:
    cmp r5, #0x10
    blt @L_0207cf40
    cmp r6, #4
    addeq sp, sp, #0x4c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_ov015_021319bc
    cmp r9, r0
    beq @L_0207d098
    mov r5, #0
    mov r0, r10
    mov r1, r9
    add r2, sp, #0x2c
    mov r3, #0x10
    str r5, [sp]
    bl _ZN11MatchEngine13func_02078d84EiPtih
    mov r11, r0
    mov r3, #1
    str r3, [sp]
    mov r0, r10
    add r1, sp, #0x2c
    mov r2, r11
    mov r3, #0x80
    bl _ZN11MatchEngine13func_0207f634EPtiih
    b @L_0207d090
@L_0207d008:
    mov r1, r5, lsl #1
    add r0, sp, #0x2c
    ldrh r0, [r0, r1]
    mov r1, #0
    bl func_ov015_02130b14
    movs r7, r0
    beq @L_0207d08c
    ldrh r0, [r7, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_0207d08c
    mov r0, r7
    bl func_020812f4
    mov r4, r0
    mov r0, r10
    mov r1, r9
    mov r2, #0
    mov r3, #2
    bl _ZN11MatchEngine13func_0206e018Eiii
    mov r8, r0
    mov r0, r7
    bl func_02081304
    str r0, [sp]
    mov r1, r7
    mov r2, r4
    mov r3, r8
    mov r0, r10
    bl _ZN11MatchEngine13func_0207c478EP11MatchPlayeriii
    add r6, r6, #1
    cmp r6, #4
    bge @L_0207d098
@L_0207d08c:
    add r5, r5, #1
@L_0207d090:
    cmp r5, r11
    blt @L_0207d008
@L_0207d098:
    mov r2, #0
    mov r0, r9
    mov r3, r2
    mov r1, #1
    mov r4, r2
    bl func_ov015_02130ce0
    cmp r0, #0
    addne sp, sp, #0x4c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #2
    b @L_0207d100
@L_0207d0c4:
    mov r0, r9
    mov r1, r5
    mov r2, r4
    mov r3, r4
    bl func_ov015_02130ce0
    cmp r0, #0
    beq @L_0207d0fc
    ldr r0, =data_020e88a0
    mov r1, r9
    mov r3, r5
    mov r2, #1
    bl func_ov087_0218099c
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207d0fc:
    add r5, r5, #1
@L_0207d100:
    cmp r5, #0x10
    blt @L_0207d0c4
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MatchEngine::func_0207d118()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    bl func_ov015_0213178c
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldr r1, =gGameState
    ldrb r1, [r1, #0x1b]
    cmp r1, #0
    ldrh r1, [r0, #0x2e]
    ldr r0, =0xfff
    bne @L_0207d158
    b @L_0207d158
@L_0207d158:
    and r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r8, #0
    mov r0, r0, lsr #0x10
    cmp r9, #0
    orrne r0, r0, #0x8000
    mov r1, r8
    bl func_ov015_02130b14
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r4
    bl _ZN11MatchEngine13func_0207c720EP11MatchPlayer
    mov r0, r10
    mov r1, r4
    bl _ZN11MatchEngine13func_0207c7f4EP11MatchPlayer
    mov r6, #1
    mov r5, r8
    mov r4, #3
    mov r11, r6
    b @L_0207d200
@L_0207d1ac:
    mov r0, r8
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_0207d1fc
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, r6
    moveq r0, r5
    cmp r0, #0
    beq @L_0207d1fc
    mov r0, r7
    bl func_02080b90
    cmp r9, r0
    bne @L_0207d1fc
    mov r0, r10
    mov r1, r7
    mov r2, r11
    mov r3, #0
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_0207d1fc:
    add r8, r8, #1
@L_0207d200:
    cmp r8, #0x84
    blt @L_0207d1ac
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL MatchEngine::func_0207d214(int team, int i)
{
    if (i <= 0 || i > 4) {
        return FALSE;
    }
    return func_0208076c(unk_3ac[team], i - 1);
}

BOOL MatchEngine::func_0207d244(int team, int i)
{
    if (i <= 0 || i > 16) {
        return FALSE;
    }
    return func_02080328(unk_34c[team], i - 1);
}

u16 MatchEngine::func_0207d274(int team, int value)
{
    MatchPlayer *player;
    int i;

    if (value <= 0 || value > 16) {
        return 0;
    }
    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player) && value == func_0208130c(player, 0)) {
            return player->unk_42;
        }
    }
    return 0;
}

int MatchEngine::func_0207d308(u8 *data)
{
    s32 base;

    if (data[0xAA] >= 99) {
        return 0;
    }
    base = *(s32 *)(data + 0x60);
    return func_0207d378(data, data[0xAA] + 1) - base;
}

void MatchEngine::func_0207d330(u8 *data, int add, int value, u8 quiet)
{
    s32 total;

    if (quiet == 0) {
        func_02082150(this, *(u16 *)(data + 0x42), add);
    }
    total = add;
    total += *(s32 *)(data + 0x60);
    *(s32 *)(data + 0x60) = total;
    func_0207dc10(data, value);
}

int MatchEngine::func_0207d378(u8 *data, int level)
{
    return func_0208164c(func_01ffee1c(this, data[0x40]), level);
}

u8 MatchEngine::func_0207d394(u8 *range, int level)
{
    int pct;
    int v;

    if (range == NULL) {
        return 0;
    }
    pct = func_02081678(unk_bd0[range[2]], level);
    v = range[0] + (range[1] - range[0]) * pct / 100;
    if (v < 0) {
        v = 0;
    }
    if (v > 255) {
        v = 255;
    }
    return v;
}

u16 MatchEngine::func_0207d3f8(u16 *range, int level)
{
    int pct;
    int v;

    if (range == NULL) {
        return 0;
    }
    pct = func_02081678(unk_bd0[((u8 *)range)[4]], level);
    v = range[0] + (range[1] - range[0]) * pct / 100;
    if (v < 0) {
        v = 0;
    }
    if (v > 999) {
        v = 999;
    }
    return v;
}

u8 *MatchEngine::func_0207d468(u8 *data, int kind)
{
    switch (kind) {
    case 20:
        return data;
    case 22:
        return data + 8;
    }
    return NULL;
}

u8 *MatchEngine::func_0207d494(u8 *data, int kind)
{
    switch (kind) {
    case 30:
        return data + 0x10;
    case 31:
        return data + 0x14;
    case 32:
        return data + 0x18;
    case 33:
        return data + 0x1C;
    case 34:
        return data + 0x20;
    case 35:
        return data + 0x24;
    case 36:
        return data + 0x28;
    }
    return NULL;
}

s16 MatchEngine::func_0207d500(MatchPlayer *player, int kind)
{
    switch (kind) {
    case 20:
    case 21:
        return player->unk_78;
    case 22:
    case 23:
        return player->unk_7a;
    }
    return 0;
}

void MatchEngine::func_0207d538(MatchPlayer *player, int kind, s16 value)
{
    switch (kind) {
    case 20:
    case 21:
        player->unk_78 = value;
        break;
    case 22:
    case 23:
        player->unk_7a = value;
        break;
    }
}

int MatchEngine::func_0207d568(MatchPlayer *player, int kind)
{
    switch (kind) {
    case 20: case 21:
        return player->unk_78;
    case 22: case 23:
        return player->unk_7a;
    case 30:
        return player->unk_af[0];
    case 31:
        return player->unk_af[1];
    case 32:
        return player->unk_af[2];
    case 33:
        return player->unk_af[3];
    case 34:
        return player->unk_af[4];
    case 35:
        return player->unk_af[5];
    case 36:
        return player->unk_af[6];
    }
    return 0;
}

void MatchEngine::func_0207d60c(MatchPlayer *player, int kind, int value)
{
    switch (kind) {
    case 20: case 21:
        player->unk_78 = value;
        break;
    case 22: case 23:
        player->unk_7a = value;
        break;
    case 30:
        player->unk_af[0] = value;
        break;
    case 31:
        player->unk_af[1] = value;
        break;
    case 32:
        player->unk_af[2] = value;
        break;
    case 33:
        player->unk_af[3] = value;
        break;
    case 34:
        player->unk_af[4] = value;
        break;
    case 35:
        player->unk_af[5] = value;
        break;
    case 36:
        player->unk_af[6] = value;
        break;
    }
}

void MatchEngine::func_0207d6a8()
{
}

void MatchEngine::func_0207d6ac()
{
}

void MatchEngine::func_0207d6b0(u8 *data)
{
    *(s32 *)(data + 0xF8) = 0;
}

int MatchEngine::func_0207d6bc(int value)
{
    switch (value) {
    case 30:
        return 0x21;
    case 33:
        return 0x1E;
    case 34:
        return 0x24;
    case 36:
        return 0x22;
    case 31:
        return 0x20;
    case 32:
        return 0x23;
    case 35:
        return 0x1F;
    }
    return 0;
}

asm void MatchEngine::func_0207d728()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x54
    mov r4, r3
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl _ZN11MatchEngine13func_0207d500EP11MatchPlayeri
    cmp r4, #0
    mov r8, r0
    addeq sp, sp, #0x54
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    bge @L_0207d7b0
    ldr r0, =0xfffffc19
    add r1, r8, r4
    cmp r1, r0
    sublt r4, r0, r8
    add r0, r8, r4
    mov r3, r0, lsl #0x10
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r3, asr #0x10
    bl _ZN11MatchEngine13func_0207d538EP11MatchPlayeris
    mov r5, #2
    mov r0, r7
    mov r1, r6
    mov r2, #1
    mov r3, #0
    str r5, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    add sp, sp, #0x54
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207d7b0:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl _ZN11MatchEngine13func_0207dac0Ev
    cmp r4, r0
    movgt r4, r0
    ldrh r1, [r6, #0x42]
    add r2, sp, #4
    mov r0, r7
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    addeq sp, sp, #0x54
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r0, r8, r4
    mov r3, r0, lsl #0x10
    mov r0, r7
    mov r1, r6
    mov r2, r5
    mov r3, r3, asr #0x10
    bl _ZN11MatchEngine13func_0207d538EP11MatchPlayeris
    mov r5, #2
    mov r0, r7
    mov r1, r6
    mov r2, #1
    mov r3, #0
    str r5, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    mov r0, r4
    add sp, sp, #0x54
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void MatchEngine::func_0207d830()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x54
    mov r9, r1
    mov r8, r2
    cmp r8, #0x14
    mov r10, r0
    mov r7, r3
    add r5, r9, #0xd0
    cmpne r8, #0x16
    bne @L_0207d874
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    bl _ZN11MatchEngine13func_0207d728Ev
    add sp, sp, #0x54
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207d874:
    bl _ZN11MatchEngine13func_0207d568EP11MatchPlayeri
    mov r4, r0, lsl #0x18
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_0207d6bcEi
    mov r2, r0
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207d568EP11MatchPlayeri
    cmp r7, #0
    mov r11, r0, lsl #0x18
    addeq sp, sp, #0x54
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0
    bge @L_0207d908
    add r1, r7, r4, asr #24
    mvn r0, #0x7e
    cmp r1, r0
    sublt r7, r0, r4, asr #24
    add r0, r7, r4, asr #24
    mov r3, r0, lsl #0x18
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r3, asr #0x18
    bl _ZN11MatchEngine13func_0207d60cEP11MatchPlayerii
    mov r4, #2
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, #0
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
    add sp, sp, #0x54
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207d908:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl _ZN11MatchEngine13func_0207dac0Ev
    cmp r7, r0
    movgt r7, r0
    ldrh r1, [r9, #0x42]
    add r2, sp, #4
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    addeq sp, sp, #0x54
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r6, [sp, #0x40]
    mov r1, #0
    cmp r6, #0
    ldreq r6, =0x7fff
@L_0207d950:
    add r0, r5, r1
    ldrb r0, [r0, #0xf]
    add r1, r1, #1
    cmp r1, #7
    sub r6, r6, r0
    blt @L_0207d950
    ldrb r5, [r9, #0xaa]
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_0207d6bcEi
    mov r2, r0
    add r1, sp, #4
    mov r0, r10
    bl _ZN11MatchEngine13func_0207d494EPhi
    mov r1, r0
    mov r2, r5
    mov r0, r10
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r1, r0, r11, asr #24
    sub r0, r7, r6
    sub r0, r1, r0
    cmp r0, #1
    ldrb r0, [sp, #0x78]
    sublt r7, r1, #1
    cmp r0, #0
    beq @L_0207da24
    add r0, r7, r4, asr #24
    mov r3, r0, lsl #0x18
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r3, asr #0x18
    bl _ZN11MatchEngine13func_0207d60cEP11MatchPlayerii
    sub r4, r7, r6
    cmp r4, #0
    ble @L_0207da08
    mov r0, r10
    mov r1, r8
    bl _ZN11MatchEngine13func_0207d6bcEi
    rsb r1, r4, r11, asr #24
    mov r3, r1, lsl #0x18
    mov r2, r0
    mov r0, r10
    mov r1, r9
    mov r3, r3, asr #0x18
    bl _ZN11MatchEngine13func_0207d60cEP11MatchPlayerii
@L_0207da08:
    mov r4, #2
    mov r0, r10
    mov r1, r9
    mov r2, #1
    mov r3, #0
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207e334Eiiii
@L_0207da24:
    mov r0, r7
    add sp, sp, #0x54
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_0207da34(MatchPlayer *player, int kind)
{
    s8 data[0x50];
    int n = func_0207d568(player, kind);
    int left;
    int have;
    int room;

    if (n >= 50) {
        return 0;
    }
    left = 50 - n;
    if (!func_0207a854(player->unk_42, data)) {
        return 0;
    }
    have = *(u16 *)(func_0207d468((u8 *)data, kind) + 2);
    have += n;
    room = 999 - have;
    if (room < left) {
        left = room;
    }
    return left;
}

asm void MatchEngine::func_0207dac0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x50
    movs r7, r1
    mov r8, r0
    mov r5, r2
    add r4, r7, #0xd0
    addeq sp, sp, #0x50
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r5, #0x14
    cmpne r5, #0x16
    bne @L_0207db08
    mov r0, r8
    mov r1, r7
    mov r2, r5
    bl _ZN11MatchEngine13func_0207da34EP11MatchPlayeri
    add sp, sp, #0x50
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0207db08:
    bl _ZN11MatchEngine13func_0207d568EP11MatchPlayeri
    mov r10, r0
    mov r0, r8
    mov r1, r5
    bl _ZN11MatchEngine13func_0207d6bcEi
    mov r2, r0
    mov r0, r8
    mov r1, r7
    bl _ZN11MatchEngine13func_0207d568EP11MatchPlayeri
    mov r1, r5
    mov r5, r0
    mov r0, r8
    bl _ZN11MatchEngine13func_0207d6bcEi
    add r6, sp, #0
    mov r2, r0
    mov r0, r8
    mov r1, r6
    bl _ZN11MatchEngine13func_0207d494EPhi
    cmp r10, #0x32
    mov r9, r0
    addge sp, sp, #0x50
    movge r0, #0
    ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r1, [r7, #0x42]
    mov r2, r6
    mov r0, r8
    rsb r6, r10, #0x32
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    addeq sp, sp, #0x50
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r2, [r7, #0xaa]
    mov r0, r8
    mov r1, r9
    bl _ZN11MatchEngine13func_0207d394EPhi
    ldrh r3, [sp, #0x3c]
    ldrb r1, [r9, #1]
    mov r2, #0
    cmp r3, #0
    ldreq r3, =0x7fff
    sub r1, r1, r0
@L_0207dbb0:
    add r0, r4, r2
    ldrb r0, [r0, #0xf]
    add r2, r2, #1
    cmp r2, #7
    sub r3, r3, r0
    blt @L_0207dbb0
    sub r1, r5, r1
    mvn r0, #0x7e
    subs r0, r0, r1
    rsbmi r0, r0, #0
    add r0, r3, r0
    cmp r6, r0
    movgt r6, r0
    mov r0, r6
    add sp, sp, #0x50
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

int MatchEngine::func_0207dbf4(int a, int b)
{
    return func_0207e334(a, 1, b, 0);
}

asm void MatchEngine::func_0207dc10(u8 *data, int a)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x60
    mov r9, r1
    ldrb r4, [r9, #0xaa]
    add r1, sp, #0
    mov r6, #0
    movs r8, r2
    mov r10, r0
    mov r5, r4
    str r6, [r1]
    str r6, [r1, #4]
    str r6, [r1, #8]
    str r6, [r1, #0xc]
    beq @L_0207dc58
    mov r0, r8
    mov r1, r6
    mov r2, #0x10
    bl MI_CpuFill8
@L_0207dc58:
    mov r11, #1
    ldr r7, [r9, #0x60]
    mov r0, r10
    mov r1, r9
    mov r2, r11
    bl _ZN11MatchEngine13func_0207d378EPhi
    cmp r7, r0
    bhs @L_0207dc8c
    mov r0, r10
    mov r1, r9
    mov r2, r11
    bl _ZN11MatchEngine13func_0207d378EPhi
    str r0, [r9, #0x60]
@L_0207dc8c:
    cmp r4, #0x63
    bge @L_0207ddc0
@L_0207dc94:
    ldr r7, [r9, #0x60]
    mov r0, r10
    mov r1, r9
    add r2, r4, #1
    bl _ZN11MatchEngine13func_0207d378EPhi
    cmp r7, r0
    blo @L_0207ddc0
    ldr r0, [r10, #0xbdc]
    cmp r0, #0
    bne @L_0207dcc8
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a78cEv
    mov r6, #1
@L_0207dcc8:
    add r7, sp, #0
    add r3, r4, #1
    mov r0, r10
    mov r1, r9
    mov r2, r7
    strb r3, [r9, #0xaa]
    bl _ZN11MatchEngine13func_0207dbf4Eii
    cmp r8, #0
    beq @L_0207dd34
    mov r2, #0
    mov r1, r2
@L_0207dcf4:
    ldr r11, [r7, r2, lsl #2]
    cmp r11, #0
    beq @L_0207dd28
    mov r3, r1
@L_0207dd04:
    ldr r0, [r8, r3, lsl #2]
    cmp r0, #0
    bgt @L_0207dd1c
    cmp r0, r11
    strne r11, [r8, r3, lsl #2]
    bne @L_0207dd28
@L_0207dd1c:
    add r3, r3, #1
    cmp r3, #4
    blt @L_0207dd04
@L_0207dd28:
    add r2, r2, #1
    cmp r2, #4
    blt @L_0207dcf4
@L_0207dd34:
    cmp r9, #0
    beq @L_0207ddb4
    ldrh r1, [r9, #0x42]
    add r2, sp, #0x10
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    beq @L_0207ddb4
    ldrsb r3, [r9, #0xc1]
    ldrsb r0, [sp, #0x4f]
    ldrsb r1, [r9, #0xc2]
    ldrsb r2, [r9, #0xc3]
    add r0, r3, r0
    ldrsb r3, [sp, #0x51]
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    add r1, r1, r3
    ldrsb r3, [sp, #0x53]
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    add r2, r2, r3
    mov r2, r2, lsl #0x18
    cmp r0, #0x64
    movge r0, #0x64
    cmp r1, #0x64
    movge r1, #0x64
    mov r2, r2, asr #0x18
    cmp r2, #0x64
    movge r2, #0x64
    strb r0, [r9, #0xc1]
    strb r1, [r9, #0xc2]
    strb r2, [r9, #0xc3]
@L_0207ddb4:
    add r4, r4, #1
    cmp r4, #0x63
    blt @L_0207dc94
@L_0207ddc0:
    cmp r6, #0
    beq @L_0207ddd0
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a820Ev
@L_0207ddd0:
    ldrb r0, [r9, #0xaa]
    cmp r5, r0
    addeq sp, sp, #0x60
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_02080b90
    mov r4, r0
    bl func_ov015_021319bc
    cmp r4, r0
    ldreqh r0, [r9, #0x42]
    cmpeq r0, #1
    bne @L_0207de18
    mov r0, r10
    bl _ZN11MatchEngine13func_0206e3d4Ev
    add r0, r10, #0x11000
    mov r1, #1
    strb r1, [r0, #0x8db]
@L_0207de18:
    mov r0, #1
    add sp, sp, #0x60
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_0207de24(MatchPlayer *player, int max, int base, s8 *value, u8 *rest)
{
    u8 *stats = (u8 *)&player->unk_d0;
    int sum;
    int i;
    int n;
    int v;

    if (base == 0 || max <= 0) {
        return;
    }
    sum = 0;
    for (i = 0; i < 7; i++) {
        sum += stats[0xF + i];
    }
    n = sum - base;
    if (n <= 0) {
        return;
    }
    if (n > max) {
        n = max;
    }
    v = *value - n;
    if (v > 127) {
        n -= MatchAbs(v - 127);
        v = 127;
    }
    if (v < -127) {
        n -= MatchAbs(v + 127);
        v = -127;
    }
    *value = v;
    *rest = *rest - n;
}

asm void MatchEngine::func_0207dec0()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x28
    mov r8, r1
    mov r7, r2
    ldrb r4, [r8, #0xaa]
    ldrh r6, [r7, #0x3c]
    mov r9, r0
    ldrsh r5, [r8, #0x78]
    cmp r6, #0
    mov r0, r9
    mov r1, r7
    mov r2, r4
    ldreq r6, =0x7fff
    bl _ZN11MatchEngine13func_0207d3f8EPti
    add r3, r0, r5
    ldrsh r5, [r8, #0x7a]
    mov r0, r9
    mov r2, r4
    add r1, r7, #8
    strh r3, [r8, #0xd4]
    bl _ZN11MatchEngine13func_0207d3f8EPti
    add r0, r0, r5
    strh r0, [r8, #0xd6]
    add r5, r8, #0xdf
    mov r2, #0
    add r0, sp, #0xc
@L_0207df28:
    ldrb r1, [r5, r2]
    str r1, [r0, r2, lsl #2]
    add r2, r2, #1
    cmp r2, #7
    blt @L_0207df28
    ldrsb r10, [r8, #0xaf]
    mov r0, r9
    mov r2, r4
    add r1, r7, #0x10
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5]
    ldrsb r10, [r8, #0xb0]
    mov r0, r9
    mov r2, r4
    add r1, r7, #0x14
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5, #1]
    ldrsb r10, [r8, #0xb1]
    mov r0, r9
    add r1, r7, #0x18
    mov r2, r4
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5, #3]
    ldrsb r10, [r8, #0xb2]
    mov r0, r9
    add r1, r7, #0x1c
    mov r2, r4
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5, #2]
    ldrsb r10, [r8, #0xb3]
    mov r0, r9
    add r1, r7, #0x20
    mov r2, r4
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5, #4]
    ldrsb r10, [r8, #0xb4]
    mov r0, r9
    add r1, r7, #0x24
    mov r2, r4
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r10
    strb r0, [r5, #6]
    mov r2, r4
    ldrsb r4, [r8, #0xb5]
    add r1, r7, #0x28
    mov r0, r9
    bl _ZN11MatchEngine13func_0207d394EPhi
    add r0, r0, r4
    strb r0, [r5, #5]
    mov r3, #0
    add r1, sp, #0xc
@L_0207e008:
    ldrb r2, [r5, r3]
    ldr r0, [r1, r3, lsl #2]
    sub r0, r2, r0
    str r0, [r1, r3, lsl #2]
    add r3, r3, #1
    cmp r3, #7
    blt @L_0207e008
    ldrh r0, [r8, #0xf0]
    tst r0, #0x40
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_0207e184
    ldrsb r0, [r8, #0xaf]
    add r4, sp, #8
    ldr r2, [sp, #0xc]
    strb r0, [sp, #8]
    stmia sp, {r4, r5}
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r1, [sp, #8]
    ldrsb r0, [r8, #0xb0]
    add r7, r5, #1
    strb r1, [r8, #0xaf]
    strb r0, [sp, #8]
    ldr r2, [sp, #0x10]
    stmia sp, {r4, r7}
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r2, [sp, #8]
    ldrsb r1, [r8, #0xb1]
    add r0, r5, #3
    strb r2, [r8, #0xb0]
    strb r1, [sp, #8]
    str r4, [sp]
    str r0, [sp, #4]
    ldr r2, [sp, #0x18]
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r2, [sp, #8]
    ldrsb r1, [r8, #0xb2]
    add r0, r5, #2
    strb r2, [r8, #0xb1]
    strb r1, [sp, #8]
    str r4, [sp]
    str r0, [sp, #4]
    ldr r2, [sp, #0x14]
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r2, [sp, #8]
    ldrsb r1, [r8, #0xb3]
    add r0, r5, #4
    strb r2, [r8, #0xb2]
    strb r1, [sp, #8]
    str r4, [sp]
    str r0, [sp, #4]
    ldr r2, [sp, #0x1c]
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r2, [sp, #8]
    ldrsb r1, [r8, #0xb4]
    add r0, r5, #6
    strb r2, [r8, #0xb3]
    strb r1, [sp, #8]
    str r4, [sp]
    str r0, [sp, #4]
    ldr r2, [sp, #0x24]
    mov r0, r9
    mov r1, r8
    mov r3, r6
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    mov r3, r6
    ldrsb r6, [sp, #8]
    add r2, r5, #5
    ldrsb r5, [r8, #0xb5]
    strb r6, [r8, #0xb4]
    mov r0, r9
    strb r5, [sp, #8]
    str r4, [sp]
    str r2, [sp, #4]
    ldr r2, [sp, #0x20]
    mov r1, r8
    bl _ZN11MatchEngine13func_0207de24EP11MatchPlayeriiPaPh
    ldrsb r0, [sp, #8]
    strb r0, [r8, #0xb5]
@L_0207e184:
    add r0, r8, #0xd0
    bl func_02081b44
    mov r0, #1
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MatchEngine::func_0207e19c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r4, r1
    mov r6, r0
    add r5, r4, #0xd0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    bl func_ov015_0213178c
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    bl func_02080b90
    rsb r0, r0, r0, lsl #3
    add r8, r6, r0
    mov r7, #0
@L_0207e1d0:
    add r0, r8, r7
    add r0, r0, #0x11000
    ldrb r2, [r0, #0x8e4]
    mov r0, r5
    mov r1, r7
    bl func_02081b24
    add r7, r7, #1
    cmp r7, #7
    blt @L_0207e1d0
    mov r0, r4
    bl func_02080b90
    mov r1, r0
    mov r0, r6
    bl _ZN11MatchEngine11GetTeamInfoEi
    ldrb r0, [r0, #0x3c]
    cmp r0, #1
    beq @L_0207e228
    cmp r0, #2
    beq @L_0207e270
    cmp r0, #3
    beq @L_0207e2d8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207e228:
    ldrb r1, [r5, #0x13]
    ldr r4, =0x51eb851f
    mov r0, r5
    add r2, r1, r1, lsl #2
    mov r1, r2, lsr #0x1f
    smull r3, r2, r4, r2
    add r2, r1, r2, asr #5
    mov r1, #4
    bl func_02081b24
    ldrb r2, [r5, #0x14]
    mov r0, r5
    mov r1, #5
    add r5, r2, r2, lsl #2
    smull r3, r2, r4, r5
    mov r3, r5, lsr #0x1f
    add r2, r3, r2, asr #5
    bl func_02081b24
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207e270:
    ldrb r1, [r5, #0x11]
    ldr r4, =0x51eb851f
    mov r0, r5
    add r3, r1, r1, lsl #2
    smull r1, r2, r4, r3
    mov r1, r3, lsr #0x1f
    add r2, r1, r2, asr #5
    mov r1, #2
    bl func_02081b24
    mov r5, #0
@L_0207e298:
    mov r0, r6
    mov r1, r5
    bl _ZN11MatchEngine13func_020747a0Ei
    mov r3, r0
    add r1, r3, r3, lsl #2
    smull r0, r2, r4, r1
    mov r0, r1, lsr #0x1f
    add r2, r0, r2, asr #5
    mov r0, r6
    mov r1, r5
    add r2, r3, r2
    bl _ZN11MatchEngine13func_020747b4Eii
    add r5, r5, #1
    cmp r5, #0x200
    blt @L_0207e298
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0207e2d8:
    ldrb r2, [r5, #0xf]
    mov r1, #0
    mov r3, #1
@L_0207e2e4:
    add r0, r5, r3
    ldrb r0, [r0, #0xf]
    cmp r0, r2
    movlt r1, r3
    add r3, r3, #1
    movlt r2, r0
    cmp r3, #7
    blt @L_0207e2e4
    add r0, r5, r1
    ldrb r2, [r0, #0xf]
    mov r0, #0xa
    ldr r3, =0x51eb851f
    smulbb r4, r2, r0
    smull r0, r2, r3, r4
    mov r3, r4, lsr #0x1f
    mov r0, r5
    add r2, r3, r2, asr #5
    bl func_02081b24
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm int MatchEngine::func_0207e334(int a, int b, int c, int d)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    mov r10, r0
    mov r9, r1
    str r2, [sp]
    mov r8, r3
    mov r11, #1
    mov r4, #0
    bl _ZN11MatchEngine13func_02080288EP11MatchPlayer
    mov r5, r0
    mov r0, r4
@L_0207e360:
    cmp r8, #0
    strne r4, [r8, r0, lsl #2]
    add r0, r0, #1
    cmp r0, #4
    blt @L_0207e360
    ldr r0, [sp, #0x88]
    cmp r0, #3
    beq @L_0207e3a0
    ldrh r1, [r9, #0x42]
    add r2, sp, #0x14
    mov r0, r10
    bl _ZN11MatchEngine13func_0207a854EtPa
    cmp r0, #0
    addeq sp, sp, #0x64
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207e3a0:
    ldr r0, [sp, #0x88]
    tst r0, #1
    bne @L_0207e3c0
    add r2, sp, #0x14
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207dec0Ev
    b @L_0207e3c8
@L_0207e3c0:
    add r0, r9, #0xd0
    bl func_02081b44
@L_0207e3c8:
    ldr r0, [sp, #0x88]
    tst r0, #2
    bne @L_0207e42c
    mov r6, #0
    mov r7, r6
    add r4, sp, #0x14
@L_0207e3e0:
    add r1, r4, r7, lsl #2
    ldrb r2, [r9, #0xaa]
    ldrb r0, [r1, #0x2e]
    cmp r2, r0
    blt @L_0207e420
    ldrh r2, [r1, #0x2c]
    mov r0, r10
    mov r1, r9
    mov r3, r11
    bl _ZN11MatchEngine13func_02072fe8EP11MatchPlayerii
    cmp r0, #0
    cmpne r8, #0
    addne r0, r4, r7, lsl #2
    ldrneh r0, [r0, #0x2c]
    strne r0, [r8, r6, lsl #2]
    addne r6, r6, #1
@L_0207e420:
    add r7, r7, #1
    cmp r7, #4
    blt @L_0207e3e0
@L_0207e42c:
    mov r4, #1
    mov r8, #0
    add r6, sp, #4
@L_0207e438:
    mov r0, r9
    mov r1, r8
    bl _ZN11MatchEngine13func_0207f3ccEP11MatchPlayerm
    movs r1, r0
    beq @L_0207e48c
    mov r0, r10
    bl _ZN11MatchEngine13func_020768fcEm
    movs r7, r0
    beq @L_0207e48c
    bl _ZN11MatchEngine13func_02078450EPh
    cmp r0, #0
    beq @L_0207e48c
    mov r0, r10
    mov r1, r7
    mov r2, r6
    bl _ZN11MatchEngine13func_02077e78EPhPv
    cmp r0, #0
    bne @L_0207e48c
    mov r1, r6
    add r0, r9, #0xd0
    bl func_02081b70
@L_0207e48c:
    add r8, r8, #1
    cmp r8, #4
    blt @L_0207e438
    ldr r0, [sp]
    cmp r0, #0
    beq @L_0207e518
    mov r0, r9
    bl func_02080b90
    mov r1, r0
    mov r0, r10
    bl _ZN11MatchEngine13func_02076f04Ei
    ldrh r2, [r9, #0xf0]
    mov r1, r0
    tst r2, #0x80
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    cmpne r1, #0
    beq @L_0207e518
    mov r0, r10
    bl _ZN11MatchEngine13func_020768fcEm
    mov r7, r0
    bl _ZN11MatchEngine13func_02078450EPh
    cmp r0, #0
    beq @L_0207e518
    add r6, sp, #4
    mov r0, r10
    mov r1, r7
    mov r2, r6
    bl _ZN11MatchEngine13func_02077e78EPhPv
    cmp r0, #0
    bne @L_0207e518
    mov r1, r6
    add r0, r9, #0xd0
    bl func_02081b70
@L_0207e518:
    mov r0, r10
    mov r1, r9
    bl _ZN11MatchEngine13func_0207e19cEv
    ldrsh r1, [r9, #0xd0]
    ldrsh r0, [r9, #0x94]
    cmp r0, r1
    ble @L_0207e53c
    mov r0, r9
    bl func_02080b00
@L_0207e53c:
    ldrsh r1, [r9, #0xd2]
    ldrsh r0, [r9, #0x96]
    cmp r0, r1
    ble @L_0207e554
    mov r0, r9
    bl func_02080b1c
@L_0207e554:
    cmp r5, #0
    beq @L_0207e598
    mov r0, r9
    bl func_0208151c
    cmp r0, #0x400
    strgth r4, [r5, #0x1a]
    bgt @L_0207e58c
    mov r0, r9
    bl func_0208151c
    rsb r1, r0, #0x400
    mov r0, #0x78
    mul r0, r1, r0
    mov r0, r0, asr #0xa
    strh r0, [r5, #0x1a]
@L_0207e58c:
    ldrsh r0, [r5, #0x1a]
    cmp r0, #0
    strleh r4, [r5, #0x1a]
@L_0207e598:
    mov r0, #1
    add sp, sp, #0x64
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void MatchEngine::func_0207e5a4(u8 *data, int level, int a)
{
    if (data == NULL) {
        return;
    }
    if (level <= 0) {
        level = 1;
    } else if (level > 99) {
        level = 99;
    }
    if (level == data[0xAA]) {
        return;
    }
    *(s32 *)(data + 0x60) = func_0207d378(data, level);
    func_0207dc10(data, a);
}

u8 MatchEngine::func_0207e5fc()
{
    return ((u8 *)&gGameState)[0x4D9];
}

void MatchEngine::func_0207e60c(int value)
{
    if (value < 0) {
        value = 0;
    }
    if (value > 255) {
        value = 255;
    }
    ((u8 *)&gGameState)[0x4D9] = value;
}

BOOL MatchEngine::func_0207e62c(int index)
{
    MatchPlayer *player = func_ov015_02130b14(index, 0);

    if (player == NULL) {
        return FALSE;
    }
    if (player->body != NULL) {
        player->body->unk_16 &= ~0x1000;
    }
    if (player->body != NULL) {
        data_020c4920.pos.x = player->body->pos.x;
        data_020c4920.pos.y = player->body->pos.y;
    } else {
        data_020c4920.pos.x = 0;
        data_020c4920.pos.y = 0;
    }
    data_020c4920.pos.z = 0;
    func_01ff8ca4(this, player->unk_f4, 0, 1, 0, 0);
    return TRUE;
}

void MatchEngine::func_0207e6dc(MatchPlayer *player, fx32 x, fx32 y)
{
    MatchBall *ball = &data_020c4920;
    fx32 oldX;
    fx32 oldY;

    if (player == NULL) {
        return;
    }
    oldX = player->body->pos.x;
    oldY = player->body->pos.y;
    player->body->pos.x = x;
    player->body->pos.y = y;
    if (ball->unk_48 != player->unk_f4) {
        return;
    }
    ball->pos.x += x - oldX;
    ball->pos.y += y - oldY;
}

void MatchEngine::func_0207e738(int index, int px, int py)
{
    fx32 *rect = (fx32 *)data_020c4ebc;
    MatchPlayer *player = func_ov015_02130b14(index, 0);
    fx32 x;
    fx32 y;

    if (player == NULL) {
        return;
    }
    x = ((fx32 *)data_020c4ebc)[0];   // (read through the table again: rect[1] is not reused for y)
    y = ((fx32 *)data_020c4ebc)[1];
    if (px >= 0) {
        x += px * (rect[2] - rect[0]) / 100;
    } else {
        x -= -px * (rect[2] - rect[0]) / 100;
    }
    if (py >= 0) {
        y += py * (rect[3] - rect[1]) / 100;
    } else {
        y -= -py * (rect[3] - rect[1]) / 100;
    }
    func_0207e6dc(player, x, y);
}

// (nonmatching: the field's width is loaded after its left edge (ldr r3, [r5] first), and the division's result goes through r4 to a shared return)
#ifdef NONMATCHING
int MatchEngine::func_0207e810(int index)
{
    int result = 0;
    fx32 *rect = (fx32 *)data_020c4ebc;
    MatchPlayer *player = func_ov015_02130b14(index, result);
    int w;
    int x;

    if (player == NULL) {
        return result;
    }
    w = (rect[2] - rect[0]) / FX32_ONE;
    x = (player->body->pos.x - rect[0]) / FX32_ONE;
    if (w <= 0) {
        return result;
    }
    return x * 100 / w;
}
#else
asm int MatchEngine::func_0207e810(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r0, r1
    ldr r5, =data_020c4ebc
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r0, #0xe8]
    ldr r3, [r5, #8]
    ldr r2, [r5]
    ldr r1, [r0]
    sub r12, r3, r2
    mov r0, r12, asr #0xb
    sub r3, r1, r2
    add r0, r12, r0, lsr #20
    mov r1, r0, asr #0xc
    mov r2, r3, asr #0xb
    add r0, r3, r2, lsr #20
    cmp r1, #0
    mov r2, r0, asr #0xc
    movle r0, r4
    ldmleia sp!, {r3, r4, r5, pc}
    mov r0, #0x64
    mul r0, r2, r0
    bl _s32_div_f
    ldmia sp!, {r3, r4, r5, pc}
}
#endif

// (nonmatching: the field's width is loaded after its left edge (ldr r3, [r5] first), and the division's result goes through r4 to a shared return)
#ifdef NONMATCHING
int MatchEngine::func_0207e884(int index)
{
    int result = 0;
    fx32 *rect = (fx32 *)data_020c4ebc;
    MatchPlayer *player = func_ov015_02130b14(index, result);
    int h;
    int y;

    if (player == NULL) {
        return result;
    }
    h = (rect[3] - rect[1]) / FX32_ONE;
    y = (player->body->pos.y - rect[1]) / FX32_ONE;
    if (h <= 0) {
        return result;
    }
    return y * 100 / h;
}
#else
asm int MatchEngine::func_0207e884(int index)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r0, r1
    ldr r5, =data_020c4ebc
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r0, #0xe8]
    ldr r3, [r5, #0xc]
    ldr r2, [r5, #4]
    ldr r1, [r0, #4]
    sub r12, r3, r2
    mov r0, r12, asr #0xb
    sub r3, r1, r2
    add r0, r12, r0, lsr #20
    mov r1, r0, asr #0xc
    mov r2, r3, asr #0xb
    add r0, r3, r2, lsr #20
    cmp r1, #0
    mov r2, r0, asr #0xc
    movle r0, r4
    ldmleia sp!, {r3, r4, r5, pc}
    mov r0, #0x64
    mul r0, r2, r0
    bl _s32_div_f
    ldmia sp!, {r3, r4, r5, pc}
}
#endif

asm void MatchEngine::func_0207e8f8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r4, #0
    mov r10, r0
    mov r0, r1
    mov r5, r2
    mov r1, r4
    bl func_ov015_02130b14
    mov r6, r0
    mov r0, r5
    mov r1, r4
    bl func_ov015_02130b14
    mov r7, r0
    sub r8, r4, #1
    mov r0, r10
    mov r9, r8
    bl _ZN11MatchEngine13func_0206ace8Ev
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0
    cmpne r7, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    ldrsh r4, [r6, #0xf4]
    ldrsh r5, [r7, #0xf4]
    bl _ZN11MatchEngine13func_0207620cEv
    movs r11, r0
    beq @L_0207e984
    bl _ZN11MatchEngine13func_02076424EPh
    mov r8, r0
    mov r0, r11
    bl _ZN11MatchEngine13func_02076460EPh
    mov r9, r0
@L_0207e984:
    cmp r8, r4
    bne @L_0207e994
    cmp r9, r5
    beq @L_0207e9b8
@L_0207e994:
    cmp r8, r5
    cmpeq r9, r4
    beq @L_0207e9b8
    ldr r1, [r6, #0xe8]
    ldr r2, [r7, #0xe8]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206befcEP10MatchPointS1_
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207e9b8:
    cmp r4, r9
    bne @L_0207e9cc
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer
@L_0207e9cc:
    cmp r5, r9
    bne @L_0207e9e0
    mov r0, r10
    mov r1, r7
    bl _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer
@L_0207e9e0:
    mov r0, r6
    bl func_02084870
    cmp r0, #0
    bne @L_0207ea18
    mov r0, r7
    bl func_02084870
    cmp r0, #0
    bne @L_0207ea18
    ldr r1, [r6, #0xe8]
    ldr r2, [r7, #0xe8]
    mov r0, r10
    bl _ZN11MatchEngine13func_0206befcEP10MatchPointS1_
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207ea18:
    mov r0, r7
    bl func_02084870
    cmp r0, #0
    movne r0, r7
    movne r7, r6
    movne r6, r0
    ldr r1, [r6, #0xe8]
    mov r0, r10
    ldmia r1, {r2, r3}
    mov r1, r7
    bl _ZN11MatchEngine13func_0207e6dcEP11MatchPlayerll
    ldr r1, [r6, #0xe8]
    ldr r0, [r6, #0xec]
    ldr r8, [r1]
    ldr r0, [r0, #0x10]
    ldr r9, [r1, #4]
    str r0, [sp, #4]
    mov r5, #0x1000
    add r4, sp, #8
    add r11, sp, #0x10
    b @L_0207eae8
@L_0207ea6c:
    ldr r1, [r6, #0xec]
    mov r0, r10
    str r5, [r1, #0x10]
    mov r1, r6
    str r4, [sp]
    mov r2, r11
    add r3, sp, #0xc
    bl _ZN11MatchEngine13func_020640b4Ev
    ldr r0, [sp, #0x10]
    cmp r8, r0
    ldreq r0, [sp, #0x14]
    cmpeq r9, r0
    bne @L_0207eab0
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer
    b @L_0207eb14
@L_0207eab0:
    ldr r8, [sp, #0x10]
    ldr r1, [r6, #0xe8]
    mov r0, r6
    str r8, [r1]
    ldr r9, [sp, #0x14]
    ldr r1, [r6, #0xe8]
    mov r2, #0
    str r9, [r1, #4]
    ldr r1, [sp, #0xc]
    and r1, r1, #7
    bl _ZN11MatchEngine13func_0207f38cEP11MatchPlayerhi
    ldr r1, [sp, #8]
    ldr r0, [r6, #0xec]
    strb r1, [r0, #0x84]
@L_0207eae8:
    mov r0, r6
    bl func_02084870
    cmp r0, #0
    beq @L_0207eb14
    mov r0, r10
    mov r1, r6
    mov r2, r7
    add r3, sp, #0x18
    bl _ZN11MatchEngine13func_020632b4EP11MatchPlayerS1_Pl
    cmp r0, #0
    bne @L_0207ea6c
@L_0207eb14:
    ldr r2, [r6, #0xec]
    ldr r1, [sp, #4]
    mov r0, r6
    str r1, [r2, #0x10]
    bl func_02084870
    cmp r0, #0
    bne @L_0207eb3c
    mov r0, r10
    mov r1, r6
    bl _ZN11MatchEngine13func_0206bf2cEP11MatchPlayer
@L_0207eb3c:
    add r3, sp, #0x18
    mov r0, r10
    mov r1, r6
    mov r2, r7
    bl _ZN11MatchEngine13func_020632b4EP11MatchPlayerS1_Pl
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, [r7, #0xe8]
    ldr r2, [r6, #0xe8]
    ldr r3, [r5]
    ldr r4, [r2]
    cmp r4, r3
    ldreq r1, [r2, #4]
    ldreq r0, [r5, #4]
    cmpeq r1, r0
    ldreqh r0, [r2, #0x18]
    beq @L_0207eb98
    ldr r2, [r2, #4]
    ldr r0, [r5, #4]
    sub r1, r4, r3
    sub r0, r2, r0
    bl FX_Atan2Idx
@L_0207eb98:
    mov r0, r0, asr #4
    mov r1, r0, lsl #1
    add r0, r1, #1
    ldr r3, =FX_SinCosTable_
    mov r0, r0, lsl #1
    ldrsh r2, [r3, r0]
    mov r0, #0xc000
    mov r1, r1, lsl #1
    umull r8, r5, r2, r0
    ldrsh r1, [r3, r1]
    mov r2, r2, asr #0x1f
    ldr r4, [r7, #0xe8]
    adds r8, r8, #0x800
    mla r5, r2, r0, r5
    umull r3, r2, r1, r0
    mov r1, r1, asr #0x1f
    adc r5, r5, #0
    mov r8, r8, lsr #0xc
    adds r3, r3, #0x800
    mla r2, r1, r0, r2
    ldr r1, [r4]
    orr r8, r8, r5, lsl #20
    ldr r0, [r6, #0xe8]
    add r1, r8, r1
    str r1, [r0]
    ldr r0, [r7, #0xe8]
    adc r2, r2, #0
    mov r3, r3, lsr #0xc
    ldr r1, [r0, #4]
    orr r3, r3, r2, lsl #20
    ldr r0, [r6, #0xe8]
    add r1, r3, r1
    str r1, [r0, #4]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

BOOL MatchEngine::func_0207ec28(int index, int value)
{
    MatchPlayer *player = func_ov015_02130b14(index, 0);

    if (player == NULL) {
        return FALSE;
    }
    if (value > 127) {
        value = 127;
    }
    if (value < -127) {
        value = -127;
    }
    player->body->unk_1e = value;
    return TRUE;
}

asm void MatchEngine::func_0207ec70()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r5, r1
    add r0, r10, #0x34c
    mov r9, r2
    add r4, r0, r5, lsl #5
    mov r0, r4
    mov r1, r9
    mov r8, r3
    bl func_0208039c
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0
    ble @L_0207ecb4
    cmp r8, #0x10
    ble @L_0207ed2c
@L_0207ecb4:
    mov r0, r10
    mov r1, r5
    mov r2, r9
    bl _ZN11MatchEngine13func_0207aeacEim
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, r9
    mov r3, #1
    bl _ZN11MatchEngine13func_0207bee8Eiii
    cmp r0, #0
    bne @L_0207ed24
    mov r4, #0
    mov r0, r9
    mov r1, r4
    bl func_ov015_02130b14
    cmp r0, #0
    beq @L_0207ed0c
    bl func_02081304
    mov r4, r0
@L_0207ed0c:
    mov r2, #0
    mov r0, r10
    mov r1, r9
    mov r3, r2
    str r4, [sp]
    bl _ZN11MatchEngine13func_0207c65cEmiii
@L_0207ed24:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0207ed2c:
    mov r0, r4
    sub r1, r8, #1
    bl func_02080328
    mov r5, r0
    mov r0, r4
    mov r1, r9
    bl func_0208051c
    mov r6, r0
    mov r0, r4
    mov r2, r9
    sub r1, r8, #1
    bl func_020802cc
    mov r7, #0
    mov r0, r9
    mov r1, r7
    bl func_ov015_02130b14
    movs r11, r0
    mov r12, r7
    beq @L_0207ed8c
    bl func_020812fc
    mov r7, r0
    mov r0, r11
    bl func_02081304
    mov r12, r0
@L_0207ed8c:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    mov r3, r7
    str r12, [sp]
    bl _ZN11MatchEngine13func_0207c65cEmiii
    ldr r0, =0xfff
    tst r5, r0
    cmpne r6, #0
    ble @L_0207ee0c
    mov r0, r4
    mov r2, r5
    sub r1, r6, #1
    bl func_020802cc
    mov r8, #0
    mov r0, r5
    mov r1, r8
    bl func_ov015_02130b14
    movs r4, r0
    mov r7, r8
    beq @L_0207edf4
    bl func_020812fc
    mov r8, r0
    mov r0, r4
    bl func_02081304
    mov r7, r0
@L_0207edf4:
    mov r0, r10
    mov r1, r5
    mov r2, r6
    mov r3, r8
    str r7, [sp]
    bl _ZN11MatchEngine13func_0207c65cEmiii
@L_0207ee0c:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

int MatchEngine::func_0207ee18(u32 id)
{
    if ((id & 0x8000) == 0) {
        return func_0208051c(unk_34c[0], id);
    }
    return func_0208051c(unk_34c[1], id);
}

// gives the player (with state flag 2) number value: a team mate that has it takes the player's
// old number, or a free one (func_0207b160) when the player had none
void MatchEngine::func_0207ee3c(int id, int value)
{
    int team;
    MatchPlayer *player;
    MatchPlayer *other;
    int i;

    player = func_ov015_02130b14(id, 0);
    if (player == NULL) {
        return;
    }
    if (!MatchPlayer_HasFlag(player, 2) || value == 0) {
        return;
    }
    team = func_02080b90(player);
    for (i = 0; i < 0x84; i++) {
        other = func_ov015_02130ae8(i);
        if (other != NULL && MatchPlayer_HasFlag(other, 1) && value == other->unk_b8[0]
            && team == func_02080b90(other)) {
            if (player->unk_b8[0] != 0) {
                other->unk_b8[0] = player->unk_b8[0];
                player->unk_b8[0] = 0;
            } else {
                other->unk_b8[0] = func_0207b160(team);
            }
        }
    }
    player->unk_b8[0] = value;
}

void MatchEngine::func_0207ef0c(MatchPlayer *player)
{
    func_02080b00(player, player->unk_d0);
    func_02080b1c(player, player->unk_d2);
}

void MatchEngine::func_0207ef30(int index)
{
    func_0207ef0c(func_ov015_02130b14(index, 0));
}

void MatchEngine::func_0207ef54(int team)
{
    MatchPlayer *player;
    int i;

    for (i = 0; i < 0x84; i++) {
        player = func_ov015_02130ae8(i);
        if (player != NULL && MatchPlayer_HasFlag(player, 1) && team == func_02080b90(player)) {
            func_0207ef0c(player);
        }
    }
}

u8 MatchEngine::func_0207efc0()
{
    return unk_118f5;
}

void MatchEngine::func_0207efcc(u8 value)
{
    unk_118f5 = value;
}

BOOL MatchEngine::func_0207efd8()
{
    int size;

    if (unk_bd4 != NULL) {
        return TRUE;
    }
    size = MatchLoadFile(data_020af3b4, (void **)&unk_bd4, 0, 0);
    if (size == 0) {
        return FALSE;
    }
    unk_11842 = size / sizeof(UnkEntry_0207efd8);
    return TRUE;
}

BOOL MatchEngine::func_0207f07c()
{
    if (unk_bd4 == NULL) {
        return TRUE;
    }
    gAllocator.Free(unk_bd4);
    unk_bd4 = NULL;
    return TRUE;
}

int MatchEngine::func_0207f0b0(u16 *out, int max)
{
    BOOL loaded = FALSE;
    int n;
    UnkEntry_0207efd8 *entry;
    int i;

    if (unk_bd4 == NULL) {
        func_0207efd8();
        loaded = TRUE;
    }
    n = 0;
    entry = unk_bd4;
    for (i = 0; i < unk_11842; i++, entry++) {
        if (entry->unk_31 & 8) {
            out[n++] = entry->unk_2a;
        }
        if (n >= max) {
            break;
        }
    }
    if (loaded) {
        func_0207f07c();
    }
    return n;
}

int MatchEngine::func_0207f140(u16 *out, int max)
{
    BOOL loaded = FALSE;
    int n;
    UnkEntry_0207efd8 *entry;
    int i;

    if (unk_bd4 == NULL) {
        func_0207efd8();
        loaded = TRUE;
    }
    n = 0;
    entry = unk_bd4;
    for (i = 0; i < unk_11842; i++, entry++) {
        if (entry->unk_31 & 8) {
            out[n++] = entry->unk_2a;
        }
        if (n >= max) {
            break;
        }
    }
    if (loaded) {
        func_0207f07c();
    }
    return n;
}

int MatchEngine::func_0207f1d0(u16 *out, int max)
{
    BOOL loaded = FALSE;
    int n;
    UnkEntry_0207efd8 *entry;
    int i;

    if (unk_bd4 == NULL) {
        func_0207efd8();
        loaded = TRUE;
    }
    n = 0;
    entry = unk_bd4;
    for (i = 0; i < unk_11842; i++, entry++) {
        if (entry->unk_31 & 4) {
            out[n++] = entry->unk_2a;
        }
        if (n >= max) {
            break;
        }
    }
    if (loaded) {
        func_0207f07c();
    }
    return n;
}

int MatchEngine::func_0207f260(u16 *out, int max)
{
    BOOL loaded = FALSE;
    int n;
    UnkEntry_0207efd8 *entry;
    int i;

    if (unk_bd4 == NULL) {
        func_0207efd8();
        loaded = TRUE;
    }
    n = 0;
    entry = unk_bd4;
    for (i = 0; i < unk_11842; i++, entry++) {
        if (entry->unk_30 == 0x2F || entry->unk_30 == 0x30) {
            out[n++] = entry->unk_2a;
        }
        if (n >= max) {
            break;
        }
    }
    if (loaded) {
        func_0207f07c();
    }
    return n;
}

BOOL MatchEngine::func_0207f2f8(int id)
{
    BOOL loaded = FALSE;
    UnkEntry_0207efd8 *entry;
    int i;

    if (unk_bd4 == NULL) {
        func_0207efd8();
        loaded = TRUE;
    }
    entry = unk_bd4;
    for (i = 0; i < unk_11842; i++, entry++) {
        if (entry->unk_2a == id && (entry->unk_31 & 2)) {
            if (loaded) {
                func_0207f07c();
            }
            return TRUE;
        }
    }
    if (loaded) {
        func_0207f07c();
    }
    return FALSE;
}

void MatchEngine::func_0207f38c(MatchPlayer *player, u8 dir, BOOL update)
{
    player->body->unk_1a = dir;
    if (update) {
        player->body->direction = func_ov015_02130e40(dir);
    }
}

void MatchEngine::func_0207f3b8(int value)
{
    if (value < 0) {
        value = 0;
    }
    ((MatchPlayer *)this)->state->unk_22 = value;
}

u16 MatchEngine::func_0207f3cc(MatchPlayer *player, u32 i)
{
    if (i >= 4) {
        return 0;
    }
    return player->unk_70[i];
}

s8 MatchEngine::func_0207f3e0()
{
    return *(s8 *)((u8 *)((MatchPlayer *)this)->body + 0x1E);
}

extern "C" int func_0207f3ec(u8 *data)
{
    switch (data[0x53]) {
    case 13:
        return 1;
    case 14:
        return 2;
    case 15:
        return 3;
    }
    return 0;
}

BOOL MatchEngine::func_0207f42c(MatchPlayer *player)
{
    int i;
    MatchPlayer *other;

    for (i = 0; i < 0x84; i++) {
        other = func_ov015_02130ae8(i);
        if (other != NULL && MatchPlayer_HasFlag(other, 1) && func_02080b90(player) == func_02080b90(other) && player->unk_42 != other->unk_42 && player->unk_b8[0] == other->unk_b8[0]) {
            return TRUE;
        }
    }
    return FALSE;
}

int MatchEngine::func_0207f4bc(MatchIdScore *list, int n, u8 order)
{
    BOOL swapped = TRUE;
    int i;
    BOOL swap;
    MatchIdScore tmp;

    while (swapped && n > 0) {
        swapped = FALSE;
        for (i = n - 1; i > 0; i--) {
            if (list[i].id == 0) {
                continue;
            }
            if (order) {
                swap = list[i - 1].id == 0 || list[i].score < list[i - 1].score;
            } else {
                swap = list[i - 1].id == 0 || list[i].score > list[i - 1].score;
            }
            if (swap) {
                tmp = list[i];
                list[i] = list[i - 1];
                list[i - 1] = tmp;
                swapped = TRUE;
            }
        }
        list++;
        n--;
    }
    return TRUE;
}

BOOL MatchEngine::func_0207f5d0(char *dst, const char *src)
{
    BOOL ok = TRUE;
    int len = STD_GetStringLength(src);
    u32 size;

    if (dst == NULL || src == NULL) {
        return FALSE;
    }
    size = len + 1;
    if (size >= 0x20) {
        ok = FALSE;
    } else {
        STD_CopyString(dst, src);
    }
    if (size >= 0x20) {
        ok = FALSE;
    } else {
        STD_CopyString(dst + 0x20, src);
    }
    return ok;
}

int MatchEngine::func_0207f634(u16 *ids, int n, int kind, u8 order)
{
    MatchIdScore *list;
    MatchPlayer *player;
    MatchIdScore *entry;
    u16 *id;
    int i;
    int result;

    if (ids == NULL || n <= 0) {
        return 0;
    }
    list = (MatchIdScore *)gAllocator.Alloc(n * sizeof(MatchIdScore), 0, TRUE);
    if (list == NULL) {
        return 0;
    }
    entry = list;
    id = ids;
    for (i = 0; i < n; i++) {
        player = func_ov015_02130b14(*id, 0);
        entry->id = *id;
        if (player == NULL) {
            entry->score = 0;
        } else {
            entry->score = func_0207f7cc(player, kind, 0);
        }
        entry++;
        id++;
    }
    result = func_0207f4bc(list, n, order);
    entry = list;
    for (i = 0; i < n; i++) {
        *ids++ = entry->id;
        entry++;
    }
    gAllocator.Free(list);
    return result;
}

BOOL MatchEngine::func_0207f730(int kind)
{
    switch (kind) {
    case 1: case 2: case 3: case 4: case 5:
        return TRUE;
    case 10: case 11: case 12: case 15:
        return TRUE;
    case 13: case 14:
        return TRUE;
    case 70: case 71: case 72:
        return TRUE;
    }
    return FALSE;
}

asm int MatchEngine::func_0207f7cc(MatchPlayer *player, int kind, int c)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    movs r4, r1
    mov r5, r0
    mov r6, #0
    addeq sp, sp, #0xc
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r2, #0x84
    bgt @L_0207f988
    bge @L_0207fe94
    cmp r2, #0x81
    bgt @L_0207f96c
    bge @L_0207fdd8
    cmp r2, #0x51
    bgt @L_0207f960
    cmp r2, #0
    addge pc, pc, r2, lsl #2
    b @L_0207ff30
    b @L_0207f9cc
    b @L_0207f9d8
    b @L_0207f9f4
    b @L_0207fa00
    b @L_0207fa10
    b @L_0207fa1c
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207fa28
    b @L_0207fa34
    b @L_0207fa44
    b @L_0207fb94
    b @L_0207fb70
    b @L_0207fa54
    b @L_0207fa64
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207fa70
    b @L_0207fa7c
    b @L_0207fa88
    b @L_0207fa94
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207faa0
    b @L_0207fab0
    b @L_0207fac0
    b @L_0207fad0
    b @L_0207fae0
    b @L_0207faf0
    b @L_0207fb00
    b @L_0207fb10
    b @L_0207fb1c
    b @L_0207fb28
    b @L_0207fb34
    b @L_0207fb40
    b @L_0207fb4c
    b @L_0207fb58
    b @L_0207fb64
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207fd18
    b @L_0207fd2c
    b @L_0207fd3c
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207ff30
    b @L_0207fbd8
    b @L_0207fbe4
@L_0207f960:
    cmp r2, #0x80
    beq @L_0207fd4c
    b @L_0207ff30
@L_0207f96c:
    cmp r2, #0x82
    bgt @L_0207f97c
    beq @L_0207fe68
    b @L_0207ff30
@L_0207f97c:
    cmp r2, #0x83
    beq @L_0207fe74
    b @L_0207ff30
@L_0207f988:
    cmp r2, #0x87
    bgt @L_0207f9b0
    bge @L_0207fef4
    cmp r2, #0x85
    bgt @L_0207f9a4
    beq @L_0207feb4
    b @L_0207ff30
@L_0207f9a4:
    cmp r2, #0x86
    beq @L_0207fed4
    b @L_0207ff30
@L_0207f9b0:
    cmp r2, #0xa0
    bgt @L_0207f9c0
    beq @L_0207fc8c
    b @L_0207ff30
@L_0207f9c0:
    cmp r2, #0xa1
    beq @L_0207fca0
    b @L_0207ff30
@L_0207f9cc:
    add sp, sp, #0xc
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207f9d8:
    ldrh r1, [r4, #0x42]
    ldr r0, =0xfff
    add sp, sp, #0xc
    and r0, r1, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207f9f4:
    add sp, sp, #0xc
    ldrh r0, [r4, #0x42]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa00:
    mov r0, r4
    bl func_02080b74
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa10:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xab]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa1c:
    add sp, sp, #0xc
    ldrb r0, [r4, #0x41]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa28:
    add sp, sp, #0xc
    ldrb r0, [r4, #0x54]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa34:
    mov r0, r4
    bl func_020802a0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa44:
    mov r0, r4
    bl func_020802ac
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa54:
    mov r0, r4
    bl func_02080c6c
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa64:
    add sp, sp, #0xc
    ldrb r0, [r4, #0x52]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa70:
    add sp, sp, #0xc
    ldrsh r0, [r4, #0x94]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa7c:
    add sp, sp, #0xc
    ldrsh r0, [r4, #0xd0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa88:
    add sp, sp, #0xc
    ldrsh r0, [r4, #0x96]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fa94:
    add sp, sp, #0xc
    ldrsh r0, [r4, #0xd2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207faa0:
    mov r0, r4
    bl func_020815b4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fab0:
    mov r0, r4
    bl func_02081484
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fac0:
    mov r0, r4
    bl func_02081438
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fad0:
    mov r0, r4
    bl func_02081568
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fae0:
    mov r0, r4
    bl func_02081600
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207faf0:
    mov r0, r4
    bl func_020814d0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb00:
    mov r0, r4
    bl func_0208151c
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb10:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xaa]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb1c:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xdf]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb28:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe0]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb34:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe2]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb40:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe1]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb4c:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe3]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb58:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe5]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb64:
    add sp, sp, #0xc
    ldrb r0, [r4, #0xe4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb70:
    cmp r3, #6
    addhs sp, sp, #0xc
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, r3
    bl func_020808c4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fb94:
    mov r0, r4
    mov r1, r3
    bl func_020808c4
    movs r6, r0
    beq @L_0207fbcc
    mov r0, r5
    mov r1, r4
    mov r2, r6
    mov r3, #0
    bl _ZN11MatchEngine13func_020732b0EP11MatchPlayeriPi
    cmp r0, #0
    addne sp, sp, #0xc
    movne r0, r6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fbcc:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fbd8:
    add sp, sp, #0xc
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fbe4:
    add r1, sp, #0
    mov r2, r3
    bl _ZN11MatchEngine13func_020738e4EPvi
    cmp r0, #0
    addeq sp, sp, #0xc
    moveq r0, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrb r0, [sp, #2]
    cmp r0, #1
    addne sp, sp, #0xc
    movne r0, r6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrh r1, [r4, #0x42]
    ldr r7, =0xfff
    mov r0, r5
    and r1, r1, r7
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_02082604
    mov r6, r0
    ldrb r1, [sp]
    mov r0, r5
    bl _ZN11MatchEngine13func_020728e0Ei
    mov r8, #0
    add r3, sp, #4
    b @L_0207fc78
@L_0207fc4c:
    ldrh r5, [r4, #0x42]
    mov r1, r8, lsl #1
    ldrh r2, [r3, r1]
    and r1, r5, r7
    mov r1, r1, lsl #0x10
    cmp r2, r1, lsr #16
    cmpne r6, r2
    addeq sp, sp, #0xc
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    add r8, r8, #1
@L_0207fc78:
    cmp r8, r0
    blt @L_0207fc4c
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fc8c:
    ldr r1, [r4, #0xe8]
    ldr r2, =data_020c4920
    bl func_01fff15c
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fca0:
    ldr r1, [r4, #0xe8]
    mov r0, r4
    ldr r7, [r1, #4]
    bl func_02083e34
    mov r1, r0
    mov r0, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_0206707cEii
    subs r0, r7, r0
    ldr r1, [r4, #0xe8]
    mov r0, r4
    ldr r4, [r1, #4]
    bpl @L_0207fcf8
    bl func_02083e34
    mov r1, r0
    mov r0, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_0206707cEii
    sub r0, r4, r0
    add sp, sp, #0xc
    rsb r0, r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fcf8:
    bl func_02083e34
    mov r1, r0
    mov r0, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_0206707cEii
    add sp, sp, #0xc
    sub r0, r4, r0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fd18:
    mov r0, r4
    mov r1, r6
    bl func_0208130c
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fd2c:
    mov r0, r4
    bl func_020812f4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fd3c:
    mov r0, r4
    bl func_020812fc
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fd4c:
    mov r0, r4
    bl func_02080b90
    add r2, r5, #0x34c
    ldrh r8, [r4, #0x42]
    ldr r1, =0xfff
    add r6, r2, r0, lsl #5
    and r0, r8, r1
    mov r2, r0, lsl #0x10
    mov r0, r6
    mov r1, r8
    mov r7, r2, lsr #0x10
    bl func_02080368
    cmp r0, #0
    mov r0, r6
    mov r1, r8
    subne r7, r7, #0x10000
    bl func_0208051c
    cmp r0, #0
    ble @L_0207fdac
    mov r0, r6
    mov r1, r8
    bl func_0208051c
    cmp r0, #0xb
    suble r7, r7, #0x20000
@L_0207fdac:
    mov r0, r4
    bl func_02080b90
    add r2, r5, #0x3ac
    mov r1, r8
    add r0, r2, r0, lsl #4
    bl func_020807d0
    cmp r0, #0
    subne r7, r7, #0x40000
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fdd8:
    mov r0, r4
    bl func_02080b90
    add r1, r5, #0x34c
    add r6, r1, r0, lsl #5
    ldrh r8, [r4, #0x42]
    ldrsh r7, [r4, #0xf4]
    mov r0, r6
    mov r1, r8
    bl func_02080368
    cmp r0, #0
    addeq sp, sp, #0xc
    addeq r0, r7, #0x70000000
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r6
    mov r1, r8
    bl func_0208051c
    cmp r0, #0
    bne @L_0207fe3c
    mov r0, r6
    mov r1, r8
    bl func_0208051c
    cmp r0, #0xb
    addgt sp, sp, #0xc
    addgt r0, r7, #0x60000000
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fe3c:
    mov r0, r4
    bl func_02080b90
    add r2, r5, #0x3ac
    mov r1, r8
    add r0, r2, r0, lsl #4
    bl func_020807d0
    cmp r0, #0
    subne r7, r7, #0x40000
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fe68:
    add sp, sp, #0xc
    ldrsh r0, [r4, #0xf4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fe74:
    mov r0, r4
    mov r1, r6
    bl func_0208130c
    movs r7, r0
    moveq r7, #0x20
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fe94:
    mov r0, r4
    mov r1, #1
    bl func_0208130c
    movs r7, r0
    moveq r7, #0x20
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207feb4:
    mov r0, r4
    mov r1, #2
    bl func_0208130c
    movs r7, r0
    moveq r7, #0x20
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fed4:
    mov r0, r4
    mov r1, #3
    bl func_0208130c
    movs r7, r0
    moveq r7, #0x20
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207fef4:
    mvn r6, #0xc0000000
    mov r0, r6
    bl Random_RandA
    add r1, r5, #0x11800
    ldrh r1, [r1, #0x84]
    ldrh r2, [r4, #0x42]
    mov r7, r0
    and r1, r1, r6, lsr #18
    and r0, r2, r6, lsr #18
    mov r0, r0, lsl #0x10
    cmp r1, r0, lsr #16
    addeq r7, r7, #0x40000000
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0207ff30:
    mov r0, #0x80000000
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

// the rounded average of func_0207f7cc(kind, c) over the team's players (1 without any)
int MatchEngine::func_0207ff44(int team, int kind, int c)
{
    MatchPlayer *player;
    int i;
    int count;
    int n;
    int total;
    u16 ids[16];

    total = 0;
    count = func_02078aac(team, ids, 16, 0, 0x80);
    n = 0;
    for (i = 0; i < count; i++) {
        player = func_ov015_02130b14(ids[i], 0);
        if (player != NULL) {
            total += func_0207f7cc(player, kind, c);
            n++;
        }
    }
    if (n == 0) {
        return 1;
    }
    return (total + n / 2) / n;
}

asm void MatchEngine::func_0207fff0()
{
    stmdb sp!, {r3, lr}
    ldr lr, =gGameState
    mov r3, r2
    cmp r1, #0x2b
    mov r12, #0
    addls pc, pc, r1, lsl #2
    b @L_02080274
    b @L_020800bc
    b @L_020800c4
    b @L_020800d4
    b @L_020800e4
    b @L_020800f4
    b @L_02080104
    b @L_02080114
    b @L_02080124
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080134
    b @L_0208013c
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080144
    b @L_02080150
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_0208015c
    b @L_02080164
    b @L_0208016c
    b @L_02080174
    b @L_0208017c
    b @L_020801b4
    b @L_020801ec
    b @L_02080274
    b @L_02080274
    b @L_02080274
    b @L_02080224
    b @L_0208022c
    b @L_02080238
    b @L_0208024c
@L_020800bc:
    mov r0, r12
    ldmia sp!, {r3, pc}
@L_020800c4:
    mov r1, r12
    mov r2, #0x22
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_020800d4:
    mov r1, r12
    mov r2, #0x23
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_020800e4:
    mov r1, r12
    mov r2, #0x21
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_020800f4:
    mov r1, r12
    mov r2, #0x20
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_02080104:
    mov r1, r12
    mov r2, #0x24
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_02080114:
    mov r1, r12
    mov r2, #0x1e
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_02080124:
    mov r1, r12
    mov r2, #0x1f
    bl _ZN11MatchEngine13func_0207ff44Eiii
    ldmia sp!, {r3, pc}
@L_02080134:
    ldr r0, [lr, #0x4c0]
    ldmia sp!, {r3, pc}
@L_0208013c:
    ldr r0, [lr, #0x4c4]
    ldmia sp!, {r3, pc}
@L_02080144:
    mov r1, r12
    bl _ZN11MatchEngine13func_0206e76cEi
    ldmia sp!, {r3, pc}
@L_02080150:
    mov r1, #1
    bl _ZN11MatchEngine13func_0206e76cEi
    ldmia sp!, {r3, pc}
@L_0208015c:
    ldr r0, [lr, #0x51c]
    ldmia sp!, {r3, pc}
@L_02080164:
    ldr r0, [lr, #0x520]
    ldmia sp!, {r3, pc}
@L_0208016c:
    ldr r0, [lr, #0x524]
    ldmia sp!, {r3, pc}
@L_02080174:
    ldr r0, [lr, #0x528]
    ldmia sp!, {r3, pc}
@L_0208017c:
    ldr r0, [lr, #0x51c]
    ldr lr, [lr, #0x528]
    adds r2, r0, lr
    moveq r0, r12
    ldmeqia sp!, {r3, pc}
    mov r3, #0x64
    umull r0, r1, lr, r3
    mla r1, lr, r12, r1
    mov r12, lr, asr #0x1f
    mla r1, r12, r3, r1
    mov r3, r2, asr #0x1f
    bl _ll_udiv
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
@L_020801b4:
    ldr r2, [lr, #0x51c]
    cmp r2, #0
    moveq r0, r12
    ldmeqia sp!, {r3, pc}
    ldr lr, [lr, #0x520]
    mov r3, #0x64
    umull r0, r1, lr, r3
    mla r1, lr, r12, r1
    mov r12, lr, asr #0x1f
    mla r1, r12, r3, r1
    mov r3, r2, asr #0x1f
    bl _ll_udiv
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
@L_020801ec:
    ldr r2, [lr, #0x51c]
    cmp r2, #0
    moveq r0, r12
    ldmeqia sp!, {r3, pc}
    ldr lr, [lr, #0x524]
    mov r3, #0x64
    umull r0, r1, lr, r3
    mla r1, lr, r12, r1
    mov r12, lr, asr #0x1f
    mla r1, r12, r3, r1
    mov r3, r2, asr #0x1f
    bl _ll_udiv
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
@L_02080224:
    ldrb r0, [lr, #0x4f7]
    ldmia sp!, {r3, pc}
@L_0208022c:
    ldr r0, =data_020cabe0
    ldrh r0, [r0, #0x1a]
    ldmia sp!, {r3, pc}
@L_02080238:
    ldr r2, [lr, #0x4c8]
    ldr r0, =0x91a2b3c5
    umull r1, r0, r2, r0
    mov r0, r0, lsr #0xb
    ldmia sp!, {r3, pc}
@L_0208024c:
    ldr r2, [lr, #0x51c]
    cmp r2, #0
    moveq r0, r12
    ldmeqia sp!, {r3, pc}
    ldr r0, [lr, #0x52c]
    mov r3, r2, asr #0x1f
    mov r1, r0, asr #0x1f
    bl _ll_udiv
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
@L_02080274:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

MatchAction *MatchEngine::func_02080288(MatchPlayer *player)
{
    if (unk_bf4 != NULL) {
        return &unk_bf4[player->unk_f4];
    }
    return NULL;
}
