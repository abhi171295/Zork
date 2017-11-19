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
<<<<<<< HEAD
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

=======
	cout << "!!!Hello World!!!" << endl;
	runGame* g = new runGame();
	g->SetupGame("sample.txt.xml");
>>>>>>> 7b3a4635c1aa21a2d8435d0b681b1f385773de5c
	return 0;
}
