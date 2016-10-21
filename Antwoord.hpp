/**
 * Antwoord.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef ANTWOORD_HPP_
#define ANTWOORD_HPP_

#include <string>

class Antwoord
{
public:
	Antwoord();
	virtual ~Antwoord();
private:
	std::string antwoord;
	bool correct;
};

#endif /* ANTWOORD_HPP_ */
