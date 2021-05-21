#include <bits/stdc++.h>
#include <LinkedList.h>
using namespace std;

static int array[1000];
int size = 0;

int param1;
int param2;
string something = "';

void add(string number) {
	array[size] = stoi(number);
	size++;
}

void input(string userInput) {

	stringstream ss(userInput);
	string t;

	while (ss) {

		ss >> t;

		if (isDigit(t[0]) && something != "") {
	
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
	
	string temp;
	getline(temp);

	input(enter);

	LinkedList done(array, size);

	switch (something) {
	
		case "AF":
			done.addFront(param1);
			break;
		case "AE":
			done.addEnd(param1);
			break;
		case "AP":
			done.addAtPosition(param1, param2);
			break;
		case "S":
			done.search(param1);
			break;
		case "DF":
			done.deleteFront();
			break;
		case "DE":
			done.deleteEnd();
			break;
		case "DP":
			done.deletePosition(param1);
			break;
		case "GI":
			done.getItem(param1);
			break;
	}

	done.printItems();

	return 0;

}
