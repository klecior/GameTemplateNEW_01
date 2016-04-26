#pragma once
#include<iostream>
class statusEffectBase
{
public:
	statusEffectBase();
	~statusEffectBase();
	virtual void update();
	virtual void effect();
	float getTimeRemainingSeconds();
	int timeRemainingMS;

};

