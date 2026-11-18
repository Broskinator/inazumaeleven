// MatchEngine::func_0206ccb8 from src\match\MatchEngine.cpp: permuter score 305 (base 400), None words differ
int MatchEngine::func_0206ccb8()
{
  s8 *new_var;
  int level;
  switch (gGameState.profile.unk_45)
  {
    case 0:
      level = this->func_0206b4b8(0) + gGameState.profile.unk_46;
      break;

    new_var = &gGameState.profile.unk_46;
    case 1:
      level = *new_var;
      break;

  }

  if (level <= 0)
  {
    level = 1;
  }
  if (level > 99)
  {
    if (1)
    {
      level = 99;
    }
  }
  return level;
}
