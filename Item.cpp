/*
 * Item.cpp
 *
 *  Created on: Nov 18, 2017
 *      Author: SwaggyKavi
 */

#include "Item.h"

Item::Item(xml_node<>* root) {
	// TODO Auto-generated constructor stub

	while (root != nullptr){
		if (string(root->name()) == "name"){
			this->name = root->value();
		} else if (string(root->name()) == "writing"){
			this->writing = root->value();
		} else if (string(root->name()) == "status"){
			this->status = root->value();
		} else if (string(root->name()) == "turnon"){
			//cout<<"TURN UP NIGGAH"<<endl;
			this -> turn_on = new TurnOn(root->first_node());
		} else if (string(root->name()) == "trigger"){
			cout << "TRIGGER in ITEM" << endl;
		}
		root = root->next_sibling();
	}

}

Item::~Item() {
	// TODO Auto-generated destructor stub
}
