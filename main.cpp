#include <bits/stdc++.h>
#include <iostream>
#include "prefix.h"

using namespace std;

string remove_space(string inp) {

	inp.erase(remove(inp.begin(), inp.end(), ' '), inp.end());

	return inp;

}

int main() {
	
	prefix h_stream;

	string inp;

	getline(cin, inp);
	
	inp = remove_space(inp);
	
	if (h_stream.check(inp)) {
		cout << h_stream.convertinfix(inp) << " = " << h_stream.calculateprefix(inp);
	}
	else {
		cout << "Error";
		return 0;
	}

	return 0;

}
