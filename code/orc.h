#ifndef __ORC_H__
#define __ORC_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Orc : public Enemy {
public:

	Orc(Map *textMap, int ID, Floor * currentFloor, Info* info);
	// void attack(Player * player);
	// void attackBy(Player * player);

	~Orc();
};

#endif