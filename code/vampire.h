#ifndef __VAMPIRE_H__
#define __VAMPIRE_H__
#include "player.h"
class Vampire : public Player {
public:
	Vampire();
	void heal();
	void attack(Character * enemy);
	void attackBy(Character * player);
	~Vampire();
};

#endif