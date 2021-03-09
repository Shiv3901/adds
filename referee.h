#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include "player.h"

class referee {

public:
	referee();
	player* judge(player* p1, player* p2);

};

#endif

