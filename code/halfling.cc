#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "halfling.h"

using namespace std;

Halfling::Halfling() {
	HP = 100;
	Atk = 15;
	Def = 20;
	gold = ;
	info = Board->info;
	type = "Halfling";
}

// has a 50% to beguile the player character and cause them to miss

void Halfling::attack() {
}

void Halfling::attackBy() {
}
