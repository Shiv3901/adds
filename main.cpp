#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {

	*indPtr = mPtr->mutate(*indPtr, k);

	return indPtr;

}

int main() {

	string input;

	string binarystr1;
	string binarystr2;
	int k1;
	int k2;

	std::getline(std::cin,input);

    istringstream INPUT(input);

    INPUT >> binarystr1;
    INPUT >> k1;
    INPUT >> binarystr2;
    INPUT >> k2;

	Individual* object1 = new Individual(binarystr1);
    Individual* object2 = new Individual(binarystr2);


	BitFlip* BITFLIP = new BitFlip();
	Rearrange* rearr = new Rearrange();
	
	//First Object
	object1 = execute(object1, BITFLIP, k1);

	cout << object1->getString() << " ";

	//Second Object
	object2 = execute(object2, rearr, k2);
	
	cout << object2->getString() << " ";
	
	cout << object2->getMaxOnes() << " ";

	return 0;

}
