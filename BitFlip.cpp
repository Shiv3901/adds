#include "BitFlip.h"

BitFlip::BitFlip() {}

Individual BitFlip::mutate(Individual indi, int k) {

	k %= indi.getLength();
	indi.flipBit(k-1);
	return indi;

}
