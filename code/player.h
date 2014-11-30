#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "abstractplayer.h"
#include <string>
class Item;
class Info;
class Map;
class Floor;
class Player : public AbstractPlayer {
protected:
	int maxHP;
	Info * info;
	std::string type;
	static Character * instance;
public:
	Player();
	static Character * getPlayer(Info* newInfo, Map* textMap, Floor * currentFloor);
	Character * setPlayer(int,Info*,  Map* textMap, Floor * currentFloor);
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
	void attack(std::string direction);
	~Player();
};

#endif