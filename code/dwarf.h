#ifndef __DWARF_H__
#define __DWARF_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Dwarf : public Enemy {
public:

	Dwarf(Map *textMap, int ID, Floor * currentFloor, Info* info);
	// void attack(Character * player);
	// void attackBy(Character * player);

	~Dwarf();
};

#endif