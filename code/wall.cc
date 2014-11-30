#include <string>
#include <iostream>
#include "cell.h"
#include "celldecorator.h"
#include "wall.h"

using namespace std;
char Wall::getSelf(){
	return self;
}
Wall::Wall(Cell * cell, char i) : CellDecorator(cell), self(i) {
	textMap->notify(y,x,i);
}


void Wall::setEntity(Entity * entity){

}
void Wall::use(){
	
}