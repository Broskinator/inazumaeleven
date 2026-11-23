// MatchEngine::func_0206a3b8 from src\match\MatchEngine.cpp: permuter score 740 (base 1005), 8 words differ
BOOL MatchEngine::func_0206a3b8(MatchPlayer *player)
{
  fx32 dist;
  BOOL result;
  fx32 y;
  fx32 new_var;
  fx32 x;
  if (MatchPlayer_HasFlag(player, 0x40) && (!this->func_0206c110()))
  {
    return 0;
  }
  if (!this->func_0206de54(func_ov015_02131970(player)))
  {
    return 0;
  }
  y = player->body->pos.y;
  new_var = player->body->pos.x;
  x = new_var;
  if (!func_ov087_02179c3c(this, x, y, func_02083e54(player)))
  {
    return 0;
  }
  result = 1;
  func_ov087_0217d034(this, player->unk_f4, new_var, player->body->pos.y, &dist, 1, player->unk_f4);
  if (dist >= 0x20000)
  {
    result = 0;
  }
  return result;
}
