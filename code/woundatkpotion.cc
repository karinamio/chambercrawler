#include "potion.h"
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
// decrease atk by 5
}

WoundAtkPotion::~WoundAtkPotion() {
}