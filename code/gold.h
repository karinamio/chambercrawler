#ifndef __GOLD_H__
#define __GOLD_H__
#include "item.h"
#include <string>
class Gold: public Item{
protected:
	static char self = 'G';
	int value;
	std::string type;
public:
	bool takesSpace();
	bool collectable();
	void collect(Character *);
	Item* createGold();

};
#endif
