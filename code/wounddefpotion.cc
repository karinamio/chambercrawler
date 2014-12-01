#include "potion.h"
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
// decrease def by 5
}

WoundDefPotion::~WoundDefPotion() {
}