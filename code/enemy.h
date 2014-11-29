#ifndef __ENEMY_H__
#define __ENEMY_H__
#include "character.h"
class Enemy : class Character {
public:
	virtual void move();
	virtual void attack(Player * player);
	virtual void attackBy(Player * player);
	virtual void defeated();
	virtual bool attackable();
	Character * createEnemy();
};

#endif