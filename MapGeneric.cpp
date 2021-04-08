#include "MapGeneric.h"
using namespace std;
#include <iostream>

MapGeneric::MapGeneric() {}

vector<int> MapGeneric::map(vector<int> list) {

	static int index = list.size() - 1;

	if (index < 0 ) {
		return list;
	} else {
		list[index] = f(list[index]);
		index--;
		return map(list);
	}

}
