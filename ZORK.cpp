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
	map<string,Item*> myItem = g->items;
	map<string,Container*> myContainer = g->containers;
	//Creature* myCreature = g->creatures["gnome"];
	cout << "HERE" << endl;
	cout << myRoom["MainCavern"]->triggers.front()->conditions.front()->object << endl;
	cout << myRoom["MainCavern"]->creatures["gnome"]->name << endl;
	//cout << myItem["torch"]->turn_on->action << endl;
	//cout << myContainer["lock"]->accept.front() << endl;
	//cout << "Do I exist? " << myCreature->attack->conditions.front()->object << endl;
	//cout << myBorder["Entrance"]->triggers->front()->print << endl;
	return 0;
}
