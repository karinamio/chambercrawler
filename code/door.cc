#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "door.h"

using namespace std;

Door::Door(Cell * cell) : CellDecorator(cell) {}

bool Door::movable(Character * character){
	return character->moveOut(this);
}

