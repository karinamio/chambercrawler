#include "entity.h"
#include "player.h"
#include "character.h"
#include "shade.h"

using namespace std;

Shade::Shade() {
	HP = 110;
	maxHP = 110;
	Atk = 15;
	Def = 20;
	gold = new Gold;
	info = Board->info;
	type = "Goblin";
	instance = Player->instance;
}

void Shade::attack(Enemy * enemy) {
}

void Shade::attackBy(Player * player) {
}
