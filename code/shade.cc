#include "entity.h"
#include "player.h"
#include "character.h"
#include "shade.h"
#include "gold.h"
#include "player.h"

using namespace std;

Shade::Shade(Info *newInfo, Map* textMap) {
	HP = 110;
	maxHP = 110;
	Atk = 15;
	Def = 20;
	gold = new Gold(10);
	info = newInfo;
	type = "Shade";
	self = '@';
	this->textMap = textMap;
}

int Shade::score() {
	return (gold->getValue()*1.5);
}

Shade::~Shade() {
}