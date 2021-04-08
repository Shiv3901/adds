#include "FilterGeneric.h"
using namespace std;
#include <iostream>

FilterGeneric::FilterGeneric() {}

vector<int> FilterGeneric::filter(vector<int> list) {

	static int index = 0;

	if (index == int(list.size())) {
		index = 0;
		return list;
	} else {
		if(g(list[index]) == false) {
			list.erase(list.begin() + index);
			index--;
		}
		index++;
		return filter(list);
	}

}
