#include "entity.h"
#include "character.h"
#include "player.h"

using namespace std;

Player * Player::instance = 0;

Player * player::getInstance() {
	if (!instance) {
		instance = new Player;
	}
	return instance;
}

void Player::move(string direction) {
	// find cell from direction
	if (cell->movable("player") == true) {
		// move player to new cell
	}
}
bool Player::isPlayer(){
	return true;
}
void Player::attack(Enemy * enemy) {

}

void Player::attackBy(Enemy * enemy) {

}

void Player::defeated() {

}

void Player::usePotion(string direction) {

}

void Player::collect() {

}

void Player::score() {

}

void Player::heal() {

}

void Player::endTurn() {

}

Player::~Player() {
	delete instance;
}