#include "referee.h"

Player* referee::judge(Player* player1, Player8 player2) {

	int count[2] = {0};

	vector<int> play1 = player1->get_move();
	vector<int> play2 = player2->get_move();

	for (int i = 0 ; i < 5 ; i++) {

		switch(check(play1, play2)) {

			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;

		}

	}

	if (count[0] < coutn[1])
		return second;

	return first;

}

int referee:check(char f, char s) {

	if (f == s)
		return 0;

	if ( (f=='R' && s=='S') || (f=='P' && s=='R') || (f=='S' && s=='P') )
		return 1;

	return 2;

}
