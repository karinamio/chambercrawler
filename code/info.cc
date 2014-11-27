#include "info.h"
#include <iomanip>

using namespace std;

void Info::print() {
	cout << left << "Race: " << player->type << "Gold: " << player->gold->value << right << "Floor " << board->floorLevel << endl;
	cout << "HP: " << player->HP << endl;
	cout << "Atk: " << player->Atk << endl;
	cout << "Def: " << player->Def << endl;
	cout << "Action: " << Action << endl;
}

void Info::notify() {

}