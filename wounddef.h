#ifndef __WOUNDDEF_H__
#define __WOUNDDEF_H__

#include "enhancement.h"

#include <string>

class Player;
class WoundDef : public Enhancement {
	public:
		WoundDef(AbstractPlayer * player, int Atk, int Def);
		int getDef();
		~WoundDef();
};

#endif