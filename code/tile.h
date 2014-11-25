#ifndef __TILE_H__
#define __TILE_H__

#include "cell.h"

class Tile : public CellDecorator {
	protected:
		Cell * cell;
	public:
		Tile(Cell * cell);
		void moved();
		bool isMovable(std::string type);
		void changeEntity(Entity * entity);
};

#endif