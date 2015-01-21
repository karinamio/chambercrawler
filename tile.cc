#include <string>
#include <iostream>
#include "cell.h"
#include "celldecorator.h"
#include "tile.h"
#include "entity.h"
#include "gold.h"
#include "character.h"

using namespace std;
char Tile::self;
bool Tile::movable(){
	if (cellObject){
		if(cellObject->isGold()){
			return false;
		}
		return cellObject->takesSpace();
	}
	return true;
}
Tile::Tile(Cell * cell) : CellDecorator(cell) {
	self = '.';
	textMap->notify(y,x,self);
}

char Tile::getSelf(){
	return self;
}
bool Tile::movable(Character * character){
	if (cellObject){
		if (character->isPlayer()){
			if(cellObject->isGold()){
				return true;
			}
		}
		return false;
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