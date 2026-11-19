// MatchEngine::func_0207add4 from src\match\MatchEngine_2.cpp: permuter score 110 (base 345), 13 words differ
int MatchEngine::func_0207add4(int team, u32 id)
{
  int i;
  int new_var;
  if (gGameState.unk_000[0x1B] == 0)
  {
    id &= 0xFFF;
    if (team == 1)
    {
      id |= 0x8000;
    }
  }
  new_var = 4;
  for (i = (team == 1) * 0; i < new_var; i++)
  {
    if (id == func_0208076c(this->unk_3ac[team], i))
    {
      return i + 1;
    }
    team++;
    team--;
  }

  return 0;
}
