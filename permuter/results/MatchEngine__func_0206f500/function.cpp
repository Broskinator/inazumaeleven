// MatchEngine::func_0206f500 from src\match\MatchEngine_2.cpp: permuter score 0 (base 80), 0 words differ
int MatchEngine::func_0206f500(int id)
{
  u16 key;
  u16 *new_var;
  int i;
  for (i = 0; i < 0x84; i++)
  {
    PoolEntry *entry = gEntryPool.Get(i);
    key = id;
    new_var = &(*((u16 *) (entry->data1 + 4)));
    if ((entry != 0) && (key == (*new_var)))
    {
      return i;
    }
  }

  return -1;
}
