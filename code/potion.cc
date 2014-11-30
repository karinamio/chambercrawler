#include "potion.h"

using namespace std;

Item * Potion::createPotion() {
	int random = random(6);
	Item *newPotion;
	if (random == 0){
		newPotion = new BoostAtkPotion;
		return newPotion;
	}
	else if (random == 1){
		newPotion = new BoostDefPotion;
		return newPotion;
	}
	else if (random == 2){
		newPotion = new PoisonHealthPotion;
		return newPotion;
	}
	else if (random == 3){
		newPotion = new RestoreHealthPotion;
		return newPotion;
	}
	else if (random == 4){
		newPotion = new WoundAtkPotion;
		return newPotion;
	}
	else if (random == 5){
		newPotion = new WoundDefPotion;
		return newPotion;
	}
	return NULL;
}

Potion::~Potion() {
	
}

bool Potion::useable(){
	return true;
}