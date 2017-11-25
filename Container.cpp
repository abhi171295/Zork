/*
 * Container.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#include "Container.h"

Container::Container(xml_node<>* root) {
	// TODO Auto-generated constructor stub
	while (root != nullptr){
		if (string(root->name()) == "name"){
			this -> name = root->value();
		} else if (string(root->name()) == "status"){
			this -> status = root->value();
		} else if (string(root->name()) == "description"){
			this -> description = root->value();
		} else if (string(root->name()) == "accept"){
			//this -> accept = root->value();
			this->accept.push_back(root->value());
		} else if (string(root->name()) == "trigger"){
			//this -> name = root->value();
			cout << "TRIGGER in Container" << endl;
		} else if (string(root->name()) == "item"){
			cout << "ITEM in Container" << endl;
		}
		root = root->next_sibling();
	}

}

Container::~Container() {
	// TODO Auto-generated destructor stub
}
