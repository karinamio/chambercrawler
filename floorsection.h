#ifndef __FLOORSECTION_H__
#define __FLOORSECTION_H__
class Cell;

class FloorSection{
	Cell ** cells;
public:
	virtual void decorateCells() = 0;
	virtual ~FloorSection() = 0;
};

#endif
