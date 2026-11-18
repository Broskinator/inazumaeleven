// SoundManager::RestoreState from src\sound\SoundManager.cpp: permuter score 0 (base 55), 0 words differ
void SoundManager::RestoreState(SoundState *state)
{
  char *new_var;
  char wave[0x20];
  int i;
  char *ext;
  for (i = 0; i < 4; i++)
  {
    if (state->effects[i][0] != '\0')
    {
      STD_CopyString(wave, state->effects[i]);
      ext = strrchr(wave, '.');
      if (ext != 0)
      {
        *ext = '\0';
      }
      new_var = state->effects[i];
      STD_ConcatenateString(wave, data_020abda4);
      this->LoadPair(i, wave, new_var);
    }
  }

  for (i = 0; i < 2; i++)
  {
    this->unk_470[i] = state->tracks[i];
  }

}
