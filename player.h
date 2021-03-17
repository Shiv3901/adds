#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

class Player {

protected:
	vector<char> moves;
public: 
	vector<char> get_move();

};

#endif

