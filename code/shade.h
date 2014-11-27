#ifndef __SHADE_H__
#define __SHADE_H__

class Shade : public Player {
public:
	Shade();
	int score();
	void attack(Enemy * enemy);
	void attackBy(Player * player);
	~Shade();
};

#endif