#ifndef __BOARD_H__
#define __BOARD_H__
#include "map.h"
#include "info.h"
#include "floor.h"
class Character;
class Board{
	static Board *instance;
	
	Character * player;
	Floor * floor;
	Map * map;
	Info * info;
	bool playing;
	int floorLevel;
	static void cleanup();
public:
	Board();
	void startGame(bool, std::string);
	void gameOver();
	// static Board *getInstance();
	Floor * createFloor(bool, std::string);
	Character * createPlayer();
	static Board * getBoard();
	void stairsReached();
	~Board();
};

#endif
