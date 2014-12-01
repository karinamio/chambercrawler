#ifndef __MERCHANT_H__
#define __MERCHANT_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Merchant : public Enemy {
protected:
	static bool hostile;
public:

	Merchant(Map *textMap, int ID, Floor * currentFloor,Info* info);
	void attackBy(Character *player);
	bool isHostile();

	~Merchant();
};

#endif