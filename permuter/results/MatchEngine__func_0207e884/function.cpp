// MatchEngine::func_0207e884 from src\match\MatchEngine_2.cpp: permuter score 40 (base 575), 6 words differ
int MatchEngine::func_0207e884(int index)
{
  int result = 0;
  fx32 *rect = (fx32 *) data_020c4ebc;
  MatchPlayer *player = func_ov015_02130b14(index, result);
  int h;
  int y;
  if (player == 0)
  {
    return result;
  }
  h = (rect[3] - rect[1]) / ((fx32) 0x00001000);
  y = (player->body->pos.y - rect[1]) / ((fx32) 0x00001000);
  if (h <= 0)
  {
    if (player->body->pos.y)
    {
      return result;
    }
    else
    {
      return result;
    }
  }
  return (y * 100) / h;
}
