/*
 * TurnOn.cpp
 *
 *  Created on: Nov 25, 2017
 *      Author: SwaggyKavi
 */

#include "TurnOn.h"

TurnOn::TurnOn(xml_node<>* root) {
	// TODO Auto-generated constructor stub
	while (root != nullptr){
		if (string(root->name()) == "action"){
			this -> action = root->value();
		} else if (string(root->name()) == "print"){
			this -> print = root->value();
		}
		root = root->next_sibling();
	}

}

TurnOn::~TurnOn() {
	// TODO Auto-generated destructor stub
}
