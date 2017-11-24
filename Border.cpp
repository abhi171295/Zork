/*
 * Border.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#include "Border.h"

Border::Border(xml_node<> * root) {
	// TODO Auto-generated constructor stub
	while (root != nullptr){
		if (string(root->name()) == "direction") {
			this -> direction = root->value();
		}
		else if (string(root->name()) == "name"){
			this -> name = root->value();
		}
		root = root->next_sibling();
	}

}

Border::~Border() {
	// TODO Auto-generated destructor stub
}
