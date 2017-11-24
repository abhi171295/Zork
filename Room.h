/*
 * Room.h
 *
 *  Created on: Nov 2, 2017
 *      Author: SwaggyKavi
 */

#ifndef ROOM_H_
#define ROOM_H_

#include <string>
#include <vector>
#include <map>
#include "rapidxml.hpp"
#include "Border.h"
#include "Container.h"
#include "Item.h"
#include "Creature.h"
#include "Trigger.h"

using namespace rapidxml;
using namespace std;

class Room {
public:

	string name;
	string status;
	string type;
	string description;
	map<string, Border*> borders;
	map<string, Container*> containers;
	map<string, Item*> items;
	map<string, Creature*> creatures;
	vector<Trigger*> triggers;


	Room (xml_node<>* name);
	virtual ~Room();

	void createRoom(xml_node<>*);
	//void createBorder(xml_node<>*);
};

#endif /* ROOM_H_ */
