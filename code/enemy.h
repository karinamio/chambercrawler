#ifndef __ENEMY_H__
#define __ENEMY_H__
#include "character.h"
class Enemy : class Character {
protected:
	int chamberID;
	int ID;
public:
	virtual void move();
	virtual void attack(Character * player);
	virtual void attackBy(Character * player);
	virtual void defeated();
	virtual bool attackable();
	virtual bool hostileEnemy();
	Character * createEnemy();
};

#endif