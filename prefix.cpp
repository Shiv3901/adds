#include "prefix.h"
#include <string>
#include <stack>

using namespace std;

bool prefix::isoperand(char x) {

	if ( x == '+' || x == '*' || x == '/' || x == '-') 
		return true;

	return false;

}

bool prefix::isoperator(char x) {

	return isdigit(x);

}

bool prefix::check(string input) {

	vector<char> operatorList;

	vector<char> operandList;

	for (auto i : input) {

		if (isoperator(i))
			operatorList.push_back(i);

		else if (isoperand(i))
			operandList.push_back(i);

		else 
			return false;

	}

	if (operatorList.size() != operandList.size() - 1)
		return false;

	return true;

}

string prefix::calculateprefix(string input) {

	stack<int> st;

	for (int i = input.size() - 1 ; i > -1 ; i--) {

		if (isoperand(input[i]))
			stack.push_back(input[i] - '0');

		else {

			int first = st.top();
			st.pop();
			int second = st.top();
			st.pop();

			if (input[i] == '+')
				st.push(first + second);
			else if (input[i] == '-')
				st.push(first - second);
			else if (input[i] == '*')
				st.push(first * second);
			else
				st.push(first / second);

		}

	}

	return to_string(st.top());

}

string prefix::convertinfix(string input) {

	stack<string> st;

	for (int j = input.size()-1 ; j > - 1 ; j--) {

		if (isoperand(input[j])) {

			string first = st.top();
			st.pop();
			string second = st.top();
			st.pop();

			string t = "";

			if ( (input[j] == '+' || input[j] == '-') && (input[j] == '*' || input[j] == '/') )
			{
				t = "(" + first + " " + input[j] + " " + second + ")";
			}

			else  
				t = first + " " + input[j] + " " + second;

			st.push(t)

		}

		else 
			st.push(string(1, input[j]));

	}

	string ans = st.top();

	if (ans[0] == '(' && ans[ans.size() - 1] == ')') {

		string temp_2 = "";

		for (int i = 1 ; i <= (int)(ans.size() -2) ; i++) 
			temp_2.push_back(ans[i]);

		return temp_2;

	} else 
		return ans;

	return ans;
}
