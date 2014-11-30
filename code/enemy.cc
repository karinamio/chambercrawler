#include "entity.h"
#include "character.h"
#include "enemy.h"
#include "floor.h"
#include "human.h"
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include "map.h"
#include "player.h"
#include "gold.h"
using namespace std;

Character * createEnemy(Map * textMap, int id, Floor* currentFloor) {
	srand(time(NULL));
	int random = rand() % 18;
	Character * newEnemy = NULL;
	newEnemy = new Human(textMap, id, currentFloor);
	// if(random < 4){
	// 	newEnemy = new Human;
	// }
	// else if(random < 7){
	// 	newEnemy = new Dwarf;
	// }
	// else if(random < 12){
	// 	newEnemy = new Halfling;
	// }
	// else if(random < 14){
	// 	newEnemy = new Elf;
	// }
	// else if(random < 16){
	// 	newEnemy = new Orc;
	// }
	// else if(random < 18){
	// 	newEnemy = new Merchant;
	// }
	return newEnemy;
}

bool Enemy::hostileEnemy() {
	return true;
}

void Enemy::move() {
	Cell *a = NULL;
	a = location->playerInRange();
	Character * possiblePlayer = NULL;
	if(a){
		possiblePlayer = dynamic_cast<Character *> (a->getEntity());
	}

	Cell * possibleMove = NULL;

	if(possiblePlayer && this->hostileEnemy()) {
		this->attack(possiblePlayer);
	}
	else {
		
		possibleMove = location->randomMoveableCell();
		if (possibleMove) {
			possibleMove->setEntity(this);
			location->setEntity(NULL);
			location->cellObject=NULL;
			textMap->notify(location->getY(),location->getX(),location->getSelf());
			location = possibleMove;
		}
		else {
			cout<<"invalid player move"<<endl;
		}
	}
}

void Enemy::attack(Character * player) {
	cout<<"enemy attack"<<endl;
	player->attackBy(this);
}

void Enemy::attackBy(Character * player) {
		cout<<"Old HP Enemy"<<HP<<endl;
	HP -= ceil((100.0/(100.0+this->getDef()))*player->getAtk());
	cout<<"New HP Enemy"<<HP<<endl;
		if (HP <= 0){
			cout<<"Enemy Died!"<<endl;
			player->collect(dynamic_cast<Entity *>(gold));
			this->Enemy::defeated();

		}
		
}

void Enemy::defeated() {
	currentFloor->enemyDied(ID);
}

bool Enemy::attackable() {
 return true;
}

bool Enemy::moveOut(Cell * cell) {
	return false;
}

Enemy::~Enemy() {

}

Enemy::Enemy(){

}