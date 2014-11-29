#ifndef __WOUNDATKPOTION_H__
#define __WOUNDATKPOTION_H__

class WoundAtkPotion: public Potion {
public:
	WoundAtkPotion();
	void used(Character * character);
	~WoundAtkPotion();
};

#endif
