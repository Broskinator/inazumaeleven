// SoundManager::func_0203b664 from src\sound\SoundManager.cpp: permuter score 0 (base 60), 0 words differ
void SoundManager::func_0203b664()
{
  void *sequence;
  int i;
  char waveName[0x20];
  char sequenceName[0x20];
  for (i = 0; i < 2; i++)
  {
    sequence = this->banks[this->tracks[i].sequence].handle;
    if (((((((((((((this->tracks[i].flags & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 0xFF) & 4)
    {
      if (DSE_SsdIsPlaySequence(sequence) > 0)
      {
        func_02041e70(sequence, this->tracks[i].unk_28);
        this->tracks[i].state = this->tracks[i].state | 4;
        this->tracks[i].state = this->tracks[i].state & ((u16) (~2));
      }
      this->tracks[i].unk_28 = 0;
      this->tracks[i].flags &= ~4;
    }
    if (this->tracks[i].state & 4)
    {
      if (DSE_SsdIsPlaySequence(sequence) > 0)
      {
        return;
      }
      this->tracks[i].state &= ~4;
    }
    if (this->tracks[i].flags & 8)
    {
      if (this->tracks[i].state & 1)
      {
        this->StopTrack(i);
      }
      this->tracks[i].state &= ~1;
      this->tracks[i].flags &= ~8;
    }
    if (this->tracks[i].flags & 0x10)
    {
      this->tracks[i].flags &= ~0x10;
      sprintf(waveName, data_020abe44, this->tracks[i].name);
      sprintf(sequenceName, data_020abe4c, this->tracks[i].name);
      this->tracks[i].wave = this->LoadBankAsync((i == 0) ? (SOUND_BANK_STREAM) : (SOUND_BANK_WAVE), waveName);
      if (this->tracks[i].wave < 0)
      {
        continue;
      }
      this->tracks[i].sequence = this->LoadBankAsync(SOUND_BANK_SEQUENCE, sequenceName);
      if (this->tracks[i].sequence < 0)
      {
        continue;
      }
      this->tracks[i].state |= 0x10;
      this->tracks[i].flags |= 1;
    }
    if (this->tracks[i].flags & 1)
    {
      if (!this->PrepareBank(this->tracks[i].wave))
      {
        continue;
      }
      if (!this->PrepareBank(this->tracks[i].sequence))
      {
        continue;
      }
      sequence = this->banks[this->tracks[i].sequence].handle;
      this->tracks[i].flags &= ~1;
      this->tracks[i].state |= 1;
    }
    if (this->tracks[i].flags & 2)
    {
      if (this->tracks[i].state & 1)
      {
        if (!(this->tracks[i].state & 2))
        {
          BOOL fadeIn = 1;
          if (this->tracks[i].flags & 0x80)
          {
            fadeIn = 0;
          }
          this->SetFade((s8) ((((this->volumes[1] * this->volume) * this->volumes[0]) >> 7) / 1000), this->tracks[i].unk_28);
          func_02041d90(sequence, &this->param, fadeIn);
        }
        this->tracks[i].unk_28 = 0;
        this->tracks[i].state |= 2;
      }
      this->tracks[i].flags &= ~0x82;
    }
  }

}
