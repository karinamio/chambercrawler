#ifndef __ELF_H__
#define __ELF_H__
#include "enemy.h"
class Elf : public Enemy {
public:
	Elf();
	void attack(Character * player);
	void attackBy(Character * player);
	~Elf();
};

#endif