#ifndef __ENEMY_H__
#define __ENEMY_H__
#include "character.h"
class Map;
class Floor;
class Enemy : public Character {
protected:
	int chamberID;
	int ID;

public:

	Enemy();
	virtual void move();
	virtual void attack(Character * player);
	virtual void attackBy(Character * player);
	virtual void defeated();
	virtual bool attackable();
	virtual bool hostileEnemy();
	bool moveOut(Cell *cell);
	Character * createEnemy(Map*, int, Floor*,Info *info);
	~Enemy();
};

#endif