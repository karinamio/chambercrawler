#ifndef __PASSAGE_H__
#define __PASSAGE_H__

#include "cell.h"

class Passage : public CellDecorator {
	protected:
		Cell * cell;
		static char self = '#';
	public:
		Passage(Cell * cell);
		bool movable(Character * character);
};

#endif