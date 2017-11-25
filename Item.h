/*
 * Item.h
 *
 *  Created on: Nov 18, 2017
 *      Author: SwaggyKavi
 *
 *       may contain name, status, description, writing, status, turn on, and trigger[ ].
 *        If an item has a “turn on” element and the “turn on” command is issued by the user,
 *       action elements in ‘turn on’ are to be executed if any of the given conditions are met.
 */

#ifndef ITEM_H_
#define ITEM_H_
#include <string>
#include <vector>
#include "rapidxml.hpp"
#include "Trigger.h"
#include "TurnOn.h"

using namespace rapidxml;
using namespace std;
class Item {
public:
	string name;
	string status;
	string description;
	string writing;
	TurnOn * turn_on;
	vector<Trigger *> triggers;

	Item(xml_node<> *);
	virtual ~Item();
};

#endif /* ITEM_H_ */
