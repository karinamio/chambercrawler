#ifndef __FLOOR_H__
#define __FLOOR_H__
#include <list>

class Cell;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;
const int MAX_Enemies = 20;

class Floor{
	FloorSection *chambers[NUM_CHAMBERS];
	FloorSection **passages;
	FloorSection *cave;
	std::list<Character *> moveQ;
	Character *enemies[NUM_CHAMBERS][MAX_Enemies];
	Cell *cell[MAP_HEIGHT][MAP_WIDTH];
	Map * textMap;
	Character *player;
	int playerInitialChamber;


public:
	void spawnStair();
	void spawnItems();
	void spawnCharacter(Character *);
	void spawnEnemies();
	void decorateCells();
	void playerDied();
	void enemyDied(int, int);
	~Floor();
	Floor();
};

#endif
