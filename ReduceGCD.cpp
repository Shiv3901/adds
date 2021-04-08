#include "ReduceGCD.h"
#include <numeric>

ReduceGCD::ReduceGCD() {}

int ReduceGCD::binaryOperator(int x, int y) {
	
	if (x == 0) 
		return y;

	return binaryOperator(x, x % y);

}
