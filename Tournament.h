#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include<vector>
#include <iostream>
#include <string>
#include <array>

#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Toolbox.h"
#include "Tournament.h"
#include "referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"

using namespace std;

class Tournament {

private:
	vector<Player * > round; 	

public:
	Player* run(array<Player *, 8> competitors);


};

#endif

