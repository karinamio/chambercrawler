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
		return cellObject->collectable();
	}
	
}
void PlainCell::collect(Character * character){
	if(cellObject){
		cellObject->collect(character);
	}
}
Cell *PlainCell::neighbourMovable(Character* character, string direction){
	Cell *neighbour = NULL;
	for (int i = 0; i < numNeighbours; i++){
		if (direction == "no"){
			if (neighbours[i]->x = x && neighbours[i]->y = y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}	
			}
		}
		else if (direction == "so"){
			if (neighbours[i]->x = x && neighbours[i]->y = y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ea"){
			if (neighbours[i]->x = x+1 && neighbours[i]->y = y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "we"){
			if (neighbours[i]->x = x-1 && neighbours[i]->y = y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ne"){
			if (neighbours[i]->x = x+1 && neighbours[i]->y = y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "nw"){
			if (neighbours[i]->x = x-1 && neighbours[i]->y = y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "se"){
			if (neighbours[i]->x = x+1 && neighbours[i]->y = y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "sw"){
			if (neighbours[i]->x = x-1 && neighbours[i]->y = y+1){
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
		if (neighbours[i]->cellObject){
			if(neighbours[i]->cellObject->isPlayer()){
				return neighbours[i];
			}
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
	while (movable == false && neighbourCount < numNeighbours){
		random = rand % numNeighbours;
		movable = neighbours[random]->movable();
		neighbourCount ++;
		moveableNeighbour = neighbours[random];
	}

	return moveableNeighbour;
}

PlainCell::~PlainCell() {

}

PlainCell::PlainCell(Map* textMap, int x, int y):textMap(textMap), x(x), y(y), numNeighbours(0) {

}

void PlainCell::addNeighbour(Cell *neighbour) {
	neighbours[numNeighbours] = neighbour;
	++ numNeighbours;
}

PlainCell::~PlainCell() {

}

void setEntity(Entity * entity) {
	cellObject = entity;
	if(entity){
		textMap->notify(y,x,entity->identify());
	}
	else{
		textMap->notify(y,x,self);
	}
	
}
void use() {
	cellObject->use(character);
}
