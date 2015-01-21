#ifndef __DROW_H__
#define __DROW_H__
#include "player.h"
#include <string>
class Drow : public Player {
public:
	Drow(Info *, Map*, Floor*);
	void usePotion(std::string direction);
	~Drow();
};

#endif