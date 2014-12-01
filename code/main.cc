// include the whole world
#include "board.h"

int main(int argc, char *argv[]) {
	Board* game = Board::getBoard();
	if (argc == 2) {
		game ->startGame(true, argv[1]);
	} else {
		game->startGame(false, "");
	}
	// start game
	// create board
}
