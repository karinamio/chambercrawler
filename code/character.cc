#include "entity.h"
#include "character.h"
#include "gold.h"
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
	// delete gold;
}

void Character::addGold(int i){
	this->gold->addGold(i);
}	
int Character::getValue(){
	return -1;
}
void Character::move(){

}