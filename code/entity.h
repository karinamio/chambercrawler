#ifndef __ENTITY_H__
#define __ENTITY_H__

class Entity {
public:
	virtual void takesSpace() = 0;
	virtual void attackable() = 0;
	virtual void collectable() = 0;
};

#endif