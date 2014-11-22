#ifndef __FLOORSECTION_H__
#define __FLOORSECTION_H__
class Cell;

class FloorSection{
	Cell ** cells;
public:
	virtual decorateCells() = 0;
	virtual ~FloorSection() = 0;
};

#endif
