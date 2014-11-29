#include "potion.h"
#include "poisonhealthpotion.h"

using namespace std;

PoisonHealthPotion::PoisonHealthPotion() {
	HP = -10;
	Atk = 0;
	Def = 0;
	permanent = true;
}

void PoisonHealthPotion::used(Character * character) {
// lose up to 10 hp (cannot fall below 0 hp)
}

PoisonHealthPotion::~PoisonHealthPotion() {

}