#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric() {}

int ReduceGeneric::reduce(vector<int> list) {

	static int index = list.size() - 1;
	static int answer = list[0];

	if (index < 0) {
		return answer;
	} else {
		answer = binaryOperator(answer, list[index]);
		index--;
		return reduce(list);
	}

}
