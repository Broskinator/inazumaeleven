// MatchEngine::func_0206cec0 from src\match\MatchEngine.cpp: permuter score 735 (base 1460), None words differ
BOOL MatchEngine::func_0206cec0()
{
  BOOL result;
  int kind = gGameState.unk_07c[2];
  int r = 0;
  BOOL new_var;
  if (this->func_0206c644())
  {
    result = this->func_0206d094(0 * ((result) ? (1) : (0))) || this->func_0206d094(1);
    return ((result) ? (1) : (0)) & 0xFFFFFFFF;
  }
  r = this->func_0206d358(kind & 0xFFFFFFFF) & 0xFFFFFFFFFFFFFFFF;
  result = ((kind & 0xFFFFFFFFu) == 15) || ((new_var = func_01ff9684(this)) && (r == 15));
  return (result) ? (1) : (0);
}
