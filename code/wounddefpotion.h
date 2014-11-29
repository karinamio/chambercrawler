#ifndef __WOUNDDEFPOTION_H__
#define __WOUNDDEFPOTION_H__

class WoundDefPotion: public Potion {
public:
	WoundDefPotion();
	void used(Character * character);
	~WoundDefPotion();
};

#endif
