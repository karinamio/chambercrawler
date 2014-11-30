#ifndef __CHAMBER_H__
#define __CHAMBER_H__
#include "floorsection.h"
class Character;

class Chamber: public FloorSection {
public:
	Chamber(int, Cell *[][79]);
	void spawnCharacter(Character *);
	void spawnItems();
	void spawnEnemies();
	void decorateCells();
	void spawnStairs();
	
};

#endif
