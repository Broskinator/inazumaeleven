// MatchEngine::func_02067f44 from src\match\MatchEngine.cpp: permuter score 0 (base 170), 0 words differ
int MatchEngine::func_02067f44(MatchPlayer *player, int angle)
{
  int new_var;
  MatchPoint new_var2;
  MatchPoint near;
  MatchPoint far;
  int score = 100000;
  fx32 d;
  this->func_020687cc((MatchPoint *) (&data_020c4920.pos), angle, 0x32000, &near);
  this->func_020687cc((MatchPoint *) (&data_020c4920.pos), angle, 0x96000, &far);
  if (func_01ffe4c4(this, player, near.x, near.y, 0x10011))
  {
    score = 1;
  }
  if (func_01ffed20(this, player, far.y))
  {
    new_var2 = far;
    d = player->body->pos.y - new_var2.y;
    if (d < 0)
    {
      d = -d;
    }
    score += d >> 12;
  }
  else
  {
    d = player->body->pos.y - far.y;
    new_var = 0;
    if (d < new_var)
    {
      d = -d;
    }
    score -= d >> 12;
  }
  if (func_02084350(far.x, far.y) == 0)
  {
    score += 10;
  }
  return score;
}
