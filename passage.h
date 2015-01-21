#ifndef __PASSAGE_H__
#define __PASSAGE_H__

#include "cell.h"
#include "celldecorator.h"
class Passage : public CellDecorator {
	protected:
		Cell * cell;
		static char self;
	public:
		Passage(Cell * cell);
		bool movable(Character * character);
		char getSelf();
};

#endif