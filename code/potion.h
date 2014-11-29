#ifndef __POTION_H__
#define __POTION_H__

#include "item.h"
#include "boostatkpotion.h"
#include "boostdefpotion.h"
#include "poisonhealthpotion.h"
#include "restorehealthpotion.h"
#include "woundatkpotion.h"
#include "wounddefpotion.h"

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
	virtual ~Potion();
};

#endif
