#include "potion.h"
#include "character.h"
#include "boostatkpotion.h"

using namespace std;

BoostAtkPotion::BoostAtkPotion() {
	HP = 0;
	Atk = 5;
	Def = 0;
	permanent = false;
	self = 'P';
}

void BoostAtkPotion::used(Character * character) {
	character->atk(Atk);
}

BoostAtkPotion::~BoostAtkPotion() {

}