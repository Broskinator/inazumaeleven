// MatchEngine::func_0207a534 from src\match\MatchEngine_2.cpp: permuter score 0 (base 20), 0 words differ
int MatchEngine::func_0207a534(u32 id)
{
  u16 key = id & 0xFFF;
  int lo;
  int hi;
  int mid;
  s16 v;
  if (key == 0)
  {
    return 0;
  }
  lo = 0;
  hi = data_020c4828 - 1;
  while (lo <= hi)
  {
    mid = lo + ((hi - lo) >> 1);
    v = this->unk_bec[mid];
    if (v == 0)
    {
      if (mid == 0)
      {
        return -1;
      }
      hi = mid - 1;
    }
    else
    {
      if (((!this->unk_bec) && (!this->unk_bec)) && (!this->unk_bec))
      {
      }
      if (v > key)
      {
        hi = mid - 1;
      }
      else
        if (v < key)
      {
        lo = mid + 1;
      }
      else
      {
        return mid;
      }
    }
  }

  return -1;
}
