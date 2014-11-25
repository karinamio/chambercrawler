#ifndef __BOARD_H__
#define __BOARD_H__

class Character;
class Floor;
class Map;
class Info;
class Board{
	static Board *instance;
	Character * player;
	Floor * floor;
	Map * map;
	Info * info;
	int floorLevel;
public:
	Board();
	static Board *getInstance();
	Floor * createFloor();
	Character * createPlayer();
	Board * getBoard();
	void stairsReached();
	~Board();
};

#endif
