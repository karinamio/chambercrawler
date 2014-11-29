#ifndef __PLAYER_H__
#define __PLAYER_H__

class Player : public AbstractPlayer {
protected:
	int maxHP;
	static Player * instance;
public:
	Player();
	static Player * getPlayer();
	static Player * setPlayer(int);
	virtual void move(string direction);
	bool moveOut(Cell *);
	void attack(Character*);
	void attackBy(Character*);
	void defeated();
	void usePotion(string direction);
	void collect(item *);
	int score();
	void heal();
	void endTurn();
	bool isPlayer();
	~Player();
};

#endif