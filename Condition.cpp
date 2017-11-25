/*
 * Condition.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#include "Condition.h"

Condition::Condition(xml_node<>* root) {
	this->type_has = false;
	this->type_status = false;
	xml_node<>* root_node;
	root_node = root->first_node();
	while (root_node != nullptr){
		if (string(root_node->name()) == "has"){
			this->type_has = true;
			SetupHas(root);
		}
		else if (string(root_node->name()) == "status"){
			this->type_status = true;
			SetupStatus(root);
		}
		root_node = root_node->next_sibling();
	}

}

Condition::~Condition() {
	// TODO Auto-generated destructor stub
}

void Condition::SetupHas(xml_node<> * root){
	xml_node<>* root_node;
	root_node = root->first_node();
	while (root_node != nullptr){
		if (string(root_node->name()) == "has"){
			this->has = root_node->value();
		}
		else if (string(root_node->name()) == "object"){
			this->object = root_node->value();
		}
		else if (string(root_node->name()) == "owner"){
			this->owner = root_node->value();
		}
		root_node = root_node->next_sibling();
	}
}

void Condition::SetupStatus(xml_node<> * root){
	xml_node<>* root_node;
	root_node = root->first_node();
	while (root_node != nullptr){
		//cout << "in SetupStatus: " << string(root_node->name()) << endl;
		if (string(root_node->name()) == "status"){
			this->status = root_node->value();
			//cout << root_node->value() << endl;
		}
		else if (string(root_node->name()) == "object"){
			this->object = root_node->value();
		}
		root_node = root_node->next_sibling();
	}
	//cout << "in SetupStatus: " <<this->object << endl;
	//cout << "in SetupStatus: " << this->status << endl;
}
