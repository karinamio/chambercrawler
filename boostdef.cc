#include "enhancement.h"
#include "boostdef.h"

BoostDef::BoostDef(AbstractPlayer * player, int Atk, int Def) : player(player), Atk(0), Def(5) {};

int BoostDef::getDef() {
	player->Def += Def;
	return player->Def;
}