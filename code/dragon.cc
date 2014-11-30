#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "dragon.h"

using namespace std;

Dragon::Dragon(Map *textMap, int ID, Floor * currentFloor) {
	HP = 150;
	Atk = 20;
	Def = 20;
	gold = new Gold(6);
	type = "Dragon";
	self = 'D';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

void Dragon::move() {
	// do nothing, stays in one spot
}

void Dragon::defeated() {

}

void Dragon::attack() {
}

void Dragon::attackBy() {
}
