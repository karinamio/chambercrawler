#include <string>

#include "celldecorator.h"

using namespace std;

CellDecorator::CellDecorator(Cell * cell) : cell(cell) {}

CellDecorator::~CellDecorator() {
	delete cell;
}