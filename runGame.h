/*
 * runGame.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Abhir
 */

#ifndef RUNGAME_H_
#define RUNGAME_H_
#include "Condition.h"
#include "Trigger.h"
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

	map<string, Item*> inventory;
	string WhereAmI;
	string command;
	bool status;

	runGame();
	virtual ~runGame();

	bool SetupGame(std::string);
	bool getStatus();
	void setStatus(bool);
	void run(string filename);
	/*void continueRun();
	bool checkTrig(string filename);
	bool navigateTrig(vector<Trigger*> triggers, string command);
	bool validConditions(vector<Condition*> conditions);
	bool checkInventory(Item* object);
	bool checkHas(string);
	Item* FindItem(string);*/
};

#endif /* RUNGAME_H_ */
