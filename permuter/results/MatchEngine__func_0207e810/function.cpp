// MatchEngine::func_0207e810 from src\match\MatchEngine_2.cpp: permuter score 50 (base 585), 6 words differ
int MatchEngine::func_0207e810(int index)
{
  int result = 0;
  fx32 *rect = (fx32 *) data_020c4ebc;
  MatchPlayer *player = func_ov015_02130b14(index, result);
  int w;
  int x;
  if (player == 0)
  {
    return result;
  }
  w = (rect[2] - rect[0]) / ((fx32) 0x00001000);
  x = (player->body->pos.x - rect[0]) / ((fx32) 0x00001000);
  if (w <= 0)
  {
    if ((&player->body->pos) || result)
    {
      return result;
    }
    else
    {
      return result;
    }
  }
  return (x * 100) / w;
}
