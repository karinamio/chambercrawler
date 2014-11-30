#ifndef __BOOSTDEF_H__
#define __BOOSTDEF_H__

#include "enhancement.h"

#include <string>

class Player;
class BoostDef : public Enhancement {
	public:
		BoostDef(AbstractPlayer * player, int Atk, int Def);
		int getDef();
		~BoostDef();
};

#endif