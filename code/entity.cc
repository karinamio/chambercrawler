#include "entity.h"
#include "character.h"

using namespace std;

int Entity::random(int upper) {
	srand (time(NULL));
	int random = rand() % upper;
	return random;
}

bool Entity::takesSpace() {
	return true;
}
bool Entity::isGold(){
	return false;
}
bool Entity::takesSpace(Character* character) {
	return true;
}

bool Entity::isPlayer() {
	return false;
}

Entity::~Entity() {
}

char Entity::identify(){
	return self;
}

bool Entity::useable(){
	return false;
}