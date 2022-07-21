#include <iostream>
#include <fstream>
#include <string> 
#include "../include/modules.hpp"

using namespace std;

int main() {
	ns::myClass my_class;
	ns::Person p;
	string filename = "data.bin";
	my_class.writeToBinFile(p);
	my_class.readFromBinFile(filename);

	return 0;
}
