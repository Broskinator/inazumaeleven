// MatchEngine::func_0206a078 from src\match\MatchEngine.cpp: permuter score 0 (base 200), 0 words differ
fx32 MatchEngine::func_0206a078(MatchPlayer *player)
{
  s32 v;
  if (player == ((v << 14) * 0))
  {
    return 0;
  }
  v = func_02081600(player);
  if (v < this->unk_11928)
  {
    v = this->unk_11928;
  }
  else
  {
    if (!this)
    {
    }
    if (v > this->unk_1192c)
    {
      v = this->unk_1192c;
    }
  }
  return this->unk_1191c + FX_Mul(this->unk_11924, FX_SinIdx(((v << 14) / this->unk_1192c) >> 4) & 0xFFFFu);
  if (!this)
  {
  }
}
