#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "dwarf.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Dwarf::Dwarf(Map *textMap, int ID, Floor * currentFloor) {
	HP = 100;
	Atk = 20;
	Def = 30;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Dwarf";
	self = 'D';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

void Dwarf::attack() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}

void Dwarf::attackBy() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}
