#include "potion.h"
#include "boostdefpotion.h"

using namespace std;

BoostDefPotion::BoostDefPotion() {
	HP = 0;
	Atk = 0;
	Def = 5;
	permanent = false;
}

void BoostDefPotion::used(Character * character) {
// increase def by 5
}

BoostDefPotion::~BoostDefPotion() {
}