#include "entity.h"
#include "player.h"
#include "character.h"
#include "troll.h"

using namespace std;

Troll::Troll() {
	HP = 120;
	maxHP = 120;
	Atk = 25;
	Def = 15;
	gold = new Gold;
	info = Board->info;
	type = "Troll";
	instance = Player->instance;
}

void Troll::attack(Enemy * enemy) {
}

void Troll::attackBy(Player * player) {
}

void Troll::endTurn() {
	// regains 5 hp every turn
}
