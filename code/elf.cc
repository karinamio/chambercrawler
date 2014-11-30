#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "elf.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Elf::Elf(Map *textMap, int ID, Floor * currentFloor) {
	HP = 140;
	Atk = 30;
	Def = 10;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Elf";
	self = 'E';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
}

void Elf::attack(Character *enemy) {
	// double attacks on every race except drow
}

void Elf::attackBy(Character *enemy) {
}
