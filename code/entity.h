#ifndef __ENTITY_H__
#define __ENTITY_H__

class Entity {
public:
	virtual bool takesSpace() = 0;
	virtual bool attackable() = 0;
	virtual bool collectable() = 0;
};

#endif