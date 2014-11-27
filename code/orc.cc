#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "orc.h"

using namespace std;

Orc::Orc() {
	HP = 180;
	Atk = 30;
	Def = 25;
	gold = ;
	info = Board->info;
	type = "Orc";
}

void Elf::attack() {
	// does 50% more damage to goblins
}

void Elf::attackBy() {
}
