/*
 * Border.h
 *
 *  Created on: Nov 24, 2017
 *      Author: SwaggyKavi
 */

#ifndef BORDER_H_
#define BORDER_H_
#include <string>
#include <iostream>
#include "rapidxml.hpp"

using namespace rapidxml;
using namespace std;


class Border {
public:
	Border(xml_node<> * root);
	virtual ~Border();

	string direction;
	string name;
};

#endif /* BORDER_H_ */
