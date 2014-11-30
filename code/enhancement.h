#ifndef __ENHANCEMENT_H__
#define __ENHANCEMENT_H__

#include "player.h"
#include "abstractplayer.h"

#include <string>

class Player;
class Enhancement : public AbstractPlayer {
	protected:
		AbstractPlayer * player;
		int Atk;
		int Def;
	public:
		Enhancement();
		~Enhancement();
};

#endif