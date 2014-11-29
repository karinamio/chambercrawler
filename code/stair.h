#ifndef __STAIR_H__
#define __STAIR_H__

#include "cell.h"

class Board;

class Stair : public CellDecorator {
	protected:
		Cell * cell;
		Board * board;
		static char self = '/';
	public:
		Stair(Cell * cell);
		void moved(Character *);
		bool movable(Character * character);
};

#endif