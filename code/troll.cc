#include "entity.h"
#include "player.h"
#include "character.h"
#include "troll.h"

using namespace std;

Troll::Troll(Info *newInfo, Map* textMap) {
	HP = 120;
	maxHP = 120;
	Atk = 25;
	Def = 15;
	gold = new Gold(10);
	info = newInfo;
	type = "Troll";
	this->textMap = textMap;
}

void Troll::endTurn() {
	if (HP + 5 > maxHP) {
		HP = maxHP;
	}
	else {
		HP = HP + 5;
	}
}

void Troll::attack(Enemy * enemy) {
}

void Troll::attackBy(Player * player) {
}

void Troll::endTurn() {
	// regains 5 hp every turn
}