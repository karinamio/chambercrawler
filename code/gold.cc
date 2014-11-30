#include "gold.h"
#include <time.h>
#include <cstdlib>
// #include "dragonhoard.h"

using namespace std;

Gold::Gold(int i){
	if (i == 0){
		value = 2;
		type = "normal";
	}
	else if (i == 1){
		value = 1;
		type = "small";
	}
	else if (i == 4){
		value = 4;
		type = "merchant";
	}
	else if (i == 5){
		value = 4;
		type = "double normal";
	}
	else if (i == 10){
		value = 0;
		type = "player";
	}
	self = 'G';
}
bool Gold::takesSpace() {
	return false;
}

bool Gold::takesSpace(Character * character) {
	// if (character->moveOut()) {
	// 	return false;
	// }
		return true;
}

bool Gold::collectable(){
	return true;
}

void Gold::collect(Character *player) {
	// player->collect(value);
}

Item * Gold::createGold() {
	srand(time(NULL));
	int random = rand()%3;
	if (random == 2) {
		// Item * newGold = new DragonHoard();
		// return newGold;
	}
	else {
		Item * newGold = new Gold(random);
		return newGold;
	}
}

void Gold::addGold(int amount) {
	value += amount;
}

int Gold::getValue(){
	return value;
}