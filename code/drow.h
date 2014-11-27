#ifndef __DROW_H__
#define __DROW_H__

class Drow : public Player {
public:
	Drow();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	void usePotion(string direction);
	~Drow();
};

#endif