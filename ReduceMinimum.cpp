#include "ReduceMinimum.h"
#include <algorithm>

ReduceMinimum::ReduceMinimum() {}

int ReduceMinimum::binaryOperator(int x, int y) {
	return std::min(x, y);
}
