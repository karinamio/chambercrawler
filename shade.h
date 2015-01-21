#ifndef __SHADE_H__
#define __SHADE_H__
#include "player.h"
class Info;
class Map;
class Floor;
class Shade : public Player {

public:
	Shade(Info *, Map*, Floor*);
	int score();
	~Shade();
};

#endif