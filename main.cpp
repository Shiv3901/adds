#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

void printVec(vector<int> input)
{
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << " ";
	}

	cout << "\n\n";
}

vector<int> result;

int main() {

	string statement;
	getline(cin, statement);
	stringstream geek(statement);

	while (geek) {
		int number;
		char dump;

		geek >> number;
		result.push_back(number);

		geek >> dump;
	}

	MapTriple obj1;

	result = obj1.map(result);

	MapAbsoluteValue obj2;
	
	result = obj2.map(result);

	printVec(result);

	FilterGeneric* obj3 = new FilterOdd;

	result = obj3->filter(result);

	FilterGeneric* obj4 = new FilterForTwoDigitPositive;

	result = obj4->filter(result);

	printVec(result);

	ReduceGeneric* obj5 = new ReduceMinimum;

	cout << obj5->reduce(result) << " ";

	ReduceGeneric* obj6 = new ReduceGCD;

	cout << obj6->reduce(result) << endl;

	return 0;

}
