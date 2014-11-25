#ifndef __MAP_H__
#define __MAP_H__

const int MAP_HEIGHT = 25;
const int MAP_WIDTH = 79;

class Map {
	char textMap[MAP_HEIGHT][MAP_WIDTH];
public:
	Map();
	void print();
	void notify(int x, int y, char update);
	~Map();
};

#endif