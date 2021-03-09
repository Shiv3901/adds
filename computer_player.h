#ifndef COMPUTER_PLAYER_H
#define COMPUTER_PLAYER_H
#include <string>
#include "player.h"

class computer_player: public player {

public:
	virtual std::string getChoice();

};

#endif

