#include "Tournament.h"

Player* Tournament::run(array<Player *, 8> competitors) 
{

	referee refe;

	for (int i = 0 ; i < 8 ; i++) {
	
		round.push_back(competitors[i]);

	}

	for (int i = 0 ; i < 14 ; i += 2) {

		if (refe.judge(round[i], round[i+1]) == round[i])
			round.push_back(round[i]);
		else
			round.push_back(round[i+1]);


	}

	return round.back();

}
