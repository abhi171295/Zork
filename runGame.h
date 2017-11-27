/*
 * runGame.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Abhir
 */

#ifndef RUNGAME_H_
#define RUNGAME_H_
#include "rapidxml.hpp"
#include "Room.h"
#include "Item.h"
#include "Container.h"
#include "Creature.h"
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "rapidxml.hpp"
using namespace std;

class runGame {
public:
	map<string, Room*> rooms;
	map<string, Item*> items;
	map<string, Container*> containers;
	map<string, Creature*> creatures;
	string WhereAmI;
	bool status;

	runGame();
	virtual ~runGame();

	bool SetupGame(std::string);
	bool getStatus();
	void setStatus(bool);
	void run(string filename);
	void SetupRoom(string filename);

};

#endif /* RUNGAME_H_ */
