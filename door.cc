#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "door.h"
#include "entity.h"
#include "character.h"

using namespace std;
char Door::self;
Door::Door(Cell * cell) : CellDecorator(cell) {
	self = '+';
	textMap->notify(y,x,self);
}

bool Door::movable(Character * character){
	if(cellObject){
		return cellObject->takesSpace();
	}
	return character->moveOut(this);
}

char Door::getSelf(){
	return this->self;
}