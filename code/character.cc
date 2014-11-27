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

void Character::move() {

}

void Character::attack() {

}

void Character::defeated() {

}

void Character::endTurn() {

}

void Character::moveOut(Cell * cell) {

}

int Character::getDef() {
	return Def;
}

int Character::getAtk() {
	return Atk;
}

Character::~Character() {
	delete gold;
	delete info;
}