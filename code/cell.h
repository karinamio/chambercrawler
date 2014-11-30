#ifndef __CELL_H__
#define __CELL_H__
#include <string>
#include "map.h"

class Character;
class Entity;
class Cell {
protected:
	Map * textMap;
	Cell ** neighbours;
	int numNeighbours;
	int x;
	int y;
public:
	Entity * cellObject;
	virtual bool movable(Character * character) = 0;
	virtual Cell *neighbourMovable(Character* Character, std::string) = 0;
	// virtual void notify (int x, int y, char update) = 0;
	virtual bool attackable() = 0;
	virtual Cell *getNeighbour(Character*, std::string);
	virtual void setEntity(Entity * entity) = 0;
	virtual bool useable() = 0;
	virtual void use() = 0;
	virtual bool collectable(Character *) = 0;
	virtual void collect(Character *) = 0;
	virtual void addNeighbour(Cell *neighbour) = 0;
	virtual Cell* playerInRange() = 0;
	virtual Cell* randomMoveableCell() = 0;
	virtual ~Cell() = 0;
	virtual int getX();
	virtual int getY();
	virtual int getNumNeighbours();
	virtual Cell** getNeighbours();
	virtual Map* getTextMap();
	virtual Entity * getEntity();
	virtual char getSelf() = 0;
};

#endif
