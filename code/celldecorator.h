#ifndef __CELLDECORATOR_H__
#define __CELLDECORATOR_H__

#include "cell.h"
#include <string>
class PlainCell;
class Character;
class Entity;
class CellDecorator : public Cell {
	protected:
		Cell * cell;
	public:
		bool movable(Character * character);
		Cell *neighbourMovable(Character*, std::string);
		Cell *getNeighbour(Character*, std::string);
		bool attackable();
		void setEntity(Entity * entity);
		bool useable();
		void use();
		bool collectable(Character *);
		void collect(Character *);
		void addNeighbour(Cell *neighbour);
		Cell* playerInRange();
		void moved(Character *);
		char getSelf();
		
		Cell* randomMoveableCell();
		CellDecorator(Cell * cell);
		~CellDecorator();
};

#endif