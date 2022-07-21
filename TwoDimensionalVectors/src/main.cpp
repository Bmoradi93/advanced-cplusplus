//============================================================================
// Name        :
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "../include/modules.hpp"

using namespace std;

int main() {
	ns::myClass my_class;
	my_class.create2DArray(3,4);

	// vector< vector<int> > grid(3, vector<int>(4, 7));

	// grid[1].push_back(8);

	// for(int row=0; row < grid.size(); row++) {
	// 		for(int col=0; col < grid[row].size(); col++) {
	// 			cout << grid[row][col] << flush;
	// 		}

	// 		cout << endl;
	// }

	return 0;
}
