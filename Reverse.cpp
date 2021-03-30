#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "Reverse.h"

Reverse::Reverse() {}

int Reverse::reverseDigit(int value) {

	if (value < 10) {
		return value;
	}

	int intLen = 0;
	for (int i = value ; i > 0 ; i /= 10) {
		intLen++;
	}

	return (value % 10) * pow(10, intLen-1) + Reverse::reverseDigit(value/10);

}

string Reverse::reverseString(string letters) {

	return "";

}
