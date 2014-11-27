#ifndef __HALFLING_H__
#define __HALFING_H__

class Halfling : public Enemy {
public:
	Halfling();
	void attack(Player * player);
	void attackBy(Player * player);
	~Halfing();
};

#endif