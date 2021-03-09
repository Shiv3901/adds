#include "human_player.h"
#include <string>
#include <iostream>

std::string human_player::getChoice() {
	
	std::string choice;

	std::cout << "Enter your choice (r|p|s): ";
	std::cin >> choice;

	while (true) {

		if (choice == "r" || choice == "p" || choice == "s") {
			break;
		}

		std::cout << "\nIncorrect value (Renter): ";
		std::cin >> choice;

		std::cout << "\n";

	}

	return choice ;

}
