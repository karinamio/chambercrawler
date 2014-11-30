#ifndef __ENTITY_H__
#define __ENTITY_H__
#include <time.h>
#include <cstdlib>

#include "cell.h"
class Character;
class Map;
class Entity {
protected:
	int random(int);
	Map* textMap;
	char self;
public:
	Cell * location;
	virtual bool takesSpace();
	virtual bool isGold();
	virtual bool takesSpace(Character *);
	virtual bool attackable() = 0;
	virtual bool collectable() = 0;
	virtual bool useable();
	virtual bool isPlayer();
	virtual ~Entity() = 0;
	virtual void addGold(int) = 0;
	virtual int getValue() = 0;
	virtual char identify();
};

#endif