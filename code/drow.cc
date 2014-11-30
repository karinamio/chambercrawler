#include "entity.h"
#include "player.h"
#include "character.h"
#include "drow.h"

using namespace std;

Drow::Drow() {
	HP = 150;
	maxHP = 150;
	Atk = 25;
	Def = 15;
	gold = new Gold;
	info = Board->info;
	type = "Drow";
	instance = Player->instance;
}


void Drow::usePotion() {
	// all potions have their effect magnified by 1.5
}

