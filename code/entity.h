#ifndef __ENTITY_H__
#define __ENTITY_H__
#include <time.h>
#include <cstdlib>
#include "character.h"
class Entity {
protected:
	int random(int);
	Cell * location;
	char self;
public:
	virtual bool takesSpace();
	virtual bool takesSpace(Character *);
	virtual bool attackable() = 0;
	virtual bool collectable() = 0;
	virtual bool isPlayer();
	virtual ~Entity() = 0;
	virtual void addGold(int) = 0;
	virtual int getValue() = 0;
	virtual char identify();
};

#endif