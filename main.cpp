#include <bits/stdc++.h>
#include <string>
#include "LinkedList.h"
//using namespace std;

static int array[1000];
int size = 0;

int param1;
int param2;
std::string something = "";

void add(std::string number) {
	array[size] = stoi(number);
	size++;
}

void input(std::string userInput) {

	std::stringstream ss(userInput);
	std::string t;

	while (ss) {

		ss >> t;

		if (isdigit(t[0]) && something != "") {
	
			param1 = stoi(t);
			ss >> t;
			param2 = stoi(t);
			return;

		} else if (isdigit(t[0])) {
	
			add(t);

		} else if (something == "") {

			something = t;

		}

	}

}

int main() {
	
	std::string temp;
	getline(std::cin, temp);

	input(temp);

	LinkedList done(array, size);

	if (something == "AF")
			done.addFront(param1);
	else if (something == "AE")
			done.addEnd(param1);
	else if (something == "AP")
			done.addAtPosition(param1, param2);
	else if (something == "S")
			done.search(param1);
	else if (something == "DF")
			done.deleteFront();
	else if (something == "DE")
			done.deleteEnd();
	else if (something == "DP")
			done.deletePosition(param1);
	else if (something == "GI")
			done.getItem(param1);
			

	done.printItems();

	return 0;

}
