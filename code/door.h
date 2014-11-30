#ifndef __DOOR_H__
#define __DOOR_H__

#include "cell.h"
#include "celldecorator.h"
class Door : public CellDecorator {
	protected:
		static char self;
		Cell * cell;
	public:
		Door(Cell * cell);
		bool movable(Character * character);
		char getSelf();
};

#endif