#include <iostream>
#include <map>
#include <string>
#include "../include/modules.hpp"

int main() {
	std::map<int, ns::Person> people;

	people[50] = ns::Person("Mike", 40);
	people[32] = ns::Person("Vicky", 30);
	people[1] = ns::Person("Raj", 20);

	people.insert(std::make_pair(55, ns::Person("Bob", 45 )));
	people.insert(std::make_pair(55, ns::Person("Sue", 24 )));

	for (std::map<int, ns::Person>::iterator it = people.begin(); it != people.end();
			it++) {
		std::cout << it->first << ": " << std::flush;
		it->second.print();
	}

	return 0;
}
