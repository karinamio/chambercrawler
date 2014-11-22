#ifndef __CHAMBER_H__
#define __CHAMBER_H__

class Character;

class Chamber: public FloorSection {
public:
	Chamber(int, Cell *[][]);
	void spawnCharacter(Character *);
	void spawnItems();
	void spawnEnemies();
	void decorateCells();
	void spawnStairs();
};

#endif
