#ifndef COMPUTER_H
#define COMPUTER_H

#include <vector>
#include <stdlib.h>
#include <cstdlib.h>
#include <time.h>

#include "Player.h"

class Computer : public Player {

private:
	vector<char> move;
public:
	Computer();
	Computer(char move_1, char move_2, char move_3);

};

#endif

