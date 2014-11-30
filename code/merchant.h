#ifndef __MERCHANT_H__
#define __MERCHANT_H__
#include "enemy.h"
class Merchant : public Enemy {
protected:
	bool hostile;
public:
	Merchant();
	void defeated();
	void attack(Player * player);
	void attackBy(Player * player);
	~Merchant();
};

#endif