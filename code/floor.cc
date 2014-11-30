#include "floor.h"
#include "cell.h"
#include <time.h>
#include <cstdlib>
#include <string>
#include "cell.h"
#include "passage.h"
#include "stair.h"
#include "tile.h"
#include "wall.h"
#include "door.h"
#include "chamber.h"
using namespace std;

class Cell;
const int NUM_CHAMBERS = 5;
const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;


Floor::~Floor() {
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			delete cell[i][j];
		}
	}
	delete cell;
	delete [] chambers;
}

}
void Floor::playerDied(){
	
}

int randomChamber(){
	int randomChamber;
	srand (time(NULL));
	randomChamber = rand() % 5;
	return randomChamber;
}

void Floor::spawnCharacter() {
	int randomChamber = randomChamber();
	playerInitialChamber = randomChamber;
	chambers[randomChamber]->spawnPlayer(player);
}

void Floor::spawnStair() {
	int randomChamber;
	while((randomChamber = randomChamber()) == playerInitialChamber){

	}
	chambers[randomChamber]->spawnStair();
}

void Floor::spawnEnemies() {
	for(int i = 0; i < 5; i++){
		enemies[i] = chambers[i]->spawnEnemies();
	}
}

void enemyDied(int chamber, int enemyID) {
	delete enemies[chamber][enemyID];
	enemies[chamber][enemyID] = NULL;
}

Floor::Floor(Map* textMap, Character* player): textMap(textMap), player(player) {
	int randomChamber;
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			cell[i][j] = new PlainCell(textMap, j, i);
		}
	}
	for(int i = 0; i < MAP_HEIGHT; ++i){
		for(int j = 0; j < MAP_WIDTH; ++j){
			if (i != 0){
				cell[i][j]->addNeighbour(cell[i-1][j]);
			}
			if (i != MAP_HEIGHT-1){
				cell[i][j]->addNeighbour(cell[i+1][j]);
			}
			if (j != 0){
				cell[i][j]->addNeighbour(cell[i][j-1]);
			}
			if (j != MAP_WIDTH-1){
				cell[i][j]->addNeighbour(cell[i][j+1]);
			}
			if (i != 0 && j != 0){
				cell[i][j]->addNeighbour(cell[i-1][j-1]);
			}
			if (i != 0 && j != MAP_WIDTH-1){
				cell[i][j]->addNeighbour(cell[i-1][j+1]);
			}
			if (i != MAP_HEIGHT-1 && j != 0){
				cell[i][j]->addNeighbour(cell[i+1][j-1]);
			}
			if (i != MAP_HEIGHT-1 && j != MAP_WIDTH-1){
				cell[i][j]->addNeighbour(cell[i+1][j+1]);
			}
		}
	}
	decorateCells();
	// chambers[0] = new Chamber(this,cell, 0);
	// chambers[1] = new Chamber(this,cell, 1);
	// chambers[2] = new Chamber(this,cell, 2);
	// chambers[3] = new Chamber(this,cell, 3);
	// chambers[4] = new Chamber(this,cell, 4);
	// passages = new Passage(cell);
	// cave = new Cave(cell);
}

void Floor::decorateCells(bool different, std::string fileName){

	string fName = "board.txt";
	if (different){
		fName = fileName;
	}

	int x = 0;
	int y = 0;
	int counteri = 0;
	int counterj = 0;
	string line;
	string linez;
	char c;
	ifstream file(fName.c_str());
	while (getline(file,line)) {
		while (file >> noskipws >> c) {
			switch (c){
				case '.':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					break;
				case '|':
					cell[counti][countj] = new Wall(cell[counti][countj],'|');
					break;
				case '-':
					cell[counti][countj] = new Wall(cell[counti][countj],'-');
					break;	
				case '#':
					cell[counti][countj] = new Passage(cell[counti][countj]);
					break;
				case '+':
					cell[counti][countj] = new Door(cell[counti][countj],'|');
					break;
				case '/':
					cell[counti][countj] = new Stair(cell[counti][countj],'|');
					break;
			}
			++ counterj;
		}
		++ counteri;
	}
}