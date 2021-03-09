#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "player.h"

class referee {

private:
	std::string decide(std::string p1, std::string p2);

public:
//	referee();
	player* judge(player* p1, player* p2);

};

#endif

