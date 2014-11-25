#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "door.h"

using namespace std;

Door::Door(Cell * cell) : CellDecorator(cell) {}

bool Door::isMovable(string type) {
	if (type == 'player') {
		return true;
	}
	else {
		return false;
	}
}