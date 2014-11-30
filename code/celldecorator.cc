#include <string>
#include <iostream>
#include "plaincell.h"
#include "celldecorator.h"
#include "entity.h"

using namespace std;

CellDecorator::CellDecorator(Cell * cell) : cell(cell) {
	this->cellObject = this->cell->getEntity();
	this->textMap = this->cell->getTextMap();
		// cell->getTextMap()->print();
	this->neighbours = this->cell->getNeighbours();
	this->numNeighbours = this->cell->getNumNeighbours();
	this->x = cell->getX();
	this->y = cell->getY();
}
bool CellDecorator::movable(){
	return cell->movable();
}
CellDecorator::~CellDecorator() {
	delete cell;
}
void CellDecorator::collect(Character * character){
	cell->collect(character);
}

Cell * CellDecorator::getNeighbour(Character* character, string direction) {
	return cell->getNeighbour(character, direction);
}

bool CellDecorator::collectable(Character * character){
	return cell->collectable(character);
}
bool CellDecorator::movable(Character * character){
	return cell->movable(character);
}
Cell *CellDecorator::neighbourAttackable(Character* character, string direction){
	return cell->neighbourAttackable(character, direction);
}
Cell *CellDecorator::neighbourMovable(Character* character, string direction){
 	return cell->neighbourMovable(character, direction);
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
void CellDecorator::addNeighbour(Cell *neighbour){
	cell->addNeighbour(neighbour);
}

void CellDecorator::moved(Character *character){
	// Entity * entity = character;
	// cell->setEntity(entity);
}

Cell* CellDecorator::playerInRange(){
	return cell->playerInRange();
}

Cell* CellDecorator::randomMoveableCell(){
	return cell->randomMoveableCell();
}

char CellDecorator::getSelf(){
	return cell->getSelf();
}