#include <iostream>

using namespace std;

//function declaration for tail recursive algorithm
//setting a default variable base mimics a helper function, which is helpful for C++ users
int sumOfSquare(int n, int base=0) {

	//base case 
	if (n <= 0) {
		return base; //when n == 0, base will return 0, and 
		//then the addition of square starts, also it will 
		//make sure to return 0 for all the negative numbers as well
	}

	//tail recursive call for the function
	//nothing happens outside the call, therefore this funciton is tail-recursive
	return sumOfSquare(n-1, (n*n) + base);

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
