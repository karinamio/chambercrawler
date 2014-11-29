#ifndef __CELLDECORATOR_H__
#define __CELLDECORATOR_H__

#include "cell.h"
class PlainCell;
class Character;
class Entity;
class CellDecorator : public Cell {
	protected:
		Cell * cell;
	public:
		bool movable(Character * character);
		bool attackable();
		void setEntity(Entity * entity);
		bool useable();
		void use();
		void addNeighbour(Cell *neighbour);
		Cell* playerInRange();
		void moved(Character *);
		Cell* randomMoveableCell();
		CellDecorator(Cell * cell);
		~CellDecorator();
};

#endif