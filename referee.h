#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "Player.h"

class referee {

public:
	Player* judge(Player* player1, Player* player2);
	int check(char f, char s);

};

#endif

