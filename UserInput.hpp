/*
 * UserInput.hpp
 *
 *  Created on: 2 Nov 2016
 *      Author: Nico
 */

#ifndef USERINPUT_HPP_
#define USERINPUT_HPP_

#include <string>

class UserInput
{
public:
	virtual ~UserInput();
	static UserInput& getUserInput();
	std::string getInputFromUser(std::string inputTag);
private:
	UserInput();
};

#endif /* USERINPUT_HPP_ */
