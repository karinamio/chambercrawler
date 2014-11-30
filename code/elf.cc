#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "elf.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Elf::Elf() {
	HP = 140;
	Atk = 30;
	Def = 10;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Elf";
	self = 'E';
}

void Elf::attack(Character *enemy) {
	// double attacks on every race except drow
}

void Elf::attackBy(Character *enemy) {
}
