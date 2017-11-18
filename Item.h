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

using namespace rapidxml;
using namespace std;
class Item {
public:
	string name;
	string status;
	string description;
	string writing;
	string turn_on
	vector<string> border;
	vector<string> container;
	vector<string> item;
	vector<string> creature;
	vector<string> trigger;

	Item();
	virtual ~Item();
};

#endif /* ITEM_H_ */
