#include "enhancement.h"

Enhancement::Enhancement(AbstractPlayer * player) : player(player), Atk(0), Def(0) {};

Enhancement::~Enhancement() {
	delete player;
}