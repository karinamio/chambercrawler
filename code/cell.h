#ifndef __CELL_H__
#define __CELL_H__

class Cell {
protected:
	Entity * cellObject;
	Map * textMap;
	Cell ** neighbours;
	int numNeighbours;
	int x;
	int y;
public:
	virtual bool movable(Character * character) = 0;
	virtual void notify (int x, int y, char update) = 0;
	virtual bool attackable() = 0;
	virtual void setEntity(Entity * entity) = 0;
	virtual bool useable() = 0;
	virtual void use() = 0;
	virtual void addNeighbour(Cell *neighbour) = 0;
	virtual Cell* playerInRange() = 0;
	virtual Cell* randomMoveableCell() = 0;
	virtual ~Cell() = 0;
};

#endif
