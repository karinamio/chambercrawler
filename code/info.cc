#include "info.h"
#include <iomanip>
#include <map>
#include <iostream>

using namespace std;

Info::Info() {
	//initialize info with default values
	info["Race"] = "Shade";
	info["HP"] = "110";
	info["Gold"] = "";
	info["Atk"] = "15";
	info["Def"] = "20";
	info["Action"] = "";
	info["Floor"] = "1";
}

void Info::print() {
	cout << left << "Race: " << info["Race"] << " Gold: " << info["Gold"] << right << "Floor " << info["Floor"] << endl;
	cout << "HP: " << info["HP"] << endl;
	cout << "Atk: " << info["Atk"] << endl;
	cout << "Def: " << info["Def"] << endl;
	cout << "Action: " << info["Action"] << endl;
}

void Info::notify(string field, string update) {
	if (info.find(field) == info.end()) {
		cerr << "Didn't pass in the right field name" << endl;
	} else {
		info[field] = update;
	}
	// spawning messages
	// player attacks, enemy attacks
	// player moves
	// player sees potions
	// player collects gold
	// player slays enemy
	// player uses potions
}