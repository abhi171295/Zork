/*
 * Creature.h
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 *
 *      may contain name, status, description, vulnerability[ ], attack, trigger[ ].
 *      If the “attack” command is issued by a user that match the creature’s vulnerability,
 *      action elements in ‘attack’ are to executed if any of the given conditions are met.
 */

#ifndef CREATURE_H_
#define CREATURE_H_
#include <string>
#include <vector>
#include "rapidxml.hpp"
#include "Trigger.h"
#include "Attack.h"
#include <map>

using namespace rapidxml;
using namespace std;

class Creature {
public:
	string name;
	string status;
	string description;
	map<string,string> vulnerabilities;
	Attack * attack;
	vector<Trigger*> triggers;
	Creature(xml_node<>*);
	virtual ~Creature();
};

#endif /* CREATURE_H_ */
