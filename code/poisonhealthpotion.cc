#include "potion.h"
#include "character.h"
#include "poisonhealthpotion.h"

#include <iostream>

using namespace std;

PoisonHealthPotion::PoisonHealthPotion() {
	HP = -10;
	Atk = 0;
	Def = 0;
	permanent = true;
	self = 'P';
}

void PoisonHealthPotion::used(Character * character) {
	cout << character->getHP() << endl;
	character->heal(-10);
	cout << "poisoned" << endl;
	cout << character->getHP() << endl;
}

PoisonHealthPotion::~PoisonHealthPotion() {

}