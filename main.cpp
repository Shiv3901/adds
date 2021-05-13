#include <string>
#include <sstream>
#include <iostream>
#include <vector>

#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {

	vector<int> new_vec;
	/*
	int temp;

	string input;
	getline(std::cin, input);
	istringstream s(input);
	*/

    std::string buffer;
    int data;
    std::getline(std::cin, buffer);
    std::istringstream iss(buffer);
    while (iss >> data)
          new_vec.push_back(data);

//	for (auto ele: new_vec) 
//		cout << ele << " ";

	//while (s >> temp) {
	//	new_vec.push_back(temp);
	//}
	//cout << "eg";

	QuickSort quick;
	quick.sort(new_vec);

	RecursiveBinarySearch recur;

	int idx = recur.search(new_vec, 1);

	if (idx == false) cout << "false" << " ";
	
	else cout << "true" << " ";

	for (auto ele: new_vec)
		cout << ele << " ";

	return 0;

}
