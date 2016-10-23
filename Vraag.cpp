/**
 * Vraag.cpp
 *
 *  Created on: 21 okt. 2016
 *      Author: Kevin Taartmans
 */

#include "Vraag.hpp"

Vraag::Vraag(const std::string& aVraag,unsigned char aComplexiteit)
:mkVraag(aVraag), complexiteit(aComplexiteit)
{
}

Vraag::Vraag(const Vraag& v)
:mkVraag(v.mkVraag), complexiteit(v.complexiteit)
{

}

Vraag::~Vraag()
{
	// TODO Auto-generated destructor stub
}

void Vraag::printVraag()
{
}

std::string&  Vraag::getVraag() {
	return mkVraag;
}

const Vraag& Vraag::operator=(const Vraag& v) {
	if(this!=&v) {
		this->mkVraag = v.mkVraag;
		this->complexiteit = v.complexiteit;
	}
	return *this;
}
