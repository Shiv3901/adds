#include "player.h"
#include <iostream>
#include <string>


player::player() {

	name = "player"; 

}

void player::setName(std::string nam) {

	name = nam;

}

std::string player::getName() {

	return name;

}
