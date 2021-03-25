#include <iostream>

#include "Transport.h"
#include "Horse.h"

using namespace std;

int main() {

	//Polymorphism implemented
	Transport* horse = new Horse();

	//Testing
	cout << "Expected: 0" << endl;
	cout << "Current travel: " << horse->get_dist_travelled() << endl;
	horse->go();

	cout << "\n\nShould travel 100 km (go())\n\n";

	cout << "Expected: 100" << endl;
	cout << "Current travel: " << horse->get_dist_travelled() << endl;

	return 0;

}
