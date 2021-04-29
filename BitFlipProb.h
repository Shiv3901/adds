#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"

class BitFlipProb : public Mutator {

	private:
		double prob;

	public:
		BitFlipProb(double prob);
		Individual mutate(Individual indi, int k);

};

#endif

