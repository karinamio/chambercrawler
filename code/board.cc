#include "map.h"
#include "info.h"
#include "floor.h"
#include "board.h"
#include <cstdlib>
#include <iostream>
#include "character.h"
#include "player.h"
using namespace std;
Board *Board::instance = NULL;
Board::Board():floorLevel(1),playing(true){
	info = new Info;
	map = new Map;
}
Board * Board::getBoard(){
	if(instance){
	}
	else{
		instance = new Board;
		atexit(Board::cleanup);
		
	}
	return instance;
}

Floor *Board::createFloor(){
	Floor *newFloor = new Floor(map,info, player, this);
	return newFloor;
}

Character * Board::createPlayer(){
	Character *newPlayer = Player::getPlayer(info, map, floor);
	return newPlayer;

}

void Board::cleanup(){
    delete instance;

}

void Board::stairsReached(){
	if(this->floorLevel == 5){
		cout<<"You Won!";
	}
	else {
		delete this->floor;
		this->floor = createFloor();
		this->floorLevel += 1;
	}
	
}
Board::~Board(){
	delete info;
	// delete player;
	delete map;
}	
void Board::gameOver(){
	playing ==false;
}
void Board::startGame(){
	this->player = createPlayer();
	this->floor = createFloor();

	this->floorLevel = 1;
	string command;
	while (cin >> command && playing) {
		if (command == "no" || command == "so" || command == "ea" || command == "we" || command == "ne" || command == "nw" || command == "se" || command == "sw" ) {
			this->player->move(command);
			this->floor->enemyMove();
		}
		else if (command == "u") {
			string direction;
			cin >> direction;
			// this->player->usePotion(direction);
		}
		else if (command == "a") {
			string direction;
			cin >> direction;
			this->player->attack(direction);
			this->floor->enemyMove();
		}
		else if (command == "r") {
			// reset errythang!!!!!!!
		}

		else if (command == "q") {
			// forfeit and exit game
			cout << "Player forfeited." << endl;
			break;
		}
		else if (command == "p"){
			map->print();
		}
	}
}