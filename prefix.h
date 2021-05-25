#ifndef PREFIX_H
#define PREFIX_H
#include <string>

class prefix {

	public:

		// functions that are given in the question to implement

		bool isoperator(char x);

		bool isoperand(char c);

		bool check(std::string input);

		std::string calculateprefix(std::string input);

		std::string convertinfix(std::string input);

};

#endif

