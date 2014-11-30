#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "abstractplayer.h"
#include <string>
class Item;
class Info;
class Player : public AbstractPlayer {
protected:
	int maxHP;
	Info * info;
	std::string type;
	static Character * instance;
public:
	Player();
	static Character * getPlayer(Info* newInfo);
	Character * setPlayer(int,Info*);
	virtual void move(std::string direction);
	bool moveOut(Cell *);
	void attack(Character*);
	void attackBy(Character*);
	void defeated();
	void usePotion(std::string direction);
	void collect(Entity *);
	int score();
	void heal(int);
	void endTurn();
	bool isPlayer();

	~Player();
};

#endif