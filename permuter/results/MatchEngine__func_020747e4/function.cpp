// MatchEngine::func_020747e4 from src\match\MatchEngine_2.cpp: permuter score 0 (base 5)
BOOL MatchEngine::func_020747e4(int index, u32 value)
{
  unsigned long long new_var;
  MatchPlayer *player = func_ov015_02130b14(index, 0);
  MatchPlayer **new_var2;
  if (player == 0)
  {
    return 0;
  }
  if (player)
  {
    new_var2 = &player;
 do { } while (0);
  }
  if (value >= 0x200)
  {
    new_var = 0;
    return new_var;
  }
  (*new_var2)->state->unk_32 = value;
  return 1;
}
