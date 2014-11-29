#ifndef __DOOR_H__
#define __DOOR_H__

#include "cell.h"

class Door : public CellDecorator {
	protected:
		static char self = '+';
		Cell * cell;
	public:
		Door(Cell * cell);
		bool movable(Character * character);
};

#endif