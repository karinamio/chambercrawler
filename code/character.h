#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <string>
class Gold;
class Info;
class Floor;

class Character : public Entity {
protected:
	int HP;
	int Atk;
	int Def;
	Gold * gold;
	Info * info;
	std::string type;
	Floor *floor;
public:
	virtual void move() = 0;
	virtual void attack(Character*) = 0;
	virtual void attackBy(Character*) = 0;
	virtual bool isPlayer();
	virtual void defeated() = 0;
	virtual void endTurn() = 0;
	virtual void moveOut(Cell * cell) = 0;
	virtual int getDef() = 0;
	virtual int getAtk() = 0;
	virtual ~Character();
};

#endif