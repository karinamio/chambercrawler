#include "potion.h"
#include "boostatkpotion.h"
#include "boostdefpotion.h"
#include "poisonhealthpotion.h"
#include "restorehealthpotion.h"
#include "woundatkpotion.h"
#include "wounddefpotion.h"

using namespace std;

Item * Potion::createPotion() {
	int number = random(6);
	Item *newPotion;
	if (number == 0){
		newPotion = new BoostAtkPotion;
		return newPotion;
	}
	else if (number == 1){
		newPotion = new BoostDefPotion;
		return newPotion;
	}
	else if (number == 2){
		newPotion = new PoisonHealthPotion;
		return newPotion;
	}
	else if (number == 3){
		newPotion = new RestoreHealthPotion;
		return newPotion;
	}
	else if (number == 4){
		newPotion = new WoundAtkPotion;
		return newPotion;
	}
	else if (number == 5){
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

bool Potion::collectable(){
	return false;
}