#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player {

private:
	std::string name;

public:
	player();
	void setName(std::string nam);
	std::string getName();
	virtual std::string getChoice() = 0;

};

#endif

