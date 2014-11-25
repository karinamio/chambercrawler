#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "tile.h"

using namespace std;

Tile::Tile(Cell * cell) : CellDecorator(cell) {}

bool Tile::isMovable(string type) {
	return true;
}