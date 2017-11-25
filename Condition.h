/*
 * Condition.h
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#ifndef CONDITION_H_
#define CONDITION_H_
#include <string>
#include <iostream>
#include <vector>
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

class Condition {
public:
	bool type_has;
	bool type_status;
	string has;
	string object;
	string owner;
	string status;

	Condition(xml_node<> * );
	virtual ~Condition();
	void SetupHas(xml_node<> *);
	void SetupStatus(xml_node<> *);
};

#endif /* CONDITION_H_ */
