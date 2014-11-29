#include "plaincell.h"
#include <time.h>
#include <cstdlib>

bool PlainCell::movable(Character * character){
	return false;
}
bool PlainCell::attackable(){
	return false;
}
bool PlainCell::useable(){
	return false;
}
Cell* PlainCell::playerInRange(){
	for (int i = 0; i < numNeighbours; i++){
		if (neighbours[i]->cellObject){
			if(neighbours[i]->cellObject->isPlayer()){
				return neighbours[i];
			}
		}
		return NULL;
	}
}

Cell* PlainCell::randomMoveableCell(){
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

PlainCell::~PlainCell(){

}

PlainCell::PlainCell(Map* textMap, int x, int y):textMap(textMap), x(x), y(y), numNeighbours(0){

}

void PlainCell::addNeighbour(Cell *neighbour){
	neighbours[numNeighbours] = neighbour;
	++ numNeighbours;
}

PlainCell::~PlainCell(){

}

void setEntity(Entity * entity){
	cellObject = entity;
}
void use(){
	cellObject->use(character);
}
