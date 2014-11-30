#include "plaincell.h"
#include <time.h>
#include <cstdlib>
#include <string>

using namespace std;

bool PlainCell::movable(Character * character){
	return false;
}

bool PlainCell::collectable(Character * character){
	if(cellObject){
		// return cellObject->collectable();
	}
	
}
void PlainCell::collect(Character * character){
	if(cellObject){
		// cellObject->collect(character);
	}
}
Cell *PlainCell::neighbourMovable(Character* character, string direction){
	Cell *neighbour = NULL;
	for (int i = 0; i < numNeighbours; i++){
		if (direction == "no"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}	
			}
		}
		else if (direction == "so"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ea"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "we"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ne"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "nw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "se"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "sw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}

	}
	return neighbour;
}
bool PlainCell::attackable() {
	return false;
}
bool PlainCell::useable() {
	return false;
}
Cell * PlainCell::playerInRange() {
	for (int i = 0; i < numNeighbours; i++){
		if (neighbours[i]->getEntity()){
			// if(neighbours[i]->getEntity()->isPlayer()){
			// 	return neighbours[i];
			// }
		}
		return NULL;
	}
}

Cell * PlainCell::randomMoveableCell() {
	srand(time(NULL));
	int random;
	bool moveable = false;
	int neighbourCount = 0;
	Cell *moveableNeighbour = NULL;
	// while (moveable == false && neighbourCount < numNeighbours){
	// 	random = rand() % numNeighbours;
	// 	movable = neighbours[random]->getEntity()->movable();
	// 	neighbourCount ++;
	// 	moveableNeighbour = neighbours[random];
	// }

	return moveableNeighbour;
}

PlainCell::~PlainCell() {

}

PlainCell::PlainCell(Map* textMap, int x, int y) {
	this->cellObject = NULL;
	this->textMap = textMap;
	this->x= x;
	this->y = y;
	this->numNeighbours = 0;
	this->neighbours = new Cell* [8];
}

void PlainCell::addNeighbour(Cell *neighbour) {
	neighbours[numNeighbours] = neighbour;
	++ numNeighbours;
}


void PlainCell::setEntity(Entity * entity) {
	cellObject = entity;
	if(entity){
		// textMap->notify(y,x,entity->identify());
	}
	else{
		textMap->notify(y,x,this->getSelf());
	}
	
}
void PlainCell::use() {
	// cellObject->use(character);
}

char PlainCell::getSelf(){
	return 'p';
}

Map* PlainCell::getTextMap(){

	return textMap;
}