#include "FilterGeneric.h"
using namespace std;
#include <iostream>

FilterGeneric::FilterGeneric() {}

vector<int> FilterGeneric::filter(vector<int> list) {

	static int index = 0;
	static vector<int> newList;

	cout << index << endl;

	if (index == list.size()) {
		cout << "ghe";
		return newList;
	} else {
		cout << "ind: " << index << endl;
		if(g(list[index]) == true) {
			newList.push_back(list[index]);
		}
		index++;
		return filter(list);
	}

}
