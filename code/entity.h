#ifndef __ENTITY_H__
#define __ENTITY_H__
#include <time.h>
#include <cstdlib>
class Entity {
protected:
	int random(int);
	Cell * location;
public:
	virtual bool takesSpace();
	virtual bool attackable() = 0;
	virtual bool collectable() = 0;
	virtual bool isPlayer();
	virtual ~Entity() = 0;
};

#endif