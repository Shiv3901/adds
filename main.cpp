#include <iostream>
#include "man.h"
#include "child.h"
#include "grandchild.h"
#include <string>

using namespace std;

int main() {

	man* father = new grandchild();

	father->printSome();

	return 0;

}
