#ifndef __WALL_H__
#define __WALL_H__

#include "cell.h"

class Wall : public CellDecorator {
	protected:
		Cell * cell;
	public:
		Wall(Cell * cell);
		bool isMovable(std::string type);
};

#endif