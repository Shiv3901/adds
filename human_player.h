#ifndef HUMAN_PLAYER_H
#define HUMAN_PLAYER_H
#include <string>
#include "player.h"

class human_player: public player {

public:
	std::string getChoice();

};

#endif

