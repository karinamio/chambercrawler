#include "enhancement.h"
#include "woundatk.h"

WoundAtk::WoundAtk(AbstractPlayer * player, int Atk, int Def) : player(player), Atk(-5), Def(0) {};

int WoundAtk::getAtk() {
	player->Atk += Atk;
	return player->Atk;
}