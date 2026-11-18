// SoundManager::SetFade from src\sound\SoundManager.cpp: permuter score 0 (base 20), 0 words differ
void SoundManager::SetFade(int volume, int time)
{
  if (volume == 0)
  {
    time = 0;
  }
  this->param.value = volume;
  this->param.flags = 4;
  this->param.value = this->param.value + (((u16) time) << 16);
  this->param.flags = 4;
}
