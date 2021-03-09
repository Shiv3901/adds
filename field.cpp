#include <iostream>
#include "referee.h"
#include "computer_player.h"
#include "human_player.h"
#include "player.h"
#include <string>

using namespace std;

int main() {

	referee Ref;
	player* human = new human_player;
	player* computer = new computer_player;

	cout << "\n\nWelcome to Rock, Paper, Scissor game !!\n";


	string name;
	cout << "Enter your player name: ";
	cin >> name;
	cout << endl;
	
	human->setName(name);
	computer->setName("computer");

	player* winner = Ref.judge(human, computer);

	cout << "sdg";
	if (winner == nullptr) 
		cout << "\nIt's a draw\n";
		return 0;

	cout << "\nWinner is " << winner->getName() << "\n\n";

	return 0;

}
