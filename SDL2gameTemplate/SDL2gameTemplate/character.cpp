#include "character.h"



character::character()
{
	health = 10;
}


character::~character()
{
}

void character::update()
{
	
	for (int i = 0; i < statusEffectQueue.size(); i++)
	{
		statusEffectQueue.at(i).update();

	}
}