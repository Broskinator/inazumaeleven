// MatchEngine::func_02074584 from src\match\MatchEngine_2.cpp: permuter score 5 (base 60)
int MatchEngine::func_02074584(int a, BOOL b, u32 flags)
{
  int result;
  int new_var;
  if (flags & 0x1)
  {
    result = 12;
    if (b)
    {
      new_var = 11;
      result = new_var;
    }
    return result;
  }
  result = 10;
  if (b)
  {
    result = new_var;
  }
  return result;
}
