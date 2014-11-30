#include "floor.h"
#include "cell.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "cell.h"
#include "passage.h"
#include "stair.h"
#include "tile.h"
#include "wall.h"
#include "door.h"
#include "chamber.h"
#include "plaincell.h"
#include "player.h"
#include "gold.h"
#include "enemy.h"
#include "human.h"
#include "potion.h"
#include "boostatkpotion.h"
#include "boostdefpotion.h"
#include "restorehealthpotion.h"
#include "poisonhealthpotion.h"
#include "woundatkpotion.h"
#include "wounddefpotion.h"

using namespace std;

class Cell;

Floor::~Floor() {
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			delete cell[i][j];
		}
	}
	// delete []cell;
	// delete [] chambers;
}


void Floor::playerDied(){
	
}

int Floor::randomChamber(){
	int randomCh;
	srand (time(NULL));
	randomCh = rand() % 5;
	return randomCh;
}

void Floor::spawnCharacter() {
	int randomCh = randomChamber();
	playerInitialChamber = randomCh;
	// chambers[randomCh]->spawnPlayer(player);
}

void Floor::spawnStair() {
	// int randomChamberNum;
	// while((randomChamberNum = randomChamber()) == playerInitialChamber){

	// }
	// chambers[randomChamberNum]->spawnStair();
}

void Floor::spawnEnemies() {
	// for(int i = 0; i < 5; i++){
	// 	enemies[i] = chambers[i]->spawnEnemies();
	// }
}

void enemyDied(int chamber, int enemyID) {
	// delete enemies[chamber][enemyID];
	// enemies[chamber][enemyID] = NULL;
}

Floor::Floor(Map* textMap,Info* info, Character* player): textMap(textMap), player(player), info(info) {
	int randomChamber;
	for(int i = 0; i < MAP_HEIGHT; i++){
		for(int j = 0; j < MAP_WIDTH; j++){
			cell[i][j] = new PlainCell(textMap, j, i);
		}
	}

	decorateCells(false, "hi");
	// chambers[0] = new Chamber(this,cell, 0);
	// chambers[1] = new Chamber(this,cell, 1);
	// chambers[2] = new Chamber(this,cell, 2);
	// chambers[3] = new Chamber(this,cell, 3);
	// chambers[4] = new Chamber(this,cell, 4);
	// passages = new Passage(cell);
	// cave = new Cave(cell);
}

void Floor::decorateCells(bool different, std::string fileName){

	string fName = "b.txt";
	if (different){
		fName = fileName;
	}

	int x = 0;
	int y = 0;
	int counti = 0;
	int countj = 0;
	string line;
	string linez;
	char c;
	int count = 0;
	Entity * nGold = NULL;
	Entity * nPotion = NULL;
	ifstream file(fName.c_str());
	while (getline(file,line)) {
		// cout<<counti<<endl;
		stringstream ss(line);
		while (ss>> noskipws >> c) {
			// cout<<c;
			// cout<<cell[counti][countj]->getY()<<"   "<<cell[counti][countj]->getX()<<endl;
			switch (c){
				case '.':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					break;
				case '|':
				// cout<<"hi"<<endl;				
					cell[counti][countj] = new Wall(cell[counti][countj],'|');
					break;
				case '-':
					cell[counti][countj] = new Wall(cell[counti][countj],'-');
					break;	
				case '#':
					cell[counti][countj] = new Passage(cell[counti][countj]);
					break;
				case '+':
					cell[counti][countj] = new Door(cell[counti][countj]);
					break;
				case '/':
					cell[counti][countj] = new Stair(cell[counti][countj]);
					break;
				case '@':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					player = Player::getPlayer(info, textMap);
					player->location = cell[counti][countj];
					cell[counti][countj]->setEntity(player);
					break;
				case '6':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nGold = new Gold(0);
					cell[counti][countj]->setEntity(nGold);
					cell[counti][countj]->cellObject = nGold;
					// if(cell[counti][countj]->cellObject->collectable()){
					// 	cout<<"damn2";
					// }
					// if(cell[counti][countj]->getEntity()){
					// 	cout<<"damn";
					// }
					
					break;
				case '7':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nGold = new Gold(1);
					cell[counti][countj]->setEntity(nGold);
					cell[counti][countj]->cellObject = nGold;
					break;
				case '8':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nGold = new Gold(4);
					cell[counti][countj]->setEntity(nGold);
					cell[counti][countj]->cellObject = nGold;
					break;
				case '9':
					//dragon hoard
					break;
				// potions	
				case '0':
					// RH
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new RestoreHealthPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case '1':
					// BA
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new BoostAtkPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case '2':
					// BD
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new BoostDefPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case '3':
					// PH
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new PoisonHealthPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case '4':
					// WA
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new WoundAtkPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case '5':
					// WD
					cell[counti][countj] = new Tile(cell[counti][countj]);
					nPotion = new WoundDefPotion();
					cell[counti][countj]->setEntity(nPotion);
					cell[counti][countj]->cellObject = nPotion;
					break;
				case 'H':
					cell[counti][countj] = new Tile(cell[counti][countj]);
					enemies[0] = new Human;
					cell[counti][countj]->setEntity(enemies[0]);
					cell[counti][countj]->cellObject = enemies[0];
					break;
			}
			++ countj;
			++ count;
		}
		// cout<<endl;
		countj = 0;
		++ counti;
		// cout<<count;
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
}