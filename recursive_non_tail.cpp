#include <iostream>

using namespace std;

//function declaration
int sumOfSquare(int n) {

	//base case 
	if (n <= 0) {
		return 0; //reason being it will return 0 for negative inputs as well
		//and after returning 0, the recursion starts 
		//at i from 1 to n adding squares
	}

	//non-tail recursive call for the function
	return n * n + sumOfSquare(n-1);

}

int main() {

	/*
	//taking the input from the user
	int num;
	cin >> num;

	//outputputing the result by calling the recursive function
	cout << "Non-tail Recursion: " << sumOfSquare(num) << endl;
	*/
	
	//unit testing 
	cout << "Case 1:\n\n";
	cout << "Non-tail Recursion for n = 4" << endl;
	cout << "Expected: 30" << endl;
	cout << "Actual  : " << sumOfSquare(4) << endl;

	//for a normal integer
	cout << "\n\nCase 2:\n\n";
	cout << "Non-tail Recursion for n = 10" << endl;
	cout << "Expected: 385" << endl;
	cout << "Actual: " << sumOfSquare(10) << endl;
	
	//test for base case n=1, should return 1
	cout << "\n\nCase 3:\n\n";
	cout << "Non-tail Recursion for n = 1" << endl;
	cout << "Expected: 1" << endl;
	cout << "Actual  : " << sumOfSquare(1) << endl;

	//test for negative numbers, it should return 0
	cout << "\n\nCase 4:\n\n";
	cout << "Non-tail Recursion for n = -110" << endl;
	cout << "Expected: 0" << endl;
	cout << "Actual: " << sumOfSquare(-110) << endl;

	return 0;

}
