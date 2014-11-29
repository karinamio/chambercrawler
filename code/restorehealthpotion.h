#ifndef __RESTOREHEALTHPOTION_H__
#define __RESTOREHEALTHPOTION_H__

class RestoreHealthPotion: public Potion {
public:
	RestoreHealthPotion();
	void used(Character * character);
	~RestoreHealthPotion();
};

#endif
