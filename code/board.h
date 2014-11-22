#ifndef __BOARD_H__
#define __BOARD_H__

class Character;
class Floor;
class Map;
class Display;
class Board{
	Character * player;
	Floor * floor;
	Map* map;
	Display* display;
};

#endif
