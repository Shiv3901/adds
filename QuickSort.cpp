#include "BubbleSort"
using namespace std;

QuickSort::QuickSort() {}

int QuickSort::partition(vector<int>& vec, int left, int right) {

	int pivot;
	if ((right - left) > 2)
		pivot = vec[2];
	else
		pivot = vec[left + (right-left) / 2];

	int i = left;
	int j = right;
	int temp;

	while (i <= j) {
		while (vec[i] < pivot) i++;
		while (vec[j] > pivot) j--;

		if (i <= j) {
			temp = vec[j];
			vec[j] = vec[i];
			vec[i] = temp;
			j--;
			i++;
		}
	}

	return i;

}

void QuickSort::helper(vector<int>& vec, int left, int right) {

	if (left < right) {
	
		int pivot = partition(vec, left, right);
		helper(vec, left, pivot-1);
		helper(vec, pivot, right);

	}

}

vector<int> QuickSort::sort(vector<int> list) {

	helper(list, 0, list.size()-1);	

}
