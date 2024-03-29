#ifndef __GOLD_H__
#define __GOLD_H__
#include "item.h"
#include <string>
#include "character.h"
class Gold: public Item{
protected:
	int value;
	std::string type;
public:
	bool takesSpace();
	bool takesSpace(Character *);
	bool collectable();
	void collect(Character *);
	Item* createGold();
	void addGold(int);
	int getValue();
	bool isGold();
	Gold(int);
};
#endif
