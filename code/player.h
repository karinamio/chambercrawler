#ifndef __PLAYER_H__
#define __PLAYER_H__

class Player : public Character {
protected:
	int maxHP;
	static Player * instance;
public:
	Player();
	static Player * getInstance;
	virtual void move(string direction);
	virtual void attack(Enemy * enemy);
	virtual void attackBy(Enemy * enemy);
	virtual void defeated();
	virtual void usePotion(string direction);
	virtual void collect();
	virtual int score();
	virtual void heal();
	virtual void endTurn();
	bool isPlayer();
	~Player();
};

#endif