#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort {

	public:
		QuickSort();
		int partition(std::vector<int>& vec, int left, int right);
		void helper(std::vector<int>& vec, int left, int right);
		std::vector<int> sort(std::vector<int>& list);

};

#endif

