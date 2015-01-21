#ifndef __CHAMBER_H__
#define __CHAMBER_H__
#include <vector>
#include <map>
#include "cell.h"

class Chamber {
	int chamberNumber;
	std::map<Cell*, bool> isCellUsed;
	std::vector<Cell*> cellsInChamber;
	void buildChamber(Cell*[][79]);
public:
	Chamber(int, Cell *[][79]);
	Cell * getRandomCell();
};

#endif