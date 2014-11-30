#include "potion.h"
#include "character.h"
#include "restorehealthpotion.h"

#include <iostream>

using namespace std;

RestoreHealthPotion::RestoreHealthPotion() {
	HP = 10;
	Atk = 0;
	Def = 0;
	permanent = true;
	self = 'P';
}

void RestoreHealthPotion::used(Character * character) {
	cout << character->getHP() << endl;
	character->heal(10);
	cout << "restored" << endl;
	cout << character->getHP() << endl;
}

RestoreHealthPotion::~RestoreHealthPotion() {

}