#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric {

	private:
		virtual int f(int x) = 0;

	public:
		MapGeneric();
		std::vector<int> map(std::vector<int> list);
		
};

#endif

