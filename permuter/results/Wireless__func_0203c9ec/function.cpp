// Wireless::func_0203c9ec from src\wireless\Wireless.cpp: permuter score 40 (base 405), 8 words differ
BOOL Wireless::func_0203c9ec(int arg)
{
  u8 *new_var;
  int result;
  new_var = this->unk_004;
  if (this->state != WIRELESS_STATE_DATA_SHARING)
  {
    return 0;
  }
  result = WM_StepDataSharing(this->dataSharing, arg, new_var);
  switch (result)
  {
    case 5:
      if (((!this->dataSharing) && (!this->dataSharing)) && (!this->dataSharing))
    {
    }
      break;

    case 0:
      return (unsigned long) 1;

  }

  data_020c4588.instance->error = result;
  return 0;
}
