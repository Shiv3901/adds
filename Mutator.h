#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"

class Mutator {

	public:
		Mutator();
		virtual Individual mutate(Individual indi, int k) = 0;

};

#endif
