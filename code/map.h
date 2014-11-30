#ifndef __MAP_H__
#define __MAP_H__

const int MMAP_HEIGHT = 25;
const int MMAP_WIDTH = 79;

class Map {
	char textMap[MMAP_HEIGHT][MMAP_WIDTH];
public:
	Map();
	void print();
	void notify(int x, int y, char update);
	~Map();
};

#endif