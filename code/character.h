#ifndef __CHARACTER_H__
#define __CHARACTER_H__

class Character : public Entity {
protected:
	int HP;
	int Atk;
	int Def;
	Gold * gold;
	Info * info;
	string type;
public:
	virtual void move() = 0;
	virtual void attack() = 0;
	virtual void defeated() = 0;
	virtual void endTurn() = 0;
	virtual void moveOut(Cell * cell) = 0;
	virtual int getDef() = 0;
	virtual int getAtk() = 0;
	~Character();
};

#endif