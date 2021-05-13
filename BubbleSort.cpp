#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort() {}

vector<int> BubbleSort::sort(vector<int> vec) {

	for (int i = 0 ; i < vec.size() ; i++) {

		for (int j = 0 ; j < vec.size()-i-1 ; j++) {

			if (vec[j] > vec[j+1]) {
				int temp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = temp;
			}

		}

	}

	return vec;

}
