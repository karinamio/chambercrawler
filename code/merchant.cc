#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "merchant.h"
#include <time.h>
#include <cstdlib>

using namespace std;

Merchant::Merchant(Map *textMap, int ID, Floor * currentFloor) {
	hostile = false;
	HP = 30;
	Atk = 70;
	Def = 5;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Merchant";
	self = 'M';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
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