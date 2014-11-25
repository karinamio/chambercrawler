#include "map.h"

using namespace std;

void Map::print() {
	for (int i = 0; i < MAP_HEIGHT; i++) {
		for (int j = 0; j < MAP_WIDTH; j++) {
			cout << textMap[i][j] << ' ';
		}
		cout << endl;
	}
}

void Map::notify(int x, int y, char update) {

}