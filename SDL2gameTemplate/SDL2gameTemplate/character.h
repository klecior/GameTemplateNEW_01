#pragma once
#include <vector>
#include"statusEffectBase.h"

class character
{
public:
	character();
	~character();
	std::vector<statusEffectBase>statusEffectQueue;
	void update();

	int health;
};

