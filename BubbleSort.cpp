#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort() {}

vector<int> BubbleSort::sort(vector<int> list) {

	for (int i = 0 ; i < list.size() ; i++) {

		for (int j = 0 ; j < list.size()-i-1 ; j++) {

			if (list[j] > list[j+1]) {
				int temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}

		}

	}

	return vec;

}
