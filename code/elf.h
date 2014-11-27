#ifndef __ELF_H__
#define __ELF_H__

class Elf : public Enemy {
public:
	Elf();
	void attack(Player * player);
	void attackBy(Player * player);
	~Elf();
};

#endif