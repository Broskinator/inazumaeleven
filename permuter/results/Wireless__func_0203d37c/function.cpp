// Wireless::func_0203d37c from src\wireless\Wireless.cpp: permuter score 60 (base 205), 2 words differ
BOOL Wireless::func_0203d37c()
{
  u16 allowed = func_020131c0();
  u8 (*new_var)[32];
  u16 channel;
  if (allowed == 0x8000)
  {
    return 0;
  }
  if (allowed == 0)
  {
    return 0;
  }
  channel = this->scanChannel;
  if (channel == 0)
  {
    channel++;
  }
  for (;;)
  {
    if (channel > 16)
    {
      channel = 1;
    }
    if (allowed & (1 << (channel - 1)))
    {
      if (this || allowed)
      {
        break;
      }
      else
      {
        break;
      }
    }
    channel++;
  }

  this->scanChannel = channel;
  this->scanParam.channelList = 1 << (channel - 1);
  this->scanParam.scanType = 1;
  this->scanParam.ssidLength = 0;
  new_var = &this->scanParam.ssid;
  MI_CpuFill8(*new_var, 0xFF, sizeof(this->scanParam.ssid));
  this->scanParam.maxChannelTime = WM_GetDispersionScanPeriod();
  this->flags |= 1;
  if (WM_StartScanEx(this->func_0203d44c, &this->scanParam) == 2)
  {
    return 1;
  }
  return 0;
}
