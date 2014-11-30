#ifndef __PLAINCELL_H__
#define __PLAINCELL_H__
#include "cell.h"
#include <string>
class PlainCell: public Cell{
protected:

public:
	bool movable(Character * character);
	Cell *neighbourMovable(Character*, std::string);
	bool attackable();
	bool useable();
	bool collectable(Character *);
	void collect(Character *);
	void addNeighbour(Cell *neighbour);
	Cell* playerInRange();
	Cell* randomMoveableCell();
	void setEntity(Entity * entity);
	char getSelf();
	Map* getTextMap();
	void use();
	~PlainCell();
	PlainCell(Map* textMap, int x, int y);
};

#endif
