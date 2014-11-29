#include "plaincell.h"


bool PlainCell::movable(Character * character){
	return false;
}
bool PlainCell::attackable(){
	return false;
}
bool PlainCell::useable(){
	return false;
}
void addNeighbour();
PlainCell::~PlainCell();

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
