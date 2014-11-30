#include "entity.h"
#include "character.h"
#include "player.h"
#include "shade.h"
#include "vampire.h"
#include "troll.h"
#include "goblin.h"
#include "drow.h"
#include "gold.h"
#include "floor.h"
#include "wall.h"
#include "stair.h"
#include "tile.h"
#include "passage.h"
#include "door.h"
#include "item.h"
#include <string>
#include <math.h>
#include <iostream>

using namespace std;



Character * Player::instance = NULL;

Player::Player(){
	
}

Character * Player::getPlayer(Info* newInfo, Map* textMap) {
	if (!instance) {
		instance = new Shade(newInfo, textMap);
	}
	return instance;
}

Character * Player::setPlayer(int i, Info* newInfo, Map* textMap) {
	if (i == 0){
		instance = new Shade(newInfo, textMap);
	}
	// else if (i == 1){
	// 	instance = new Vampire;
	// }
	// else if (i == 2){
	// 	instance = new Troll;
	// }
	// else if (i == 3){
	// 	instance = new Goblin;
	// }
	// else if (i == 4){
	// 	instance = new Drow;
	// }
	return instance;
}

bool Player::moveOut(Cell * cell) {
	return true;
}

void Player::move(string direction) {
	// find cell from direction
	Cell* cell;
	cell=location->neighbourMovable(this, direction);
	if (cell) {
		if(cell->getEntity() && cell->getEntity()->collectable()){
			this->collect(cell->getEntity());
		}
		cell->setEntity(this);
		location->setEntity(NULL);
		location->cellObject=NULL;
		textMap->notify(location->getY(),location->getX(),location->getSelf());
		location = cell;
		cout<<"moved"<<endl;
	}
	else{
		cout<<"cant move"<<endl;
	}

}

bool Player::isPlayer() {
	return true;
}
void Player::attack(Character* enemy) {
	enemy->attackBy(this);
}

void Player::attackBy(Character* enemy) {
	HP -= ceil((100/(100+this->getDef()))*enemy->getAtk());
	if (HP <= 0){
		this->defeated();
	}
}

void Player::defeated() {
	floor->playerDied();
}

void Player::usePotion(string direction) {

}

void Player::collect(Entity * collectGold) {
	gold->addGold(collectGold->getValue());
	
	cout<<"collected "<<collectGold->getValue()<<" gold!"<<endl;
	delete collectGold;
}

int Player::score() {
	return gold->getValue();
}

void Player::heal(int healAmount) {
	if ((HP + healAmount) < maxHP ){
		HP += healAmount;
	}
	else {
		HP = healAmount;
	}
}

void Player::endTurn() {

}

Player::~Player() {
	delete instance;
}