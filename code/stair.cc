#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "stair.h"

using namespace std;

Stair::Stair(Cell * cell) : CellDecorator(cell) {}

bool Stair::isMovable(string type) {
	if (type == 'player') {
		return true;
	}
	else {
		return false;
	}
}