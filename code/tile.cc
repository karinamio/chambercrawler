#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "tile.h"

using namespace std;
char Tile::self;
Tile::Tile(Cell * cell) : CellDecorator(cell) {
	self = '.';
	textMap->notify(y,x,self);
}

char Tile::getSelf(){
	return self;
}
bool Tile::movable(Character * character){
	if(cellObject){
		// return cellObject->takesSpace(character);
	}
	return true;
}
bool Tile::attackable(){
	if(cellObject){
		// return cellObject->attackable();
	}
	return true;
}
bool Tile::useable(){
	if(cellObject){
		// return cellObject->useable();
	}
	return true;
}
void Tile::use(){
	// cellObject->used(player);
}