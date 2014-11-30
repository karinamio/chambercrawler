#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "dragon.h"

using namespace std;

Dragon::Dragon() {
	HP = 150;
	Atk = 20;
	Def = 20;
	gold = new Gold(6);
	info = Board->info;
	type = "Dragon";
}

void Dragon::move() {
	// do nothing, stays in one spot
}

void Dragon::defeated() {

}

void Dragon::attack() {
}

void Dragon::attackBy() {
}
