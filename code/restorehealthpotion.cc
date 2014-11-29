#include "potion.h"
#include "restorehealthpotion.h"

using namespace std;

RestoreHealthPotion::RestoreHealthPotion() {
	HP = 10;
	Atk = 0;
	Def = 0;
	permanent = true;
}

void RestoreHealthPotion::used(Character * character) {
// restores up to 10HP without exceeding maximum prescribed by the race
}

RestoreHealthPotion::~RestoreHealthPotion() {

}