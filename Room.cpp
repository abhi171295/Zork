/*
 * Room.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: SwaggyKavi
 */

#include "Room.h"

using namespace rapidxml;

Room::Room(xml_node<>* roomName) {
	// TODO Auto-generated constructor stub
	createRoom(roomName);
}

Room::~Room() {
	// TODO Auto-generated destructor stub
}

void Room::createRoom(xml_node<>* roomNode) {
	string name;
	string value;

	roomNode = roomNode -> first_node();
	while (roomNode != NULL) {
		name = roomNode -> name();
		value = roomNode -> value();

		if (name == "name") {
			this -> name = value;
		}
		if (name == "status") {
			this -> name = value;
		}

	}
}
