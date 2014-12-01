#ifndef __HALFLING_H__
#define __HALFING_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Halfling : public Enemy {
public:
	Halfling(Map *textMap, int ID, Floor * currentFloor, Info* info);
	// void attack(Character * player);
	// void attackBy(Character * player);
	~Halfing();
};

#endif