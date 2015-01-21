#ifndef __FLOOR_H__
#define __FLOOR_H__
#include <list>
#include <string>
#include "map.h"
class FloorSection;
class Cell;
class Character;
class Info;
class Board;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;
const int MAX_Enemies = 20;

class Floor{
	FloorSection *chambers[NUM_CHAMBERS];
	FloorSection **passages;
	FloorSection *cave;
	std::list<Character *> moveQ;
	Character *enemies[NUM_CHAMBERS * MAX_Enemies];
	Cell *cell[MAP_HEIGHT][MAP_WIDTH];
	Map * textMap;
	Info *info;
	Character *player;
	int playerInitialChamber;
	int enemyCount;
	
	int randomChamber();


public:
	static Board *currentBoard;
	void enemyMove();
	void spawnStair();
	void spawnItems();
	void spawnCharacter();
	void spawnEnemies();
	void decorateCells(bool different, std::string fileName);
	void playerDied();
	void enemyDied(int);
	~Floor();
	Floor(Map* textMap,Info* info, Character* player,Board *currentBoard, bool exists, std::string fileName);
};

#endif
