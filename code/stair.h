#ifndef __STAIR_H__
#define __STAIR_H__

#include "cell.h"
#include "celldecorator.h"
class Board;

class Stair : public CellDecorator {
	protected:
		Cell * cell;
		Board * board;
		static char self;
	public:
		Stair(Cell * cell, Board *);
		void moved(Character *);
		bool movable(Character * character);
		char getSelf();
};

#endif