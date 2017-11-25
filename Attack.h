/*
 * Attack.h
 *
 *  Created on: Nov 25, 2017
 *      Author: SwaggyKavi
 */

#ifndef ATTACK_H_
#define ATTACK_H_
#include <string>
#include <vector>
#include "Condition.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;
class Attack {
public:
	vector<Condition*> conditions;
	vector<string> actions;
	string print;
	Attack(xml_node<>*);
	virtual ~Attack();
};

#endif /* ATTACK_H_ */
