#include "Computer.h"

Computer::Computer() {

	for (int i = 0 ; i < 5 ; i++) {

		char pick = pick_one();
		move.push_back(pick);
		moves.push_back(pick);

	}

}

char Computer::pick_one() {

	srand(time(NULL));
	int choice = (rand() % 3) + 1;

	switch (choice) {

		case 1:
			return 'R';
		case 2:
			return 'P';
		case 3:
			return 'S';
			break;

	}

	return 'R';

}

Computer::Computer(char move_1, char move_2, char move_3) {

	move.push_back(move_1);
	move.push_back(move_2);
	move.push_back(move_3);

	for (int i = 0 ; i < 5 ; i++) {

		moves.push_back(move[i % 3]);

	}


}
