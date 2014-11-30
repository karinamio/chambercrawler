#ifndef __DRAGON_H__
#define __DRAGON_H__
#include "enemy.h"
class Dragon : public Enemy {
private:
	Gold * hoard;
public:
	Dragon();
	void move();
	void defeated();
	void attack(Player * player);
	void attackBy(Player * player);
	~Dragon();
};

#endif