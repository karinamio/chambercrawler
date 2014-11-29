#include <string>

#include "cell.h"
#include "celldecorator.h"
#include "wall.h"

using namespace std;

Wall::Wall(Cell * cell) : CellDecorator(cell) {}

bool Wall::isMovable(string type) {
	return false;
}


void Wall::setEntity(Entity * entity){

}
void Wall::use(){
	
}