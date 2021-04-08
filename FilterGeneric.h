#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric {

	private:
		virtual bool g(int) = 0;

	public:
		FilterGeneric();
		std::vector<int> filter(std::vector<int>);

};

#endif

