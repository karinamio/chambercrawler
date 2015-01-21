#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "passage.h"
#include "entity.h"
#include "character.h"

using namespace std;
char Passage::self;
Passage::Passage(Cell * cell) : CellDecorator(cell) {
	self = '#';
	textMap->notify(y,x,self);
}

bool Passage::movable(Character * character){
	if(cellObject){
		return cellObject->takesSpace();
	}
	return character->moveOut(this);
;
}
char Passage::getSelf(){
	return self;
}