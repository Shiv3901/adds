#include <iostream>
#include <vector>

using namespace std;

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

int main() {

	vector<int> ints;

	ints.push_back(10);
	ints.push_back(20);
	ints.push_back(-30);
	ints.push_back(40);

	MapGeneric* MAP = new MapAbsoluteValue;

	vector<int> fg = MAP->map(ints);

	cout << fg[2] << "\n";

	return 0;

}
