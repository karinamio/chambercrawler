#include "floor.h"
#include "cell.h"
#include <time.h>
#include <cstdlib>

class Cell;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;

class Floor{
	FloorSection *chambers[NUM_CHAMBERS];
	FloorSection *passages;
	FloorSection *cave;
	std::list<Character *> moveQ;
	Character **enemies;
	Cell *cell[MAP_HEIGHT][MAP_WIDTH];
public:
	void spawnStair();
	void spawnItems();
	void spawnCharacter(Character *);
	Character ** spawnEnemies();
	void decorateCells();
	~Floor();
	Floor();
};

Floor::~Floor(){
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			delete cell[i][j];
		}
	}
	delete cell;
	delete [] chambers;
	delete passages;
	delete cave;
}

}

int randomChamber(){
	int randomChamber;
	srand (time(NULL));
	randomChamber = rand() % 5;
	return randomChamber;
}
void Floor::spawnCharacter(){
	int randomChamber = randomChamber();
	playerInitialChamber = randomChamber;
	chambers[randomChamber]->spawnPlayer(player);
}
void Floor::spawnStair(){
	int randomChamber;
	while((randomChamber = randomChamber()) == playerInitialChamber){

	}
	chambers[randomChamber]->spawnStair();
}

void Floor::spawnEnemies(){
	for(int i = 0; i < 5; i++){
		enemies[i] = chambers[i]->spawnEnemies();
	}
}

void enemyDied(int chamber, int enemyID){
	delete enemies[chamber][enemyID];
	enemies[chamber][enemyID] = NULL;
}

Floor::Floor(Map* textMap, Character* player): textMap(textMap), player(player){
	int randomChamber;
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			cell[i][j] = new PlainCell(textMap, j, i);
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if (i != 0){
				cell[i][j]->addNeighbour(theGrid[i-1][j]);
			}
			if (i != n-1){
				cell[i][j]->addNeighbour(theGrid[i+1][j]);
			}
			if (j != 0){
				cell[i][j]->addNeighbour(theGrid[i][j-1]);
			}
			if (j != n-1){
				cell[i][j]->addNeighbour(theGrid[i][j+1]);
			}
		}
	}
	chambers[0] = new Chamber(this,cell, 0);
	chambers[1] = new Chamber(this,cell, 1);
	chambers[2] = new Chamber(this,cell, 2);
	chambers[3] = new Chamber(this,cell, 3);
	chambers[4] = new Chamber(this,cell, 4);
	passages = new Passage(cell);
	cave = new Cave(cell);

}