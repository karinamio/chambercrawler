#ifndef __ITEM_H__
#define __ITEM_H__

#include "entity.h"

class Item : public Entity{
public:
	bool attackable();
	void addGold(int);
	int getValue();
};

#endif
