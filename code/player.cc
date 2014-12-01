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
#include "cell.h"
#include <string>
#include <math.h>
#include "potion.h"
#include <iostream>

using namespace std;

Character * Player::instance = NULL;

Player::Player(){
	
}

Character * Player::getPlayer(Info* newInfo, Map* textMap, Floor* currentFloor) {
	if (!instance) {
		instance = new Shade(newInfo, textMap, currentFloor);
	}
	return instance;
}

Character * Player::setPlayer(int i, Info* newInfo, Map* textMap, Floor* currentFloor) {
	if (i == 0){
		instance = new Shade(newInfo, textMap, currentFloor);
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
		cell->cellObject=this;
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

void Player::attack(string direction){
	Cell* cell;
	cell=location->neighbourAttackable(this, direction);
	if (cell) {
		cout<<"attack"<<endl;
		attack(dynamic_cast<Character *>(cell->cellObject));
		
	}
	else{
		cout<<"cant attack"<<endl;
	}
}

bool Player::isPlayer() {
	return true;
}
void Player::attack(Character* enemy) {
	enemy->attackBy(this);
}

void Player::attackBy(Character* enemy) {
	cout<<"Old HP"<<HP<<endl;
	HP -= ceil((100.0/(100.0+this->getDef()))*enemy->getAtk());
	cout<<"New HP"<<HP<<endl;
	if (HP <= 0){
		this->Player::defeated();
	}
	
}

void Player::defeated() {
	currentFloor->playerDied();
}

void Player::usePotion(string direction) {
	// find cell of player
	Cell * playerCell = location;
	// find potion's cell based on player's cell
	Cell * potionCell = playerCell->getNeighbour(this,direction);
	// // find potion based on cell
	Entity * potion = NULL;
	if (potionCell) {
		potion = potionCell->getEntity();
	}
	// use potion
	if (potion) {
		potion->used(this);
		potionCell->cellObject = NULL;
		textMap->notify(potionCell->getY(), potionCell->getX(), potionCell->getSelf());
	}
	delete potion;
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
	if (healAmount > 0) {
		if ((HP + healAmount) < maxHP ){
			HP += healAmount;
		}
		else {
			HP = maxHP;
		}
	}
	else {
		if ((HP + healAmount) > 0) {
			HP += healAmount;
		}
		else {
			HP = 0;
		}
	}	
}


void Player::def(int amount) {
	if (amount > 0) {
		def += amount;
	} else {
		if (def += amount <= 0) {
			def = 0;
		} else {
			def += amount;
		}
	}
}

void Player::atk(int amount) {
	if (amount > 0) {
		atk += amount;
	} else {
		if (atk += amount <= 0) {
			atk = 0;
		} else {
			atk += amount;
		}
	}
}
void Player::endTurn() {

}

Player::~Player() {
	delete instance;
}