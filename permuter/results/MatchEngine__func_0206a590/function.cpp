// MatchEngine::func_0206a590 from src\match\MatchEngine.cpp: permuter score 480 (base 840), 36 words differ
int MatchEngine::func_0206a590(fx32 x, fx32 y, fx32 radius, MatchPlayer *player, int a)
{
  int team = func_ov015_021319b0(player);
  int count = 0;
  int i;
  for (i = 0; i < 11; i++)
  {
    MatchPlayer *other = this->func_02079e90(team, i);
    i = (int) player;
    if ((other != 0) && (!this->func_02079f98(other, a, i)))
    {
      fx32 dy = other->body->pos.y - y;
      fx32 dx;
      if (dy < 0)
      {
        dy = -dy;
      }
      if (dy <= radius)
      {
        dx = other->body->pos.x - x;
        if (dx < 0)
        {
          dx = -dx;
        }
        if ((dx <= radius) && (func_01fff184(this, dx, dy) <= radius))
        {
          count++;
        }
      }
    }
  }

  return count;
}
