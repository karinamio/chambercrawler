#include "enhancement.h"
#include "boostatk.h"

BoostAtk::BoostAtk(AbstractPlayer * player, int Atk, int Def) : player(player), Atk(5), Def(0) {};

int BoostAtk::getAtk() {
	AbstractPlayer->attack(Character * character);
}