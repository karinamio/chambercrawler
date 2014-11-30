#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "human.h"
#include "gold.h"
using namespace std;

Human::Human() {
	HP = 140;
	Atk = 20;
	Def = 20;
	gold = new Gold(5);
	type = "Human";
	self = 'H';
}

void Human::defeated() {
	// drops two piles of normal gold
}

Human::~Human(){

}