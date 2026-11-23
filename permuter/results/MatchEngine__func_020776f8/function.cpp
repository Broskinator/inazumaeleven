// MatchEngine::func_020776f8 from src\match\MatchEngine_2.cpp: permuter score 0 (base 125), 0 words differ
BOOL MatchEngine::func_020776f8(MatchPlayer *player, u32 id, int *error)
{
  int result = 0;
  int new_var;
  u8 *entry;
  u16 ids[8];
  int i;
  if (error == 0)
  {
    error = &result;
  }
  if (player == 0)
  {
    *error = 0x1C;
    return 0;
  }
  entry = this->func_020768fc(id);
  new_var = 0xFFF;
  if (entry == 0)
  {
    *error = 0xD;
    return 0;
  }
  result = this->func_02077eb8(entry, ids);
  if (result == 2)
  {
    *error = 0;
    return 1;
  }
  if (result == 0)
  {
    for (i = 0; i < 4; i++)
    {
      if (ids[i] == ((u16) (player->unk_42 & new_var)))
      {
        break;
      }
    }

    if (i == 4)
    {
      result = 5;
    }
  }
  *error = result;
  return result == 0;
}
