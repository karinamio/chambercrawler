#include "entity.h"
#include "character.h"
#include "player.h"
#include "shade.h"
#include "vampire.h"
#include "troll.h"
#include "goblin.h"
#include "drow.h"
#include <string>
#include <math.h>

using namespace std;

Player * Player::instance = NULL;

Player * Player::getPlayer(int i) {
	if (!instance) {
		instance = new Shade;
	}
	return instance;
}

Player * Player::setPlayer(int i) {
	if (i == 0){
		instance = new Shade;
	}
	else if (i == 1){
		instance = new Vampire;
	}
	else if (i == 2){
		instance = new Troll;
	}
	else if (i == 3){
		instance = new Goblin;
	}
	else if (i == 4){
		instance = new Drow;
	}
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
		if(cell->collectable()){
			cell->collect(this);
		}
		cell.setEntity(this);
		location.setEntity(NULL);
		location = cell;
	}
}

bool Player::isPlayer() {
	return true;
}
void Player::attack(Enemy * enemy) {
	enemy.attackBy(this);
}

void Player::attackBy(Enemy * enemy) {
	HP -= ceil((100/(100+this.getDef()))*enemy->getAtk());
	if (HP <= 0){
		this.defeated();
	}
}

void Player::defeated() {
	floor->playerDied();
}

void Player::usePotion(string direction) {

}

void Player::collect(item * collectGold) {
	gold->addGold(collectGold->getValue());
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