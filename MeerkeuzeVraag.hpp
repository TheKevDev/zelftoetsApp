/**
 * MeerkeuzeVraag.hpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#ifndef MEERKEUZEVRAAG_HPP_
#define MEERKEUZEVRAAG_HPP_

#include <string>

#include "Vraag.hpp"

class MeerkeuzeVraag:public Vraag
{
public:
	MeerkeuzeVraag(const std::string& aVraag,unsigned char aComplexiteit);
	virtual ~MeerkeuzeVraag();
	/*virtual*/ bool beantwoordVraag(std::string antwoord);
private:
};

#endif /* MEERKEUZEVRAAG_HPP_ */
