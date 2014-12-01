#ifndef __ELF_H__
#define __ELF_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Elf : public Enemy {
public:

	Elf(Map *textMap, int ID, Floor * currentFloor, Info* info);
	// void attack(Character * player);
	// void attackBy(Character * player);

	~Elf();
};

#endif