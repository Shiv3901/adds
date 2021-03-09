#include "referee.h"
#include <string>
#include <iostream>

using namespace std;

player* referee::judge(player* p1, player* p2) {

	string play1 = p1->getChoice();
	string play2 = p2->getChoice();

	string winner = referee::decide(play1, play2);

	//cout << play1 << "  " << play2 << endl;
	//cout << winner << endl;

	if (winner == play1) 
		return p1;
	else if (winner == play2)
		return p2;

	return nullptr;

}

std::string referee::decide(std::string p1, std::string p2) {

	if (p1 == p2)
		return "";

	if (p1 == "r" && p2 == "s")
		return p1;
	else if (p1 == "p" && p2 == "r")
		return p1;
	else if (p1 == "s" && p2 == "p")
		return p1;

	return p2;

}
