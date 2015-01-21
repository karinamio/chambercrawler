#ifndef __BOOSTATK_H__
#define __BOOSTATK_H__

#include "enhancement.h"

#include <string>

class Player;
class BoostAtk : public Enhancement {
	public:
		BoostAtk(AbstractPlayer * player, int Atk, int Def);
		int getAtk();
		~BoostAtk();
};

#endif