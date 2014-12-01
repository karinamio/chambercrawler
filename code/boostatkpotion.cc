#include "potion.h"
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
	
}

BoostAtkPotion::~BoostAtkPotion() {

}