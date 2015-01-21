#ifndef __WOUNDATK_H__
#define __WOUNDATK_H__

#include "enhancement.h"

#include <string>

class Player;
class WoundAtk : public Enhancement {
	public:
		WoundAtk(AbstractPlayer * player, int Atk, int Def);
		int getAtk();
		~WoundAtk();
};

#endif