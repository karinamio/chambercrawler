#include "map.h"
#include <iostream>
using namespace std;

Map::Map() {
	for (int i = 0; i < MMAP_HEIGHT; i++) {
		for (int j = 0; j < MMAP_WIDTH; j++) {
			textMap[i][j] = ' ';
		}
	}
}

void Map::print() {
	for (int i = 0; i < MMAP_HEIGHT; i++) {
		for (int j = 0; j < MMAP_WIDTH; j++) {
			cout << textMap[i][j];
		}
		cout << endl;
	}
}

void Map::notify(int i, int j, char update) {
	textMap[i][j] = update;
}
Map::~Map(){

};