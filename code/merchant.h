#ifndef __MERCHANT_H__
#define __MERCHANT_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Merchant : public Enemy {
protected:
	static bool hostile;
public:
<<<<<<< HEAD
	Merchant(Map *textMap, int ID, Floor * currentFloor,Info* info);
	void attackBy(Character *player);
	bool isHostile();
=======
	Merchant(Map *, int, Floor*);
	void defeated();
	void attack(Player * player);
	void attackBy(Player * player);
>>>>>>> 8b4698ee024c52bc0c7dde64574eec424deb157c
	~Merchant();
};

#endif