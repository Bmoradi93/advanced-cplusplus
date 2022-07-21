//============================================================================
// Name        : Custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
#include "../include/modules.hpp"

int main() {

	ce::Test test;

	try {
		test.goesWrong();
	}
	catch(ce::myException &e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}
