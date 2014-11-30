#ifndef __HUMAN_H__
#define __HUMAN_H__
#include "enemy.h"
#include "map.h"
#include "floor.h"
class Human : public Enemy {
public:
	Human(Map *, int, Floor*);
	void defeated();
	~Human();
};

#endif