#include "BitFlip.h"
#include <iostream>
using namespace std;

BitFlip::BitFlip() {}

Individual BitFlip::mutate(Individual indi, int k) {

	k--;
	k %= indi.getLength();
	//cout << indi.getLength() << endl;
	indi.flipBit(k);
	return indi;

}
