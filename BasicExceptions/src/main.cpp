#include <iostream>
#include <string>

#include "../include/modules.hpp"

int main() {

    Exceptions::myClass mc;
    
	try {
		mc.usesMightGoWrong();
	}
	catch(int e) {
		std::cout << "Error code: " << e << std::endl;
	}
	catch(char const * e) {
		std::cout << "Error message: " << e << std::endl;
	}
	catch(std::string &e) {
		std::cout << "string error message: " << e << std::endl;
	}

	std::cout << "Still running" << std::endl;

	return 0;
}