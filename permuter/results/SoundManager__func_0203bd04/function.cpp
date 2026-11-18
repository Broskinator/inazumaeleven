// SoundManager::func_0203bd04 from src\sound\SoundManager.cpp: permuter score 5 (base 10)
void SoundManager::func_0203bd04()
{
  s32 handle;
  int i;
  s32 opened;
  char path[0x40];
  for (i = 0; i < 1; i++)
  {
    handle = this->streams[i].handle;
    if (this->streams[i].delay != 0)
    {
      this->streams[i].delay -= (s8) gDeltaTime;
      if (this->streams[i].delay < 0)
      {
        this->streams[i].delay = 0;
      }
    }
    if (this->streams[i].flags & 4)
    {
      this->streams[i].flags &= ~4;
      if (this->func_0203bba8(i))
      {
        DSE_SsdStopStream(handle, (u16) this->streams[i].unk_2c);
        this->streams[i].state = (this->streams[i].state | 4) & ((u16) (~2));
      }
      this->streams[i].unk_2c = 0;
    }
    if (this->streams[i].state & 4)
    {
      if (DSE_SsdIsPlayStream(handle) > 0)
      {
        return;
      }
      this->streams[i].state &= ~4;
      this->streams[i].delay = 0;
    }
    if ((this->streams[i].flags & 8) && (!(this->streams[i].state & 4)))
    {
      if (this->streams[i].state & 1)
      {
        DSE_SsdCloseStream(handle);
        this->streams[i].state |= 8;
      }
      this->streams[i].state &= ~1;
      this->streams[i].flags &= ~8;
    }
    if (this->streams[i].state & 8)
    {
      if (DSE_SsdIsOpenStream(handle) > 0)
      {
        return;
      }
      this->streams[i].state &= ~8;
      this->streams[i].delay = 0;
    }
    if (this->streams[i].flags & 1)
    {
      this->streams[i].flags &= ~1;
      if (!(this->streams[i].state & 1))
      {
        STD_CopyString(path, data_020abe64);
        STD_ConcatenateString(path, this->streams[i].name);
        if (!GetSoundFilePath(path, path, sizeof(path)))
        {
          continue;
        }
        DSE_SsdSetMonoToStereo((this->streams[i].unk_21 != 0) ? (1) : (0));
        this->streams[i].unk_21 = 0;
        this->streams[i].state = this->streams[i].state;
        opened = func_020487c4(path, 0x6000, 1);
        if (opened < 0)
        {
          continue;
        }
        handle = (this->streams[i].handle = opened);
      }
      this->streams[i].state |= 1;
    }
    if ((this->streams[i].flags & 2) && (this->streams[i].delay == 0))
    {
      if (this->streams[i].state & 1)
      {
        if (!this->func_0203bba8(i))
        {
          this->SetFade((s8) ((((this->volumes[1] * this->volume) * this->volumes[0]) >> 7) / 1000), this->streams[i].unk_2c);
          func_02048d80(handle, &this->param, (this->streams[i].flags & 0x80) ? (0) : (1));
        }
        this->streams[i].state |= 2;
      }
      this->streams[i].flags &= ~0x82;
    }
    if ((this->streams[i].state & 2) && (DSE_SsdIsPlayStream(handle) == 0))
    {
      this->func_0203ba5c(i);
    }
  }

}
