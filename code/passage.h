#ifndef __PASSAGE_H__
#define __PASSAGE_H__

#include "cell.h"

class Passage : public CellDecorator {
	protected:
		Cell * cell;
	public:
		Passage(Cell * cell);
		bool isMovable(std::string type);
};

#endif