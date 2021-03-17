#include "referee.h"
using namespace std;

Player* referee::judge(Player* player1, Player* player2) {

	int count[2] = {0};

	vector<char> play1 = player1->get_move();
	vector<char> play2 = player2->get_move();

	for (int i = 0 ; i < 5 ; i++) {

		switch(check(play1[i], play2[i])) {

			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;

		}

	}

	if (count[0] < count[1])
		return player2;

	return player1;

}

int referee::check(char f, char s) {

	if (f == s)
		return 0;

	if ( (f=='R' && s=='S') || (f=='P' && s=='R') || (f=='S' && s=='P') )
		return 1;

	return 2;

}
