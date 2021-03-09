#include "computer_player"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

std::string computer_player::getChoice() {

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
