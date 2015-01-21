#include "potion.h"
#include "character.h"
#include "boostdefpotion.h"

using namespace std;

BoostDefPotion::BoostDefPotion() {
	HP = 0;
	Atk = 0;
	Def = 5;
	permanent = false;
	self = 'P';
}

void BoostDefPotion::used(Character * character) {
	character->def(Def);// increase def by 5
}

BoostDefPotion::~BoostDefPotion() {
}