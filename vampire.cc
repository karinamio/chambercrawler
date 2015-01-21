#include "entity.h"
#include "player.h"
#include "character.h"
#include "vampire.h"
#include <climits>

using namespace std;

Vampire::Vampire(Info *newInfo, Map* textMap, Floor * currentFloor) {
	HP = 50;
	maxHP = INT_MAX;
	Atk = 25;
	Def = 15;
	gold = new Gold(10);
	info = Board->info;
	type = "Vampire";
	self = '@';
	this->textMap = textMap;
	this->currentFloor = currentFloor;
}

void Vampire::heal() {
	HP = HP + 5;
}

void Vampire::attack(Enemy * enemy) {
	heal();
	enemy.attackBy(this);
}

void Vampire::attackBy(Player * player) {
}
