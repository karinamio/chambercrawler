#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "human.h"
#include "gold.h"
#include "map.h"
using namespace std;

Human::Human(Map *textMap, int ID, Floor * currentFloor) {
	HP = 140;
	Atk = 200;
	Def = 20;
	gold = new Gold(5);
	type = "Human";
	self = 'H';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

void Human::defeated() {
	// drops two piles of normal gold
}

Human::~Human(){

}