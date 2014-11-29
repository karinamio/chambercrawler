#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "passage.h"

using namespace std;

Passage::Passage(Cell * cell) : CellDecorator(cell) {}

bool Stair::movable(Character * character){
	if(cellObject){
		return cellObject->takesSpace();
	}
	return false;
}