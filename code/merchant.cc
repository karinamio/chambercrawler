#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "merchant.h"

using namespace std;

Merchant::Merchant() {
	hostile = false;
	HP = 30;
	Atk = 70;
	Def = 5;
	gold = ;
	info = Board->info;
	type = "Orc";
}

void Merchant::defeated() {

}

void Merchant::attack() {
	if (hostile == false) {
		// do nothing
	}
	else {
		// attack
	}
}

void Merchant::attackBy() {
	hostile = true;
	// get attacked
}
