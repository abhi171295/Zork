//============================================================================
// Name        : ZORK.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "Room.h"
#include "runGame.h"
#include "rapidxml.hpp"
using namespace std;


int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	runGame* g = new runGame();
	g->run("sample.txt.xml");

	map<string,Room*> myRoom = g->rooms;
	map<string,Border*> myBorder = g->rooms["MainCavern"]->borders;
	cout << "HERE" << endl;
	cout << myRoom["MainCavern"]->description << endl;
	cout << myBorder["Entrance"]->direction << endl;
	return 0;
}
