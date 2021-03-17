#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include <string>
#include "Computer.h"

class RandomComputer : public Computer {

public: 
	virtual std::string getChoice();

}

#endif

