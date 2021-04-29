#include "Individual.h"
using namespace std;
#include <iostream>


string Individual::getString() {
	return binaryString;
}

int Individual::getBit(int pos) {

	return binaryString[pos] - '0';

}
		
void Individual::flipBit(int pos) {

	//cout << binaryString << "0 "; 

	if (binaryString[pos] == '1') {
		//cout << "Shiv : " << binaryString << " : ";
		binaryString[pos] = '0';
	} else {
		binaryString[pos] = '1';
	}

	//cout << " o n " << binaryString << " u ";

}
		
int Individual::getMaxOnes() {

	int ans = 0;
	int temp = 0;

	for (int i = 0 ; i < (int) binaryString.length() ; i++) {

		if (binaryString[i] != '1') {
			ans = max(ans, temp);
			temp = 0;
		} else {
			temp++;
		}

	}

	ans = max(ans, temp);

	return ans;

}
		
int Individual::getLength() {
	
	return binaryString.length();

}
		
Individual::Individual(int size) {
	binaryString = "";

	for (int i = 0 ; i < size ; i++) 
		binaryString += "0";
}
		
Individual::Individual(string dna) {
	binaryString = dna;
}
