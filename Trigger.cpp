/*
 * Trigger.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#include "Trigger.h"

Trigger::Trigger() {
	// TODO Auto-generated constructor stub
	this->type = "single";

	while(root != nullptr){
		if (string(root->name) == "command"){
			this-> command = root->value();
		} else if (string(root->name) == "action"){
			action.push_back(root->value());
		} else if (string(root->name) == "type"){
			this-> type = root->value();
		} else if (string(root->name) == "print"){
			this->print = root->value();
		} else if (string(root->name) == "condition"){
			Condition* condition = new Condition(root->first_node());
			conditions.push_back(condition);
		}
		root = root->next_sibling();
	}

}

Trigger::~Trigger() {
	// TODO Auto-generated destructor stub
}
