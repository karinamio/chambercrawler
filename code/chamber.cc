#include "chamber.h"
#include <map>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "floorsection.h"
#include <ctime>

using namespace std;


Chamber::Chamber(int number, Cell * floorMap[][79]) {
	chamberNumber = number;
	buildChamber(floorMap);
}

void Chamber::buildChamber(Cell* floorMap[][79]) {
	ifstream myfile ("chambers.txt");
	int currentChamber = 0;
	string temp = "";
    if (myfile.is_open()) {
    	while(chamberNumber != currentChamber) {
    		getline(myfile, temp);
    		if (temp == "start") currentChamber++;
    	}
    	while(temp!="end") {
    		int startx = 0;
    		int starty = 0;
    		int endx = 0;
    		int endy = 0;
    		getline(myfile, temp);
    		istringstream iss(temp);
    		iss >> startx;
    		iss >> starty;
    		iss >> endx;
    		iss >> endy;
    		for (startx; startx <= endx; startx++) {
    			cellsInChamber.push_back(floorMap[starty][startx]);
    			isCellUsed[floorMap[starty][startx]] == false;
    		}
    	}
    } else {
    	cerr << "Cannot open chambers.txt" << endl;
    }
}

Cell * Chamber::getRandomCell() {
	while (true) {
        srand (time(0));
		int random = rand()%cellsInChamber.size();
		Cell * potentialCell = cellsInChamber.at(random);
		if (isCellUsed[potentialCell] == false) {
			isCellUsed[potentialCell] = true;
			return potentialCell;
		}
	}
}