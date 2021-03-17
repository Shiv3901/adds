#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "player.h"

class Computer: public player {

public:
	virtual std::string getChoice();

};

#endif

