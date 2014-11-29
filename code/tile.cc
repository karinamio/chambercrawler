#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "tile.h"

using namespace std;

Tile::Tile(Cell * cell) : CellDecorator(cell) {}


bool Tile::movable(Character * character){
	if(cellObject){
		return cellObject->takesSpace();
	}
	return true;
}
bool Tile::attackable(){
	if(cellObject){
		return cellObject->attackable();
	}
	return true;
}
bool Tile::useable(){
	if(cellObject){
		return cellObject->useable();
	}
	return true;
}
void Tile::use(){
	cellObject->used(player);
}