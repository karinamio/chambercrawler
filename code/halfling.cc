#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "halfling.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Halfling::Halfling(Map *textMap, int ID, Floor * currentFloor) {
	HP = 100;
	Atk = 15;
	Def = 20;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Halfling";
	self = 'L';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

// has a 50% to beguile the player character and cause them to miss

void Halfling::attack() {
}

void Halfling::attackBy() {
}
