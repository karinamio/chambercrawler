#ifndef __FLOOR_H__
#define __FLOOR_H__
#include <list>
class Cell;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;
class Floor{
	FloorSection *chambers[NUM_CHAMBERS];
	FloorSection **passages;
	FloorSection *cave;
	std::list<Character *> moveQ;
	Character **enemies;
	Cell *Cell[MAP_HEIGHT][MAP_WIDTH];
public:
	void spawnStair();
	void spawnItems();
	void spawnCharacter(Character *);
	Character ** spawnEnemies();
	void decorateCells();
	~Floor();
	Floor();
};
#endif
