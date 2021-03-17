#include <iostream>
#include <string>
#include "Tournament.h"
#include "Player.h"

int main() {

	Tournament match;

	array<Player *, 8> players;

	players[0] = new Avalanche();
	players[1] = new Bureaucrat();
	players[2] = new Bureaucrat();
	players[3] = new Toolbox();
	players[4] = new Toolbox();
	players[5] = new Crescendo();
	players[6] = new Crescendo();
	players[7] = new FistfullODollars();

	if (match.run(players) == players[3])
		cout << "player 3 won";

	return 0;

}
