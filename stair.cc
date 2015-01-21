#include <string>
#include "character.h"
#include "board.h"
#include "cell.h"
#include "celldecorator.h"
#include "stair.h"

using namespace std;
char Stair::self;
Stair::Stair(Cell * cell, Board *board) : CellDecorator(cell), board(board) {
	self = '/';
	textMap->notify(y,x,self);
}

bool Stair::movable(Character * character){
	if(character->isPlayer()){
		return true;
	}
	return false;
}
void Stair::moved(Character *character){
	board->stairsReached();
}

char Stair::getSelf(){
	return self;
}