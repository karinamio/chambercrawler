#ifndef __POTION_H__
#define __POTION_H__

#include "item.h"

class Character;
class Potion: public Item {
protected:
	int HP;
	int Atk;
	int Def;
	bool permanent;
public:
	Item * createPotion();
	virtual void used(Character * character)=0;
	bool useable();
	bool collectable();
	virtual ~Potion();
};

#endif
