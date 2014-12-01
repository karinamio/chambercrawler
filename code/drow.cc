#include "entity.h"
#include "player.h"
#include "character.h"
#include "drow.h"

using namespace std;

Drow::Drow(Info *newInfo, Map* textMap) {
	HP = 150;
	maxHP = 150;
	Atk = 25;
	Def = 15;
	gold = new Gold(10);
	info = newInfo;
	type = "Drow";
	self = '@';
	this->textMap = textMap;
}


void Drow::usePotion() {
	// all potions have their effect magnified by 1.5
}