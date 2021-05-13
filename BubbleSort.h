#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"

class BubbleSort {

	public:
		BubbleSort();
		int partition(std::vector<int>& vec, int left, int right);	
		std::vector<int> sort(std::vector<int>& list);

};

#endif

