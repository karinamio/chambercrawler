#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "orc.h"
#include "gold.h"
#include "map.h"
#include <time.h>
#include <cstdlib>


using namespace std;

Orc::Orc(Map *textMap, int ID, Floor * currentFloor, Info * info) {
	HP = 180;
	Atk = 30;
	Def = 25;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Orc";
	self = 'O';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;
	this->info = info;
}
	Orc::~Orc(){

	}
// void Orc::attack() {
// 	// does 50% more damage to goblins
// }

// void Orc::attackBy() {
// }