#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "dwarf.h"

using namespace std;

Dwarf::Dwarf() {
	HP = 100;
	Atk = 20;
	Def = 30;
	gold = ;
	info = Board->info;
	type = "Dwarf";
}

void Dwarf::attack() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}

void Dwarf::attackBy() {
	// vampirse are allergic to dwaves, lose 5hp rather than gain
}
