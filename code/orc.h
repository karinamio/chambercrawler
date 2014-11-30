#ifndef __ORC_H__
#define __ORC_H__

class Orc : public Enemy {
public:
	Orc(Map *, int, Floor*);
	void attack(Player * player);
	void attackBy(Player * player);
	~Orc();
};

#endif