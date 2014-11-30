#ifndef __DWARF_H__
#define __DWARF_H__
#include "enemy.h"
class Dwarf : public Enemy {
public:
	Dwarf(Map *, int, Floor*);
	void attack(Character * player);
	void attackBy(Character * player);
	~Dwarf();
};

#endif