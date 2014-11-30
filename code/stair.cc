#include <string>

#include "board.h"
#include "cell.h"
#include "celldecorator.h"
#include "stair.h"

using namespace std;
char Stair::self;
Stair::Stair(Cell * cell) : CellDecorator(cell), board(Board::getBoard()) {
	self = '/';
	textMap->notify(y,x,self);
}

bool Stair::movable(Character * character){
	if(cellObject){
		// return cellObject->takesSpace();
	}
	return false;
}
void Stair::moved(Character *character){
	board->stairsReached();
}

char Stair::getSelf(){
	return self;
}