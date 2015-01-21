#include "enhancement.h"
#include "wounddef.h"

WoundDef::WoundDef(AbstractPlayer * player, int Atk, int Def) : player(player), Atk(0), Def(-5) {};

int WoundAtk::getDef() {
	player->Def += Def;
	return player->Def;
}