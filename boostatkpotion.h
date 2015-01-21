#ifndef __BOOSTATKPOTION_H__
#define __BOOSTATKPOTION_H__

class BoostAtkPotion: public Potion {
public:
	BoostAtkPotion();
	void used(Character * character);
	~BoostAtkPotion();
};

#endif
