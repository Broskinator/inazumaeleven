// Wireless::func_0203d04c from src\wireless\Wireless.cpp: permuter score 0 (base 40), 0 words differ
BOOL Wireless::func_0203d04c(u16 mode, u16 mpParam0, u16 mpParam1)
{
  if (this->state != WIRELESS_STATE_IDLE)
  {
    return 0;
  }
  this->connectMode = mode | 0x100;
  this->aid = 0;
  this->tgid = WM_GetNextTgid();
  this->parentParam.tgid = this->tgid;
  this->parentParam.channel = this->channel;
  this->parentParam.beaconPeriod = WM_GetDispersionBeaconPeriod();
  this->parentParam.entryFlag = 1;
  this->parentParam.parentMaxSize = this->parentMaxSize;
  this->parentParam.childMaxSize = this->childMaxSize;
  this->parentParam.CS_Flag = 0;
  this->parentParam.multiBootFlag = 0;
  this->parentParam.maxEntry = this->maxEntry - 1;
  this->parentParam.KS_Flag = (this->connectMode & 1) ? (1) : (0);
  this->connectedMask = 0;
  this->mpParam0 = mpParam0;
  this->mpParam1 = mpParam1;
  if (WM_SetParentParameter(this->func_0203d128, &this->parentParam) != 2)
  {
    return 0;
  }
  return 1;
}
