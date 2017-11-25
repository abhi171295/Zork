/*
 * Creature.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#include "Creature.h"

Creature::Creature(xml_node<> * root) {
	// TODO Auto-generated constructor stub
	while(root != nullptr){
		if (string(root->name()) == "name"){
			this -> name = root->value();
		} else if (string(root->name()) == "status"){
			this -> status = root->value();
		} else if (string(root->name()) == "description"){
			this -> description = root->value();
		} else if (string(root->name()) == "vulnerability"){
			this -> vulnerabilities[root->value()] = root->value();
			//cout << "Vulnerability in Creature" << endl;
			//this -> name = root->value();
		} else if (string(root->name()) == "attack"){
			this -> attack = new Attack(root->first_node());
		} else if (string(root->name()) == "trigger"){
			Trigger * trigger = new Trigger(root->first_node());
			this->triggers.push_back(trigger);
		}
		root=root->next_sibling();
	}

}

Creature::~Creature() {
	// TODO Auto-generated destructor stub
}
