#ifndef __PLAINCELL_H__
#define __PLAINCELL_H__
#include "cell.h"
class PlainCell: public Cell{
protected:

public:
	bool movable(Character * character);
	bool attackable();
	bool useable();
	void addNeighbour(Cell *neighbour);
	Cell* playerInRange();
	Cell* randomMoveableCell();
	void setEntity(Entity * entity);
	void use();
	~PlainCell();
};

#endif
