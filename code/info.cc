#include "info.h"
#include <iomanip>

using namespace std;

void Info::print() {
	cout << left << "Race: " << Player.type << "Gold: " << Player.gold.value << right << "Floor " << board.floorLevel << endl;
	cout << "HP: " << Player.HP << endl;
	cout << "Atk: " << Player.Atk << endl;
	cout << "Def: " << Player.Def << endl;
	cout << "Action: " << Action << endl;
}

void Info::notify() {

}