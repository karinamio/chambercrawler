#include "entity.h"
#include "player.h"
#include "character.h"
#include "shade.h"
#include "gold.h"
#include "floor.h"
using namespace std;

Shade::Shade(Info *newInfo, Map* textMap, Floor * currentFloor) {
	HP = 110;
	maxHP = 110;
	Atk = 150;
	Def = 20;
	gold = new Gold(10);
	info = newInfo;
	type = "Shade";
	self = '@';
	this->textMap = textMap;
	this->currentFloor = currentFloor;

}
int Shade::score() {
	return (gold->getValue()*1.5);
}

Shade::~Shade(){

}