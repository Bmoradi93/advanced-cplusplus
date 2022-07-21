#include <iostream>
#include <exception>
#include "../include/modules.hpp"

int main() {

	try {
		cse::myClass my_class;
		my_class.canGowrong();
	}

	catch (std::bad_alloc &e) {
		std::cout << "Catching bad_alloc: " << e.what() << std::endl;
	}

	catch (std::exception &e) {
		std::cout << "Catching exception: " << e.what() << std::endl;
	}

	return 0;
}