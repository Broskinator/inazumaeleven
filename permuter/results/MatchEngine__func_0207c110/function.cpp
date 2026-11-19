// MatchEngine::func_0207c110 from src\match\MatchEngine_2.cpp: permuter score 0 (base 265), 0 words differ
int MatchEngine::func_0207c110(int team, u32 id)
{
  int new_var2;
  u8 *new_var;
  int i;
  u8 *entry = this->unk_34c[team];
  new_var = entry;
  for (i = 0; i < 16; i++)
  {
    new_var2 = id;
    new_var2 = new_var2 & 0xFFF;
    if (((u16) new_var2) == func_0208033c(new_var, i))
    {
      func_020802cc(new_var, i, 0);
      break;
    }
  }

  return (i == 16) ? (3) : (0);
}
