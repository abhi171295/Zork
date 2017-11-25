/*
 * runGame.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: Abhir
 */

#include "runGame.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

runGame::runGame() {
	// TODO Auto-generated constructor stub

}

runGame::~runGame() {
	// TODO Auto-generated destructor stub
}

void runGame::setStatus(bool curr_status){
	this->status = curr_status;
}

bool runGame::getStatus(){
	return this->status;
}

bool runGame::SetupGame(std::string fileName){
	std::ifstream file(fileName);

	if(!(file.is_open())){
		setStatus(false);
		cout << "File cannot open!!" << endl;
		return false;
 	}

	xml_document<> doc;
	xml_node<> * root_node;

	std::vector<char> buffer((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
	buffer.push_back('\0');
	doc.parse<0>(&buffer[0]);

	// Find root node
	root_node = doc.first_node();

	if (root_node == nullptr){
		setStatus(false);
	} else {
		setStatus(true);
	}

	xml_node<> * root;
	root = root_node->first_node();

	while(root != nullptr){
		if (string(root->name()) == "room"){
			//cout << root->name() << endl;
			Room* room = new Room(root->first_node());
			this->rooms[room->name] = room;
			//cout << " runGame:" << root->first_node()->value() <<endl;
		}
		else if (string(root->name()) == "item"){
			//cout << root->name() << endl;
			Item* item = new Item(root->first_node());
			this->items[item->name] = item;
		}
		else if (string(root->name()) == "container"){
			Container* container = new Container(root->first_node());
			this->containers[container->name] = container;
			//cout << root->name() << endl;
		}
		else if (string(root->name()) == "creature"){
			Creature* creature = new Creature();//root->first_node());
			this->creatures["jher"] = creature; //[creature->name] creature;
		}
		root = root->next_sibling();
	}

	return getStatus();
}

void runGame::run(std::string fileName){
	bool setup = SetupGame(fileName);
	if (setup == false){
		return;
	}

}
