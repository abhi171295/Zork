/*
 * Room.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: SwaggyKavi
 */

#include "Room.h"

using namespace rapidxml;

Room::Room(xml_node<>* roomName) {
	xml_node<>* roomNode;
	roomNode = roomName;//->first_node();
	this -> type = "regular";

	while (roomNode != nullptr){
		//cout << "  Room: " << roomNode->name() << endl;
		if (string(roomNode->name()) == "name"){
			//cout << "    " << roomNode->value() << endl;
			this -> name = roomNode->value();
		}
		else if (string(roomNode->name()) == "status"){
			this -> status = roomNode->value();
		}
		else if (string(roomNode->name()) == "type"){
			this -> type = roomNode->value();
		}
		else if (string(roomNode->name()) == "description"){
			this -> description = roomNode->value();
		}
		else if (string(roomNode->name()) == "border"){
			/*Room* room = new Room(root->first_node());
			rooms[room->name] = room;
			cout << " runGame:" << root->first_node()->value() <<endl;*/
			Border* border = new Border(roomNode->first_node());
			borders[border->name] = border;
		}
		else if (string(roomNode->name()) == "item"){
			cout << "ITEM" << endl;
			//cout << roomNode->first_node()->name() << endl;
		}
		else if (string(roomNode->name()) == "container"){
			cout << "CONTAINER" << endl;
		}
		else if (string(roomNode->name()) == "creature"){
			cout << "CREATURE" << endl;
		}
		else if (string(roomNode->name()) == "trigger"){
			Trigger* trigger = new Trigger(roomNode->first_node());
			triggers.push_back(trigger);
		}
		roomNode = roomNode->next_sibling();
	}
}

Room::~Room() {
	// TODO Auto-generated destructor stub
}

