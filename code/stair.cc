#include <string>

#include "board.h"
#include "cell.h"
#include "celldecorator.h"
#include "stair.h"

using namespace std;

Stair::Stair(Cell * cell) : CellDecorator(cell), board(Board::getBoard()) {
	self = "/";
	textMap->notify(y,x,self);
}

bool Stair::movable(Character * character){
	if(cellObject){
		return cellObject->takesSpace();
	}
	return false;
}
Stair::moved(Character *character){
	board->stairsReached();
}