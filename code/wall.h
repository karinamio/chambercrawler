#ifndef __WALL_H__
#define __WALL_H__

#include "cell.h"
#include "celldecorator.h"
class Wall : public CellDecorator {
	protected:
		Cell * cell;
		char self;
	public:
		Wall(Cell * cell, char i);
		void setEntity(Entity * entity);
		void use();
		char getSelf();
};

#endif