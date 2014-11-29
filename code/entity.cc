#include "entity.h"
int Entity::random(int upper){
	srand (time(NULL));
	int random = rand() % upper;
	return random;
}
bool Entity::takesSpace(){
	return true;
}
bool Entity::isPlayer(){
	return false;
}
Entity::~Entity(){

}