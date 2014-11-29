#include "entity.h"
#include "character.h"
#include "enemy.h"
#include <time.h>
#include <cstdlib>
using namespace std;

Character * createEnemy(){
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

void Enemy::move() {
	Character * possiblePlayer = location->playerInRange();
	Cell * possibleMove;
	if(possiblePlayer){
		possiblePlayer.attackBy(this);
	}
	else{
		possibleMove = location->randomMoveableCell()
		if (possibleMove){
			possibleMove->moved(this);
		}
		else{

		}
	}
	// randomly select chamber
	// randomly select cell from randomly selected chamber
	if (cell->movable("enemy") == true) {
		// move player to new cell
	}
	else {
		// repeat above steps
	}
}

void Enemy::attack(Player * player) {

}

void Enemy::attackBy(Player * player) {

}

void Enemy::defeated() {

}

bool Enemy::attackable() {

}

void Character::moveOut(Cell * cell) {
	return false;
}

Enemy::~Enemy() {
}