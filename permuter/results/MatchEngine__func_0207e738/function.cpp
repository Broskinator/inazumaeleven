// MatchEngine::func_0207e738 from src\match\MatchEngine_2.cpp: permuter score 0 (base 145), 0 words differ
void MatchEngine::func_0207e738(int index, int px, int py)
{
  fx32 *rect = (fx32 *) data_020c4ebc;
  MatchPlayer *player = func_ov015_02130b14(index, 0);
  fx32 x;
  fx32 y;
  if (player == 0)
  {
    return;
  }
  x = rect[0];
  y = rect[1 & 0xFFFFFFFFFFFFFFFF];
  if (px >= 0)
  {
    x += (px * (rect[2] - rect[0])) / 100;
  }
  else
  {
    x -= ((-px) * (rect[2] - rect[0])) / 100;
  }
  if (py >= 0)
  {
    if (1)
    {
      y += (py * (rect[3] - rect[1])) / 100;
    }
  }
  else
  {
    y -= ((-py) * (rect[3] - rect[1])) / 100;
  }
  this->func_0207e6dc(player, x, y);
}
