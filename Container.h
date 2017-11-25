/*
 * Container.h
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 *
 *       may contain name, status, description, accept[ ], item[ ], trigger[ ].
 *        If an ‘accept’ element is present, only specific items may be put into the container.
 *        The container need not be opened to insert these specific items, and, in fact,
 *        cannot be opened until one of those items is inserted.
 *        This is used, e.g., to require a key to be placed into a lock before opening a door.
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_
#include <string>
#include <vector>
#include "Item.h"
#include "Trigger.h"
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;

class Container {
public:
	string name;
	string status;
	string description;
	vector<string> accept;
	vector<Trigger *> triggers;
	map<string, Item *> items;
	Container();
	virtual ~Container();
};

#endif /* CONTAINER_H_ */
