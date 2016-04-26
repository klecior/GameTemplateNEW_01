#include "statusEffectBase.h"

void statusEffectBase::effect()
{
	std::cout << "BURNINATING" << std::endl;
}

float statusEffectBase::getTimeRemainingSeconds()
{
	return timeRemainingMS/1000;
}

statusEffectBase::statusEffectBase()
{

}


statusEffectBase::~statusEffectBase()
{

}

void statusEffectBase::update()
{
	effect();
}
