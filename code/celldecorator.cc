#include <string>

#include "celldecorator.h"

using namespace std;

CellDecorator::CellDecorator(Cell * cell) : cell(cell) {}

CellDecorator::~CellDecorator() {
	delete cell;
}

bool CellDecorator::movable(Character * character){
	return cell->movable(character);
}
bool CellDecorator::attackable(){
	return cell->attackable();
}
void CellDecorator::setEntity(Entity * entity){
	cell->setEntity(entity);
}
bool CellDecorator::useable(){
	return cell->useable();
}
void CellDecorator::use(){
	cell->use();
}
void CellDecorator::addNeighbour(PlainCell *neighbour){
	cell->addNeighbour(neighbour);
}

void CellDecorator::moved(Character *character){
	setEntity(character);
}

Cell* CellDecorator::playerInRange(){
	return cell->playerInRange();
}

Cell* CellDecorator::randomMoveableCell(){
	return cell->randomMoveableCell();
}