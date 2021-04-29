#include "Rearrange.h"
using namespace std;

Rearrange::Rearrange() {}

Individual Rearrange::mutate(Individual indi, int k) {

	string curr = indi.getString();
	int len = curr.length();
	k %= curr.length();

	k--;

	Individual newIndi(curr.substr(k, len-k) + curr.substr(0, k)); 

	return newIndi;

}
