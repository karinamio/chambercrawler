#ifndef __DWARF_H__
#define __DWARF_H__

class Dwarf : public Enemy {
public:
	Dwarf();
	void attack(Player * player);
	void attackBy(Player * player);
	~Dwarf();
};

#endif