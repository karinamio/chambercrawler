#ifndef __TROLL_H__
#define __TROLL_H__

class Troll : public Player {
public:
	Troll();
	void heal();
	void endTurn();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Troll();
};

#endif