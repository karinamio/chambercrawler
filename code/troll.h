#ifndef __TROLL_H__
#define __TROLL_H__
#include "player.h"
class Troll : public Player {
public:
	Troll(Info *, Map*);
	void heal();
	void endTurn();
	void attack(Character * enemy);
	void attackBy(Character * player);
	~Troll();
};

#endif