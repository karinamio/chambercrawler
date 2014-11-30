#ifndef __VAMPIRE_H__
#define __VAMPIRE_H__
#include "player.h"
class Vampire : public Player {
public:
	Vampire();
<<<<<<< HEAD
	void heal();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
=======
	void attack(Character * enemy);
	void attackBy(Character * player);
>>>>>>> 974ce75a68c6435f25fa936bf44fc71ea67fc122
	~Vampire();
};

#endif