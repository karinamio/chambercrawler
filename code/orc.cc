#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "orc.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Orc::Orc(Map *textMap, int ID, Floor * currentFloor) {
	HP = 180;
	Atk = 30;
	Def = 25;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Orc";
	self = 'O';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

void Elf::attack() {
	// does 50% more damage to goblins
}

void Elf::attackBy() {
}