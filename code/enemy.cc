#include "entity.h"
#include "character.h"
#include "enemy.h"

#include <time.h>
#include <cstdlib>

using namespace std;

Character * createEnemy() {
	srand(time(NULL));
	int random = rand() % 18;
	Character * newEnemy = NULL;
	if(random < 4){
		newEnemy = new Human;
	}
	else if(random < 7){
		newEnemy = new Dwarf;
	}
	else if(random < 12){
		newEnemy = new Halfling;
	}
	else if(random < 14){
		newEnemy = new Elf;
	}
	else if(random < 16){
		newEnemy = new Orc;
	}
	else if(random < 18){
		newEnemy = new Merchant;
	}
	return newEnemy;
}

bool Enemy::hostileEnemy() {
	return true;
}

void Enemy::move() {
	Character * possiblePlayer = location->playerInRange();
	Cell * possibleMove;
	if(possiblePlayer && this->hostileEnemy()) {
		this.attack(possiblePlayer);
	}
	else {
		possibleMove = location->randomMoveableCell();
		if (possibleMove) {
			possibleMove->setEntity(this);
			location->setEntity(NULL);
			location = possibleMove;
		}
		else {

		}
	}
}

void Enemy::attack(Character * player) {
	player.attackBy(this);
}

void Enemy::attackBy(Character * player) {
	HP -= ceil((100/(100+this.getDef()))*enemy->getAtk());
		if (HP <= 0){
			this.defeated();
		}
}

void Enemy::defeated() {
	floor->enemyDied(chamberID, ID);
}

bool Enemy::attackable() {
 return true;
}

void Enemy::moveOut(Cell * cell) {
	return false;
}

Enemy::~Enemy() {
}