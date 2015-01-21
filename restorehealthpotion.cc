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
	character->heal(HP);
}

RestoreHealthPotion::~RestoreHealthPotion() {

}