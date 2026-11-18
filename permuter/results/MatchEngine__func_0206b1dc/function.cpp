// MatchEngine::func_0206b1dc from src\match\MatchEngine.cpp: permuter score 55 (base 55), 10 words differ
int MatchEngine::func_0206b1dc(int side)
{
  s32 last = this->unk_c18[side];
  int index;
  int n;
  int count;
  int i;
  u8 *entry;
  if (last < 0)
  {
    return 0;
  }
  index = this->unk_c08[side];
  i = index;
  n = (last + 0x20) - i;
  n = (n + 1) % 0x20;
  if (n == 0)
  {
    n = 0x20;
  }
  count = 0;
  for (i = 0; i < n; i++)
  {
    if (i >= 0x20)
    {
      index = 0;
    }
    entry = this->func_0206b3a4(side, index);
    if (((entry != 0) && (entry[8] != 0xD)) && (entry[8] != 0xC))
    {
      count++;
    }
    index++;
  }

  return count;
}
