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
#include <sstream>
#include "info.h"
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

void Player::setAtk(int amount) {
	Atk = amount;
}

void Player::setDef(int amount) {
	Def = amount;
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
		location->moved(this);

	info->notify("Action", "moved");
	}
	else{
		info->notify("Action", "can't moved");
	}

}

void Player::attack(string direction){
	Cell* cell;
	cell=location->neighbourAttackable(this, direction);
	if (cell) {

		attack(dynamic_cast<Character *>(cell->cellObject));
		
	}
	else{
		info->notify("Action", "can't attack");
	}
}

bool Player::isPlayer() {
	return true;
}
void Player::attack(Character* enemy) {
	enemy->attackBy(this);
}

void Player::attackBy(Character* enemy) {
	HP -= ceil((100.0/(100.0+this->getDef()))*enemy->getAtk());
	if (HP <= 0){
		this->Player::defeated();
	}
	stringstream ss;
	ss << HP;
	string str = ss.str();
	info->notify("HP", str);
	
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
	stringstream ss;
	ss << collectGold->getValue();
	string str = ss.str();
	string s = "Collected " + str + " gold!";
	info->notify("Action", s);

	stringstream ss2;
	ss2 << this->gold->getValue();
	str = ss2.str();
	info->notify("Gold", str);
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

	stringstream ss;
	ss << HP;
	string str = ss.str();
	info->notify("HP", str);
	info->notify("Action", "Used a potion");
}

void Player::def(int amount) {
	if (amount > 0) {
		Def += amount;
	} else {
		if (Def + amount <= 0) {
			Def = 0;
		} else {
			Def += amount;
		}
	}

	stringstream ss;
	ss << Def;
	string str = ss.str();
	info->notify("Def", str);
	info->notify("Action", "Used a potion for defense.");
}

void Player::atk(int amount) {
	if (amount > 0) {
		Atk += amount;
	} else {
		if (Atk + amount <= 0) {
			Atk = 0;
		} else {
			Atk += amount;
		}
	}

	stringstream ss;
	ss << Atk;
	string str = ss.str();
	info->notify("Atk", str);
	info->notify("Action", "Used a potion for attack.");
}

void Player::endTurn() {

}

Player::~Player() {
	delete instance;
}