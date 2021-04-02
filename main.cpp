#include <iostream>
#include <string>

using namespace std;

#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

int main() {

	Reverse guy;

	cout << guy.reverseDigit(543273) << endl;

	cout << guy.reverseString("SHivam") << endl;

	Truckloads r;

	cout << r.numTrucks(8,3) << endl;

	return 0;

}
