#include "entity.h"
#include "enemy.h"
#include "character.h"
#include "merchant.h"
#include "gold.h"
#include "map.h"
#include "info.h"
#include <time.h>
#include <sstream>
#include <cstdlib>
#include <math.h>
#include "info.h"
using namespace std;

bool Merchant::hostile;
Merchant::Merchant(Map *textMap, int ID, Floor * currentFloor, Info* info) {

	hostile = false;
	HP = 30;
	Atk = 70;
	Def = 5;
	srand(time(NULL));
	gold = new Gold(rand()%2);
	type = "Merchant";
	self = 'M';
	this->textMap = textMap;
	this->ID = ID;
	this->currentFloor = currentFloor;

	this->info = info;

}


bool Merchant::isHostile(){
	return hostile;
}


void Merchant::attackBy(Character *player) {
	hostile = true;
	stringstream ss;
	ss << HP;
	HP -= ceil((100.0/(100.0+this->getDef()))*player->getAtk());
	stringstream ss2;
	ss2 << HP;
	string str = ss.str();
	string str2 = ss2.str();
	string s = "Attack Enemy, Enemy starting health: " + str + " Enemy ending health: "+str2;
		if (HP <= 0){
			s +=" Enemy Died!";
			player->collect(dynamic_cast<Entity *>(gold));
			this->Enemy::defeated();

		}

	info->notify("Action", s);
}
Merchant::~Merchant(){

}