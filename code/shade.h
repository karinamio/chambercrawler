#ifndef __SHADE_H__
#define __SHADE_H__
#include "player.h"
class Info;
class Shade : public Player {

public:
	Shade(Info *);
	int score();
	~Shade();
};

#endif