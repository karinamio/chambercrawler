#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "passage.h"

using namespace std;

Passage::Passage(Cell * cell) : CellDecorator(cell) {}

bool Passage::isMovable(string type) {
	if (type == 'player') {
		return true;
	}
	else {
		return false;
	}
}