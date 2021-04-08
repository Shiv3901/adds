#include "ReduceGCD.h"
#include <numeric>

ReduceGCD::ReduceGCD() {}

int ReduceGCD::binaryOperator(int x, int y) {
	
	while (x != y) {

		if (x > y) {
			x -= y;
		} else {
			y -= x;
		}

	}

	return x;

}
