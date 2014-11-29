#include <iostream>
#include <fstream>
#include <sstream>

#include "floorsection.h"

using namespace std;

int arr_index = 0;

void getCoords(char character) {
	int x = 0;
	int y = 0;
	int counter = 0;
	string line;
	string linez;
	char c;
	ifstream file("board.txt");
	while (getline(file,line)) {
		while (file >> noskipws >> c) {
			if (c == character) {
				counter++;
			}
		}
	}
	int coords[counter * 2];
	ifstream filez("board.txt");
	while (getline(filez,linez)) {
		stringstream ss(linez);
		while (ss >> noskipws >> c) {
			if (c == character) {
				coords[arr_index] = x;
				arr_index++;
				coords[arr_index] = y;
				arr_index++;
			}
			x++;
			if (x == 79) {
				x = 0;
				y++;
			} 
		}
	}
	for (int i = 0; i < arr_index; i++) {
		cout << coords[i] << " ";
	}
	cout << endl;
	// return coords;
}