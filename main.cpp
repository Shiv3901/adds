#include <string>
#include <iostream>

#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {

	vector<int> new_vec;

	string in;
	getline(cin, in);

	istringstream s(in);

	int var;
	while (s >> var) new_vec.push_back();

	QuickSort quick;
	quick.sort(B);

	int idx = RecursiveBinarySearch.search(B, 1);

	if (idx == false) cout << "false" << " ";
	
	else cout << "true" << " ";

	for (auto ele: new_vec)
		cout << ele << " ";

	return 0;

}
