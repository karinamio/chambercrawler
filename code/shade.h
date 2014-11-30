#ifndef __SHADE_H__
#define __SHADE_H__
#include "player.h"
class Info;
class Map;
class Shade : public Player {

public:
	Shade(Info *, Map*);
	int score();
	~Shade();
};

#endif