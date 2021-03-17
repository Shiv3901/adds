#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

class Player {

protected:
	std::vector<char> moves;
public: 
	std::vector<char> get_move();

};

#endif

