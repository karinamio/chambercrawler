#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <string>

#include "entity.h"

class Gold;
class Info;
class Floor;
class Cell;
class entity;
class Character : public Entity {
protected:
	int HP;
	int Atk;
	int Def;
	Gold * gold;
	Info * info;
	std::string type;
	Floor *floor;
	Floor * currentFloor;
public:
	virtual void attack(Character*) = 0;
	virtual void attackBy(Character*) = 0;
	virtual bool isPlayer();
	virtual void defeated() = 0;
	virtual void endTurn();
	virtual bool moveOut(Cell * cell) = 0;
	virtual int getDef();
	virtual int getAtk();
	virtual void collect(Entity *);
	virtual void attack(std::string direction);
	bool attackable();
	bool collectable();
	bool takesSpace();
	void addGold(int);
	int getValue();
	virtual void move(std::string);
	virtual void move();
	virtual ~Character();
};

#endif