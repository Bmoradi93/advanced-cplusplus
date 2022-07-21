//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
#include "../include/modules.hpp"

using namespace std;

int main() {

	map<string, int> mp;

	mp["Mike"] = 40;
	mp["Raj"] = 20;
	mp["Vicky"] = 30;

	ns::myClass my_class;
	// my_class.createMap();
	// my_class.findElement(mp, "Mike1");
	my_class.addPairToMap(mp, std::make_pair("Agatha", 25));

	return 0;
}
