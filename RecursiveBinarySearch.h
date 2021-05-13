#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {

	public:
		bool search(std::vector<int> vec, int target);
		bool helper(std::vector<int> vec, int target, int left, int right);

};

#endif

