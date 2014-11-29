#include "entity.h"
#include "character.h"

using namespace std;

bool Character::takesSpace() {
	return true;
}

bool Character::attackable() {
	return true;
}

bool Character::collectable() {
	return false;
}
bool Character::isPlayer(){
	return false;
}

void Character::endTurn() {

}



int Character::getDef() {
	return Def;
}

int Character::getAtk() {
	return Atk;
}

Character::~Character() {
	delete gold;
}