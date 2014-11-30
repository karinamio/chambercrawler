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
	gold = new Gold(4);
	info = Board->info;
	type = "Orc";
}

void Merchant::defeated() {

}

void Merchant::attack() {
	if (hostile == false) {
	}
	else {
		enemy->attackBy(this);
	}
}

void Merchant::attackBy() {
	hostile = true;
	HP -= ceil((100/(100+this->getDef()))*enemy->getAtk());
	if (HP <= 0) {
		this->defeated();
	}
}