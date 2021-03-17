#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
#include "player.h"
#include "RandomComputer.cpp"
#include "Avalanche.cpp"
#include <string>

using namespace std;

int main() {

	Referee Ref;
	Computer* human = new Avalanche;
	Computer* computer = new RandomComputer;

	cout << "\n\nWelcome to Rock, Paper, Scissor game !!\n";


	string name;
	cout << "Enter your player name: ";
	cin >> name;
	cout << endl;
	
	human->setName(name);
	computer->setName("computer");

	Computer* winner = Ref.judge(human, computer);

	if (winner == nullptr) {
		cout << "\nIt's a draw\n";
		return 0;
	}

	cout << "\nWinner is " << winner->getName() << "\n\n";

	return 0;

}
