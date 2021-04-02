#include <iostream>
#include <string>

using namespace std;

#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

int main() {

	Reverse guy;

	cout << guy.reverseDigit(543273) << endl;

	cout << guy.reverseString("Shivam") << endl;

	EfficientTruckloads r;

	cout << r.numTrucks(10,5) << endl;

	return 0;

}
