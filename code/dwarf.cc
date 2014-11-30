#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "dwarf.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Dwarf::Dwarf() {
	HP = 100;
	Atk = 20;
	Def = 30;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Dwarf";
	self = 'D';
}

void Dwarf::attack() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}

void Dwarf::attackBy() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}
