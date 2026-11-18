// MatchEngine::func_020681d8 from src\match\MatchEngine.cpp: permuter score 195 (base 515), 8 words differ
void MatchEngine::func_020681d8(MatchPoint *from, int angle, fx32 distance, MatchPoint *pos)
{
  fx32 cos = FX_CosIdx(angle >> 4);
  fx32 sin = FX_SinIdx(angle >> 4);
  fx32 x = from->x;
  fx32 y;
  pos->x = x + FX_Mul(distance, cos);
  pos->y = y + FX_Mul(distance, sin);
  y = from->y;
}
