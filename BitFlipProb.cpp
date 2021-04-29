#include "BitFlipProb.h"

#include <time.h>
#include <stdlib.h>

using namespace std;

BitFlipProb::BitFlipProb(double prob) {
	this->prob = prob;
}

Individual BitFlipProb::mutate(Individual indi, int k) {

	string currStr = indi.getString();
	int len = currStr.length();

	for (int i = 0 ; i < len ; i++) {

		double create = ( rand() / (double) RAND_MAX );

		if (create == prob) {
			indi.flipBit(i);
		}

	}

	return indi;

}
