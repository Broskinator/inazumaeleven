// MatchEngine::func_0207455c from src\match\MatchEngine_2.cpp: permuter score 5 (base 60)
int MatchEngine::func_0207455c(int a, BOOL b, u32 flags)
{
  int result;
  int new_var;
  if (flags & 0x1)
  {
    new_var = 2;
    result = 1;
    if (b)
    {
      result = new_var;
    }
    return result;
  }
  result = 3;
  if (b)
  {
    result = new_var;
  }
  return result;
}
