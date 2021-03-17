#ifndef COMPUTER_H
#define COMPUTER_H

#include <vector>
#include <stdlib.h>
#include <time.h>

#include "player.h"

class Computer : public Player {

private:
	std::vector<char> move;
	char pick_one();
public:
	Computer();
	Computer(char move_1, char move_2, char move_3);

};

#endif

