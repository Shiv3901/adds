#include "Tournament.h"

Player* Tournament::run(array<Player *, 8> competitors) 
{

	referee refe;

	for (int i = 0 ; i < 15 ; i += 2) {

		if (refe.judge(competitors[i], competitors[i+1]) == competitors[i])
			round.push_back(competitors[i]);
		else
			round.push_back(competitors[i+1]);


	}

	return round[round.size()-1];

}
