#include <iostream>
#include <vector>

using namespace std;

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

int main() {

	vector<int> ints;

	ints.push_back(-10);
	ints.push_back(2);
	ints.push_back(-3);
	ints.push_back(5);
	ints.push_back(44);

	MapGeneric* MAP = new MapAbsoluteValue;

	vector<int> fg = MAP->map(ints);

	cout << fg[2] << "\n";

	FilterGeneric* FIL = new FilterForTwoDigitPositive;

	vector<int> kl = FIL->filter(ints);

	cout << "df";

	cout << kl[0] << "\n";

	return 0;

}
