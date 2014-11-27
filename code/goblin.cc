#include "entity.h"
#include "player.h"
#include "character.h"
#include "goblin.h"

using namespace std;

Goblin::Goblin() {
	HP = 110;
	maxHP = 110;
	Atk = 15;
	Def = 20;
	gold = new Gold;
	info = Board->info;
	type = "Goblin";
	instance = Player->instance;
}

void Goblin::attack() {
	// steals 5 gold from every slain enemy
}

void Goblin::attackBy() {

}
