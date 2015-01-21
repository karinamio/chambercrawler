#include "entity.h"
#include "character.h"
#include "gold.h"

#include <iostream>
#include <string>

using namespace std;

bool Character::takesSpace() {
	return true;
}

bool Character::attackable() {
	return true;
}
void Character::attack(string direction){

}
bool Character::collectable() {
	return false;
}
bool Character::isPlayer(){
	return false;
}

void Character::endTurn() {
}

void Character::usePotion(string direction) {
}

int Character::getDef() {
	return Def;
}

int Character::getAtk() {
	return Atk;
}

int Character::getHP() {
	return HP;
}

void Character::heal(int amount) {

}

void Character::atk(int amount) {

}

void Character::def(int amount) {

}

void Character::setAtk(int amount) {

}

void Character::setDef(int amount) {

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

void Character::collect(Entity * a){
	cout<<"fk me"<<endl;
}
void Character::move(std::string){

}