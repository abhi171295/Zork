//============================================================================
// Name        : ZORK.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Room.h"
#include "runGame.h"
#include "rapidxml.hpp"
using namespace std;


int main() {
	cout << "!!!Hello World!!!" << endl;
	runGame* g = new runGame();
	g->SetupGame("sample.txt.xml");
	return 0;
}
