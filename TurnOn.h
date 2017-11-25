/*
 * TurnOn.h
 *
 *  Created on: Nov 25, 2017
 *      Author: SwaggyKavi
 */

#ifndef TURNON_H_
#define TURNON_H_
#include <string>
#include <vector>
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

class TurnOn {
public:
	string print;
	string action;
	TurnOn(xml_node<>*);
	virtual ~TurnOn();
};

#endif /* TURNON_H_ */
