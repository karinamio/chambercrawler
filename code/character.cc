#include "entity.h"
#include "character.h"
#include "gold.h"
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

int Character::getDef() {
	return Def;
}

int Character::getAtk() {
	return Atk;
}

Character::~Character() {
	// delete gold;
}
#include "gold.h"
#include <iostream>
using namespace std;
void Character::addGold(int i){
	this->gold->addGold(i);
}	
int Character::getValue(){
	return -1;
}
void Character::move(std::string nothing){

}
void Character::move(){

}
void Character::collect(Entity * a){
cout<<"fk me"<<endl;
}