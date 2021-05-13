#include "RecursiveBinarySearch.h"
using namespace std;

bool RecursiveBinarySearch::helper(vector<int> vec, int target, int left, int right) {

	if (left <= right) {

		int mid = (left  + right) / 2;

		if (vec[mid] == target) return true;

		else if (target < vec[mid]) return helper(vec, target, left, mid-1);

		else helper(vec, target, mid+1, right);

	}

	return false;

}

bool RecursiveBinarySearch::search(vector<int> vec, int target) {

	return helper(vec, target, 0, vec.size());

}