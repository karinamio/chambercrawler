#ifndef __TILE_H__
#define __TILE_H__

#include "cell.h"
#include "celldecorator.h"
class Tile : public CellDecorator {
	protected:
		Cell * cell;
		static char self;
	public:
		Tile(Cell * cell);
		bool movable();
		bool movable(Character * character);
		bool attackable();
		bool useable();
		void use();
		char getSelf();
};

#endif