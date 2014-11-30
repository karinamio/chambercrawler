#ifndef __HUMAN_H__
#define __HUMAN_H__
#include "enemy.h"
class Human : public Enemy {
public:
	Human();
	void defeated();
	void attack(Player * player);
	void attackBy(Player * player);
	~Human();
};

#endif