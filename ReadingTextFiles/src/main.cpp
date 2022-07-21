//============================================================================
// Name        : Reading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/modules.hpp"

using namespace std;

int main() {
	ns::myClass my_class;
	std::string file_name = "txt.txt";
	my_class.readTextFile(file_name);

	return 0;
}
