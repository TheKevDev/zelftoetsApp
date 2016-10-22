/**
 * Vraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef VRAAG_HPP_
#define VRAAG_HPP_

#include <string>
#include "IVraag.hpp"

class Vraag:public IVraag
{
public:
	Vraag(const std::string& aVraag,unsigned char aComplexiteit);
	virtual ~Vraag();
	void printVraag();
private:
	std::string vraag;
	unsigned char complexiteit;
};

#endif /* VRAAG_HPP_ */
