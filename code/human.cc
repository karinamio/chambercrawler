#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "human.h"

using namespace std;

Human::Human() {
	HP = 140;
	Atk = 20;
	Def = 20;
	gold = ;
	info = Board->info;
	type = "Human";
}

void Human::defeated() {
	// drops two piles of normal gold
}

void Human::attack() {

}

void Human::attackBy() {

}
