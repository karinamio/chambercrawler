#include "map.h"
#include "info.h"
#include "player.h"
#include "floor.h"

#include <cstdlib>
#include <iostream>

using namespace std;

Board::Board():floorLevel(1){
	info = new Info;
	map = new Map;
}
Board::getBoard(){
	if(instance){
		return instance;
	}
	else{
		instance = new Board;
		atexit(Board::cleanup());
		return instance;
	}
}

Floor *Board::createFloor(){
	Floor *newFloor = new Floor(map, player);
	return newFloor;
}

Character * Board::createPlayer(){
	Character *newPlayer = new Player;
	return newPlayer;
}

void Board::cleanup(){
    delete instance;

}

void Board::stairsReached(){
	if(this.floorLevel == 5){
		cout<<"You Won!"
	}
	else {
		delete this.floor;
		this.floor = createFloor();
		this.floorLevel += 1;
	}
	
}
Board::~Board(){
	delete info;
	delete player;
}	delete map;

void Board::startGame(){
	this.floor = createFloor();
	this.player = createPlayer();
	this.floorLevel = 1;
	string command;
	while (cin >> command) {
		if (command == "no" || command == "so" || command == "ea" || command == "we" || command == "ne" || command == "nw" || command == "se" || command == "sw" ) {
			this.player->move(command);
		}
		else if (command == "u") {
			string direction;
			cin >> direction;
			this.player->usePotion(direction);
		}
		else if (command == "a") {
			string direction;
			cin >> direction;
			this.player->attack(direction);
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