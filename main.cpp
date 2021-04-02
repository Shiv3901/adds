#include <iostream>
#include <string>

using namespace std;

#include "Reverse.h"

int main() {

	Reverse guy;

	cout << guy.reverseDigit(543273) << endl;

	cout << guy.reverseString("SHivam") << endl;

	return 0;

}
