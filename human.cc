#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "human.h"
#include "gold.h"
#include "map.h"

using namespace std;

Human::Human(Map *textMap, int ID, Floor * currentFloor, Info* info) {
	HP = 140;
	Atk = 20;
	Def = 20;
	gold = new Gold(5);
	// info = Board->info;

	type = "Human";
	self = 'H';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
	this->info = info;
}

void Human::defeated() {
	// drops two piles of normal gold
}

Human::~Human(){

}
