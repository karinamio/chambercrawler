#ifndef __GOBLIN_H__
#define __GOBLIN_H__

class Goblin : public Player {
public:
	Goblin();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Goblin();
};

#endif