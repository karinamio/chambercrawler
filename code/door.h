#ifndef __DOOR_H__
#define __DOOR_H__

#include "cell.h"

class Door : public CellDecorator {
	protected:
		Cell * cell;
	public:
		Door(Cell * cell);
		bool isMovable(std::string type);
};

#endif