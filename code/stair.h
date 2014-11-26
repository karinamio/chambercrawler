#ifndef __STAIR_H__
#define __STAIR_H__

#include "cell.h"

class Board;

class Stair : public CellDecorator {
	protected:
		Cell * cell;
		Board * board;
	public:
		Stair(Cell * cell);
		void moved();
		bool isMovable(std::string type);
};

#endif