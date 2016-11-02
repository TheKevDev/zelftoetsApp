/*
 * UserInput.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: Nico
 */

#include "UserInput.hpp"
#include <iostream>

UserInput::UserInput()
{
	// TODO Auto-generated constructor stub

}

UserInput::~UserInput()
{
	// TODO Auto-generated destructor stub
}

UserInput& UserInput::getUserInput() {
	static UserInput theUserInput;
	return theUserInput;
}

std::string UserInput::getInputFromUser(std::string inputTag) {
	std::string userData;
	std::cout << inputTag;
	std::getline(std::cin, userData);
	return userData;
}
