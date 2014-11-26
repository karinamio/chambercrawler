#ifndef __CELL_H__
#define __CELL_H__

class Cell {
protected:
	Entity * cellObject;
	Map * textMap;
	Cell ** neighbours;
	int x;
	int y;
public:
	virtual bool movable(Character * character);
	virtual void notify (int x, int y, char update);
	virtual bool attackable();
	virtual void setEntity(Entity * entity);
	virtual bool useable();
	virtual void use();
};

#endif
