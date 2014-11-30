#include "plaincell.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "entity.h"
#include "tile.h"
#include "character.h"
using namespace std;

bool PlainCell::movable(Character * character){
	return false;
}

bool PlainCell::collectable(Character * character){
	if(cellObject){
		return cellObject->collectable();
	}
	return false;
	
}
void PlainCell::collect(Character * character){
	if(cellObject){
		// cellObject->collect(character);
	}
}
Cell *PlainCell::neighbourMovable(Character* character, string direction){
	Cell *neighbour = NULL;
	// cout<<"x: "<< x<<endl;
	// cout<<"y: "<< y<<endl;
	for (int i = 0; i < numNeighbours; i++){
		
		// cout<<"x: "<<i<<"  "<< neighbours[i]->getX()<<endl;
		// cout<<"y: "<<i<<"  "<< neighbours[i]->getY()<<endl;
		if (direction == "no"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}	
			}
		}
		else if (direction == "so"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ea"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "we"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "ne"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "nw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y-1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "se"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
		else if (direction == "sw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y+1){
				if (neighbours[i]->movable(character)){
					neighbour = neighbours[i];
				}
			}
		}
	}
	return neighbour;
}

<<<<<<< HEAD
Cell * PlainCell::getNeighbour(Character * character, string direction) {
	Cell * potionCell = NULL;
	for (int i = 0; i < numNeighbours; i++){
		if (direction == "no"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y-1){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "so"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y+1){	
				potionCell = neighbours[i];
			}
		}
		else if (direction == "ea"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "we"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "ne"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y-1){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "nw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y-1){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "se"){
			if (neighbours[i]->getX() == x+1 && neighbours[i]->getY() == y+1){
				potionCell = neighbours[i];
			}
		}
		else if (direction == "sw"){
			if (neighbours[i]->getX() == x-1 && neighbours[i]->getY() == y+1){
				potionCell = neighbours[i];
			}
		}
	}
	return potionCell;
}

Cell *PlainCell::neighbourAttackable(Character* character, string direction){
	Cell *neighbour = NULL;
	// cout<<"x: "<< x<<endl;
	// cout<<"y: "<< y<<endl;
	for (int i = 0; i < numNeighbours; i++){
		
		// cout<<"x: "<<i<<"  "<< neighbours[i]->getX()<<endl;
		// cout<<"y: "<<i<<"  "<< neighbours[i]->getY()<<endl;
		if (direction == "no"){
			if (neighbours[i]->getX() == x && neighbours[i]->getY() == y-1){
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
				if (neighbours[i]->cellObject && neighbours[i]->cellObject->attackable()){
					neighbour = neighbours[i];
				}	
			}
		}

	}
	return neighbour;
}

bool PlainCell::attackable() {
	return false;
}
bool PlainCell::useable() {
	return false;
}
Cell * PlainCell::playerInRange() {
	// 	cout<<"x: "<< x<<endl;
	// cout<<"y: "<< y<<endl;

	for (int i = 0; i < numNeighbours; i++){
		// 		cout<<"x: "<<i<<"  "<< neighbours[i]->getX()<<endl;
		// cout<<"y: "<<i<<"  "<< neighbours[i]->getY()<<endl;
		if (neighbours[i]->cellObject){
			if(neighbours[i]->cellObject->isPlayer()){
				return neighbours[i];
			}
		}
		
	}
	return NULL;
}

Cell * PlainCell::randomMoveableCell() {
	srand(time(NULL));
	int random;
	bool canMove = false;
	int neighbourCount = 0;
	Cell *moveableNeighbour = NULL;
	while (canMove == false && neighbourCount < numNeighbours){
		random = rand() % numNeighbours;
		if (neighbours[random]->getEntity()){
			canMove = neighbours[random]->getEntity()->takesSpace();
			moveableNeighbour = neighbours[random];
		}
		else{
			canMove = neighbours[random]->movable();
			moveableNeighbour = neighbours[random];
		}
		neighbourCount ++;
		
	}

	return moveableNeighbour;
}

PlainCell::~PlainCell() {

}
bool PlainCell::movable(){
	return false;
}
PlainCell::PlainCell(Map* textMap, int x, int y) {
	this->cellObject = NULL;
	this->textMap = textMap;
	this->x= x;
	this->y = y;
	this->numNeighbours = 0;
	this->neighbours = new Cell* [8];
}

void PlainCell::addNeighbour(Cell *neighbour) {
	neighbours[numNeighbours] = neighbour;
	++ numNeighbours;
}


void PlainCell::setEntity(Entity * entity) {
	cellObject = entity;
	if(entity){
		textMap->notify(y,x,entity->identify());
	}

}
void PlainCell::use() {
	// cellObject->use(character);
}

char PlainCell::getSelf(){
	return 'p';
}

Map* PlainCell::getTextMap(){

	return textMap;
}