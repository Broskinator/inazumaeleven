// MatchEngine::func_020632b4 from src\match\MatchEngine.cpp: permuter score 0 (base 50), 0 words differ
BOOL MatchEngine::func_020632b4(MatchPlayer *a, MatchPlayer *b, s32 *distance)
{
  MatchPlayerBody *bodyB;
  MatchPlayerBody *bodyA;
  fx32 dx;
  fx32 dy;
  s32 d;
  if (a->unk_f4 == b->unk_f4)
  {
    return 0;
  }
  bodyB = b->body;
  bodyA = a->body;
  dx = bodyB->pos.x;
  dx = bodyA->pos.x - dx;
  if (dx < 0)
  {
    dx = -dx;
  }
  dy = bodyB->pos.y;
  dy = bodyA->pos.y - dy;
  if (dy < 0)
  {
    dy = -dy;
  }
  if ((dx > (12 * ((fx32) 0x00001000))) || (dy > (12 * ((fx32) 0x00001000))))
  {
    return 0;
  }
  d = func_01fff184(this, dx, dy);
  if (d >= (12 * ((fx32) 0x00001000)))
  {
    return 0;
  }
  if (distance != 0)
  {
    *distance = d;
  }
  return 1;
}
