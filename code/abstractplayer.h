#ifndef __ABSTRACTPLAYER_H__
#define __ABSTRACTPLAYER_H__

#include "character.h"
#include <string>
class Info;
class AbstractPlayer: public Character{
protected:
	int maxHP;
public:
	virtual void move(std::string) = 0;
	// void attack(Character*);
	// void attackBy(Character*);
	// virtual void defeated() = 0;
	// virtual void usePotion(Character*) = 0;
	// virtual void collect() = 0;
	virtual int score() = 0;
	virtual void heal(int) = 0;
	virtual void endTurn() = 0;
	 ~AbstractPlayer();
};

#endif
