/**
 * Vraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef VRAAG_HPP_
#define VRAAG_HPP_

#include <string>

class Vraag
{
public:
	Vraag();
	virtual ~Vraag();
	void printVraag();
private:
	std::string vraag;
	char complexiteit;
};

#endif /* VRAAG_HPP_ */
