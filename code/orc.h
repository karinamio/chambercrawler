#ifndef __ORC_H__
#define __ORC_H__

class Orc : public Enemy {
public:
	Orc();
	void attack(Player * player);
	void attackBy(Player * player);
	~Orc();
};

#endif