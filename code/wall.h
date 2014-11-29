#ifndef __WALL_H__
#define __WALL_H__

#include "cell.h"

class Wall : public CellDecorator {
	protected:
		Cell * cell;
		static char self = '|';
	public:
		Wall(Cell * cell);
		void setEntity(Entity * entity);
		void use();
};

#endif