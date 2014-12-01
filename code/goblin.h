#ifndef __GOBLIN_H__
#define __GOBLIN_H__
#include "player.h"
class Goblin : public Player {
public:
	Goblin(Info *, Map*, Floor*);
	void attack(Character * enemy);
	void attackBy(Character * player);
	~Goblin();
};

#endif