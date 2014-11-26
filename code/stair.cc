#include <string>

#include "board.h"
#include "cell.h"
#include "celldecorator.h"
#include "stair.h"

using namespace std;

Stair::Stair(Cell * cell) : CellDecorator(cell), board(Board::getBoard()) {}

bool Stair::isMovable(string type) {
	if (type == 'player') {
		return true;
	}
	else {
		return false;
	}
}