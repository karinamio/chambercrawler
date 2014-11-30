#include "entity.h"
#include "player.h"
#include "character.h"
#include "goblin.h"

using namespace std;

Goblin::Goblin(Info *newInfo, Map* textMap) {
	HP = 110;
	maxHP = 110;
	Atk = 15;
	Def = 20;
	gold = new Gold(10);
	info = newInfo;
	type = "Goblin";
	self = '@';
	this->textMap = textMap;
}

void Goblin::attack() {
	// steals 5 gold from every slain enemy
}

void Goblin::attackBy() {

}