// Wireless::func_0203d37c from src\wireless\Wireless.cpp: permuter score 180 (base 205)
BOOL Wireless::func_0203d37c()
{
  int new_var;
  u16 allowed = func_020131c0();
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
    if (((!channel) && (!channel)) && (!channel))
    {
    }
  }
  for (;;)
  {
    if (channel > 16)
    {
      channel = 1;
    }
    if (allowed & (1 << (channel - 1)))
    {
      break;
    }
    channel++;
  }

  new_var = 1 << (channel - 1);
  this->scanChannel = channel;
  this->scanParam.channelList = new_var;
  this->scanParam.scanType = 1;
  this->scanParam.ssidLength = 0;
  MI_CpuFill8(this->scanParam.ssid, 0xFF, sizeof(this->scanParam.ssid));
  this->scanParam.maxChannelTime = WM_GetDispersionScanPeriod();
  this->flags |= 1;
  if (WM_StartScanEx(this->func_0203d44c, &this->scanParam) == 2)
  {
    return 0;
    return 1;
  }
}
