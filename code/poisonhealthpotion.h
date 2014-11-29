#ifndef __POISONHEALTHPOTION_H__
#define __POISONHEALTHPOTION_H__

#include "item.h"
#include "potion.h"

class PoisonHealthPotion: public Potion {
public:
	PoisonHealthPotion();
	void used(Character * character);
	~PoisonHealthPotion();
};

#endif
