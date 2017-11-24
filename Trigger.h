/*
 * Trigger.h
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#ifndef TRIGGER_H_
#define TRIGGER_H_
#include <string>
#include <iostream>
#include <vector>
#include "Condition.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

class Trigger {
public:
	Trigger(xml_node<>* root);
	virtual ~Trigger();
	string command;
	string type;
	vector<Condition *> conditions;
	string print;
	vector<string> action;

};

#endif /* TRIGGER_H_ */
