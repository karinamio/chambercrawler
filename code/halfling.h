#ifndef __HALFLING_H__
#define __HALFING_H__
#include "enemy.h"
class Halfling : public Enemy {
public:
	Halfling();
	void attack(Character * player);
	void attackBy(Character * player);
	~Halfing();
};

#endif