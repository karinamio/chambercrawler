#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "elf.h"

using namespace std;

Elf::Elf() {
	HP = 140;
	Atk = 30;
	Def = 10;
	gold = ;
	info = Board->info;
	type = "Elf";
}

void Elf::attack() {
	// double attacks on every race except drow
}

void Elf::attackBy() {
}
