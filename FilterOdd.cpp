#include "FilterOdd.h"
#include <cstdlib>

FilterOdd::FilterOdd() {}

bool FilterOdd::g(int x) {

	if (abs(x) % 2 == 1)
		return true;

	return false;

}
