//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>
#include "../include/modules.hpp"

using namespace std;

int main() {

	list<int> nums;

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_front(0);

	ns::myClass my_class;
	my_class.createList();
	my_class.eraseElement(nums);

	

	// list<int> numbers;

	// numbers.push_back(1);
	// numbers.push_back(2);
	// numbers.push_back(3);
	// numbers.push_front(0);

	// list<int>::iterator it = numbers.begin();
	// it++;
	// numbers.insert(it, 100);
	// cout << "Element: " << *it << endl;

	// list<int>::iterator eraseIt = numbers.begin();
	// eraseIt++;
	// eraseIt = numbers.erase(eraseIt);
	// cout << "Element: " << *eraseIt << endl;

	// for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
	// 	cout << *it << endl;
	// }

	return 0;
}
