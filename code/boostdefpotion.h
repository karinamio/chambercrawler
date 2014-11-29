#ifndef __BOOSTDEFPOTION_H__
#define __BOOSTDEFPOTION_H__

#include "item.h"
#include "potion.h"

class BoostDefPotion: public Potion {
public:
	BoostDefPotion();
	void used(Character * character);
	~BoostDefPotion();
};

#endif
