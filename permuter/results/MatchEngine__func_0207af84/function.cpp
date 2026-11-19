// MatchEngine::func_0207af84 from src\match\MatchEngine_2.cpp: permuter score 95 (base 225), 8 words differ
BOOL MatchEngine::func_0207af84(int team, int id)
{
  MatchPlayer *player;
  int i;
  for (i = 0; i < 0x84; i++)
  {
    u16 key = id & 0xFFF;
    player = func_ov015_02130ae8(i);
    if ((((player != 0) && MatchPlayer_HasFlag(player, 1)) && (key == ((u16) (player->unk_42 & 0xFFF)))) && (team == func_ov015_021319b0(player)))
    {
      return 1;
    }
  }

  return 0;
}
