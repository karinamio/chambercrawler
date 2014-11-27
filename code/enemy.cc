#include "entity.h"
#include "character.h"
#include "enemy.h"

using namespace std;

void Enemy::move() {
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

Enemy::~Enemy() {
}