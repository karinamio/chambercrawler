#include "cell.h"
#include <iostream>
using namespace std;

Cell::~Cell(){
}

int Cell::getX(){
	return x;
}
int Cell::getY(){
	return y;
}
Entity * Cell::getEntity(){
	return cellObject;
}
int Cell::getNumNeighbours(){
	return numNeighbours;
}
Cell** Cell::getNeighbours(){
	return neighbours;
}
Map* Cell::getTextMap(){
	// textMap->print();
	return textMap;
}