#include "board.h"

Board * board::instance = 0;

Board * board::getInstance() {
	if (!instance) {
		instance = new Wallet;
	}
	return instance;
}