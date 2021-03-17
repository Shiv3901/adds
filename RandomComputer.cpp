#include "Computer.h"
#include "RandomComputer.h"

#include <cstdlib>
#include <ctime>
#include <string>

std::string RandomComputer::getChoice() {

	int choice = (rand() % 3) + 1;

	switch (choice) {
	
		case 1:
			return "Rock";
			break;
		case 2:
			return "Papers";
			break;
		case 3:
			return "Scissors";
			break;

	}

	return "";

}
