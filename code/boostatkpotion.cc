#include "potion.h"
#include "boostatkpotion.h"

using namespace std;

BoostAtkPotion::BoostAtkPotion() {
	HP = 0;
	Atk = 5;
	Def = 0;
	permanent = false;
}

void BoostAtkPotion::used(Character * character) {
// increase atk by 5
}

BoostAtkPotion::~BoostAtkPotion() {

}