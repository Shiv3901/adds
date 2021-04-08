#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric() {}

int ReduceGeneric::reduce(vector<int> list) {

	if (list.size() == 1) {
		return list[0];
	} else {
		list[0] = binaryOperator(list[0], list[1]);
		list.erase(list.begin() + 1);
		return reduce(list);
	}

}
