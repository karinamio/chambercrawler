#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "wall.h"

using namespace std;

Wall::Wall(Cell * cell, char i) : CellDecorator(cell), self(i) {
	textMap->notify(y,x,self);
}

bool Wall::isMovable(string type) {
	return false;
}


void Wall::setEntity(Entity * entity){

}
void Wall::use(){
	
}