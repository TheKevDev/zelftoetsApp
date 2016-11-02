/**
 * Vraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Vraag.hpp"

Vraag::Vraag(const std::string& aVraag,unsigned char aComplexiteit)
:vraag(aVraag), complexiteit(aComplexiteit)
{
}

Vraag::Vraag(const Vraag& v)
:vraag(v.vraag), complexiteit(v.complexiteit)
{

}

Vraag::~Vraag()
{
	// TODO Auto-generated destructor stub
}

std::string  Vraag::getVraagString() {
	return vraag;
}

const Vraag& Vraag::operator=(const Vraag& v) {
	if(this!=&v) {
		this->vraag = v.vraag;
		this->complexiteit = v.complexiteit;
	}
	return *this;
}

unsigned char Vraag::getComplexiteit() const
{
	return complexiteit;
}
