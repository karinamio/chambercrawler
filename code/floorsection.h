#ifndef __FLOORSECTION_H__
#define __FLOORSECTION_H__
class Cell;
class FloorSection{
	Cell ** cells;
public:
	virtual ~FloorSection() = 0;
	virtual decorateCells() = 0;
};
#endif
