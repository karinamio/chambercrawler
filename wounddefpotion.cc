#include "potion.h"
#include "character.h"
#include "wounddefpotion.h"

using namespace std;

WoundDefPotion::WoundDefPotion() {
	HP = 0;
	Atk = 0;
	Def = -5;
	permanent = false;
	self = 'P';
}

void WoundDefPotion::used(Character * character) {
	character->def(Def);
}

WoundDefPotion::~WoundDefPotion() {
}