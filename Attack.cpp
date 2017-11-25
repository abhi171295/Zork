/*
 * Attack.cpp
 *
 *  Created on: Nov 25, 2017
 *      Author: SwaggyKavi
 */

#include "Attack.h"

Attack::Attack(xml_node<> * root) {
	// TODO Auto-generated constructor stub
	while(root != nullptr){
		if (string(root->name()) == "action"){
			actions.push_back(root->value());
		} else if (string(root->name()) == "condition"){
			//cout << "GOING to Condition from Attack in Creature" << endl;
			//cout << root->first_node()->next_sibling()->value() << endl;
			Condition* condition = new Condition(root);
			conditions.push_back(condition);
		} else if (string(root->name()) == "print"){
			this->print = root->value();
		}
		root = root->next_sibling();
	}
}

Attack::~Attack() {
	// TODO Auto-generated destructor stub
}
