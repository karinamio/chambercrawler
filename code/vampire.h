#ifndef __VAMPIRE_H__
#define __VAMPIRE_H__

class Vampire : public Player {
public:
	Vampire();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Vampire();
};

#endif