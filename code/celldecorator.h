#ifndef __CELLDECORATOR_H__
#define __CELLDECORATOR_H__

#include "cell.h"

class CellDecorator : public Cell {
	protected:
		Cell * cell;
	public:
		CellDecorator(Cell * cell);
		~CellDecorator();
};

#endif