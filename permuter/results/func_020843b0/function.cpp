// func_020843b0 from src\match\MatchGeometry.cpp: permuter score 30 (base 120), 5 words differ
extern "C" BOOL func_020843b0(fx32 *x, fx32 *y)
{
  fx32 *new_var;
  fx32 *rect = data_020c4ebc;
  BOOL out = 0;
  if (!func_020842f8(*x))
  {
    out = 1;
    *x = ((*x) < rect[0]) ? (rect[0]) : (rect[2]);
  }
  new_var = &rect[1];
  if (!func_02084324(*y))
  {
    out = 1;
    *y = ((*y) < (*new_var)) ? (rect[1]) : (rect[3]);
  }
  return (out) ? (0) : (1);
}
