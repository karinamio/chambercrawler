#include "map.h"
#include "info.h"
#include "floor.h"
#include "board.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
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

Floor *Board::createFloor(bool exists,string fileName){
	Floor *newFloor = new Floor(map,info, player, this, exists, fileName);
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
		cout<<"You Won!"<<endl;
		playing = false;
	}
	else {
		delete this->floor;
		this->floor = createFloor(false, "");
		this->floorLevel += 1;
	}
	stringstream ss;
	ss << this->floorLevel;
	string str = ss.str();

	info->notify("Floor", str);
	player->setAtk(15);
	player->setDef(20);
}
Board::~Board(){
	delete info;
	// delete player;
	delete map;
}	
void Board::gameOver(){
	playing =false;
}
void Board::startGame(bool exists, string fileName){
	Floor::currentBoard = this;
	this->player = createPlayer();
	this->floor = createFloor(exists, fileName);

	this->floorLevel = 1;
	map->print();
	info->print();
	string command;
	while ( playing && cin >> command ) {
		if (command == "no" || command == "so" || command == "ea" || command == "we" || command == "ne" || command == "nw" || command == "se" || command == "sw" ) {
			this->player->move(command);
			this->floor->enemyMove();
			map->print();
			info->print();
		}
		else if (command == "u") {
			string direction;
			cin >> direction;
			this->player->usePotion(direction);
			map->print();
			info->print();
		}
		else if (command == "a") {
			string direction;
			cin >> direction;
			this->player->attack(direction);
			this->floor->enemyMove();
			map->print();
			info->print();
		}
		else if (command == "r") {
			this->player= Player::getPlayer(info, map, floor);
			startGame(exists, fileName);
			break;
		}

		else if (command == "q") {
			// forfeit and exit game
			cout << "Player forfeited." << endl;
			break;
		}
		else if (command == "p"){
			map->print();
			info->print();
		}

		else if (command == "s") {
			
		}
	}
}