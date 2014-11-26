// include the whole world

int main() {
	// start game
	// create board
	string command;
	while (cin >> command) {
		if (command == "no" || command == "so" || command == "ea" || command == "we" || command == "ne" || command == "nw" || command == "se" || command == "sw" ) {
			Player::move(command);
		}
		else if (command == "u") {
			string direction;
			cin >> direction;
			Player::usePotion(direction);
		}
		else if (command == "a") {
			string direction;
			cin >> direction;
			Player::attack(direction);
		}
		else if (command == "r") {
			// reset errythang!!!!!!!
		}
		else if (command == "q") {
			// forfeit and exit game
			cout << "Player forfeited." << endl;
			break;
		}
	}
}
