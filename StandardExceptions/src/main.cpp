#include <iostream>
#include "../include/modules.hpp"
using namespace std;

// class CanGoWrong {
// public:
// 	CanGoWrong() {
// 		char *pMemory = new char[999];
// 		delete[] pMemory;
// 	}
// };

int main() {

	try {
		cgw::CanGoWrong mc;
		// CanGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}
