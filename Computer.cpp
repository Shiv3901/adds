#include "Computer.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

std::string Computer::getChoice() {

	std::string choice;

	srand (time(NULL));

	int number = rand() % 3 + 1;

	switch (number) {

		case 1:
			choice = "r";
			break;
		case 2:
			choice = "p";
			break;
		case 3:
			choice = "s";
			break;

	}

	return choice;

}
