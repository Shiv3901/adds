#include "QuickSort.h"
#include <iostream>
using namespace std;

QuickSort::QuickSort() {}

int QuickSort::partition(vector<int>& vec, int left, int right) {

	int pi;
	if ((right - left) > 2)
		pi = 2;
	else
		pi = left + (right-left) / 2;

	int pivotValue = vec[pi];
	int i = left;

	for (int j = left; j < right + 1 ; j++) {

		if (vec[j] <= pivotValue) {
			int temp = vec[j];
			vec[j] = vec[i];
			vec[i] = temp;
			i++;
		}

	}

	int tar = left; 

	for (int j = left ; j < right + 1 ; j++) {
		if (vec[j] == pivotValue)
			tar = j;
	}

	int temp = vec[i-1];
	vec[i-1] = vec[tar];
	vec[tar] = temp;
	
	return i-1;

}

void QuickSort::helper(vector<int>& vec, int left, int right) {

	if (left < right) {

		int pivot = partition(vec, left, right);
		helper(vec, left, pivot - 1);
		helper(vec, pivot + 1, right);
	

	}

}

vector<int> QuickSort::sort(vector<int>& list) {

	helper(list, 0, list.size()-1);	
	
	return list;
}
