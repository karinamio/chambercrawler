#include "potion.h"
#include "character.h"
#include "woundatkpotion.h"

using namespace std;

WoundAtkPotion::WoundAtkPotion() {
	HP = 0;
	Atk = -5;
	Def = 0;
	permanent = false;
	self = 'P';
}

void WoundAtkPotion::used(Character * character) {
	character->atk(Atk);
}

WoundAtkPotion::~WoundAtkPotion() {
}